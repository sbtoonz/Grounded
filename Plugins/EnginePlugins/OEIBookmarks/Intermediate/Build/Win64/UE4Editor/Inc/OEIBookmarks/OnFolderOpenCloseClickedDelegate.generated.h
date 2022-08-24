// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEIBOOKMARKS_OnFolderOpenCloseClickedDelegate_generated_h
#error "OnFolderOpenCloseClickedDelegate.generated.h already included, missing '#pragma once' in OnFolderOpenCloseClickedDelegate.h"
#endif
#define OEIBOOKMARKS_OnFolderOpenCloseClickedDelegate_generated_h

#define Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OnFolderOpenCloseClickedDelegate_h_5_DELEGATE \
struct _Script_OEIBookmarks_eventOnFolderOpenCloseClicked_Parms \
{ \
	FString FolderName; \
	bool bIsOpen; \
}; \
static inline void FOnFolderOpenCloseClicked_DelegateWrapper(const FScriptDelegate& OnFolderOpenCloseClicked, const FString& FolderName, bool bIsOpen) \
{ \
	_Script_OEIBookmarks_eventOnFolderOpenCloseClicked_Parms Parms; \
	Parms.FolderName=FolderName; \
	Parms.bIsOpen=bIsOpen ? true : false; \
	OnFolderOpenCloseClicked.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OnFolderOpenCloseClickedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
