// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOEIBookmarkEntryBase;
#ifdef OEIBOOKMARKS_OnEntryClickedDelegate_generated_h
#error "OnEntryClickedDelegate.generated.h already included, missing '#pragma once' in OnEntryClickedDelegate.h"
#endif
#define OEIBOOKMARKS_OnEntryClickedDelegate_generated_h

#define Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OnEntryClickedDelegate_h_7_DELEGATE \
struct _Script_OEIBookmarks_eventOnEntryClicked_Parms \
{ \
	UOEIBookmarkEntryBase* Entry; \
}; \
static inline void FOnEntryClicked_DelegateWrapper(const FScriptDelegate& OnEntryClicked, UOEIBookmarkEntryBase* Entry) \
{ \
	_Script_OEIBookmarks_eventOnEntryClicked_Parms Parms; \
	Parms.Entry=Entry; \
	OnEntryClicked.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OnEntryClickedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
