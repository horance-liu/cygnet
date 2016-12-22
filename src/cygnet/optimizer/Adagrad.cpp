#include <cygnet/optimizer/Adagrad.h>
#include <cygnet/base/Foreach.h>
#include <cmath>

CYGNET_NS_BEGIN

Adagrad::Adagrad() : alpha(0.01), eps(1e-8)
{}

void Adagrad::update(const Vector& dw, Vector& w)
{
    Vector& g = get<0>(w);

    for_i(w.size(), [&](auto i) {
        g[i] += dw[i] * dw[i];
        w[i] -= alpha * dw[i] / (std::sqrt(g[i]) + eps);
    });
}

CYGNET_NS_END
