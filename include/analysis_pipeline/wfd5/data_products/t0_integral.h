#ifndef DATA_PRODUCTS_T0_INTEGRAL_H
#define DATA_PRODUCTS_T0_INTEGRAL_H

#include <cstdint>
#include <string>
#include <TObject.h>

namespace dataProducts {

class t0_integral : public TObject {
public:
    t0_integral();
    ~t0_integral() override = default;

    void Print(Option_t* option = "") const override;
    std::string String() const;

    ClassDefOverride(t0_integral, 1);
};

} // namespace dataProducts

#endif // DATA_PRODUCTS_T0_INTEGRAL_H
