#include <cygnet/init/Xavier.h>
#include <cygnet/random/Random.h>
#include <cmath>

CYGNET_NS_BEGIN

Xavier::Xavier(Float scale) : scale(scale)
{}

void Xavier::init(Vector& weight, Size in, Size out)
{
    auto base = std::sqrt(scale / (in + out));
    uniform_rand(weight.begin(), weight.end(), -base, base);
}

CYGNET_NS_END
