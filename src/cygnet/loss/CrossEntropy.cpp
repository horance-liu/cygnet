#include <cygnet/loss/CrossEntropy.h>
#include <cmath>

CYGNET_NS_BEGIN

Float CrossEntropy::eval(const Vector& y, const Vector& t)
{
    Float d = 0;
    for(decltype(y.size()) i = 0; i < y.size(); ++i)
        d += -t[i] * std::log(y[i]) - (1 - t[i]) * std::log(1 - y[i]);
    return d;
}

void CrossEntropy::derivative(const Vector& y, const Vector& t, Vector& d)
{
    for(decltype(y.size()) i = 0; i < y.size(); ++i)
        d[i] = (y[i] - t[i]) / (y[i] * (1 - y[i]));
}

CYGNET_NS_END
