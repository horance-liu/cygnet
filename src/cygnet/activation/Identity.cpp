#include <cygnet/activation/Identity.h>

CYGNET_NS_BEGIN

Float Identity::eval(const Vector& v, Index i)  const
{
    return v[i];
}

Float Identity::derivative(Float /*y*/) const
{
    return 1;
}

CYGNET_NS_END
