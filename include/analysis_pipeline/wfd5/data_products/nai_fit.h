#ifndef DATA_PRODUCTS_NAI_FIT_H
#define DATA_PRODUCTS_NAI_FIT_H

#include <cstdint>
#include <string>
#include <TObject.h>

namespace dataProducts {

class nai_fit : public TObject {
public:
    nai_fit();
    ~nai_fit() override = default;

    void Print(Option_t* option = "") const override;
    std::string String() const;

    ClassDefOverride(nai_fit, 1);
};

} // namespace dataProducts

#endif // DATA_PRODUCTS_NAI_FIT_H
