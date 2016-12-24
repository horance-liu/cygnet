#ifndef H85D25947_2530_4612_BD4F_79840AEC9E27
#define H85D25947_2530_4612_BD4F_79840AEC9E27

#include <cygnet/loss/Loss.h>

CYGNET_NS_BEGIN

struct AbsoluteEps : Loss
{
    explicit AbsoluteEps(Float fraction);

private:
    Float eval(const Vector& y, const Vector& t) const override;
    void derivative(const Vector& y, const Vector& t, Vector& d) const override;

private:
    Float eps;
};

CYGNET_NS_END

#endif
