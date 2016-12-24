#ifndef H68574BD5_9FBB_43A5_8705_39E0D66F96D7
#define H68574BD5_9FBB_43A5_8705_39E0D66F96D7

#include <cygnet/cygnet.h>

CYGNET_NS_BEGIN

struct Resetable
{
    virtual void reset() = 0;
    virtual ~Resetable() {}
};

CYGNET_NS_END

#endif
