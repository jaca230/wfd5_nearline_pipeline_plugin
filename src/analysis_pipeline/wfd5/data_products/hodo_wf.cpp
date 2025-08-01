#include "analysis_pipeline/wfd5/data_products/hodo_wf.h"
#include <iostream>
#include <sstream>

using namespace dataProducts;

ClassImp(hodo_wf)

hodo_wf::hodo_wf() = default;

void hodo_wf::Print(Option_t* /*option*/) const {
    std::cout << String() << std::endl;
}

std::string hodo_wf::String() const {
    std::ostringstream oss;
    oss << "hodo_wf {}";
    return oss.str();
}
