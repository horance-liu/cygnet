#ifndef H4EF9F318_90AA_427A_A61B_D1B20A7665DE
#define H4EF9F318_90AA_427A_A61B_D1B20A7665DE

#include <cygnet/optimizer/Optimizer.h>

CYGNET_NS_BEGIN

struct Sgd : Optimizer
{
    Sgd();

private:
    void update(const Vector& dw, Vector& w) override;

private:
    Float alpha; // learning rate
    Float lambda; // weight decay
};

CYGNET_NS_END

#endif
