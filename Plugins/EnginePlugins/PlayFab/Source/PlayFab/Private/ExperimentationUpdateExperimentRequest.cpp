#include "ExperimentationUpdateExperimentRequest.h"

FExperimentationUpdateExperimentRequest::FExperimentationUpdateExperimentRequest() {
    this->CustomTags = NULL;
    this->Duration = 0;
    this->ExclusionGroupTrafficAllocation = 0;
    this->ExperimentType = EExperimentType::pfenum_Active;
}

