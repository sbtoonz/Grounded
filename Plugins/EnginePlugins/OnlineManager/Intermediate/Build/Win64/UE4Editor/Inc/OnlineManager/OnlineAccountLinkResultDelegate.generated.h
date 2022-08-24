// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
#ifdef ONLINEMANAGER_OnlineAccountLinkResultDelegate_generated_h
#error "OnlineAccountLinkResultDelegate.generated.h already included, missing '#pragma once' in OnlineAccountLinkResultDelegate.h"
#endif
#define ONLINEMANAGER_OnlineAccountLinkResultDelegate_generated_h

#define Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineAccountLinkResultDelegate_h_7_DELEGATE \
struct _Script_OnlineManager_eventOnlineAccountLinkResult_Parms \
{ \
	APlayerController* PlayerController; \
}; \
static inline void FOnlineAccountLinkResult_DelegateWrapper(const FMulticastScriptDelegate& OnlineAccountLinkResult, APlayerController* PlayerController) \
{ \
	_Script_OnlineManager_eventOnlineAccountLinkResult_Parms Parms; \
	Parms.PlayerController=PlayerController; \
	OnlineAccountLinkResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineAccountLinkResultDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
