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
#ifdef PLAYFAB_OnPlayFabAdminRequestCompletedDelegate_generated_h
#error "OnPlayFabAdminRequestCompletedDelegate.generated.h already included, missing '#pragma once' in OnPlayFabAdminRequestCompletedDelegate.h"
#endif
#define PLAYFAB_OnPlayFabAdminRequestCompletedDelegate_generated_h

#define Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_OnPlayFabAdminRequestCompletedDelegate_h_8_DELEGATE \
struct _Script_PlayFab_eventOnPlayFabAdminRequestCompleted_Parms \
{ \
	FPlayFabBaseModel response; \
	UObject* customData; \
	bool successful; \
}; \
static inline void FOnPlayFabAdminRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnPlayFabAdminRequestCompleted, FPlayFabBaseModel response, UObject* customData, bool successful) \
{ \
	_Script_PlayFab_eventOnPlayFabAdminRequestCompleted_Parms Parms; \
	Parms.response=response; \
	Parms.customData=customData; \
	Parms.successful=successful ? true : false; \
	OnPlayFabAdminRequestCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_OnPlayFabAdminRequestCompletedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
