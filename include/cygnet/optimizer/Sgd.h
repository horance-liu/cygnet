#ifndef H4EF9F318_90AA_427A_A61B_D1B20A7665DE
#define H4EF9F318_90AA_427A_A61B_D1B20A7665DE

#include <cygnet/base/Vector.h>

CYGNET_NS_BEGIN

struct Sgd
{
    Sgd();
    void update(const Vector& dw, Vector& w);

private:
    Float alpha; // learning rate
    Float lambda; // weight decay
};

CYGNET_NS_END

#endif
