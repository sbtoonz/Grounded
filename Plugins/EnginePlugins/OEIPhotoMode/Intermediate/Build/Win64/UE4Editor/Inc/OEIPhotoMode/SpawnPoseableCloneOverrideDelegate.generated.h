// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class APawn;
#ifdef OEIPHOTOMODE_SpawnPoseableCloneOverrideDelegate_generated_h
#error "SpawnPoseableCloneOverrideDelegate.generated.h already included, missing '#pragma once' in SpawnPoseableCloneOverrideDelegate.h"
#endif
#define OEIPHOTOMODE_SpawnPoseableCloneOverrideDelegate_generated_h

#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_SpawnPoseableCloneOverrideDelegate_h_8_DELEGATE \
struct _Script_OEIPhotoMode_eventSpawnPoseableCloneOverride_Parms \
{ \
	APlayerController* ActivatingController; \
	APawn* OriginalPawn; \
}; \
static inline void FSpawnPoseableCloneOverride_DelegateWrapper(const FMulticastScriptDelegate& SpawnPoseableCloneOverride, APlayerController* ActivatingController, APawn* OriginalPawn) \
{ \
	_Script_OEIPhotoMode_eventSpawnPoseableCloneOverride_Parms Parms; \
	Parms.ActivatingController=ActivatingController; \
	Parms.OriginalPawn=OriginalPawn; \
	SpawnPoseableCloneOverride.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_SpawnPoseableCloneOverrideDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
