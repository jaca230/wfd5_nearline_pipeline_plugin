#include "analysis_pipeline/wfd5/data_products/nai_integral.h"
#include <iostream>
#include <sstream>

using namespace dataProducts;

ClassImp(nai_integral)

nai_integral::nai_integral() = default;

void nai_integral::Print(Option_t* /*option*/) const {
    std::cout << String() << std::endl;
}

std::string nai_integral::String() const {
    std::ostringstream oss;
    oss << "nai_integral {}";
    return oss.str();
}
