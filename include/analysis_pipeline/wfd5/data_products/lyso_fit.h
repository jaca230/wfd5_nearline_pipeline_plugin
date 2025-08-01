#ifndef DATA_PRODUCTS_LYSO_FIT_H
#define DATA_PRODUCTS_LYSO_FIT_H

#include <cstdint>
#include <string>
#include <TObject.h>

namespace dataProducts {

class lyso_fit : public TObject {
public:
    lyso_fit();
    ~lyso_fit() override = default;

    void Print(Option_t* option = "") const override;
    std::string String() const;

    ClassDefOverride(lyso_fit, 1);
};

} // namespace dataProducts

#endif // DATA_PRODUCTS_LYSO_FIT_H
