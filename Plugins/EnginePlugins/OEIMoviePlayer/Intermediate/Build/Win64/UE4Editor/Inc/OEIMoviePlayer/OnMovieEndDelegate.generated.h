// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEIMOVIEPLAYER_OnMovieEndDelegate_generated_h
#error "OnMovieEndDelegate.generated.h already included, missing '#pragma once' in OnMovieEndDelegate.h"
#endif
#define OEIMOVIEPLAYER_OnMovieEndDelegate_generated_h

#define Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OnMovieEndDelegate_h_5_DELEGATE \
struct _Script_OEIMoviePlayer_eventOnMovieEnd_Parms \
{ \
	bool bWasSkipped; \
}; \
static inline void FOnMovieEnd_DelegateWrapper(const FMulticastScriptDelegate& OnMovieEnd, bool bWasSkipped) \
{ \
	_Script_OEIMoviePlayer_eventOnMovieEnd_Parms Parms; \
	Parms.bWasSkipped=bWasSkipped ? true : false; \
	OnMovieEnd.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OnMovieEndDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
