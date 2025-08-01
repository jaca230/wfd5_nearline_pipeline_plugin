#include "analysis_pipeline/wfd5/data_products/nai_fit.h"
#include <iostream>
#include <sstream>

using namespace dataProducts;

ClassImp(nai_fit)

nai_fit::nai_fit() = default;

void nai_fit::Print(Option_t* /*option*/) const {
    std::cout << String() << std::endl;
}

std::string nai_fit::String() const {
    std::ostringstream oss;
    oss << "nai_fit {}";
    return oss.str();
}
