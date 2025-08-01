#ifndef DATA_PRODUCTS_WFD5_TIME_ALIGNED_WAVEFORMS_H
#define DATA_PRODUCTS_WFD5_TIME_ALIGNED_WAVEFORMS_H

#include <cstdint>
#include <string>
#include <TObject.h>

namespace dataProducts {

class wfd5_time_aligned_waveforms : public TObject {
public:
    wfd5_time_aligned_waveforms();
    ~wfd5_time_aligned_waveforms() override = default;

    void Print(Option_t* option = "") const override;
    std::string String() const;

    ClassDefOverride(wfd5_time_aligned_waveforms, 1);
};

} // namespace dataProducts

#endif // DATA_PRODUCTS_WFD5_TIME_ALIGNED_WAVEFORMS_H
