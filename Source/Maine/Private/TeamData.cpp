#include "TeamData.h"

FTeamData::FTeamData() {
    this->DefaultRelationship = ETeamAttitude::Friendly;
    this->bAlwaysFlee = false;
    this->ReputationOnDeath = 0;
}

