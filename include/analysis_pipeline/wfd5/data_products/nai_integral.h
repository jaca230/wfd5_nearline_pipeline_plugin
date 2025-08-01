#ifndef DATA_PRODUCTS_NAI_INTEGRAL_H
#define DATA_PRODUCTS_NAI_INTEGRAL_H

#include <cstdint>
#include <string>
#include <TObject.h>

namespace dataProducts {

class nai_integral : public TObject {
public:
    nai_integral();
    ~nai_integral() override = default;

    void Print(Option_t* option = "") const override;
    std::string String() const;

    ClassDefOverride(nai_integral, 1);
};

} // namespace dataProducts

#endif // DATA_PRODUCTS_NAI_INTEGRAL_H
