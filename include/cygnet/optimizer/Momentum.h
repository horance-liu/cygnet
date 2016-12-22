#ifndef HEC547A41_34EF_4D57_9F39_80C3B2152C80
#define HEC547A41_34EF_4D57_9F39_80C3B2152C80

#include <cygnet/optimizer/CachedOptimizer.h>

CYGNET_NS_BEGIN

struct Momentum : CachedOptimizer<1>
{
    Momentum();
    void update(const Vector& dw, Vector& w);

private:
    Float alpha;  // learning rate
    Float lambda; // weight decay
    Float mu;     // momentum
};

CYGNET_NS_END

#endif
