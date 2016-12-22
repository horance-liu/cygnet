#include <cygnet/optimizer/RMSprop.h>
#include <cygnet/base/Foreach.h>
#include <cmath>

CYGNET_NS_BEGIN

RMSprop::RMSprop() : alpha(0.0001), mu(0.99), eps(1e-8)
{}

void RMSprop::update(const Vector& dw, Vector& w)
{
    Vector& g = get<0>(w);

    for_i(w.size(), [&](auto i) {
        g[i] = mu * g[i] + (1 - mu) * dw[i] * dw[i];
        w[i] -= alpha * dw[i] / std::sqrt(g[i] + eps);
    });
}

CYGNET_NS_END
