#ifndef DATA_PRODUCTS_VETO_INTEGRAL_H
#define DATA_PRODUCTS_VETO_INTEGRAL_H

#include <cstdint>
#include <string>
#include <TObject.h>

namespace dataProducts {

class veto_integral : public TObject {
public:
    veto_integral();
    ~veto_integral() override = default;

    void Print(Option_t* option = "") const override;
    std::string String() const;

    ClassDefOverride(veto_integral, 1);
};

} // namespace dataProducts

#endif // DATA_PRODUCTS_VETO_INTEGRAL_H
