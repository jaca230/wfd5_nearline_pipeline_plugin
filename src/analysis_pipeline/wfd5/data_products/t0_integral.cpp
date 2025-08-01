#include "analysis_pipeline/wfd5/data_products/t0_integral.h"
#include <iostream>
#include <sstream>

using namespace dataProducts;

ClassImp(t0_integral)

t0_integral::t0_integral() = default;

void t0_integral::Print(Option_t* /*option*/) const {
    std::cout << String() << std::endl;
}

std::string t0_integral::String() const {
    std::ostringstream oss;
    oss << "t0_integral {}";
    return oss.str();
}
