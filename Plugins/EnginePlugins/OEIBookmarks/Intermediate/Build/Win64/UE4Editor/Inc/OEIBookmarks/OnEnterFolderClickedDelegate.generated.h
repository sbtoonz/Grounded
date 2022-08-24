// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEIBOOKMARKS_OnEnterFolderClickedDelegate_generated_h
#error "OnEnterFolderClickedDelegate.generated.h already included, missing '#pragma once' in OnEnterFolderClickedDelegate.h"
#endif
#define OEIBOOKMARKS_OnEnterFolderClickedDelegate_generated_h

#define Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OnEnterFolderClickedDelegate_h_5_DELEGATE \
struct _Script_OEIBookmarks_eventOnEnterFolderClicked_Parms \
{ \
	FString FolderName; \
}; \
static inline void FOnEnterFolderClicked_DelegateWrapper(const FScriptDelegate& OnEnterFolderClicked, const FString& FolderName) \
{ \
	_Script_OEIBookmarks_eventOnEnterFolderClicked_Parms Parms; \
	Parms.FolderName=FolderName; \
	OnEnterFolderClicked.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OnEnterFolderClickedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
