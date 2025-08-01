#include "analysis_pipeline/wfd5/data_products/peak_pileup_tag.h"
#include <iostream>
#include <sstream>

using namespace dataProducts;

ClassImp(peak_pileup_tag)

peak_pileup_tag::peak_pileup_tag() = default;

void peak_pileup_tag::Print(Option_t* /*option*/) const {
    std::cout << String() << std::endl;
}

std::string peak_pileup_tag::String() const {
    std::ostringstream oss;
    oss << "peak_pileup_tag {}";
    return oss.str();
}
