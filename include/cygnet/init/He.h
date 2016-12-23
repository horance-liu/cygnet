#ifndef H3237DCA4_D4DB_4540_9D26_D0134BF11619
#define H3237DCA4_D4DB_4540_9D26_D0134BF11619

#include <cygnet/init/Initializer.h>

CYGNET_NS_BEGIN

struct He : Initializer
{
    He(Float scale = 2);

private:
    void init(Vector& weight, Size in, Size out) override;

private:
    Float scale;
};

CYGNET_NS_END

#endif
