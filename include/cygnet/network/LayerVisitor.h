#ifndef H227C3165_FE6E_4EFD_803B_CBD0A1185C87
#define H227C3165_FE6E_4EFD_803B_CBD0A1185C87

#include <cygnet/cygnet.h>

CYGNET_NS_BEGIN

struct Layer;

struct LayerVisitor
{
    virtual void accept(Layer&) = 0;
    virtual ~LayerVisitor() {}
};

CYGNET_NS_END

#endif
