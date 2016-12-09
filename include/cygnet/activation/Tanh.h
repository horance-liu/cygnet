#ifndef H5C9B4428_7C1E_4FB7_BFFF_4532B244D622
#define H5C9B4428_7C1E_4FB7_BFFF_4532B244D622

#include <cygnet/base/Types.h>

CYGNET_NS_BEGIN

struct Tanh
{
    Float eval(Float)  const;
    Float derivative(Float) const;
};

CYGNET_NS_END

#endif
