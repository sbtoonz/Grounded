// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPhotoModeEntryAllowedResult : uint8;
#ifdef OEIPHOTOMODE_PhotoModeEntryAllowedDelegate_generated_h
#error "PhotoModeEntryAllowedDelegate.generated.h already included, missing '#pragma once' in PhotoModeEntryAllowedDelegate.h"
#endif
#define OEIPHOTOMODE_PhotoModeEntryAllowedDelegate_generated_h

#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeEntryAllowedDelegate_h_6_DELEGATE \
struct _Script_OEIPhotoMode_eventPhotoModeEntryAllowed_Parms \
{ \
	EPhotoModeEntryAllowedResult ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	_Script_OEIPhotoMode_eventPhotoModeEntryAllowed_Parms() \
		: ReturnValue((EPhotoModeEntryAllowedResult)0) \
	{ \
	} \
}; \
static inline EPhotoModeEntryAllowedResult FPhotoModeEntryAllowed_DelegateWrapper(const FScriptDelegate& PhotoModeEntryAllowed) \
{ \
	_Script_OEIPhotoMode_eventPhotoModeEntryAllowed_Parms Parms; \
	PhotoModeEntryAllowed.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeEntryAllowedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
