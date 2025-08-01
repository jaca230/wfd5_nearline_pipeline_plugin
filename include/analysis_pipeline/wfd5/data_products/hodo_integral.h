#ifndef DATA_PRODUCTS_HODO_INTEGRAL_H
#define DATA_PRODUCTS_HODO_INTEGRAL_H

#include <cstdint>
#include <string>
#include <TObject.h>

namespace dataProducts {

class hodo_integral : public TObject {
public:
    hodo_integral();
    ~hodo_integral() override = default;

    void Print(Option_t* option = "") const override;
    std::string String() const;

    ClassDefOverride(hodo_integral, 1);
};

} // namespace dataProducts

#endif // DATA_PRODUCTS_HODO_INTEGRAL_H
