#ifndef H8DBF38FB_AB69_4B15_AC79_B6015D6BBA5E
#define H8DBF38FB_AB69_4B15_AC79_B6015D6BBA5E

#include <cygnet/base/Types.h>
#include <cygnet/random/Generator.h>

#include <type_traits>
#include <limits>

CYGNET_NS_BEGIN

template<typename T> inline
typename std::enable_if<std::is_integral<T>::value, T>::type
uniform_rand(T min, T max)
{
    std::uniform_int_distribution<T> dst(min, max);
    return dst(Generator::getInstance().get());
}

template<typename T> inline
typename std::enable_if<std::is_floating_point<T>::value, T>::type
uniform_rand(T min, T max)
{
    std::uniform_real_distribution<T> dst(min, max);
    return dst(Generator::getInstance().get());
}

template<typename T> inline
typename std::enable_if<std::is_floating_point<T>::value, T>::type
gaussian_rand(T mean, T sigma)
{
    std::normal_distribution<T> dist(mean, sigma);
    return dist(Generator::getInstance().get());
}

inline void set_random_seed(unsigned int seed)
{
    Generator::getInstance().seed(seed);
}

template<typename Size>
inline Size uniform_index(Size size)
{
    return uniform_rand((Size)0, size - 1);
}

inline bool bernoulli(Float p)
{
    return uniform_rand(Float(0), Float(1)) <= p;
}

template<typename Iter>
void uniform_rand(Iter begin, Iter end, Float min, Float max)
{
    for (Iter it = begin; it != end; ++it)
        *it = uniform_rand(min, max);
}

template<typename Iter>
void gaussian_rand(Iter begin, Iter end, Float mean, Float sigma)
{
    for (Iter it = begin; it != end; ++it)
        *it = gaussian_rand(mean, sigma);
}

CYGNET_NS_END

#endif
