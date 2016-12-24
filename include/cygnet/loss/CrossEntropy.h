#ifndef H29517AB1_59B2_4B8B_A027_870C2A3CD9C3
#define H29517AB1_59B2_4B8B_A027_870C2A3CD9C3

#include <cygnet/loss/Loss.h>

CYGNET_NS_BEGIN

struct CrossEntropy : Loss
{
    Float eval(const Vector& y, const Vector& t) const override;
    void derivative(const Vector& y, const Vector& t, Vector& d) const override;
};

CYGNET_NS_END

#endif
