#ifndef H0F3803FC_3485_40EA_97EA_43B4705A0785
#define H0F3803FC_3485_40EA_97EA_43B4705A0785

#include <cygnet/base/Vector.h>
#include <unordered_map>

CYGNET_NS_BEGIN

template <Size N>
struct CachedOptimizer
{
    void reset()
    {
        for (auto& e : caches)
            e.clear();
    }

protected:
    template <Index index>
    Vector& get(const Vector& key) {
        auto& vector = caches[index][&key];
        if (vector.empty())
            vector.resize(key.size(), Float());
        return vector;
    }

private:
    std::unordered_map<const Vector*, Vector> caches[N];
};

CYGNET_NS_END

#endif
