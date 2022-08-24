// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPhotoModeSettingWidget;
#ifdef OEIPHOTOMODE_OnPhotoModeSettingChangedDelegate_generated_h
#error "OnPhotoModeSettingChangedDelegate.generated.h already included, missing '#pragma once' in OnPhotoModeSettingChangedDelegate.h"
#endif
#define OEIPHOTOMODE_OnPhotoModeSettingChangedDelegate_generated_h

#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_OnPhotoModeSettingChangedDelegate_h_7_DELEGATE \
struct _Script_OEIPhotoMode_eventOnPhotoModeSettingChanged_Parms \
{ \
	UPhotoModeSettingWidget* ChangedSetting; \
}; \
static inline void FOnPhotoModeSettingChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPhotoModeSettingChanged, UPhotoModeSettingWidget* ChangedSetting) \
{ \
	_Script_OEIPhotoMode_eventOnPhotoModeSettingChanged_Parms Parms; \
	Parms.ChangedSetting=ChangedSetting; \
	OnPhotoModeSettingChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_OnPhotoModeSettingChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
