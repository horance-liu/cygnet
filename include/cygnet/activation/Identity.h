#ifndef H8D707B1C_C3CB_48AF_9EA2_ACE85276B4EF
#define H8D707B1C_C3CB_48AF_9EA2_ACE85276B4EF

#include <cygnet/activation/Activation.h>

CYGNET_NS_BEGIN

struct Identity : Activation
{
    Float eval(const Vector& v, Index i)  const override;
    Float derivative(Float y) const override;
};

CYGNET_NS_END

#endif
