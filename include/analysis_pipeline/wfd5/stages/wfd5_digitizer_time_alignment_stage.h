#ifndef STAGES_WFD5_DIGITIZER_TIME_ALIGNMENT_STAGE_H
#define STAGES_WFD5_DIGITIZER_TIME_ALIGNMENT_STAGE_H

#include "analysis_pipeline/core/stages/base_stage.h"

class wfd5_digitizer_time_alignment_stage : public BaseStage {
public:
    wfd5_digitizer_time_alignment_stage();
    ~wfd5_digitizer_time_alignment_stage() override = default;

    void Process() override;
    std::string Name() const override { return "wfd5_digitizer_time_alignment_stage"; }

protected:
    void OnInit() override;

private:
    double example_config_value_ = 0.0;

    ClassDefOverride(wfd5_digitizer_time_alignment_stage, 1);
};

#endif // STAGES_WFD5_DIGITIZER_TIME_ALIGNMENT_STAGE_H
