#include "OnlineManager.h"

UOnlineManager::UOnlineManager() {
    this->SubsystemToLink = TEXT("XSAPI");
    this->UseDevModeDisplayName = false;
    this->ForceDevModeDisplayName = false;
}

