#include "analysis_pipeline/wfd5/data_products/calo_clutser.h"
#include <iostream>
#include <sstream>

using namespace dataProducts;

ClassImp(calo_clutser)

calo_clutser::calo_clutser() = default;

void calo_clutser::Print(Option_t* /*option*/) const {
    std::cout << String() << std::endl;
}

std::string calo_clutser::String() const {
    std::ostringstream oss;
    oss << "calo_clutser {}";
    return oss.str();
}
