#ifndef STAGES_CREATE_CALO_CLUSTER_FROM_FIT_STAGE_H
#define STAGES_CREATE_CALO_CLUSTER_FROM_FIT_STAGE_H

#include "analysis_pipeline/core/stages/base_stage.h"

class create_calo_cluster_from_fit_stage : public BaseStage {
public:
    create_calo_cluster_from_fit_stage();
    ~create_calo_cluster_from_fit_stage() override = default;

    void Process() override;
    std::string Name() const override { return "create_calo_cluster_from_fit_stage"; }

protected:
    void OnInit() override;

private:
    double example_config_value_ = 0.0;

    ClassDefOverride(create_calo_cluster_from_fit_stage, 1);
};

#endif // STAGES_CREATE_CALO_CLUSTER_FROM_FIT_STAGE_H
