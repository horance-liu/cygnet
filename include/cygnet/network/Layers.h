#ifndef H0AC68635_D1D2_4689_A21C_2500E70CF202
#define H0AC68635_D1D2_4689_A21C_2500E70CF202

#include <cygnet/base/Types.h>
#include <vector>

CYGNET_NS_BEGIN

struct Layer;
struct Optimizer;
struct LayerVisitor;

struct Layers
{
    void add(Layer& layer);

    std::vector<Tensor> forward(const std::vector<Tensor>& first);
    void backward(const std::vector<Tensor>& first);
    void update(Optimizer& opt, size_t batchSize);

    size_t levels() const;
    Layer& input();
    Layer& output();

private:
    void visit(LayerVisitor& visitor);

private:
    std::vector<Layer*> layers;
};

CYGNET_NS_END

#endif
