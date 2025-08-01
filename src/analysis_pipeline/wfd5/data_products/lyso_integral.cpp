#include "analysis_pipeline/wfd5/data_products/lyso_integral.h"
#include <iostream>
#include <sstream>

using namespace dataProducts;

ClassImp(lyso_integral)

lyso_integral::lyso_integral() = default;

void lyso_integral::Print(Option_t* /*option*/) const {
    std::cout << String() << std::endl;
}

std::string lyso_integral::String() const {
    std::ostringstream oss;
    oss << "lyso_integral {}";
    return oss.str();
}
