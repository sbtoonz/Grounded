// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEIBOOKMARKS_OnRenameFolderClickedDelegate_generated_h
#error "OnRenameFolderClickedDelegate.generated.h already included, missing '#pragma once' in OnRenameFolderClickedDelegate.h"
#endif
#define OEIBOOKMARKS_OnRenameFolderClickedDelegate_generated_h

#define Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OnRenameFolderClickedDelegate_h_5_DELEGATE \
struct _Script_OEIBookmarks_eventOnRenameFolderClicked_Parms \
{ \
	FString OriginalFolderName; \
	FString NewFolderName; \
}; \
static inline void FOnRenameFolderClicked_DelegateWrapper(const FScriptDelegate& OnRenameFolderClicked, const FString& OriginalFolderName, const FString& NewFolderName) \
{ \
	_Script_OEIBookmarks_eventOnRenameFolderClicked_Parms Parms; \
	Parms.OriginalFolderName=OriginalFolderName; \
	Parms.NewFolderName=NewFolderName; \
	OnRenameFolderClicked.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OnRenameFolderClickedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
