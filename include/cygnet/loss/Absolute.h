#ifndef H997E21E6_4BAA_4D90_8FE6_F377B201F08F
#define H997E21E6_4BAA_4D90_8FE6_F377B201F08F

#include <cygnet/base/Vector.h>

CYGNET_NS_BEGIN

struct Absolute
{
    Float eval(const Vector& y, const Vector& t);
    void derivative(const Vector& y, const Vector& t, Vector& d);
};

CYGNET_NS_END

#endif
