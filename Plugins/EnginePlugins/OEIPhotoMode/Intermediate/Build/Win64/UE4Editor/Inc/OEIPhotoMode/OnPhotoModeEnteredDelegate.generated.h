// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APhotoPawn;
#ifdef OEIPHOTOMODE_OnPhotoModeEnteredDelegate_generated_h
#error "OnPhotoModeEnteredDelegate.generated.h already included, missing '#pragma once' in OnPhotoModeEnteredDelegate.h"
#endif
#define OEIPHOTOMODE_OnPhotoModeEnteredDelegate_generated_h

#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_OnPhotoModeEnteredDelegate_h_7_DELEGATE \
struct _Script_OEIPhotoMode_eventOnPhotoModeEntered_Parms \
{ \
	APhotoPawn* PhotoPawn; \
}; \
static inline void FOnPhotoModeEntered_DelegateWrapper(const FMulticastScriptDelegate& OnPhotoModeEntered, APhotoPawn* PhotoPawn) \
{ \
	_Script_OEIPhotoMode_eventOnPhotoModeEntered_Parms Parms; \
	Parms.PhotoPawn=PhotoPawn; \
	OnPhotoModeEntered.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_OnPhotoModeEnteredDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
