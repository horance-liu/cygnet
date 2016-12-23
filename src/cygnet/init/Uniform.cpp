#include <cygnet/init/Uniform.h>
#include <cygnet/random/Random.h>

CYGNET_NS_BEGIN

Uniform::Uniform(Float sigma) : sigma(sigma)
{}

void Uniform::init(Vector& weight, Size in, Size out)
{
    gaussian_rand(weight.begin(), weight.end(), 0, sigma);
}

CYGNET_NS_END
