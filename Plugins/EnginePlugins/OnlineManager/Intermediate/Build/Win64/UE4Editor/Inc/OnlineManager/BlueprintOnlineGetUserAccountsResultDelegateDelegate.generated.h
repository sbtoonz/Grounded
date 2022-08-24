// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBlueprintUserOnlineAccountResult;
#ifdef ONLINEMANAGER_BlueprintOnlineGetUserAccountsResultDelegateDelegate_generated_h
#error "BlueprintOnlineGetUserAccountsResultDelegateDelegate.generated.h already included, missing '#pragma once' in BlueprintOnlineGetUserAccountsResultDelegateDelegate.h"
#endif
#define ONLINEMANAGER_BlueprintOnlineGetUserAccountsResultDelegateDelegate_generated_h

#define Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_BlueprintOnlineGetUserAccountsResultDelegateDelegate_h_6_DELEGATE \
struct _Script_OnlineManager_eventBlueprintOnlineGetUserAccountsResultDelegate_Parms \
{ \
	TArray<FBlueprintUserOnlineAccountResult> Results; \
}; \
static inline void FBlueprintOnlineGetUserAccountsResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& BlueprintOnlineGetUserAccountsResultDelegate, TArray<FBlueprintUserOnlineAccountResult> const& Results) \
{ \
	_Script_OnlineManager_eventBlueprintOnlineGetUserAccountsResultDelegate_Parms Parms; \
	Parms.Results=Results; \
	BlueprintOnlineGetUserAccountsResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_BlueprintOnlineGetUserAccountsResultDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
