// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEIBOOKMARKS_OnAddToFolderClickedDelegate_generated_h
#error "OnAddToFolderClickedDelegate.generated.h already included, missing '#pragma once' in OnAddToFolderClickedDelegate.h"
#endif
#define OEIBOOKMARKS_OnAddToFolderClickedDelegate_generated_h

#define Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OnAddToFolderClickedDelegate_h_5_DELEGATE \
struct _Script_OEIBookmarks_eventOnAddToFolderClicked_Parms \
{ \
	FString Folder; \
}; \
static inline void FOnAddToFolderClicked_DelegateWrapper(const FScriptDelegate& OnAddToFolderClicked, const FString& Folder) \
{ \
	_Script_OEIBookmarks_eventOnAddToFolderClicked_Parms Parms; \
	Parms.Folder=Folder; \
	OnAddToFolderClicked.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OnAddToFolderClickedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
