#include <cygnet/network/Layers.h>
#include <cygnet/network/LayerVisitor.h>

CYGNET_NS_BEGIN

std::vector<Tensor> Layers::forward(const std::vector<Tensor>& first)
{
    return std::vector<Tensor>();
}

void Layers::backward(const std::vector<Tensor>& first)
{

}

void Layers::add(Layer& layer)
{
    layers.push_back(&layer);
}

void Layers::visit(LayerVisitor& visitor)
{
    for (auto layer : layers)
    {
        visitor.accept(*layer);
    }
}

size_t Layers::levels() const
{
    return layers.size();
}

Layer& Layers::input()
{
    return *layers.front();
}

Layer& Layers::output()
{
    return *layers.back();
}

CYGNET_NS_END
