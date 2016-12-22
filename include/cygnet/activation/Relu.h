#ifndef H408FE515_A78B_4414_89B5_13988E3A25B5
#define H408FE515_A78B_4414_89B5_13988E3A25B5

#include <cygnet/base/Vector.h>

CYGNET_NS_BEGIN

struct Relu
{
    Float eval(const Vector& v, Index i)  const;
    Float derivative(Float y) const;
};

CYGNET_NS_END

#endif
