#include <cygnet/activation/Sigmoid.h>
#include <cmath>

CYGNET_NS_BEGIN

Float Sigmoid::eval(Float x)  const
{
    return 1 / (1 + std::exp(-x));
}

Float Sigmoid::derivative(Float y) const
{
    return y * (1 - y);
}

CYGNET_NS_END
