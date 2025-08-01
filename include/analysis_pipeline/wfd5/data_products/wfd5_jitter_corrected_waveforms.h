#ifndef DATA_PRODUCTS_WFD5_JITTER_CORRECTED_WAVEFORMS_H
#define DATA_PRODUCTS_WFD5_JITTER_CORRECTED_WAVEFORMS_H

#include <cstdint>
#include <string>
#include <TObject.h>

namespace dataProducts {

class wfd5_jitter_corrected_waveforms : public TObject {
public:
    wfd5_jitter_corrected_waveforms();
    ~wfd5_jitter_corrected_waveforms() override = default;

    void Print(Option_t* option = "") const override;
    std::string String() const;

    ClassDefOverride(wfd5_jitter_corrected_waveforms, 1);
};

} // namespace dataProducts

#endif // DATA_PRODUCTS_WFD5_JITTER_CORRECTED_WAVEFORMS_H
