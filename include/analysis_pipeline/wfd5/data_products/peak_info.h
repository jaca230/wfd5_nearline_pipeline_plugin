#ifndef DATA_PRODUCTS_PEAK_INFO_H
#define DATA_PRODUCTS_PEAK_INFO_H

#include <cstdint>
#include <string>
#include <TObject.h>

namespace dataProducts {

class peak_info : public TObject {
public:
    peak_info();
    ~peak_info() override = default;

    void Print(Option_t* option = "") const override;
    std::string String() const;

    ClassDefOverride(peak_info, 1);
};

} // namespace dataProducts

#endif // DATA_PRODUCTS_PEAK_INFO_H
