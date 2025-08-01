#include "analysis_pipeline/wfd5/data_products/veto_wf.h"
#include <iostream>
#include <sstream>

using namespace dataProducts;

ClassImp(veto_wf)

veto_wf::veto_wf() = default;

void veto_wf::Print(Option_t* /*option*/) const {
    std::cout << String() << std::endl;
}

std::string veto_wf::String() const {
    std::ostringstream oss;
    oss << "veto_wf {}";
    return oss.str();
}
