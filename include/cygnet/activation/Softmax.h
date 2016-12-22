#ifndef H70A8AC09_468A_4466_83D2_86E3DB2F96B5
#define H70A8AC09_468A_4466_83D2_86E3DB2F96B5

#include <cygnet/base/Vector.h>

CYGNET_NS_BEGIN

struct Softmax
{
    Float eval(const Vector& v, Index i)  const;
    Float derivative(Float) const;
};

CYGNET_NS_END

#endif
