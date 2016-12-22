#include <cygnet/optimizer/Momentum.h>
#include <cygnet/base/Foreach.h>

CYGNET_NS_BEGIN

Momentum::Momentum() : alpha(0.01), lambda(0), mu(0.9)
{}

void Momentum::update(const Vector& dw, Vector& w)
{
    auto& prev = get<0>(w);

    for_i(w.size(), [&](auto i) {
        auto v = mu * prev[i] - alpha * (dw[i] + w[i] * lambda);
        w[i] += v;
        prev[i] = v;
    });
}

CYGNET_NS_END
