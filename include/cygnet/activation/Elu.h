#ifndef HE189B48F_B32C_4A82_871C_21CF236EC4BF
#define HE189B48F_B32C_4A82_871C_21CF236EC4BF

#include <cygnet/activation/Activation.h>

CYGNET_NS_BEGIN

struct Elu : Activation
{
    Float eval(const Vector& v, Index i)  const override;
    Float derivative(Float y) const override;
};


CYGNET_NS_END

#endif
