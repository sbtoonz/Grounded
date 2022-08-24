// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EOnlinePermissionDenyReason : uint8;
#ifdef ONLINEMANAGER_BlueprintOnlineCheckUserPermissionResultDelegateDelegate_generated_h
#error "BlueprintOnlineCheckUserPermissionResultDelegateDelegate.generated.h already included, missing '#pragma once' in BlueprintOnlineCheckUserPermissionResultDelegateDelegate.h"
#endif
#define ONLINEMANAGER_BlueprintOnlineCheckUserPermissionResultDelegateDelegate_generated_h

#define Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_BlueprintOnlineCheckUserPermissionResultDelegateDelegate_h_6_DELEGATE \
struct _Script_OnlineManager_eventBlueprintOnlineCheckUserPermissionResultDelegate_Parms \
{ \
	bool bGranted; \
	EOnlinePermissionDenyReason DenyReason; \
}; \
static inline void FBlueprintOnlineCheckUserPermissionResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& BlueprintOnlineCheckUserPermissionResultDelegate, bool bGranted, EOnlinePermissionDenyReason DenyReason) \
{ \
	_Script_OnlineManager_eventBlueprintOnlineCheckUserPermissionResultDelegate_Parms Parms; \
	Parms.bGranted=bGranted ? true : false; \
	Parms.DenyReason=DenyReason; \
	BlueprintOnlineCheckUserPermissionResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_BlueprintOnlineCheckUserPermissionResultDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
