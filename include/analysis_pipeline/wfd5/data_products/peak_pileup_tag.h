#ifndef DATA_PRODUCTS_PEAK_PILEUP_TAG_H
#define DATA_PRODUCTS_PEAK_PILEUP_TAG_H

#include <cstdint>
#include <string>
#include <TObject.h>

namespace dataProducts {

class peak_pileup_tag : public TObject {
public:
    peak_pileup_tag();
    ~peak_pileup_tag() override = default;

    void Print(Option_t* option = "") const override;
    std::string String() const;

    ClassDefOverride(peak_pileup_tag, 1);
};

} // namespace dataProducts

#endif // DATA_PRODUCTS_PEAK_PILEUP_TAG_H
