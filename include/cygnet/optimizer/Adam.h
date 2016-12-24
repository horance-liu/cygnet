#ifndef H1E6CF876_A310_4233_9202_AEC86BA5BDC5
#define H1E6CF876_A310_4233_9202_AEC86BA5BDC5

#include <cygnet/optimizer/Optimizer.h>
#include "cygnet/optimizer/Caches.h"

CYGNET_NS_BEGIN

struct Adam : private Caches<2>, Optimizer
{
    Adam();

private:
    void update(const Vector& dw, Vector& w) override;

private:
    float_t alpha; // learning rate
    float_t b1;    // decay term
    float_t b2;    // decay term
    float_t b1_t;  // decay term power t
    float_t b2_t;  // decay term power t
    float_t eps;   // constant value to avoid zero-division
};

CYGNET_NS_END

#endif
