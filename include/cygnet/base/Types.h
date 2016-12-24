#ifndef H02B614FA_7344_485C_9A72_4D4EECD01824
#define H02B614FA_7344_485C_9A72_4D4EECD01824

#include <cygnet/cygnet.h>
#include <vector>

CYGNET_NS_BEGIN

#ifdef USE_CYGNET_DOUBLE
using Float = double;
using float_t = double;
#else
using Float = float;
using float_t = float;
#endif

using Index  = std::vector<Float>::size_type;
using Size   = std::vector<Float>::size_type;

using Vector = std::vector<Float>;
using Tensor = std::vector<Vector>;

using Label = std::uint32_t;
using Labels = std::vector<Label>;

CYGNET_NS_END

#endif
