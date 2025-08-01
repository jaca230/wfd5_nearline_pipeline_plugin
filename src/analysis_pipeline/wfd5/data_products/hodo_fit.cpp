#include "analysis_pipeline/wfd5/data_products/hodo_fit.h"
#include <iostream>
#include <sstream>

using namespace dataProducts;

ClassImp(hodo_fit)

hodo_fit::hodo_fit() = default;

void hodo_fit::Print(Option_t* /*option*/) const {
    std::cout << String() << std::endl;
}

std::string hodo_fit::String() const {
    std::ostringstream oss;
    oss << "hodo_fit {}";
    return oss.str();
}
