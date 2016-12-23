#ifndef HD8AFFFF3_330F_4B00_8EE7_3F897B95F6F1
#define HD8AFFFF3_330F_4B00_8EE7_3F897B95F6F1

#include <cygnet/init/Initializer.h>

CYGNET_NS_BEGIN

struct Constant : Initializer
{
    Constant(Float constant = 0);

private:
    void init(Vector& weight, Size in, Size out) override;

private:
    Float constant;
};

CYGNET_NS_END

#endif
