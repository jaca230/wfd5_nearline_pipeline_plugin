#ifndef DATA_PRODUCTS_HODO_WF_H
#define DATA_PRODUCTS_HODO_WF_H

#include <cstdint>
#include <string>
#include <TObject.h>

namespace dataProducts {

class hodo_wf : public TObject {
public:
    hodo_wf();
    ~hodo_wf() override = default;

    void Print(Option_t* option = "") const override;
    std::string String() const;

    ClassDefOverride(hodo_wf, 1);
};

} // namespace dataProducts

#endif // DATA_PRODUCTS_HODO_WF_H
