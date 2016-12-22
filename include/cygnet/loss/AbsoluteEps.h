#ifndef H85D25947_2530_4612_BD4F_79840AEC9E27
#define H85D25947_2530_4612_BD4F_79840AEC9E27

#include <cygnet/base/Vector.h>

CYGNET_NS_BEGIN

struct AbsoluteEps
{
    explicit AbsoluteEps(Float fraction);

    Float eval(const Vector& y, const Vector& t);
    void derivative(const Vector& y, const Vector& t, Vector& d);

private:
    Float eps;
};

CYGNET_NS_END

#endif
