#ifndef STAGES_IDENTIFY_TIME_OF_LYSO_HIT_H
#define STAGES_IDENTIFY_TIME_OF_LYSO_HIT_H

#include "analysis_pipeline/core/stages/base_stage.h"

class identify_time_of_lyso_hit : public BaseStage {
public:
    identify_time_of_lyso_hit();
    ~identify_time_of_lyso_hit() override = default;

    void Process() override;
    std::string Name() const override { return "identify_time_of_lyso_hit"; }

protected:
    void OnInit() override;

private:
    double example_config_value_ = 0.0;

    ClassDefOverride(identify_time_of_lyso_hit, 1);
};

#endif // STAGES_IDENTIFY_TIME_OF_LYSO_HIT_H
