#ifndef DATA_PRODUCTS_HODO_HIT_H
#define DATA_PRODUCTS_HODO_HIT_H

#include <cstdint>
#include <string>
#include <TObject.h>

namespace dataProducts {

class hodo_hit : public TObject {
public:
    hodo_hit();
    ~hodo_hit() override = default;

    void Print(Option_t* option = "") const override;
    std::string String() const;

    ClassDefOverride(hodo_hit, 1);
};

} // namespace dataProducts

#endif // DATA_PRODUCTS_HODO_HIT_H
