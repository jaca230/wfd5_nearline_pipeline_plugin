#ifndef STAGES_IDENTIFY_PEAK_STAGE_H
#define STAGES_IDENTIFY_PEAK_STAGE_H

#include "analysis_pipeline/core/stages/base_stage.h"

class identify_peak_stage : public BaseStage {
public:
    identify_peak_stage();
    ~identify_peak_stage() override = default;

    void Process() override;
    std::string Name() const override { return "identify_peak_stage"; }

protected:
    void OnInit() override;

private:
    double example_config_value_ = 0.0;

    ClassDefOverride(identify_peak_stage, 1);
};

#endif // STAGES_IDENTIFY_PEAK_STAGE_H
