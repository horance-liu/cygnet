#include <cygnet/activation/LeakyRelu.h>

CYGNET_NS_BEGIN

Float LeakyRelu::eval(const Vector& v, Index i)  const
{
    return v[i] > 0 ? v[i] : (0.01 * v[i]);
}

Float LeakyRelu::derivative(Float y) const
{
    return y > 0 ? 1 : 0.01;
}

CYGNET_NS_END
