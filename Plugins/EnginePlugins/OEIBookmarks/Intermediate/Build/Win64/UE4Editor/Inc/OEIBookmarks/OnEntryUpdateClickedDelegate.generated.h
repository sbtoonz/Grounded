// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FOEIEditorBookmark;
#ifdef OEIBOOKMARKS_OnEntryUpdateClickedDelegate_generated_h
#error "OnEntryUpdateClickedDelegate.generated.h already included, missing '#pragma once' in OnEntryUpdateClickedDelegate.h"
#endif
#define OEIBOOKMARKS_OnEntryUpdateClickedDelegate_generated_h

#define Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OnEntryUpdateClickedDelegate_h_6_DELEGATE \
struct _Script_OEIBookmarks_eventOnEntryUpdateClicked_Parms \
{ \
	FOEIEditorBookmark OriginalInfo; \
	FOEIEditorBookmark UpdatedInfo; \
	FString OwningFolderName; \
}; \
static inline void FOnEntryUpdateClicked_DelegateWrapper(const FScriptDelegate& OnEntryUpdateClicked, FOEIEditorBookmark& OriginalInfo, FOEIEditorBookmark& UpdatedInfo, const FString& OwningFolderName) \
{ \
	_Script_OEIBookmarks_eventOnEntryUpdateClicked_Parms Parms; \
	Parms.OriginalInfo=OriginalInfo; \
	Parms.UpdatedInfo=UpdatedInfo; \
	Parms.OwningFolderName=OwningFolderName; \
	OnEntryUpdateClicked.ProcessDelegate<UObject>(&Parms); \
	OriginalInfo=Parms.OriginalInfo; \
	UpdatedInfo=Parms.UpdatedInfo; \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OnEntryUpdateClickedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
