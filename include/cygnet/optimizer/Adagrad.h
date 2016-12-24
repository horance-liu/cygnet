#ifndef H1DD1DA5F_B75E_4BCF_947A_7CC4CF0B702E
#define H1DD1DA5F_B75E_4BCF_947A_7CC4CF0B702E

#include <cygnet/optimizer/Optimizer.h>
#include "cygnet/optimizer/Caches.h"

CYGNET_NS_BEGIN

struct Adagrad : private Caches<1>, Optimizer
{
    Adagrad();

private:
    void update(const Vector& dw, Vector& w) override;

private:
    Float alpha;  // learning rate
    Float eps;    // constant value to avoid zero-division
};

CYGNET_NS_END

#endif
