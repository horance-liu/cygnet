#ifndef HF9BE21BF_6D19_44F7_A8C2_3782DE7C4C34
#define HF9BE21BF_6D19_44F7_A8C2_3782DE7C4C34

#include <cygnet/activation/Activation.h>

CYGNET_NS_BEGIN

struct LeakyRelu : Activation
{
    Float eval(const Vector& v, Index i)  const override;
    Float derivative(Float y) const override;
};

CYGNET_NS_END

#endif
