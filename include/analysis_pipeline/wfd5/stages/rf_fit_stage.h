#ifndef STAGES_RF_FIT_STAGE_H
#define STAGES_RF_FIT_STAGE_H

#include "analysis_pipeline/core/stages/base_stage.h"

class rf_fit_stage : public BaseStage {
public:
    rf_fit_stage();
    ~rf_fit_stage() override = default;

    void Process() override;
    std::string Name() const override { return "rf_fit_stage"; }

protected:
    void OnInit() override;

private:
    double example_config_value_ = 0.0;

    ClassDefOverride(rf_fit_stage, 1);
};

#endif // STAGES_RF_FIT_STAGE_H
