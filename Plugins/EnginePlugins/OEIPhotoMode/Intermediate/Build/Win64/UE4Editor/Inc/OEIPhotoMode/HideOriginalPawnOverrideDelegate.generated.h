// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef OEIPHOTOMODE_HideOriginalPawnOverrideDelegate_generated_h
#error "HideOriginalPawnOverrideDelegate.generated.h already included, missing '#pragma once' in HideOriginalPawnOverrideDelegate.h"
#endif
#define OEIPHOTOMODE_HideOriginalPawnOverrideDelegate_generated_h

#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_HideOriginalPawnOverrideDelegate_h_7_DELEGATE \
struct _Script_OEIPhotoMode_eventHideOriginalPawnOverride_Parms \
{ \
	APawn* OriginalPawn; \
}; \
static inline void FHideOriginalPawnOverride_DelegateWrapper(const FMulticastScriptDelegate& HideOriginalPawnOverride, APawn* OriginalPawn) \
{ \
	_Script_OEIPhotoMode_eventHideOriginalPawnOverride_Parms Parms; \
	Parms.OriginalPawn=OriginalPawn; \
	HideOriginalPawnOverride.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_HideOriginalPawnOverrideDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
