#include "analysis_pipeline/wfd5/data_products/rf.h"
#include <iostream>
#include <sstream>

using namespace dataProducts;

ClassImp(rf)

rf::rf() = default;

void rf::Print(Option_t* /*option*/) const {
    std::cout << String() << std::endl;
}

std::string rf::String() const {
    std::ostringstream oss;
    oss << "rf {}";
    return oss.str();
}
