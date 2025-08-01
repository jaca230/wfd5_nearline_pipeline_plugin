#include "analysis_pipeline/wfd5/data_products/lyso_wf.h"
#include <iostream>
#include <sstream>

using namespace dataProducts;

ClassImp(lyso_wf)

lyso_wf::lyso_wf() = default;

void lyso_wf::Print(Option_t* /*option*/) const {
    std::cout << String() << std::endl;
}

std::string lyso_wf::String() const {
    std::ostringstream oss;
    oss << "lyso_wf {}";
    return oss.str();
}
