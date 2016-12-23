#include <cygnet/init/He.h>
#include <cygnet/random/Random.h>
#include <cmath>

CYGNET_NS_BEGIN

He::He(Float scale) : scale(scale)
{}

void He::init(Vector& weight, Size in, Size)
{
    auto sigma = std::sqrt(scale /in);
    gaussian_rand(weight.begin(), weight.end(), 0, sigma);
}

CYGNET_NS_END
