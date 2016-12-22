#include <cygnet/optimizer/Adam.h>
#include <cygnet/base/Foreach.h>
#include <cmath>

CYGNET_NS_BEGIN

Adam::Adam()
  : alpha(0.001)
  , b1(0.9), b2(0.999)
  , b1_t(0.9), b2_t(0.999)
  , eps(1e-8)
{}

void Adam::update(const Vector& dw, Vector& w)
{
    Vector& mt = get<0>(w);
    Vector& vt = get<1>(w);

    b1_t *= b1;
    b2_t *= b2;

    for_i(w.size(), [&](auto i) {
        mt[i] = b1 * mt[i] + (1 - b1) * dw[i];
        vt[i] = b2 * vt[i] + (1 - b2) * dw[i] * dw[i];

        w[i] -= alpha * (mt[i] / (1 - b1_t) ) / std::sqrt( (vt[i] / (1 - b2_t)) + eps);
    });
}

CYGNET_NS_END
