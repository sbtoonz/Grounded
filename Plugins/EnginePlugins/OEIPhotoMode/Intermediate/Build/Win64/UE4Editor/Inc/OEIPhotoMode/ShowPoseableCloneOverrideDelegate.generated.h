// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
#ifdef OEIPHOTOMODE_ShowPoseableCloneOverrideDelegate_generated_h
#error "ShowPoseableCloneOverrideDelegate.generated.h already included, missing '#pragma once' in ShowPoseableCloneOverrideDelegate.h"
#endif
#define OEIPHOTOMODE_ShowPoseableCloneOverrideDelegate_generated_h

#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_ShowPoseableCloneOverrideDelegate_h_7_DELEGATE \
struct _Script_OEIPhotoMode_eventShowPoseableCloneOverride_Parms \
{ \
	ACharacter* PoseableClone; \
}; \
static inline void FShowPoseableCloneOverride_DelegateWrapper(const FMulticastScriptDelegate& ShowPoseableCloneOverride, ACharacter* PoseableClone) \
{ \
	_Script_OEIPhotoMode_eventShowPoseableCloneOverride_Parms Parms; \
	Parms.PoseableClone=PoseableClone; \
	ShowPoseableCloneOverride.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_ShowPoseableCloneOverrideDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
