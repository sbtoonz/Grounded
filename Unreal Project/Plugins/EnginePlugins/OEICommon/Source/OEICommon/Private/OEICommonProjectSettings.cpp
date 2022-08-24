#include "OEICommonProjectSettings.h"

UOEICommonProjectSettings::UOEICommonProjectSettings() {
    this->Packages.AddDefaulted(1);
    this->CrashBuddyConfigFile = TEXT("\\\\maine\\Maine\\QA\\Debug\\maine.crashbuddyconfig");
    this->ChatterEventQueueTime = 0.00f;
    this->ChatterEventWaitTime = 0.00f;
    this->ChatterEventQueueProcessLimit = 0;
    this->bShowTextReviewPrefixes = false;
    this->ExportedFolder = TEXT("Content/Exported/");
    this->DesignSourceFolder = TEXT("DesignSource/");
    this->DesignStagingFolder = TEXT("DesignStaging/");
    this->OverrideFolder = TEXT("Override/");
    this->QuickSaveFilename = TEXT("QuickSave");
    this->SaveBeforeLinkFilename = TEXT("SaveBeforeLink");
    this->AutoSaveFilename = TEXT("AutoSave");
    this->SaveFileExtension = TEXT("sav");
}

