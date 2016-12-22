#ifndef H3D827A81_28D2_4BC9_A922_3EEF2FC36636
#define H3D827A81_28D2_4BC9_A922_3EEF2FC36636

#include <cygnet/base/Vector.h>

CYGNET_NS_BEGIN

struct MutilCrossEntropy
{
    Float eval(const Vector& y, const Vector& t);
    void derivative(const Vector& y, const Vector& t, Vector& d);
};

CYGNET_NS_END

#endif
