#include "analysis_pipeline/wfd5/data_products/lyso_fit.h"
#include <iostream>
#include <sstream>

using namespace dataProducts;

ClassImp(lyso_fit)

lyso_fit::lyso_fit() = default;

void lyso_fit::Print(Option_t* /*option*/) const {
    std::cout << String() << std::endl;
}

std::string lyso_fit::String() const {
    std::ostringstream oss;
    oss << "lyso_fit {}";
    return oss.str();
}
