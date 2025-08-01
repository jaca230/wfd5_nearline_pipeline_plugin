#ifndef DATA_PRODUCTS_RF_WF_H
#define DATA_PRODUCTS_RF_WF_H

#include <cstdint>
#include <string>
#include <TObject.h>

namespace dataProducts {

class rf_wf : public TObject {
public:
    rf_wf();
    ~rf_wf() override = default;

    void Print(Option_t* option = "") const override;
    std::string String() const;

    ClassDefOverride(rf_wf, 1);
};

} // namespace dataProducts

#endif // DATA_PRODUCTS_RF_WF_H
