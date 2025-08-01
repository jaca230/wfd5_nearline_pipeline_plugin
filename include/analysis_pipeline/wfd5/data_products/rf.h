#ifndef DATA_PRODUCTS_RF_H
#define DATA_PRODUCTS_RF_H

#include <cstdint>
#include <string>
#include <TObject.h>

namespace dataProducts {

class rf : public TObject {
public:
    rf();
    ~rf() override = default;

    void Print(Option_t* option = "") const override;
    std::string String() const;

    ClassDefOverride(rf, 1);
};

} // namespace dataProducts

#endif // DATA_PRODUCTS_RF_H
