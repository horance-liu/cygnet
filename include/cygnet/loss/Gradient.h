#ifndef H3F8DAF5B_8217_4DC7_A0FE_3EBF314D2FA9
#define H3F8DAF5B_8217_4DC7_A0FE_3EBF314D2FA9

#include <cygnet/base/Types.h>

CYGNET_NS_BEGIN

struct Loss;

struct Gradient
{
    Gradient(Loss&);

    void calc( const Vector& y
             , const Vector& t
             , Vector& grad);

    void calc( const Tensor& y
             , const Tensor& t
             , Tensor& grads);

    void calc( const std::vector<Tensor>& y
             , const std::vector<Tensor>& t
             , std::vector<Tensor>& grads);

private:
    Loss& loss;
};

CYGNET_NS_END

#endif
