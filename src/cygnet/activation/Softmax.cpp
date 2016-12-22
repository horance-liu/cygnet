#include <cygnet/activation/Softmax.h>
#include <algorithm>
#include <cmath>

CYGNET_NS_BEGIN

namespace
{
    Float denom(const Vector& v, Float alpha)
    {
        auto sum = Float(0);
        for (auto x : v)
            sum += std::exp(x - alpha);
        return sum;
    }
}

Float Softmax::eval(const Vector& v, Index i)  const
{
    auto alpha = *std::max_element(v.begin(), v.end());
    auto numer = std::exp(v[i] - alpha);
    return numer / denom(v, alpha);
}

Float Softmax::derivative(Float y) const
{
    return y * (1 - y);
}

CYGNET_NS_END
