#include <cygnet/network/Network.h>

CYGNET_NS_BEGIN

Network::Network(Optimizer& optimizer, Loss& loss)
  : optimizer(optimizer), loss(loss)
{}

void Network::train( const std::vector<Vector>&  inputs
          , const std::vector<Label>&   labels
          , size_t batchSize
          , size_t epoch)
{
//    std::vector<tensor_t> input_tensor, output_tensor, t_cost_tensor;
//    normalize_tensor(inputs, input_tensor);
//    normalize_tensor(class_labels, output_tensor);
//    if (!t_cost.empty()) normalize_tensor(t_cost, t_cost_tensor);
//
//    return fit<Error>(optimizer, input_tensor, output_tensor, batch_size,
//                      epoch, on_batch_enumerate, on_epoch_enumerate,
//                      reset_weights, n_threads, t_cost_tensor);
}

CYGNET_NS_END
