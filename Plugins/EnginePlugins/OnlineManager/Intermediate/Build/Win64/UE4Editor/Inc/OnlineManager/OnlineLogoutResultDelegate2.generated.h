// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
#ifdef ONLINEMANAGER_OnlineLogoutResultDelegate2_generated_h
#error "OnlineLogoutResultDelegate2.generated.h already included, missing '#pragma once' in OnlineLogoutResultDelegate2.h"
#endif
#define ONLINEMANAGER_OnlineLogoutResultDelegate2_generated_h

#define Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineLogoutResultDelegate2_h_7_DELEGATE \
struct _Script_OnlineManager_eventOnlineLogoutResult_Parms \
{ \
	APlayerController* PlayerController; \
}; \
static inline void FOnlineLogoutResult_DelegateWrapper(const FMulticastScriptDelegate& OnlineLogoutResult, APlayerController* PlayerController) \
{ \
	_Script_OnlineManager_eventOnlineLogoutResult_Parms Parms; \
	Parms.PlayerController=PlayerController; \
	OnlineLogoutResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineLogoutResultDelegate2_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
