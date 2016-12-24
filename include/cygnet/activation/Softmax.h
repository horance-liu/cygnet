#ifndef H70A8AC09_468A_4466_83D2_86E3DB2F96B5
#define H70A8AC09_468A_4466_83D2_86E3DB2F96B5

#include <cygnet/activation/Activation.h>

CYGNET_NS_BEGIN

struct Softmax : Activation
{
    Float eval(const Vector& v, Index i) const override;
    Float derivative(Float) const override;
};

CYGNET_NS_END

#endif
