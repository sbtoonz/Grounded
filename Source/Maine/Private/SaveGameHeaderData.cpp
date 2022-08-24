#include "SaveGameHeaderData.h"

bool USaveGameHeaderData::IsSharedSave() const {
    return false;
}

FString USaveGameHeaderData::GetSaveGameScreenshotPath() {
    return TEXT("");
}

USaveGameHeaderData::USaveGameHeaderData() {
    this->SaveGameVersion = 0;
    this->SaveGameType = ESaveGameType::Standard;
    this->AutoSaveIndex = 0;
    this->GameDay = 0;
    this->GameHour = 0;
    this->GameMinute = 0;
    this->GameMode = EGameMode::None;
    this->GamePackageType = EGamePackageType::Default;
    this->GameContentType = EGameContentType::Development;
    this->LastSavePlayerCountType = ESaveGamePlayerCountType::Unknown;
    this->SaveGameValidity = ESaveGameHeaderDataValidity::Valid;
    this->SharedSaveState = ESharedSaveState::NotSharedSave;
    this->SharedSaveAdminLevel = ESharedSavePermissionsLevel::None;
}

