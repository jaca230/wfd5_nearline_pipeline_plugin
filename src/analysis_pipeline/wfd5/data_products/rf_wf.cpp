#include "analysis_pipeline/wfd5/data_products/rf_wf.h"
#include <iostream>
#include <sstream>

using namespace dataProducts;

ClassImp(rf_wf)

rf_wf::rf_wf() = default;

void rf_wf::Print(Option_t* /*option*/) const {
    std::cout << String() << std::endl;
}

std::string rf_wf::String() const {
    std::ostringstream oss;
    oss << "rf_wf {}";
    return oss.str();
}
