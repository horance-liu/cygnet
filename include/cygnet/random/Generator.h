#ifndef H7417F4AB_EC96_4FE3_94FD_BDF722C093A8
#define H7417F4AB_EC96_4FE3_94FD_BDF722C093A8

#include <cygnet/cygnet.h>
#include <random>

CYGNET_NS_BEGIN

struct Generator
{
    static Generator& getInstance();

    virtual std::mt19937& get() = 0;
    virtual void seed(unsigned int seed) = 0;
    virtual ~Generator() {}
};

CYGNET_NS_END

#endif
