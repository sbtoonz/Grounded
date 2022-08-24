// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FOEIEditorBookmark;
#ifdef OEIBOOKMARKS_OnEntryDeleteClickedDelegate_generated_h
#error "OnEntryDeleteClickedDelegate.generated.h already included, missing '#pragma once' in OnEntryDeleteClickedDelegate.h"
#endif
#define OEIBOOKMARKS_OnEntryDeleteClickedDelegate_generated_h

#define Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OnEntryDeleteClickedDelegate_h_6_DELEGATE \
struct _Script_OEIBookmarks_eventOnEntryDeleteClicked_Parms \
{ \
	FOEIEditorBookmark BookMark; \
	FString OwningFolderName; \
}; \
static inline void FOnEntryDeleteClicked_DelegateWrapper(const FScriptDelegate& OnEntryDeleteClicked, FOEIEditorBookmark& BookMark, const FString& OwningFolderName) \
{ \
	_Script_OEIBookmarks_eventOnEntryDeleteClicked_Parms Parms; \
	Parms.BookMark=BookMark; \
	Parms.OwningFolderName=OwningFolderName; \
	OnEntryDeleteClicked.ProcessDelegate<UObject>(&Parms); \
	BookMark=Parms.BookMark; \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OnEntryDeleteClickedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
