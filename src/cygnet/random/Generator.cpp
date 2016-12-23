#include <cygnet/random/Generator.h>

CYGNET_NS_BEGIN

namespace
{
    struct GeneratorImpl : Generator
    {
        std::mt19937& get() override
        {
            return gen;
        }

        void seed(unsigned int seed) override
        {
            gen.seed(seed);
        }

        GeneratorImpl() : gen(1)
        {}

    private:
        std::mt19937 gen;
    };
}

Generator& Generator::getInstance()
{
    static GeneratorImpl inst;
    return inst;
}

CYGNET_NS_END
