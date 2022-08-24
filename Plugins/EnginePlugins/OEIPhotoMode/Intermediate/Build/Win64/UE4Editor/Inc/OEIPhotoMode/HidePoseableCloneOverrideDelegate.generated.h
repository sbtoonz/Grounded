// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
#ifdef OEIPHOTOMODE_HidePoseableCloneOverrideDelegate_generated_h
#error "HidePoseableCloneOverrideDelegate.generated.h already included, missing '#pragma once' in HidePoseableCloneOverrideDelegate.h"
#endif
#define OEIPHOTOMODE_HidePoseableCloneOverrideDelegate_generated_h

#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_HidePoseableCloneOverrideDelegate_h_7_DELEGATE \
struct _Script_OEIPhotoMode_eventHidePoseableCloneOverride_Parms \
{ \
	ACharacter* PoseableClone; \
}; \
static inline void FHidePoseableCloneOverride_DelegateWrapper(const FMulticastScriptDelegate& HidePoseableCloneOverride, ACharacter* PoseableClone) \
{ \
	_Script_OEIPhotoMode_eventHidePoseableCloneOverride_Parms Parms; \
	Parms.PoseableClone=PoseableClone; \
	HidePoseableCloneOverride.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_HidePoseableCloneOverrideDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
