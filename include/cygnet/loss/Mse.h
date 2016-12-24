#ifndef HC5F585DA_E50D_4C01_94F3_563C862B4569
#define HC5F585DA_E50D_4C01_94F3_563C862B4569

#include <cygnet/loss/Loss.h>

CYGNET_NS_BEGIN

struct Mse : Loss
{
    Float eval(const Vector& y, const Vector& t) override;
    void derivative(const Vector& y, const Vector& t, Vector& d) override;
};

CYGNET_NS_END

#endif
