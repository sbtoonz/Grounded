// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBlueprintSessionResult;
#ifdef ONLINEMANAGER_BlueprintOnlineFindFriendSessionsResultDelegateDelegate_generated_h
#error "BlueprintOnlineFindFriendSessionsResultDelegateDelegate.generated.h already included, missing '#pragma once' in BlueprintOnlineFindFriendSessionsResultDelegateDelegate.h"
#endif
#define ONLINEMANAGER_BlueprintOnlineFindFriendSessionsResultDelegateDelegate_generated_h

#define Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_BlueprintOnlineFindFriendSessionsResultDelegateDelegate_h_6_DELEGATE \
struct _Script_OnlineManager_eventBlueprintOnlineFindFriendSessionsResultDelegate_Parms \
{ \
	TArray<FBlueprintSessionResult> Results; \
}; \
static inline void FBlueprintOnlineFindFriendSessionsResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& BlueprintOnlineFindFriendSessionsResultDelegate, TArray<FBlueprintSessionResult> const& Results) \
{ \
	_Script_OnlineManager_eventBlueprintOnlineFindFriendSessionsResultDelegate_Parms Parms; \
	Parms.Results=Results; \
	BlueprintOnlineFindFriendSessionsResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_BlueprintOnlineFindFriendSessionsResultDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
