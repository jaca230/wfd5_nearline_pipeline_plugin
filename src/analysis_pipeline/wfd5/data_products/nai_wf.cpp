#include "analysis_pipeline/wfd5/data_products/nai_wf.h"
#include <iostream>
#include <sstream>

using namespace dataProducts;

ClassImp(nai_wf)

nai_wf::nai_wf() = default;

void nai_wf::Print(Option_t* /*option*/) const {
    std::cout << String() << std::endl;
}

std::string nai_wf::String() const {
    std::ostringstream oss;
    oss << "nai_wf {}";
    return oss.str();
}
