#include <cygnet/optimizer/Sgd.h>
#include <cygnet/base/Foreach.h>

CYGNET_NS_BEGIN

Sgd::Sgd() : alpha(0.01), lambda(0)
{}

void Sgd::update(const Vector& dw, Vector& w)
{
    for_i(w.size(), [&](auto i){
        w[i] -= alpha * (dw[i] + lambda * w[i]);
    });
}

CYGNET_NS_END
