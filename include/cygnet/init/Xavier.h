#ifndef H0FCC08D2_97EB_438F_B017_83CD06CDADA2
#define H0FCC08D2_97EB_438F_B017_83CD06CDADA2

#include <cygnet/init/Initializer.h>

CYGNET_NS_BEGIN

struct Xavier : Initializer
{
    Xavier(Float scale = 6);

private:
    void init(Vector& weight, Size in, Size out) override;

private:
    Float scale;
};

CYGNET_NS_END

#endif
