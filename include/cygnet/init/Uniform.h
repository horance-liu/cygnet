#ifndef H818C2DE9_49F2_474C_82CA_19823CA247DC
#define H818C2DE9_49F2_474C_82CA_19823CA247DC

#include <cygnet/init/Initializer.h>

CYGNET_NS_BEGIN

struct Uniform : Initializer
{
    Uniform(Float sigma = 1);

private:
    void init(Vector& weight, Size in, Size out) override;

private:
    Float sigma;
};

CYGNET_NS_END

#endif
