#ifndef HE63E516E_8E06_4B9C_860D_354D206F8F15
#define HE63E516E_8E06_4B9C_860D_354D206F8F15

#include <cygnet/network/Layers.h>

CYGNET_NS_BEGIN

struct Optimizer;
struct Loss;

struct Network
{
    Network(Optimizer&, Loss&);

    std::vector<Tensor> predict(const std::vector<Tensor>&);

    void train( const std::vector<Vector>&  inputs
              , const std::vector<Label>&   labels
              , size_t batchSize = 1
              , size_t epoch = 1);

private:
    Optimizer& optimizer;
    Loss& loss;
    Layers layers;
};


CYGNET_NS_END

#endif
