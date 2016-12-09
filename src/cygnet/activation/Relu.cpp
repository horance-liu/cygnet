#include <cygnet/activation/Relu.h>

CYGNET_NS_BEGIN

Float Relu::eval(Float x)  const
{
    return x > 0 ? x : 0;
}

Float Relu::derivative(Float y) const
{
    return y > 0 ? 1 : 0;
}

CYGNET_NS_END
