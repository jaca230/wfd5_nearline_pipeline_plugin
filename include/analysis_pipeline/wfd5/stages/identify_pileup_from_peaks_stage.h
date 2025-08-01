#ifndef STAGES_IDENTIFY_PILEUP_FROM_PEAKS_STAGE_H
#define STAGES_IDENTIFY_PILEUP_FROM_PEAKS_STAGE_H

#include "analysis_pipeline/core/stages/base_stage.h"

class identify_pileup_from_peaks_stage : public BaseStage {
public:
    identify_pileup_from_peaks_stage();
    ~identify_pileup_from_peaks_stage() override = default;

    void Process() override;
    std::string Name() const override { return "identify_pileup_from_peaks_stage"; }

protected:
    void OnInit() override;

private:
    double example_config_value_ = 0.0;

    ClassDefOverride(identify_pileup_from_peaks_stage, 1);
};

#endif // STAGES_IDENTIFY_PILEUP_FROM_PEAKS_STAGE_H
