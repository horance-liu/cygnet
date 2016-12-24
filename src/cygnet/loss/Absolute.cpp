#include <cygnet/loss/Absolute.h>
#include <cmath>

CYGNET_NS_BEGIN

Float Absolute::eval(const Vector& y, const Vector& t) const
{
    Float sum = 0;
    for(decltype(y.size()) i=0; i<y.size(); i++)
        sum += std::abs(y[i] - t[i]);
    return sum / y.size();
}

void Absolute::derivative(const Vector& y, const Vector& t, Vector& d) const
{
    Float factor = Float(1) / t.size();

    for(decltype(y.size()) i = 0; i < y.size(); ++i) {
        Float sign = y[i] - t[i];
        if(sign < 0.f)
            d[i] = (-1) * factor;
        else if(sign > 0.f)
            d[i] = factor;
        else
            d[i] = 0;
    }
}

CYGNET_NS_END
