#include <cygnet/activation/Tanh.h>
#include <cmath>

CYGNET_NS_BEGIN

Float Tanh::eval(const Vector& v, Index i)  const
{
    return std::tanh(v[i]);
}

Float Tanh::derivative(Float y) const
{
    return 1 - y * y;
}

CYGNET_NS_END
