#include "OEIRestSettings.h"

UOEIRestSettings::UOEIRestSettings() {
    this->JiraURL = TEXT("https://jira.obsidian.net/");
    this->JiraProjectKey = TEXT("ME");
    this->JiraConfigFile = TEXT("\\Documents\\Obsidian\\Jira\\settings.ini");
}

