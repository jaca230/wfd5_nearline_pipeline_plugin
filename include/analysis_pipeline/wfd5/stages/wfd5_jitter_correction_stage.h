#ifndef STAGES_WFD5_JITTER_CORRECTION_STAGE_H
#define STAGES_WFD5_JITTER_CORRECTION_STAGE_H

#include "analysis_pipeline/core/stages/base_stage.h"

class wfd5_jitter_correction_stage : public BaseStage {
public:
    wfd5_jitter_correction_stage();
    ~wfd5_jitter_correction_stage() override = default;

    void Process() override;
    std::string Name() const override { return "wfd5_jitter_correction_stage"; }

protected:
    void OnInit() override;

private:
    double example_config_value_ = 0.0;

    ClassDefOverride(wfd5_jitter_correction_stage, 1);
};

#endif // STAGES_WFD5_JITTER_CORRECTION_STAGE_H
