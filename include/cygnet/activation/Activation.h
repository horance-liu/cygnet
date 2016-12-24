#ifndef H02076C56_0EEC_43B7_96B0_C0D22750F22A
#define H02076C56_0EEC_43B7_96B0_C0D22750F22A

#include <cygnet/base/Types.h>

CYGNET_NS_BEGIN

struct Activation
{
    virtual Float eval(const Vector& v, Index i)  const = 0;
    virtual Float derivative(Float y) const = 0;
    virtual ~Activation() {}
};

CYGNET_NS_END

#endif
