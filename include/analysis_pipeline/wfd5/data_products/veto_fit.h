#ifndef DATA_PRODUCTS_VETO_FIT_H
#define DATA_PRODUCTS_VETO_FIT_H

#include <cstdint>
#include <string>
#include <TObject.h>

namespace dataProducts {

class veto_fit : public TObject {
public:
    veto_fit();
    ~veto_fit() override = default;

    void Print(Option_t* option = "") const override;
    std::string String() const;

    ClassDefOverride(veto_fit, 1);
};

} // namespace dataProducts

#endif // DATA_PRODUCTS_VETO_FIT_H
