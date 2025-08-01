#include "analysis_pipeline/wfd5/data_products/hodo_hit.h"
#include <iostream>
#include <sstream>

using namespace dataProducts;

ClassImp(hodo_hit)

hodo_hit::hodo_hit() = default;

void hodo_hit::Print(Option_t* /*option*/) const {
    std::cout << String() << std::endl;
}

std::string hodo_hit::String() const {
    std::ostringstream oss;
    oss << "hodo_hit {}";
    return oss.str();
}
