#ifndef H997E21E6_4BAA_4D90_8FE6_F377B201F08F
#define H997E21E6_4BAA_4D90_8FE6_F377B201F08F

#include <cygnet/loss/Loss.h>

CYGNET_NS_BEGIN

struct Absolute : Loss
{
    Float eval(const Vector& y, const Vector& t) const override;
    void derivative(const Vector& y, const Vector& t, Vector& d) const override;
};

CYGNET_NS_END

#endif
