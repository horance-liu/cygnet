#include <cygnet/activation/Tanh.h>
#include <cmath>

CYGNET_NS_BEGIN

Float Tanh::eval(Float x)  const
{
    return std::tanh(x);
}

Float Tanh::derivative(Float y) const
{
    return 1 - y*y;
}

CYGNET_NS_END
