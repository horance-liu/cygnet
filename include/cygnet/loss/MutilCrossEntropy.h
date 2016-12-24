#ifndef H3D827A81_28D2_4BC9_A922_3EEF2FC36636
#define H3D827A81_28D2_4BC9_A922_3EEF2FC36636

#include <cygnet/loss/Loss.h>

CYGNET_NS_BEGIN

struct MutilCrossEntropy : Loss
{
    Float eval(const Vector& y, const Vector& t) override;
    void derivative(const Vector& y, const Vector& t, Vector& d) override;
};

CYGNET_NS_END

#endif
