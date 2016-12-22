#include <cygnet/activation/LeakyRelu.h>
#include <cmath>

CYGNET_NS_BEGIN

Float LeakyRelu::eval(const Vector& v, Index i)  const
{
    return v[i] > 0 ? v[i] : (std::exp(v[i]) - 1);
}

Float LeakyRelu::derivative(Float y) const
{
    return y > 0 ? 1 : (1 + y);
}

CYGNET_NS_END
