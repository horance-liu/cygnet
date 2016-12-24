#include <cygnet/loss/Mse.h>

CYGNET_NS_BEGIN

Float Mse::eval(const Vector& y, const Vector& t) const
{
    Float sum = 0.0;
    for(decltype(y.size()) i = 0; i < y.size(); ++i)
        sum += (y[i] - t[i]) * (y[i] - t[i]);
    return sum / y.size();
}

void Mse::derivative(const Vector& y, const Vector& t, Vector& d) const
{
    auto factor = Float(2) / t.size();
    for(decltype(y.size()) i = 0; i < y.size(); ++i)
        d[i] = factor * (y[i] - t[i]);
}

CYGNET_NS_END
