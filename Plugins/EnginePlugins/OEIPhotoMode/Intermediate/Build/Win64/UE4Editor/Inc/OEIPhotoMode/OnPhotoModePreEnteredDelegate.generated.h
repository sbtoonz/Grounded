// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
#ifdef OEIPHOTOMODE_OnPhotoModePreEnteredDelegate_generated_h
#error "OnPhotoModePreEnteredDelegate.generated.h already included, missing '#pragma once' in OnPhotoModePreEnteredDelegate.h"
#endif
#define OEIPHOTOMODE_OnPhotoModePreEnteredDelegate_generated_h

#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_OnPhotoModePreEnteredDelegate_h_7_DELEGATE \
struct _Script_OEIPhotoMode_eventOnPhotoModePreEntered_Parms \
{ \
	APlayerController* PlayerController; \
}; \
static inline void FOnPhotoModePreEntered_DelegateWrapper(const FMulticastScriptDelegate& OnPhotoModePreEntered, APlayerController* PlayerController) \
{ \
	_Script_OEIPhotoMode_eventOnPhotoModePreEntered_Parms Parms; \
	Parms.PlayerController=PlayerController; \
	OnPhotoModePreEntered.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_OnPhotoModePreEnteredDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
