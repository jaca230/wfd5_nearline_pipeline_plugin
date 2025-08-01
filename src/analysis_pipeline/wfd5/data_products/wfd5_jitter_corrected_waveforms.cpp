#include "analysis_pipeline/wfd5/data_products/wfd5_jitter_corrected_waveforms.h"
#include <iostream>
#include <sstream>

using namespace dataProducts;

ClassImp(wfd5_jitter_corrected_waveforms)

wfd5_jitter_corrected_waveforms::wfd5_jitter_corrected_waveforms() = default;

void wfd5_jitter_corrected_waveforms::Print(Option_t* /*option*/) const {
    std::cout << String() << std::endl;
}

std::string wfd5_jitter_corrected_waveforms::String() const {
    std::ostringstream oss;
    oss << "wfd5_jitter_corrected_waveforms {}";
    return oss.str();
}
