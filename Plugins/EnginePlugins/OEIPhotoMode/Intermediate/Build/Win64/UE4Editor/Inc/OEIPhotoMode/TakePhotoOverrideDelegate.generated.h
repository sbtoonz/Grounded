// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APhotoPawn;
#ifdef OEIPHOTOMODE_TakePhotoOverrideDelegate_generated_h
#error "TakePhotoOverrideDelegate.generated.h already included, missing '#pragma once' in TakePhotoOverrideDelegate.h"
#endif
#define OEIPHOTOMODE_TakePhotoOverrideDelegate_generated_h

#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_TakePhotoOverrideDelegate_h_7_DELEGATE \
struct _Script_OEIPhotoMode_eventTakePhotoOverride_Parms \
{ \
	APhotoPawn* PhotoPawn; \
}; \
static inline void FTakePhotoOverride_DelegateWrapper(const FScriptDelegate& TakePhotoOverride, APhotoPawn* PhotoPawn) \
{ \
	_Script_OEIPhotoMode_eventTakePhotoOverride_Parms Parms; \
	Parms.PhotoPawn=PhotoPawn; \
	TakePhotoOverride.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_TakePhotoOverrideDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
