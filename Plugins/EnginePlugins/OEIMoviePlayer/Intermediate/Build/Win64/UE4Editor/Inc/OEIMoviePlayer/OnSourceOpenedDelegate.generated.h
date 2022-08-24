// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEIMOVIEPLAYER_OnSourceOpenedDelegate_generated_h
#error "OnSourceOpenedDelegate.generated.h already included, missing '#pragma once' in OnSourceOpenedDelegate.h"
#endif
#define OEIMOVIEPLAYER_OnSourceOpenedDelegate_generated_h

#define Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OnSourceOpenedDelegate_h_5_DELEGATE \
struct _Script_OEIMoviePlayer_eventOnSourceOpened_Parms \
{ \
	FString OpenedUrl; \
}; \
static inline void FOnSourceOpened_DelegateWrapper(const FMulticastScriptDelegate& OnSourceOpened, const FString& OpenedUrl) \
{ \
	_Script_OEIMoviePlayer_eventOnSourceOpened_Parms Parms; \
	Parms.OpenedUrl=OpenedUrl; \
	OnSourceOpened.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OnSourceOpenedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
