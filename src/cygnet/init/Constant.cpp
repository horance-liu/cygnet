#include <cygnet/init/Constant.h>
#include <algorithm>

CYGNET_NS_BEGIN

Constant::Constant(Float constant) : constant(constant)
{}

void Constant::init(Vector& weight, Size in, Size out)
{
    std::fill(weight.begin(), weight.end(), constant);
}

CYGNET_NS_END
