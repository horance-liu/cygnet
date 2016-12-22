#include <cygnet/activation/Relu.h>

CYGNET_NS_BEGIN

Float Relu::eval(const Vector& v, Index i)  const
{
    return v[i] > 0 ? v[i] : 0;
}

Float Relu::derivative(Float y) const
{
    return y > 0 ? 1 : 0;
}

CYGNET_NS_END
