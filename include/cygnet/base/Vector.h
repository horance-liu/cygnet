#ifndef HA45D5DD0_1137_4F48_B1C0_AB5103220482
#define HA45D5DD0_1137_4F48_B1C0_AB5103220482

#include <vector>
#include <cygnet/base/AlignedAllocator.h>
#include <cygnet/base/Types.h>

CYGNET_NS_BEGIN

struct Vector : std::vector<Float, AlignedAllocator<Float, 64>>
{};

CYGNET_NS_END

#endif
