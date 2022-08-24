// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FOEIEditorBookmark;
class UOEIBookmarkEntryItem;
class UOEIBookmarkEntryFolder;
class UOEIBookmarkEntryBase;
#ifdef OEIBOOKMARKS_OEIBookmarksWidgetBase_generated_h
#error "OEIBookmarksWidgetBase.generated.h already included, missing '#pragma once' in OEIBookmarksWidgetBase.h"
#endif
#define OEIBOOKMARKS_OEIBookmarksWidgetBase_generated_h

#define Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OEIBookmarksWidgetBase_h_20_SPARSE_DATA
#define Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OEIBookmarksWidgetBase_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateBookmarkEntryWidget); \
	DECLARE_FUNCTION(execCreateBookmarkFolderWidget); \
	DECLARE_FUNCTION(execFindWidget); \
	DECLARE_FUNCTION(execOnAddBookmarkClicked); \
	DECLARE_FUNCTION(execOnAddFolderClicked); \
	DECLARE_FUNCTION(execOnAddFromClipboardButtonClicked); \
	DECLARE_FUNCTION(execOnAnyEntryClicked); \
	DECLARE_FUNCTION(execOnClearSearchButtonClicked); \
	DECLARE_FUNCTION(execOnEntryDeleteButtonClicked); \
	DECLARE_FUNCTION(execOnEntryUpdateButtonClicked); \
	DECLARE_FUNCTION(execOnFolderDeleteButtonClicked); \
	DECLARE_FUNCTION(execOnFolderOpenCloseClicked); \
	DECLARE_FUNCTION(execOnMapFilterToggleChanged); \
	DECLARE_FUNCTION(execOnMapOpened); \
	DECLARE_FUNCTION(execOnOpenFileButtonClicked); \
	DECLARE_FUNCTION(execOnRenameFolderClicked); \
	DECLARE_FUNCTION(execOnSearchButtonClicked);


#define Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OEIBookmarksWidgetBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateBookmarkEntryWidget); \
	DECLARE_FUNCTION(execCreateBookmarkFolderWidget); \
	DECLARE_FUNCTION(execFindWidget); \
	DECLARE_FUNCTION(execOnAddBookmarkClicked); \
	DECLARE_FUNCTION(execOnAddFolderClicked); \
	DECLARE_FUNCTION(execOnAddFromClipboardButtonClicked); \
	DECLARE_FUNCTION(execOnAnyEntryClicked); \
	DECLARE_FUNCTION(execOnClearSearchButtonClicked); \
	DECLARE_FUNCTION(execOnEntryDeleteButtonClicked); \
	DECLARE_FUNCTION(execOnEntryUpdateButtonClicked); \
	DECLARE_FUNCTION(execOnFolderDeleteButtonClicked); \
	DECLARE_FUNCTION(execOnFolderOpenCloseClicked); \
	DECLARE_FUNCTION(execOnMapFilterToggleChanged); \
	DECLARE_FUNCTION(execOnMapOpened); \
	DECLARE_FUNCTION(execOnOpenFileButtonClicked); \
	DECLARE_FUNCTION(execOnRenameFolderClicked); \
	DECLARE_FUNCTION(execOnSearchButtonClicked);


#define Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OEIBookmarksWidgetBase_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOEIBookmarksWidgetBase(); \
	friend struct Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UOEIBookmarksWidgetBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OEIBookmarks"), NO_API) \
	DECLARE_SERIALIZER(UOEIBookmarksWidgetBase)


#define Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OEIBookmarksWidgetBase_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUOEIBookmarksWidgetBase(); \
	friend struct Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UOEIBookmarksWidgetBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OEIBookmarks"), NO_API) \
	DECLARE_SERIALIZER(UOEIBookmarksWidgetBase)


#define Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OEIBookmarksWidgetBase_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOEIBookmarksWidgetBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOEIBookmarksWidgetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOEIBookmarksWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOEIBookmarksWidgetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOEIBookmarksWidgetBase(UOEIBookmarksWidgetBase&&); \
	NO_API UOEIBookmarksWidgetBase(const UOEIBookmarksWidgetBase&); \
public:


#define Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OEIBookmarksWidgetBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOEIBookmarksWidgetBase(UOEIBookmarksWidgetBase&&); \
	NO_API UOEIBookmarksWidgetBase(const UOEIBookmarksWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOEIBookmarksWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOEIBookmarksWidgetBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOEIBookmarksWidgetBase)


#define Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OEIBookmarksWidgetBase_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BookmarksData() { return STRUCT_OFFSET(UOEIBookmarksWidgetBase, BookmarksData); } \
	FORCEINLINE static uint32 __PPO__LastClickedEntry() { return STRUCT_OFFSET(UOEIBookmarksWidgetBase, LastClickedEntry); }


#define Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OEIBookmarksWidgetBase_h_18_PROLOG
#define Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OEIBookmarksWidgetBase_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OEIBookmarksWidgetBase_h_20_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OEIBookmarksWidgetBase_h_20_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OEIBookmarksWidgetBase_h_20_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OEIBookmarksWidgetBase_h_20_INCLASS \
	Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OEIBookmarksWidgetBase_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OEIBookmarksWidgetBase_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OEIBookmarksWidgetBase_h_20_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OEIBookmarksWidgetBase_h_20_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OEIBookmarksWidgetBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OEIBookmarksWidgetBase_h_20_INCLASS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OEIBookmarksWidgetBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OEIBOOKMARKS_API UClass* StaticClass<class UOEIBookmarksWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIBookmarks_Source_OEIBookmarks_Public_OEIBookmarksWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
