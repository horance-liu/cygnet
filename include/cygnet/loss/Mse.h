#ifndef HC5F585DA_E50D_4C01_94F3_563C862B4569
#define HC5F585DA_E50D_4C01_94F3_563C862B4569

#include <cygnet/base/Vector.h>

CYGNET_NS_BEGIN

struct Mse
{
    Float eval(const Vector& y, const Vector& t);
    void derivative(const Vector& y, const Vector& t, Vector& d);
};

CYGNET_NS_END

#endif
