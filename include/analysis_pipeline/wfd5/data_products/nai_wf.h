#ifndef DATA_PRODUCTS_NAI_WF_H
#define DATA_PRODUCTS_NAI_WF_H

#include <cstdint>
#include <string>
#include <TObject.h>

namespace dataProducts {

class nai_wf : public TObject {
public:
    nai_wf();
    ~nai_wf() override = default;

    void Print(Option_t* option = "") const override;
    std::string String() const;

    ClassDefOverride(nai_wf, 1);
};

} // namespace dataProducts

#endif // DATA_PRODUCTS_NAI_WF_H
