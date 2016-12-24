#ifndef H4A436E5F_ED13_42F3_BB22_BCB057F75777
#define H4A436E5F_ED13_42F3_BB22_BCB057F75777

#include <cygnet/cygnet.h>
#include <cstddef>

CYGNET_NS_BEGIN

struct LayerDimensions
{
    virtual size_t getInSize() const = 0;
    virtual size_t getOutSize() const = 0;

    virtual ~LayerDimensions() {}
};

CYGNET_NS_END

#endif
