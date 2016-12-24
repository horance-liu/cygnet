#include <cygnet/loss/Gradient.h>
#include <cygnet/loss/Loss.h>
#include <cygnet/base/Foreach.h>

CYGNET_NS_BEGIN

Gradient::Gradient(Loss& loss) : loss(loss)
{}

void Gradient::calc(const Vector& y, const Vector& t, Vector& grad)
{
    loss.derivative(y, t, grad);
}

void Gradient::calc(const Tensor& y, const Tensor& t, Tensor& grads)
{
    for_i (y.size(), [&](auto i) {
        Vector grad;
        calc(y[i], t[i], grad);
        grads.emplace_back(grad);
    });
}

void Gradient::calc
    ( const std::vector<Tensor>& y
    , const std::vector<Tensor>& t
    , std::vector<Tensor>& grads)
{
    for_i (y.size(), [&](auto sample) {
        calc(y[sample], t[sample], grads[sample]);
    });
}

CYGNET_NS_END
