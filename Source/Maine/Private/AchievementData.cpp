#include "AchievementData.h"

FAchievementData::FAchievementData() {
    this->PlayerStat = NULL;
    this->bTotalPartyPlayerStat = false;
    this->AchievementStat = EAchievementStat::None;
    this->ComparisonOperator = EComparisonOperator::Equals;
    this->ConditionalValue = 0;
    this->bHostMustBePresentAtValueChange = false;
    this->bClientMustBePresentAtValueChange = false;
    this->bCanUnlockInCreativeMode = false;
}

