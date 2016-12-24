#include <cygnet/loss/MutilCrossEntropy.h>
#include <cmath>

CYGNET_NS_BEGIN

Float MutilCrossEntropy::eval(const Vector& y, const Vector& t) const
{
    Float d = 0;
    for(decltype(y.size()) i = 0; i < y.size(); ++i)
        d += -t[i] * std::log(y[i]);
    return d;
}

void MutilCrossEntropy::derivative(const Vector& y, const Vector& t, Vector& d) const
{
    for(decltype(y.size()) i = 0; i < y.size(); ++i)
        d[i] = -(t[i] / y[i]);
}

CYGNET_NS_END
