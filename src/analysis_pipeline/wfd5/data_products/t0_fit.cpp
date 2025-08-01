#include "analysis_pipeline/wfd5/data_products/t0_fit.h"
#include <iostream>
#include <sstream>

using namespace dataProducts;

ClassImp(t0_fit)

t0_fit::t0_fit() = default;

void t0_fit::Print(Option_t* /*option*/) const {
    std::cout << String() << std::endl;
}

std::string t0_fit::String() const {
    std::ostringstream oss;
    oss << "t0_fit {}";
    return oss.str();
}
