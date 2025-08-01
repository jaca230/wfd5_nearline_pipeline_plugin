#ifndef STAGES_IDENTIFY_MAX_AMP_TIME_STAGE_H
#define STAGES_IDENTIFY_MAX_AMP_TIME_STAGE_H

#include "analysis_pipeline/core/stages/base_stage.h"

class identify_max_amp_time_stage : public BaseStage {
public:
    identify_max_amp_time_stage();
    ~identify_max_amp_time_stage() override = default;

    void Process() override;
    std::string Name() const override { return "identify_max_amp_time_stage"; }

protected:
    void OnInit() override;

private:
    double example_config_value_ = 0.0;

    ClassDefOverride(identify_max_amp_time_stage, 1);
};

#endif // STAGES_IDENTIFY_MAX_AMP_TIME_STAGE_H
