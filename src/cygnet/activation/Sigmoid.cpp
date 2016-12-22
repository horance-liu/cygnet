#include <cygnet/activation/Sigmoid.h>
#include <cmath>

CYGNET_NS_BEGIN

Float Sigmoid::eval(const Vector& v, Index i)  const
{
    return 1 / (1 + std::exp(-v[i]));
}

Float Sigmoid::derivative(Float y) const
{
    return y * (1 - y);
}

CYGNET_NS_END
