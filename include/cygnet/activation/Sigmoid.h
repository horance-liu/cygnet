#ifndef H58885C93_46B5_44A8_BFC1_227869D1C813
#define H58885C93_46B5_44A8_BFC1_227869D1C813

#include <cygnet/activation/Activation.h>

CYGNET_NS_BEGIN

struct Sigmoid : Activation
{
    Float eval(const Vector& v, Index i) const override;
    Float derivative(Float y) const override;
};

CYGNET_NS_END

#endif
