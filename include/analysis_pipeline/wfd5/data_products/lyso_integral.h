#ifndef DATA_PRODUCTS_LYSO_INTEGRAL_H
#define DATA_PRODUCTS_LYSO_INTEGRAL_H

#include <cstdint>
#include <string>
#include <TObject.h>

namespace dataProducts {

class lyso_integral : public TObject {
public:
    lyso_integral();
    ~lyso_integral() override = default;

    void Print(Option_t* option = "") const override;
    std::string String() const;

    ClassDefOverride(lyso_integral, 1);
};

} // namespace dataProducts

#endif // DATA_PRODUCTS_LYSO_INTEGRAL_H
