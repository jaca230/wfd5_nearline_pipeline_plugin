#ifndef STAGES_FIT_WITH_NO_TIME_CONSTRIANT_STAGE_H
#define STAGES_FIT_WITH_NO_TIME_CONSTRIANT_STAGE_H

#include "analysis_pipeline/core/stages/base_stage.h"

class fit_with_no_time_constriant_stage : public BaseStage {
public:
    fit_with_no_time_constriant_stage();
    ~fit_with_no_time_constriant_stage() override = default;

    void Process() override;
    std::string Name() const override { return "fit_with_no_time_constriant_stage"; }

protected:
    void OnInit() override;

private:
    double example_config_value_ = 0.0;

    ClassDefOverride(fit_with_no_time_constriant_stage, 1);
};

#endif // STAGES_FIT_WITH_NO_TIME_CONSTRIANT_STAGE_H
