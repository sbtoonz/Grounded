// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEIPHOTOMODE_PhotoModeExitAllowedDelegate_generated_h
#error "PhotoModeExitAllowedDelegate.generated.h already included, missing '#pragma once' in PhotoModeExitAllowedDelegate.h"
#endif
#define OEIPHOTOMODE_PhotoModeExitAllowedDelegate_generated_h

#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeExitAllowedDelegate_h_5_DELEGATE \
struct _Script_OEIPhotoMode_eventPhotoModeExitAllowed_Parms \
{ \
	bool ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	_Script_OEIPhotoMode_eventPhotoModeExitAllowed_Parms() \
		: ReturnValue(false) \
	{ \
	} \
}; \
static inline bool FPhotoModeExitAllowed_DelegateWrapper(const FScriptDelegate& PhotoModeExitAllowed) \
{ \
	_Script_OEIPhotoMode_eventPhotoModeExitAllowed_Parms Parms; \
	PhotoModeExitAllowed.ProcessDelegate<UObject>(&Parms); \
	return !!Parms.ReturnValue; \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeExitAllowedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
