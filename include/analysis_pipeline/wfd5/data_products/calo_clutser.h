#ifndef DATA_PRODUCTS_CALO_CLUTSER_H
#define DATA_PRODUCTS_CALO_CLUTSER_H

#include <cstdint>
#include <string>
#include <TObject.h>

namespace dataProducts {

class calo_clutser : public TObject {
public:
    calo_clutser();
    ~calo_clutser() override = default;

    void Print(Option_t* option = "") const override;
    std::string String() const;

    ClassDefOverride(calo_clutser, 1);
};

} // namespace dataProducts

#endif // DATA_PRODUCTS_CALO_CLUTSER_H
