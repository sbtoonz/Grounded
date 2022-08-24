// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPhotoModeEntryAllowedResult : uint8;
#ifdef OEIPHOTOMODE_OnPhotoModeEntryUnallowedDelegate_generated_h
#error "OnPhotoModeEntryUnallowedDelegate.generated.h already included, missing '#pragma once' in OnPhotoModeEntryUnallowedDelegate.h"
#endif
#define OEIPHOTOMODE_OnPhotoModeEntryUnallowedDelegate_generated_h

#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_OnPhotoModeEntryUnallowedDelegate_h_6_DELEGATE \
struct _Script_OEIPhotoMode_eventOnPhotoModeEntryUnallowed_Parms \
{ \
	EPhotoModeEntryAllowedResult Reason; \
}; \
static inline void FOnPhotoModeEntryUnallowed_DelegateWrapper(const FMulticastScriptDelegate& OnPhotoModeEntryUnallowed, EPhotoModeEntryAllowedResult Reason) \
{ \
	_Script_OEIPhotoMode_eventOnPhotoModeEntryUnallowed_Parms Parms; \
	Parms.Reason=Reason; \
	OnPhotoModeEntryUnallowed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_OnPhotoModeEntryUnallowedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
