#ifndef DATA_PRODUCTS_T0_FIT_H
#define DATA_PRODUCTS_T0_FIT_H

#include <cstdint>
#include <string>
#include <TObject.h>

namespace dataProducts {

class t0_fit : public TObject {
public:
    t0_fit();
    ~t0_fit() override = default;

    void Print(Option_t* option = "") const override;
    std::string String() const;

    ClassDefOverride(t0_fit, 1);
};

} // namespace dataProducts

#endif // DATA_PRODUCTS_T0_FIT_H
