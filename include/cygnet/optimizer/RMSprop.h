#ifndef HFB5064E0_B8D6_4C95_A601_373941E7CD4F
#define HFB5064E0_B8D6_4C95_A601_373941E7CD4F

#include <cygnet/optimizer/Optimizer.h>
#include "cygnet/optimizer/Caches.h"

CYGNET_NS_BEGIN

struct RMSprop : private Caches<1>, Optimizer
{
    RMSprop();

private:
    void update(const Vector& dw, Vector& w);

private:
    float_t alpha; // learning rate
    float_t mu;    // decay term
    float_t eps;   // constant value to avoid zero-division
};

CYGNET_NS_END

#endif
