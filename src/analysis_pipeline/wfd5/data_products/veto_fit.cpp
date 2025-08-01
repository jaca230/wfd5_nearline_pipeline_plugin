#include "analysis_pipeline/wfd5/data_products/veto_fit.h"
#include <iostream>
#include <sstream>

using namespace dataProducts;

ClassImp(veto_fit)

veto_fit::veto_fit() = default;

void veto_fit::Print(Option_t* /*option*/) const {
    std::cout << String() << std::endl;
}

std::string veto_fit::String() const {
    std::ostringstream oss;
    oss << "veto_fit {}";
    return oss.str();
}
