// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EOnlineUserPrivilegeDenyReason : uint8;
#ifdef ONLINEMANAGER_BlueprintOnlineCheckUserPrivilegeResultDelegateDelegate_generated_h
#error "BlueprintOnlineCheckUserPrivilegeResultDelegateDelegate.generated.h already included, missing '#pragma once' in BlueprintOnlineCheckUserPrivilegeResultDelegateDelegate.h"
#endif
#define ONLINEMANAGER_BlueprintOnlineCheckUserPrivilegeResultDelegateDelegate_generated_h

#define Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_BlueprintOnlineCheckUserPrivilegeResultDelegateDelegate_h_6_DELEGATE \
struct _Script_OnlineManager_eventBlueprintOnlineCheckUserPrivilegeResultDelegate_Parms \
{ \
	bool bGranted; \
	EOnlineUserPrivilegeDenyReason DenyReason; \
}; \
static inline void FBlueprintOnlineCheckUserPrivilegeResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& BlueprintOnlineCheckUserPrivilegeResultDelegate, bool bGranted, EOnlineUserPrivilegeDenyReason DenyReason) \
{ \
	_Script_OnlineManager_eventBlueprintOnlineCheckUserPrivilegeResultDelegate_Parms Parms; \
	Parms.bGranted=bGranted ? true : false; \
	Parms.DenyReason=DenyReason; \
	BlueprintOnlineCheckUserPrivilegeResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_BlueprintOnlineCheckUserPrivilegeResultDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
