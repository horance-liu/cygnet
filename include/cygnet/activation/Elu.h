#ifndef HE189B48F_B32C_4A82_871C_21CF236EC4BF
#define HE189B48F_B32C_4A82_871C_21CF236EC4BF

#include <cygnet/base/Vector.h>

CYGNET_NS_BEGIN

struct Elu
{
    Float eval(const Vector& v, Index i)  const;
    Float derivative(Float y) const;
};


CYGNET_NS_END

#endif
