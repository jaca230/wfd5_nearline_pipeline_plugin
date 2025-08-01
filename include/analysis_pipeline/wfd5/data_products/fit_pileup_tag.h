#ifndef DATA_PRODUCTS_FIT_PILEUP_TAG_H
#define DATA_PRODUCTS_FIT_PILEUP_TAG_H

#include <cstdint>
#include <string>
#include <TObject.h>

namespace dataProducts {

class fit_pileup_tag : public TObject {
public:
    fit_pileup_tag();
    ~fit_pileup_tag() override = default;

    void Print(Option_t* option = "") const override;
    std::string String() const;

    ClassDefOverride(fit_pileup_tag, 1);
};

} // namespace dataProducts

#endif // DATA_PRODUCTS_FIT_PILEUP_TAG_H
