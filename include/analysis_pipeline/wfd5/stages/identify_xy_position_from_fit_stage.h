#ifndef STAGES_IDENTIFY_XY_POSITION_FROM_FIT_STAGE_H
#define STAGES_IDENTIFY_XY_POSITION_FROM_FIT_STAGE_H

#include "analysis_pipeline/core/stages/base_stage.h"

class identify_xy_position_from_fit_stage : public BaseStage {
public:
    identify_xy_position_from_fit_stage();
    ~identify_xy_position_from_fit_stage() override = default;

    void Process() override;
    std::string Name() const override { return "identify_xy_position_from_fit_stage"; }

protected:
    void OnInit() override;

private:
    double example_config_value_ = 0.0;

    ClassDefOverride(identify_xy_position_from_fit_stage, 1);
};

#endif // STAGES_IDENTIFY_XY_POSITION_FROM_FIT_STAGE_H
