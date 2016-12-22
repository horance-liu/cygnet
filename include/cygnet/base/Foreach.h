#ifndef HCD23F8B6_16DB_4591_99D2_99F8C0875494
#define HCD23F8B6_16DB_4591_99D2_99F8C0875494

#include <cygnet/base/Vector.h>

CYGNET_NS_BEGIN

template <typename F>
void for_i(Size size, F f)
{
    for (Size i=0; i<size; i++)
    {
        f(i);
    }
}

CYGNET_NS_END

#endif
