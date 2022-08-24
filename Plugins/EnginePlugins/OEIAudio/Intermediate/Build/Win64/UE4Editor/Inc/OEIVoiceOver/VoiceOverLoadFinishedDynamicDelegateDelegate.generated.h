// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVoiceOverData;
#ifdef OEIVOICEOVER_VoiceOverLoadFinishedDynamicDelegateDelegate_generated_h
#error "VoiceOverLoadFinishedDynamicDelegateDelegate.generated.h already included, missing '#pragma once' in VoiceOverLoadFinishedDynamicDelegateDelegate.h"
#endif
#define OEIVOICEOVER_VoiceOverLoadFinishedDynamicDelegateDelegate_generated_h

#define Test_Plugins_EnginePlugins_OEIAudio_Source_OEIVoiceOver_Public_VoiceOverLoadFinishedDynamicDelegateDelegate_h_6_DELEGATE \
struct _Script_OEIVoiceOver_eventVoiceOverLoadFinishedDynamicDelegate_Parms \
{ \
	FVoiceOverData Data; \
}; \
static inline void FVoiceOverLoadFinishedDynamicDelegate_DelegateWrapper(const FScriptDelegate& VoiceOverLoadFinishedDynamicDelegate, FVoiceOverData const& Data) \
{ \
	_Script_OEIVoiceOver_eventVoiceOverLoadFinishedDynamicDelegate_Parms Parms; \
	Parms.Data=Data; \
	VoiceOverLoadFinishedDynamicDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIAudio_Source_OEIVoiceOver_Public_VoiceOverLoadFinishedDynamicDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
