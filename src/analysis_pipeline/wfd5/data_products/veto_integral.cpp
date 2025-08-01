#include "analysis_pipeline/wfd5/data_products/veto_integral.h"
#include <iostream>
#include <sstream>

using namespace dataProducts;

ClassImp(veto_integral)

veto_integral::veto_integral() = default;

void veto_integral::Print(Option_t* /*option*/) const {
    std::cout << String() << std::endl;
}

std::string veto_integral::String() const {
    std::ostringstream oss;
    oss << "veto_integral {}";
    return oss.str();
}
