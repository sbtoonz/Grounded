// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
#ifdef OEIPHOTOMODE_DestroyPoseableCloneOverrideDelegate_generated_h
#error "DestroyPoseableCloneOverrideDelegate.generated.h already included, missing '#pragma once' in DestroyPoseableCloneOverrideDelegate.h"
#endif
#define OEIPHOTOMODE_DestroyPoseableCloneOverrideDelegate_generated_h

#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_DestroyPoseableCloneOverrideDelegate_h_7_DELEGATE \
struct _Script_OEIPhotoMode_eventDestroyPoseableCloneOverride_Parms \
{ \
	ACharacter* PoseableClone; \
}; \
static inline void FDestroyPoseableCloneOverride_DelegateWrapper(const FMulticastScriptDelegate& DestroyPoseableCloneOverride, ACharacter* PoseableClone) \
{ \
	_Script_OEIPhotoMode_eventDestroyPoseableCloneOverride_Parms Parms; \
	Parms.PoseableClone=PoseableClone; \
	DestroyPoseableCloneOverride.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_DestroyPoseableCloneOverrideDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
