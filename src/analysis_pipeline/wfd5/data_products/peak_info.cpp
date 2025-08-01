#include "analysis_pipeline/wfd5/data_products/peak_info.h"
#include <iostream>
#include <sstream>

using namespace dataProducts;

ClassImp(peak_info)

peak_info::peak_info() = default;

void peak_info::Print(Option_t* /*option*/) const {
    std::cout << String() << std::endl;
}

std::string peak_info::String() const {
    std::ostringstream oss;
    oss << "peak_info {}";
    return oss.str();
}
