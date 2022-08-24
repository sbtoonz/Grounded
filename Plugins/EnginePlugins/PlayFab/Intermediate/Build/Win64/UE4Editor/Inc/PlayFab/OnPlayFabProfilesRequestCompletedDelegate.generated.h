// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPlayFabBaseModel;
class UObject;
#ifdef PLAYFAB_OnPlayFabProfilesRequestCompletedDelegate_generated_h
#error "OnPlayFabProfilesRequestCompletedDelegate.generated.h already included, missing '#pragma once' in OnPlayFabProfilesRequestCompletedDelegate.h"
#endif
#define PLAYFAB_OnPlayFabProfilesRequestCompletedDelegate_generated_h

#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_OnPlayFabProfilesRequestCompletedDelegate_h_8_DELEGATE \
struct _Script_PlayFab_eventOnPlayFabProfilesRequestCompleted_Parms \
{ \
	FPlayFabBaseModel response; \
	UObject* customData; \
	bool successful; \
}; \
static inline void FOnPlayFabProfilesRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabProfilesRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful) \
{ \
	_Script_PlayFab_eventOnPlayFabProfilesRequestCompleted_Parms Parms; \
	Parms.response=response; \
	Parms.customData=customData; \
	Parms.successful=successful ? true : false; \
	OnPlayFabProfilesRequestCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_OnPlayFabProfilesRequestCompletedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
