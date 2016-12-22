#ifndef H29517AB1_59B2_4B8B_A027_870C2A3CD9C3
#define H29517AB1_59B2_4B8B_A027_870C2A3CD9C3

#include <cygnet/base/Vector.h>

CYGNET_NS_BEGIN

struct CrossEntropy
{
    Float eval(const Vector& y, const Vector& t);
    void derivative(const Vector& y, const Vector& t, Vector& d);
};

CYGNET_NS_END

#endif
