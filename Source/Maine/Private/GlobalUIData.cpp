#include "GlobalUIData.h"

int32 UGlobalUIData::GetMarkerBuildingHiddenIconIndex() const {
    return 0;
}

int32 UGlobalUIData::GetMarkerBuildingBurgleIconIndex() const {
    return 0;
}

FString UGlobalUIData::GetKeyNarrationName(FKey Key) const {
    return TEXT("");
}

FText UGlobalUIData::GetChordNarrationName(const FInputChord& Chord) const {
    return FText::GetEmpty();
}

UGlobalUIData::UGlobalUIData() {
    this->WidgetManagerClass = NULL;
    this->InGameMenu = NULL;
    this->HotBarRadialMenu = NULL;
    this->BuildingRadialMenu = NULL;
    this->AmmoRadialMenu = NULL;
    this->EmoteRadialMenu = NULL;
    this->ChatRadialMenu = NULL;
    this->ShortcutRadialMenu = NULL;
    this->AutoSaveIcon = NULL;
    this->GlobalColorListType = NULL;
    this->DefaultUITheme = NULL;
    this->DefaultNightUITheme = NULL;
}

