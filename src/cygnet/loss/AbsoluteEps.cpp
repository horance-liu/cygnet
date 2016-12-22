#include <cygnet/loss/AbsoluteEps.h>
#include <cmath>

CYGNET_NS_BEGIN

AbsoluteEps::AbsoluteEps(Float fraction) : eps(1 / fraction)
{}

Float AbsoluteEps::eval(const Vector& y, const Vector& t)
{
    Float d = Float(0);
    for(decltype(y.size()) i = 0; i < y.size(); ++i) {
        Float diff = std::abs(y[i] - t[i]);
        if(diff > eps)
            d += diff;
    }
    return d / y.size();
}

void AbsoluteEps::derivative(const Vector& y, const Vector& t, Vector& d)
{
    const Float factor = Float(1) / static_cast<Float>(t.size());

    for(decltype(y.size()) i = 0; i < y.size(); ++i) {
        auto sign = y[i] - t[i];
        if(sign < -eps)
            d[i] = (-1) * factor;
        else if(sign > eps)
            d[i] = factor;
        else
            d[i] = 0;
    }
}

CYGNET_NS_END
