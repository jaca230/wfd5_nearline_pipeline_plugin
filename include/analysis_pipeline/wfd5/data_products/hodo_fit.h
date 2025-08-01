#ifndef DATA_PRODUCTS_HODO_FIT_H
#define DATA_PRODUCTS_HODO_FIT_H

#include <cstdint>
#include <string>
#include <TObject.h>

namespace dataProducts {

class hodo_fit : public TObject {
public:
    hodo_fit();
    ~hodo_fit() override = default;

    void Print(Option_t* option = "") const override;
    std::string String() const;

    ClassDefOverride(hodo_fit, 1);
};

} // namespace dataProducts

#endif // DATA_PRODUCTS_HODO_FIT_H
