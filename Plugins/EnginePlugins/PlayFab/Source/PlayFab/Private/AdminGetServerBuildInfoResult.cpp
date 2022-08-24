#include "AdminGetServerBuildInfoResult.h"

FAdminGetServerBuildInfoResult::FAdminGetServerBuildInfoResult() {
    this->MaxGamesPerHost = 0;
    this->MinFreeGameSlots = 0;
    this->Status = EGameBuildStatus::pfenum_Available;
}

