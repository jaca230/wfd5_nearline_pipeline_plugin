#ifndef DATA_PRODUCTS_VETO_WF_H
#define DATA_PRODUCTS_VETO_WF_H

#include <cstdint>
#include <string>
#include <TObject.h>

namespace dataProducts {

class veto_wf : public TObject {
public:
    veto_wf();
    ~veto_wf() override = default;

    void Print(Option_t* option = "") const override;
    std::string String() const;

    ClassDefOverride(veto_wf, 1);
};

} // namespace dataProducts

#endif // DATA_PRODUCTS_VETO_WF_H
