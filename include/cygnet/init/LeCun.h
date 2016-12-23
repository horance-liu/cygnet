#ifndef H0E122358_4BC3_4403_B886_412B666ECA83
#define H0E122358_4BC3_4403_B886_412B666ECA83

#include <cygnet/init/Initializer.h>

CYGNET_NS_BEGIN

struct LeCun : Initializer
{
    LeCun(Float scale = 1);

private:
    void init(Vector& weight, Size in, Size) override;

private:
    Float scale;
};

CYGNET_NS_END

#endif
