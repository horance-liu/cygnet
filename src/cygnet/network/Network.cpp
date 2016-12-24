#include <cygnet/network/Network.h>
#include <cygnet/layer/Layer.h>
#include <cygnet/loss/Gradient.h>
#include <cygnet/base/Foreach.h>

CYGNET_NS_BEGIN

Network::Network(Optimizer& optimizer, Loss& loss)
  : optimizer(optimizer), loss(loss)
{}

struct Network::Backend
{
    Backend( Network& net
           , const std::vector<Tensor>& inputs
           , const std::vector<Tensor>& labels
           , size_t batchSize, size_t epoch)
           : net(net), inputs(inputs), labels(labels)
           , batchSize(batchSize), epoch(epoch)

    {}

    void fit()
    {
        for_i(epoch, [this](auto) {
            epochOnce();
        });
    }

private:
    void epochOnce()
    {
        for (size_t i = 0; i < inputs.size(); i += batchSize)
        {
            auto realBatchSize = std::min(batchSize, inputs.size() - i);
            trainOneBatch(&inputs[i], &labels[i], realBatchSize);
        }
    }

    void trainOneBatch(const Tensor* in, const Tensor* labels, size_t batchSize)
    {
        std::vector<Tensor> inBatch(&in[0], &in[0] + batchSize);
        std::vector<Tensor> labelsBatch(&labels[0], &labels[0] + batchSize);

        bprop(fprop(inBatch), labelsBatch);
        net.layers.update(net.optimizer, batchSize);
    }

    void bprop( const std::vector<Tensor>& y
              , const std::vector<Tensor>& t)
    {
        std::vector<Tensor> delta(y.size());
        Gradient(net.loss).calc(y, t, delta);
        net.layers.backward(delta);
    }

    std::vector<Tensor> fprop(const std::vector<Tensor>& in)
    {
        return net.layers.forward(in);
    }

private:
    Network& net;

    const std::vector<Tensor>& inputs;
    const std::vector<Tensor>& labels;

    size_t batchSize;
    size_t epoch;
};

namespace
{
    void normalize( const std::vector<Tensor>& inputs
                  , std::vector<Tensor>& normalized)
    {
        normalized = inputs;
    }

    void normalize( const std::vector<Vector>& inputs
                  , std::vector<Tensor>& normalized
                  , const LayerProperty&)
    {
        normalized.reserve(inputs.size());
        for (size_t i = 0; i < inputs.size(); i++)
            normalized.emplace_back( Tensor { inputs[i] } );
    }

    void labelToVector(const std::vector<Label>& labels
                      , std::vector<Vector>& vec
                      , const LayerProperty& outLayer)
    {
        size_t outdim = outLayer.getOutSize();
        vec.reserve(labels.size());

        for (size_t i = 0; i < labels.size(); i++)
        {
            vec.emplace_back(outdim, outLayer.minOutValue());
            vec.back()[labels[i]] = outLayer.maxOutValue();
        }
    }

    void normalize( const std::vector<Label>& labels
                  , std::vector<Tensor>& normalized
                  , const LayerProperty& outLayer)
    {
        std::vector<Vector> vec;
        labelToVector(labels, vec, outLayer);

        normalized.reserve(labels.size());
        normalize(vec, normalized, outLayer);
    }
}

#define BACKEND(action) \
    Backend(*this, inputsTensor, labelsTensor, batchSize, epoch).action()

#define NORMALIZE(prefix)             \
  std::vector<Tensor> prefix##Tensor; \
  normalize(prefix, prefix##Tensor, layers.output())

void Network::train
    ( const std::vector<Vector>&  inputs
    , const std::vector<Label>&   labels
    , size_t batchSize, size_t epoch)
{
    NORMALIZE(inputs);
    NORMALIZE(labels);
    BACKEND(fit);
}

CYGNET_NS_END
