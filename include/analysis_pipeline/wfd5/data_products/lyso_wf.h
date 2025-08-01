#ifndef DATA_PRODUCTS_LYSO_WF_H
#define DATA_PRODUCTS_LYSO_WF_H

#include <cstdint>
#include <string>
#include <TObject.h>

namespace dataProducts {

class lyso_wf : public TObject {
public:
    lyso_wf();
    ~lyso_wf() override = default;

    void Print(Option_t* option = "") const override;
    std::string String() const;

    ClassDefOverride(lyso_wf, 1);
};

} // namespace dataProducts

#endif // DATA_PRODUCTS_LYSO_WF_H
