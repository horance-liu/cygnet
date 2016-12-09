#ifndef H58885C93_46B5_44A8_BFC1_227869D1C813
#define H58885C93_46B5_44A8_BFC1_227869D1C813

#include <cygnet/base/Types.h>

CYGNET_NS_BEGIN

struct Sigmoid
{
    Float eval(Float)  const;
    Float derivative(Float) const;
};

CYGNET_NS_END

#endif
