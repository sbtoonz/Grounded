// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVoiceOverData;
#ifdef OEIVOICEOVER_VoiceOverPlaybackStartedDynamicDelegateDelegate_generated_h
#error "VoiceOverPlaybackStartedDynamicDelegateDelegate.generated.h already included, missing '#pragma once' in VoiceOverPlaybackStartedDynamicDelegateDelegate.h"
#endif
#define OEIVOICEOVER_VoiceOverPlaybackStartedDynamicDelegateDelegate_generated_h

#define Test_Plugins_EnginePlugins_OEIAudio_Source_OEIVoiceOver_Public_VoiceOverPlaybackStartedDynamicDelegateDelegate_h_6_DELEGATE \
struct _Script_OEIVoiceOver_eventVoiceOverPlaybackStartedDynamicDelegate_Parms \
{ \
	FVoiceOverData Data; \
	bool bPlaybackStarted; \
	float EstimatedDuration; \
}; \
static inline void FVoiceOverPlaybackStartedDynamicDelegate_DelegateWrapper(const FScriptDelegate& VoiceOverPlaybackStartedDynamicDelegate, FVoiceOverData const& Data, bool bPlaybackStarted, float EstimatedDuration) \
{ \
	_Script_OEIVoiceOver_eventVoiceOverPlaybackStartedDynamicDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bPlaybackStarted=bPlaybackStarted ? true : false; \
	Parms.EstimatedDuration=EstimatedDuration; \
	VoiceOverPlaybackStartedDynamicDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIAudio_Source_OEIVoiceOver_Public_VoiceOverPlaybackStartedDynamicDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
