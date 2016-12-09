#include <cygnet/activation/Identity.h>

CYGNET_NS_BEGIN

Float Identity::eval(Float x)  const
{
    return x;
}

Float Identity::derivative(Float /*y*/) const
{
    return 1;
}

CYGNET_NS_END
