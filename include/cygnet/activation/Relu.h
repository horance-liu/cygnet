#ifndef H408FE515_A78B_4414_89B5_13988E3A25B5
#define H408FE515_A78B_4414_89B5_13988E3A25B5

#include <cygnet/activation/Activation.h>

CYGNET_NS_BEGIN

struct Relu : Activation
{
    Float eval(const Vector& v, Index i) const override;
    Float derivative(Float y) const override;
};

CYGNET_NS_END

#endif
