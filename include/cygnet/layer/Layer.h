#ifndef HA9CD5BA9_14AD_4819_A33C_CE33B95A8455
#define HA9CD5BA9_14AD_4819_A33C_CE33B95A8455

#include <cygnet/cygnet.h>
#include <cygnet/layer/LayerProperty.h>

CYGNET_NS_BEGIN

struct Optimizer;

struct Layer : LayerProperty
{
    virtual void setup(bool reset) = 0;
    virtual void clear() = 0;
    virtual void update(Optimizer& opt, int batchSize) = 0;

    virtual ~Layer() {}
};

CYGNET_NS_END

#endif
