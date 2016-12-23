#ifndef H664C0467_0078_4D9A_8FD9_CC3249A576F7
#define H664C0467_0078_4D9A_8FD9_CC3249A576F7

#include <cygnet/base/Vector.h>

CYGNET_NS_BEGIN

struct Initializer
{
    virtual void init(Vector& weight, Size in, Size out) = 0;
    virtual ~Initializer() {}
};

CYGNET_NS_END

#endif
