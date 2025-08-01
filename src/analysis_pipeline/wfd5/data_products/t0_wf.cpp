#include "analysis_pipeline/wfd5/data_products/t0_wf.h"
#include <iostream>
#include <sstream>

using namespace dataProducts;

ClassImp(t0_wf)

t0_wf::t0_wf() = default;

void t0_wf::Print(Option_t* /*option*/) const {
    std::cout << String() << std::endl;
}

std::string t0_wf::String() const {
    std::ostringstream oss;
    oss << "t0_wf {}";
    return oss.str();
}
