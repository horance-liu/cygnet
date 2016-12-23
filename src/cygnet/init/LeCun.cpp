#include <cygnet/init/LeCun.h>
#include <cygnet/random/Random.h>
#include <cmath>

CYGNET_NS_BEGIN

LeCun::LeCun(Float scale) : scale(scale)
{}

void LeCun::init(Vector& weight, Size in, Size)
{
    auto base = scale / std::sqrt(in);
    uniform_rand(weight.begin(), weight.end(), -base, base);
}

CYGNET_NS_END
