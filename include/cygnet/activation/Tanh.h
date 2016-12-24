#ifndef H5C9B4428_7C1E_4FB7_BFFF_4532B244D622
#define H5C9B4428_7C1E_4FB7_BFFF_4532B244D622

#include <cygnet/activation/Activation.h>

CYGNET_NS_BEGIN

struct Tanh : Activation
{
    Float eval(const Vector& v, Index i) const override;
    Float derivative(Float) const override;
};

CYGNET_NS_END

#endif
