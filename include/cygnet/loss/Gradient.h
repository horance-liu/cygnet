#ifndef H3F8DAF5B_8217_4DC7_A0FE_3EBF314D2FA9
#define H3F8DAF5B_8217_4DC7_A0FE_3EBF314D2FA9

#include <cygnet/base/Vector.h>
#include <cygnet/base/Tensor.h>

CYGNET_NS_BEGIN

template <typename E>
void gradient(const Vector& y, const Vector& t, Vector& grad)
{
    E::derivative(y, t, grad);
}

template <typename E>
void gradient(const Tensor& y, const Tensor& t, Tensor& grads)
{
    for (decltype(y.size()) i = 0; i < y.size(); i++)
    {
        Vector grad;
        gradient<E>(y[i], t[i], grad);
        grads.emplace_back(grad);
    }
}

CYGNET_NS_END

#endif
