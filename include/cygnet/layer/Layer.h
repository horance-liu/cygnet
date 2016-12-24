#ifndef HA9CD5BA9_14AD_4819_A33C_CE33B95A8455
#define HA9CD5BA9_14AD_4819_A33C_CE33B95A8455

#include <cygnet/cygnet.h>

CYGNET_NS_BEGIN

struct Optimizer;

struct Layer
{
    virtual void setup(bool reset) = 0;
    virtual void clear() = 0;
    virtual void update(Optimizer& opt, int batchSize) = 0;

//    size_t in_data_size() const {
//        return sumif(in_shape(), [&](auto i) {
//            return in_type_[i] == vector_type::data; }, [](const shape3d& s) {
//                return s.size(); });
//    }
//
//    size_t out_data_size() const {
//        return sumif(out_shape(), [&](serial_size_t i) { // NOLINT
//            return out_type_[i] == vector_type::data; }, [](const shape3d& s) {
//                return s.size(); });
//    }

    virtual ~Layer() {}
};

CYGNET_NS_END

#endif
