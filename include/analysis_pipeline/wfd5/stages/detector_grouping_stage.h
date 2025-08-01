#ifndef STAGES_DETECTOR_GROUPING_STAGE_H
#define STAGES_DETECTOR_GROUPING_STAGE_H

#include "analysis_pipeline/core/stages/base_stage.h"

class detector_grouping_stage : public BaseStage {
public:
    detector_grouping_stage();
    ~detector_grouping_stage() override = default;

    void Process() override;
    std::string Name() const override { return "detector_grouping_stage"; }

protected:
    void OnInit() override;

private:
    double example_config_value_ = 0.0;

    ClassDefOverride(detector_grouping_stage, 1);
};

#endif // STAGES_DETECTOR_GROUPING_STAGE_H
