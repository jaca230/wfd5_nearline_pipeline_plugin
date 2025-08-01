#ifndef STAGES_INTEGRATE_AROUND_GIVEN_TIME_STAGE_H
#define STAGES_INTEGRATE_AROUND_GIVEN_TIME_STAGE_H

#include "analysis_pipeline/core/stages/base_stage.h"

class integrate_around_given_time_stage : public BaseStage {
public:
    integrate_around_given_time_stage();
    ~integrate_around_given_time_stage() override = default;

    void Process() override;
    std::string Name() const override { return "integrate_around_given_time_stage"; }

protected:
    void OnInit() override;

private:
    double example_config_value_ = 0.0;

    ClassDefOverride(integrate_around_given_time_stage, 1);
};

#endif // STAGES_INTEGRATE_AROUND_GIVEN_TIME_STAGE_H
