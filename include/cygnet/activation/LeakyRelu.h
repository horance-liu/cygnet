#ifndef HF9BE21BF_6D19_44F7_A8C2_3782DE7C4C34
#define HF9BE21BF_6D19_44F7_A8C2_3782DE7C4C34

#include <cygnet/base/Vector.h>

CYGNET_NS_BEGIN

struct LeakyRelu
{
    Float eval(const Vector& v, Index i)  const;
    Float derivative(Float y) const;
};

CYGNET_NS_END

#endif
