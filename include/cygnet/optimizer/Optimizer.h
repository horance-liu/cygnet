#ifndef H03B9F0DB_5E78_411D_B07A_6AE8722D46C0
#define H03B9F0DB_5E78_411D_B07A_6AE8722D46C0

#include <cygnet/base/Types.h>
#include <cygnet/base/Resetable.h>

CYGNET_NS_BEGIN

struct Optimizer : Resetable
{
    virtual void update(const Vector& dw, Vector& w) = 0;
    virtual ~Optimizer() {}
};

CYGNET_NS_END

#endif
