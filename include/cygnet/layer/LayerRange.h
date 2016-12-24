#ifndef H7C9DE352_0669_4AF4_B415_62EEF5F26F88
#define H7C9DE352_0669_4AF4_B415_62EEF5F26F88

#include <cygnet/base/Types.h>

CYGNET_NS_BEGIN

struct LayerRange
{
    virtual Float minOutValue() const;
    virtual Float maxOutValue() const;

    virtual ~LayerRange() {}
};

CYGNET_NS_END

#endif
