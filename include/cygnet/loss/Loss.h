#ifndef HC6F9303B_780C_4C54_987E_404851E0711F
#define HC6F9303B_780C_4C54_987E_404851E0711F

#include <cygnet/base/Types.h>

CYGNET_NS_BEGIN

struct Loss
{
    virtual Float eval(const Vector& y, const Vector& t) = 0;
    virtual void derivative(const Vector& y, const Vector& t, Vector& d)  = 0;
    virtual ~Loss() {}
};

CYGNET_NS_END

#endif
