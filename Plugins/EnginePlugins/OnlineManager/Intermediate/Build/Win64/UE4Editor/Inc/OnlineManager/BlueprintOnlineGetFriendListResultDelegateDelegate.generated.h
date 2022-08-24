// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBlueprintFriendResult;
#ifdef ONLINEMANAGER_BlueprintOnlineGetFriendListResultDelegateDelegate_generated_h
#error "BlueprintOnlineGetFriendListResultDelegateDelegate.generated.h already included, missing '#pragma once' in BlueprintOnlineGetFriendListResultDelegateDelegate.h"
#endif
#define ONLINEMANAGER_BlueprintOnlineGetFriendListResultDelegateDelegate_generated_h

#define Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_BlueprintOnlineGetFriendListResultDelegateDelegate_h_6_DELEGATE \
struct _Script_OnlineManager_eventBlueprintOnlineGetFriendListResultDelegate_Parms \
{ \
	TArray<FBlueprintFriendResult> Results; \
}; \
static inline void FBlueprintOnlineGetFriendListResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& BlueprintOnlineGetFriendListResultDelegate, TArray<FBlueprintFriendResult> const& Results) \
{ \
	_Script_OnlineManager_eventBlueprintOnlineGetFriendListResultDelegate_Parms Parms; \
	Parms.Results=Results; \
	BlueprintOnlineGetFriendListResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_BlueprintOnlineGetFriendListResultDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
