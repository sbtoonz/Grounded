// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
#ifdef ONLINEMANAGER_OnlineLoginResultDelegate_generated_h
#error "OnlineLoginResultDelegate.generated.h already included, missing '#pragma once' in OnlineLoginResultDelegate.h"
#endif
#define ONLINEMANAGER_OnlineLoginResultDelegate_generated_h

#define Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineLoginResultDelegate_h_7_DELEGATE \
struct _Script_OnlineManager_eventOnlineLoginResult_Parms \
{ \
	APlayerController* PlayerController; \
}; \
static inline void FOnlineLoginResult_DelegateWrapper(const FMulticastScriptDelegate& OnlineLoginResult, APlayerController* PlayerController) \
{ \
	_Script_OnlineManager_eventOnlineLoginResult_Parms Parms; \
	Parms.PlayerController=PlayerController; \
	OnlineLoginResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OnlineManager_Source_OnlineManager_Public_OnlineLoginResultDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
