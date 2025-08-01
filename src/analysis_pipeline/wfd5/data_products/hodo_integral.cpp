#include "analysis_pipeline/wfd5/data_products/hodo_integral.h"
#include <iostream>
#include <sstream>

using namespace dataProducts;

ClassImp(hodo_integral)

hodo_integral::hodo_integral() = default;

void hodo_integral::Print(Option_t* /*option*/) const {
    std::cout << String() << std::endl;
}

std::string hodo_integral::String() const {
    std::ostringstream oss;
    oss << "hodo_integral {}";
    return oss.str();
}
