#ifndef DATA_PRODUCTS_T0_WF_H
#define DATA_PRODUCTS_T0_WF_H

#include <cstdint>
#include <string>
#include <TObject.h>

namespace dataProducts {

class t0_wf : public TObject {
public:
    t0_wf();
    ~t0_wf() override = default;

    void Print(Option_t* option = "") const override;
    std::string String() const;

    ClassDefOverride(t0_wf, 1);
};

} // namespace dataProducts

#endif // DATA_PRODUCTS_T0_WF_H
