#include "analysis_pipeline/wfd5/data_products/fit_pileup_tag.h"
#include <iostream>
#include <sstream>

using namespace dataProducts;

ClassImp(fit_pileup_tag)

fit_pileup_tag::fit_pileup_tag() = default;

void fit_pileup_tag::Print(Option_t* /*option*/) const {
    std::cout << String() << std::endl;
}

std::string fit_pileup_tag::String() const {
    std::ostringstream oss;
    oss << "fit_pileup_tag {}";
    return oss.str();
}
