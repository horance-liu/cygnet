#ifndef H1DD1DA5F_B75E_4BCF_947A_7CC4CF0B702E
#define H1DD1DA5F_B75E_4BCF_947A_7CC4CF0B702E

#include <cygnet/optimizer/CachedOptimizer.h>

CYGNET_NS_BEGIN

struct Adagrad : CachedOptimizer<1>
{
    Adagrad();
    void update(const Vector& dw, Vector& w);

private:
    Float alpha;  // learning rate
    Float eps;    // constant value to avoid zero-division
};

CYGNET_NS_END

#endif
