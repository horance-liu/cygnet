#ifndef HEC547A41_34EF_4D57_9F39_80C3B2152C80
#define HEC547A41_34EF_4D57_9F39_80C3B2152C80

#include <cygnet/optimizer/Optimizer.h>
#include "cygnet/optimizer/Caches.h"

CYGNET_NS_BEGIN

struct Momentum : private Caches<1>, Optimizer
{
    Momentum();

private:
    void update(const Vector& dw, Vector& w) override;

private:
    Float alpha;  // learning rate
    Float lambda; // weight decay
    Float mu;     // momentum
};

CYGNET_NS_END

#endif
