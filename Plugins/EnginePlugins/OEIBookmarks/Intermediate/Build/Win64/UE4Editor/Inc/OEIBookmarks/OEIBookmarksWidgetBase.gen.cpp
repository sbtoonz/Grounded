// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIBookmarks/Public/OEIBookmarksWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIBookmarksWidgetBase() {}
// Cross Module References
	OEIBOOKMARKS_API UClass* Z_Construct_UClass_UOEIBookmarksWidgetBase_NoRegister();
	OEIBOOKMARKS_API UClass* Z_Construct_UClass_UOEIBookmarksWidgetBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_OEIBookmarks();
	OEIBOOKMARKS_API UScriptStruct* Z_Construct_UScriptStruct_FOEIEditorBookmark();
	OEIBOOKMARKS_API UClass* Z_Construct_UClass_UOEIBookmarkEntryItem_NoRegister();
	OEIBOOKMARKS_API UClass* Z_Construct_UClass_UOEIBookmarkEntryFolder_NoRegister();
	OEIBOOKMARKS_API UClass* Z_Construct_UClass_UOEIBookmarkEntryBase_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UCheckBox_NoRegister();
	OEIBOOKMARKS_API UScriptStruct* Z_Construct_UScriptStruct_FOEIEditorBookmarks();
// End Cross Module References
	DEFINE_FUNCTION(UOEIBookmarksWidgetBase::execCreateBookmarkEntryWidget)
	{
		P_GET_STRUCT_REF(FOEIEditorBookmark,Z_Param_Out_BookMark);
		P_GET_PROPERTY(FStrProperty,Z_Param_OwningFolderName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Depth);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOEIBookmarkEntryItem**)Z_Param__Result=P_THIS->CreateBookmarkEntryWidget(Z_Param_Out_BookMark,Z_Param_OwningFolderName,Z_Param_Depth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIBookmarksWidgetBase::execCreateBookmarkFolderWidget)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InFolderName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Depth);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOEIBookmarkEntryFolder**)Z_Param__Result=P_THIS->CreateBookmarkFolderWidget(Z_Param_InFolderName,Z_Param_Depth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIBookmarksWidgetBase::execFindWidget)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FolderName);
		P_GET_STRUCT_REF(FOEIEditorBookmark,Z_Param_Out_BookmarkInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOEIBookmarkEntryBase**)Z_Param__Result=P_THIS->FindWidget(Z_Param_FolderName,Z_Param_Out_BookmarkInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIBookmarksWidgetBase::execOnAddBookmarkClicked)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Folder);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAddBookmarkClicked(Z_Param_Folder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIBookmarksWidgetBase::execOnAddFolderClicked)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FolderName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAddFolderClicked(Z_Param_FolderName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIBookmarksWidgetBase::execOnAddFromClipboardButtonClicked)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FolderName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAddFromClipboardButtonClicked(Z_Param_FolderName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIBookmarksWidgetBase::execOnAnyEntryClicked)
	{
		P_GET_OBJECT(UOEIBookmarkEntryBase,Z_Param_ClickedEntry);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAnyEntryClicked(Z_Param_ClickedEntry);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIBookmarksWidgetBase::execOnClearSearchButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClearSearchButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIBookmarksWidgetBase::execOnEntryDeleteButtonClicked)
	{
		P_GET_STRUCT_REF(FOEIEditorBookmark,Z_Param_Out_InBookmark);
		P_GET_PROPERTY(FStrProperty,Z_Param_OwningFolderName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEntryDeleteButtonClicked(Z_Param_Out_InBookmark,Z_Param_OwningFolderName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIBookmarksWidgetBase::execOnEntryUpdateButtonClicked)
	{
		P_GET_STRUCT_REF(FOEIEditorBookmark,Z_Param_Out_OriginalBookmark);
		P_GET_STRUCT_REF(FOEIEditorBookmark,Z_Param_Out_UpdatedBookmark);
		P_GET_PROPERTY(FStrProperty,Z_Param_OwningFolderName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEntryUpdateButtonClicked(Z_Param_Out_OriginalBookmark,Z_Param_Out_UpdatedBookmark,Z_Param_OwningFolderName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIBookmarksWidgetBase::execOnFolderDeleteButtonClicked)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FolderName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFolderDeleteButtonClicked(Z_Param_FolderName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIBookmarksWidgetBase::execOnFolderOpenCloseClicked)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FolderName);
		P_GET_UBOOL(Z_Param_bIsOpen);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFolderOpenCloseClicked(Z_Param_FolderName,Z_Param_bIsOpen);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIBookmarksWidgetBase::execOnMapFilterToggleChanged)
	{
		P_GET_UBOOL(Z_Param_Checked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMapFilterToggleChanged(Z_Param_Checked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIBookmarksWidgetBase::execOnMapOpened)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_GET_UBOOL(Z_Param_bAsTemplate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMapOpened(Z_Param_Filename,Z_Param_bAsTemplate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIBookmarksWidgetBase::execOnOpenFileButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOpenFileButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIBookmarksWidgetBase::execOnRenameFolderClicked)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_OldName);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRenameFolderClicked(Z_Param_OldName,Z_Param_NewName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIBookmarksWidgetBase::execOnSearchButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSearchButtonClicked();
		P_NATIVE_END;
	}
	void UOEIBookmarksWidgetBase::StaticRegisterNativesUOEIBookmarksWidgetBase()
	{
		UClass* Class = UOEIBookmarksWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateBookmarkEntryWidget", &UOEIBookmarksWidgetBase::execCreateBookmarkEntryWidget },
			{ "CreateBookmarkFolderWidget", &UOEIBookmarksWidgetBase::execCreateBookmarkFolderWidget },
			{ "FindWidget", &UOEIBookmarksWidgetBase::execFindWidget },
			{ "OnAddBookmarkClicked", &UOEIBookmarksWidgetBase::execOnAddBookmarkClicked },
			{ "OnAddFolderClicked", &UOEIBookmarksWidgetBase::execOnAddFolderClicked },
			{ "OnAddFromClipboardButtonClicked", &UOEIBookmarksWidgetBase::execOnAddFromClipboardButtonClicked },
			{ "OnAnyEntryClicked", &UOEIBookmarksWidgetBase::execOnAnyEntryClicked },
			{ "OnClearSearchButtonClicked", &UOEIBookmarksWidgetBase::execOnClearSearchButtonClicked },
			{ "OnEntryDeleteButtonClicked", &UOEIBookmarksWidgetBase::execOnEntryDeleteButtonClicked },
			{ "OnEntryUpdateButtonClicked", &UOEIBookmarksWidgetBase::execOnEntryUpdateButtonClicked },
			{ "OnFolderDeleteButtonClicked", &UOEIBookmarksWidgetBase::execOnFolderDeleteButtonClicked },
			{ "OnFolderOpenCloseClicked", &UOEIBookmarksWidgetBase::execOnFolderOpenCloseClicked },
			{ "OnMapFilterToggleChanged", &UOEIBookmarksWidgetBase::execOnMapFilterToggleChanged },
			{ "OnMapOpened", &UOEIBookmarksWidgetBase::execOnMapOpened },
			{ "OnOpenFileButtonClicked", &UOEIBookmarksWidgetBase::execOnOpenFileButtonClicked },
			{ "OnRenameFolderClicked", &UOEIBookmarksWidgetBase::execOnRenameFolderClicked },
			{ "OnSearchButtonClicked", &UOEIBookmarksWidgetBase::execOnSearchButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkEntryWidget_Statics
	{
		struct OEIBookmarksWidgetBase_eventCreateBookmarkEntryWidget_Parms
		{
			FOEIEditorBookmark BookMark;
			FString OwningFolderName;
			int32 Depth;
			UOEIBookmarkEntryItem* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BookMark;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningFolderName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OwningFolderName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Depth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkEntryWidget_Statics::NewProp_BookMark = { "BookMark", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIBookmarksWidgetBase_eventCreateBookmarkEntryWidget_Parms, BookMark), Z_Construct_UScriptStruct_FOEIEditorBookmark, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkEntryWidget_Statics::NewProp_OwningFolderName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkEntryWidget_Statics::NewProp_OwningFolderName = { "OwningFolderName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIBookmarksWidgetBase_eventCreateBookmarkEntryWidget_Parms, OwningFolderName), METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkEntryWidget_Statics::NewProp_OwningFolderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkEntryWidget_Statics::NewProp_OwningFolderName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkEntryWidget_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIBookmarksWidgetBase_eventCreateBookmarkEntryWidget_Parms, Depth), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkEntryWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkEntryWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIBookmarksWidgetBase_eventCreateBookmarkEntryWidget_Parms, ReturnValue), Z_Construct_UClass_UOEIBookmarkEntryItem_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkEntryWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkEntryWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkEntryWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkEntryWidget_Statics::NewProp_BookMark,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkEntryWidget_Statics::NewProp_OwningFolderName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkEntryWidget_Statics::NewProp_Depth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkEntryWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkEntryWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarksWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkEntryWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarksWidgetBase, nullptr, "CreateBookmarkEntryWidget", nullptr, nullptr, sizeof(OEIBookmarksWidgetBase_eventCreateBookmarkEntryWidget_Parms), Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkEntryWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkEntryWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkEntryWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkEntryWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkEntryWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkEntryWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkFolderWidget_Statics
	{
		struct OEIBookmarksWidgetBase_eventCreateBookmarkFolderWidget_Parms
		{
			FString InFolderName;
			int32 Depth;
			UOEIBookmarkEntryFolder* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFolderName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFolderName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Depth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkFolderWidget_Statics::NewProp_InFolderName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkFolderWidget_Statics::NewProp_InFolderName = { "InFolderName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIBookmarksWidgetBase_eventCreateBookmarkFolderWidget_Parms, InFolderName), METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkFolderWidget_Statics::NewProp_InFolderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkFolderWidget_Statics::NewProp_InFolderName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkFolderWidget_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIBookmarksWidgetBase_eventCreateBookmarkFolderWidget_Parms, Depth), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkFolderWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkFolderWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIBookmarksWidgetBase_eventCreateBookmarkFolderWidget_Parms, ReturnValue), Z_Construct_UClass_UOEIBookmarkEntryFolder_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkFolderWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkFolderWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkFolderWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkFolderWidget_Statics::NewProp_InFolderName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkFolderWidget_Statics::NewProp_Depth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkFolderWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkFolderWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarksWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkFolderWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarksWidgetBase, nullptr, "CreateBookmarkFolderWidget", nullptr, nullptr, sizeof(OEIBookmarksWidgetBase_eventCreateBookmarkFolderWidget_Parms), Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkFolderWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkFolderWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkFolderWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkFolderWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkFolderWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkFolderWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIBookmarksWidgetBase_FindWidget_Statics
	{
		struct OEIBookmarksWidgetBase_eventFindWidget_Parms
		{
			FString FolderName;
			FOEIEditorBookmark BookmarkInfo;
			UOEIBookmarkEntryBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FolderName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BookmarkInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BookmarkInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_FindWidget_Statics::NewProp_FolderName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_FindWidget_Statics::NewProp_FolderName = { "FolderName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIBookmarksWidgetBase_eventFindWidget_Parms, FolderName), METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_FindWidget_Statics::NewProp_FolderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_FindWidget_Statics::NewProp_FolderName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_FindWidget_Statics::NewProp_BookmarkInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_FindWidget_Statics::NewProp_BookmarkInfo = { "BookmarkInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIBookmarksWidgetBase_eventFindWidget_Parms, BookmarkInfo), Z_Construct_UScriptStruct_FOEIEditorBookmark, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_FindWidget_Statics::NewProp_BookmarkInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_FindWidget_Statics::NewProp_BookmarkInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_FindWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_FindWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIBookmarksWidgetBase_eventFindWidget_Parms, ReturnValue), Z_Construct_UClass_UOEIBookmarkEntryBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_FindWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_FindWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIBookmarksWidgetBase_FindWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIBookmarksWidgetBase_FindWidget_Statics::NewProp_FolderName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIBookmarksWidgetBase_FindWidget_Statics::NewProp_BookmarkInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIBookmarksWidgetBase_FindWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_FindWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarksWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_FindWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarksWidgetBase, nullptr, "FindWidget", nullptr, nullptr, sizeof(OEIBookmarksWidgetBase_eventFindWidget_Parms), Z_Construct_UFunction_UOEIBookmarksWidgetBase_FindWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_FindWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_FindWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_FindWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarksWidgetBase_FindWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarksWidgetBase_FindWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddBookmarkClicked_Statics
	{
		struct OEIBookmarksWidgetBase_eventOnAddBookmarkClicked_Parms
		{
			FString Folder;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Folder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Folder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddBookmarkClicked_Statics::NewProp_Folder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddBookmarkClicked_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIBookmarksWidgetBase_eventOnAddBookmarkClicked_Parms, Folder), METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddBookmarkClicked_Statics::NewProp_Folder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddBookmarkClicked_Statics::NewProp_Folder_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddBookmarkClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddBookmarkClicked_Statics::NewProp_Folder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddBookmarkClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarksWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddBookmarkClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarksWidgetBase, nullptr, "OnAddBookmarkClicked", nullptr, nullptr, sizeof(OEIBookmarksWidgetBase_eventOnAddBookmarkClicked_Parms), Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddBookmarkClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddBookmarkClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddBookmarkClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddBookmarkClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddBookmarkClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddBookmarkClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddFolderClicked_Statics
	{
		struct OEIBookmarksWidgetBase_eventOnAddFolderClicked_Parms
		{
			FString FolderName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FolderName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddFolderClicked_Statics::NewProp_FolderName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddFolderClicked_Statics::NewProp_FolderName = { "FolderName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIBookmarksWidgetBase_eventOnAddFolderClicked_Parms, FolderName), METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddFolderClicked_Statics::NewProp_FolderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddFolderClicked_Statics::NewProp_FolderName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddFolderClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddFolderClicked_Statics::NewProp_FolderName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddFolderClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarksWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddFolderClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarksWidgetBase, nullptr, "OnAddFolderClicked", nullptr, nullptr, sizeof(OEIBookmarksWidgetBase_eventOnAddFolderClicked_Parms), Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddFolderClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddFolderClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddFolderClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddFolderClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddFolderClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddFolderClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddFromClipboardButtonClicked_Statics
	{
		struct OEIBookmarksWidgetBase_eventOnAddFromClipboardButtonClicked_Parms
		{
			FString FolderName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FolderName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddFromClipboardButtonClicked_Statics::NewProp_FolderName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddFromClipboardButtonClicked_Statics::NewProp_FolderName = { "FolderName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIBookmarksWidgetBase_eventOnAddFromClipboardButtonClicked_Parms, FolderName), METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddFromClipboardButtonClicked_Statics::NewProp_FolderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddFromClipboardButtonClicked_Statics::NewProp_FolderName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddFromClipboardButtonClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddFromClipboardButtonClicked_Statics::NewProp_FolderName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddFromClipboardButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarksWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddFromClipboardButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarksWidgetBase, nullptr, "OnAddFromClipboardButtonClicked", nullptr, nullptr, sizeof(OEIBookmarksWidgetBase_eventOnAddFromClipboardButtonClicked_Parms), Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddFromClipboardButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddFromClipboardButtonClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddFromClipboardButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddFromClipboardButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddFromClipboardButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddFromClipboardButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAnyEntryClicked_Statics
	{
		struct OEIBookmarksWidgetBase_eventOnAnyEntryClicked_Parms
		{
			UOEIBookmarkEntryBase* ClickedEntry;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedEntry_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedEntry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAnyEntryClicked_Statics::NewProp_ClickedEntry_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAnyEntryClicked_Statics::NewProp_ClickedEntry = { "ClickedEntry", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIBookmarksWidgetBase_eventOnAnyEntryClicked_Parms, ClickedEntry), Z_Construct_UClass_UOEIBookmarkEntryBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAnyEntryClicked_Statics::NewProp_ClickedEntry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAnyEntryClicked_Statics::NewProp_ClickedEntry_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAnyEntryClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAnyEntryClicked_Statics::NewProp_ClickedEntry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAnyEntryClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarksWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAnyEntryClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarksWidgetBase, nullptr, "OnAnyEntryClicked", nullptr, nullptr, sizeof(OEIBookmarksWidgetBase_eventOnAnyEntryClicked_Parms), Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAnyEntryClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAnyEntryClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAnyEntryClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAnyEntryClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAnyEntryClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAnyEntryClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnClearSearchButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnClearSearchButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarksWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnClearSearchButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarksWidgetBase, nullptr, "OnClearSearchButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnClearSearchButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnClearSearchButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnClearSearchButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnClearSearchButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryDeleteButtonClicked_Statics
	{
		struct OEIBookmarksWidgetBase_eventOnEntryDeleteButtonClicked_Parms
		{
			FOEIEditorBookmark InBookmark;
			FString OwningFolderName;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBookmark;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningFolderName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OwningFolderName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryDeleteButtonClicked_Statics::NewProp_InBookmark = { "InBookmark", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIBookmarksWidgetBase_eventOnEntryDeleteButtonClicked_Parms, InBookmark), Z_Construct_UScriptStruct_FOEIEditorBookmark, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryDeleteButtonClicked_Statics::NewProp_OwningFolderName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryDeleteButtonClicked_Statics::NewProp_OwningFolderName = { "OwningFolderName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIBookmarksWidgetBase_eventOnEntryDeleteButtonClicked_Parms, OwningFolderName), METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryDeleteButtonClicked_Statics::NewProp_OwningFolderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryDeleteButtonClicked_Statics::NewProp_OwningFolderName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryDeleteButtonClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryDeleteButtonClicked_Statics::NewProp_InBookmark,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryDeleteButtonClicked_Statics::NewProp_OwningFolderName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryDeleteButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarksWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryDeleteButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarksWidgetBase, nullptr, "OnEntryDeleteButtonClicked", nullptr, nullptr, sizeof(OEIBookmarksWidgetBase_eventOnEntryDeleteButtonClicked_Parms), Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryDeleteButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryDeleteButtonClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryDeleteButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryDeleteButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryDeleteButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryDeleteButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryUpdateButtonClicked_Statics
	{
		struct OEIBookmarksWidgetBase_eventOnEntryUpdateButtonClicked_Parms
		{
			FOEIEditorBookmark OriginalBookmark;
			FOEIEditorBookmark UpdatedBookmark;
			FString OwningFolderName;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalBookmark;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpdatedBookmark;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningFolderName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OwningFolderName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryUpdateButtonClicked_Statics::NewProp_OriginalBookmark = { "OriginalBookmark", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIBookmarksWidgetBase_eventOnEntryUpdateButtonClicked_Parms, OriginalBookmark), Z_Construct_UScriptStruct_FOEIEditorBookmark, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryUpdateButtonClicked_Statics::NewProp_UpdatedBookmark = { "UpdatedBookmark", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIBookmarksWidgetBase_eventOnEntryUpdateButtonClicked_Parms, UpdatedBookmark), Z_Construct_UScriptStruct_FOEIEditorBookmark, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryUpdateButtonClicked_Statics::NewProp_OwningFolderName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryUpdateButtonClicked_Statics::NewProp_OwningFolderName = { "OwningFolderName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIBookmarksWidgetBase_eventOnEntryUpdateButtonClicked_Parms, OwningFolderName), METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryUpdateButtonClicked_Statics::NewProp_OwningFolderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryUpdateButtonClicked_Statics::NewProp_OwningFolderName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryUpdateButtonClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryUpdateButtonClicked_Statics::NewProp_OriginalBookmark,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryUpdateButtonClicked_Statics::NewProp_UpdatedBookmark,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryUpdateButtonClicked_Statics::NewProp_OwningFolderName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryUpdateButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarksWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryUpdateButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarksWidgetBase, nullptr, "OnEntryUpdateButtonClicked", nullptr, nullptr, sizeof(OEIBookmarksWidgetBase_eventOnEntryUpdateButtonClicked_Parms), Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryUpdateButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryUpdateButtonClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryUpdateButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryUpdateButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryUpdateButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryUpdateButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderDeleteButtonClicked_Statics
	{
		struct OEIBookmarksWidgetBase_eventOnFolderDeleteButtonClicked_Parms
		{
			FString FolderName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FolderName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderDeleteButtonClicked_Statics::NewProp_FolderName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderDeleteButtonClicked_Statics::NewProp_FolderName = { "FolderName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIBookmarksWidgetBase_eventOnFolderDeleteButtonClicked_Parms, FolderName), METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderDeleteButtonClicked_Statics::NewProp_FolderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderDeleteButtonClicked_Statics::NewProp_FolderName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderDeleteButtonClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderDeleteButtonClicked_Statics::NewProp_FolderName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderDeleteButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarksWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderDeleteButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarksWidgetBase, nullptr, "OnFolderDeleteButtonClicked", nullptr, nullptr, sizeof(OEIBookmarksWidgetBase_eventOnFolderDeleteButtonClicked_Parms), Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderDeleteButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderDeleteButtonClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderDeleteButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderDeleteButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderDeleteButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderDeleteButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderOpenCloseClicked_Statics
	{
		struct OEIBookmarksWidgetBase_eventOnFolderOpenCloseClicked_Parms
		{
			FString FolderName;
			bool bIsOpen;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FolderName;
		static void NewProp_bIsOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderOpenCloseClicked_Statics::NewProp_FolderName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderOpenCloseClicked_Statics::NewProp_FolderName = { "FolderName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIBookmarksWidgetBase_eventOnFolderOpenCloseClicked_Parms, FolderName), METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderOpenCloseClicked_Statics::NewProp_FolderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderOpenCloseClicked_Statics::NewProp_FolderName_MetaData)) };
	void Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderOpenCloseClicked_Statics::NewProp_bIsOpen_SetBit(void* Obj)
	{
		((OEIBookmarksWidgetBase_eventOnFolderOpenCloseClicked_Parms*)Obj)->bIsOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderOpenCloseClicked_Statics::NewProp_bIsOpen = { "bIsOpen", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OEIBookmarksWidgetBase_eventOnFolderOpenCloseClicked_Parms), &Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderOpenCloseClicked_Statics::NewProp_bIsOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderOpenCloseClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderOpenCloseClicked_Statics::NewProp_FolderName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderOpenCloseClicked_Statics::NewProp_bIsOpen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderOpenCloseClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarksWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderOpenCloseClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarksWidgetBase, nullptr, "OnFolderOpenCloseClicked", nullptr, nullptr, sizeof(OEIBookmarksWidgetBase_eventOnFolderOpenCloseClicked_Parms), Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderOpenCloseClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderOpenCloseClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderOpenCloseClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderOpenCloseClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderOpenCloseClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderOpenCloseClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapFilterToggleChanged_Statics
	{
		struct OEIBookmarksWidgetBase_eventOnMapFilterToggleChanged_Parms
		{
			bool Checked;
		};
		static void NewProp_Checked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Checked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapFilterToggleChanged_Statics::NewProp_Checked_SetBit(void* Obj)
	{
		((OEIBookmarksWidgetBase_eventOnMapFilterToggleChanged_Parms*)Obj)->Checked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapFilterToggleChanged_Statics::NewProp_Checked = { "Checked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OEIBookmarksWidgetBase_eventOnMapFilterToggleChanged_Parms), &Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapFilterToggleChanged_Statics::NewProp_Checked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapFilterToggleChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapFilterToggleChanged_Statics::NewProp_Checked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapFilterToggleChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarksWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapFilterToggleChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarksWidgetBase, nullptr, "OnMapFilterToggleChanged", nullptr, nullptr, sizeof(OEIBookmarksWidgetBase_eventOnMapFilterToggleChanged_Parms), Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapFilterToggleChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapFilterToggleChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapFilterToggleChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapFilterToggleChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapFilterToggleChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapFilterToggleChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapOpened_Statics
	{
		struct OEIBookmarksWidgetBase_eventOnMapOpened_Parms
		{
			FString Filename;
			bool bAsTemplate;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static void NewProp_bAsTemplate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAsTemplate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapOpened_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapOpened_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIBookmarksWidgetBase_eventOnMapOpened_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapOpened_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapOpened_Statics::NewProp_Filename_MetaData)) };
	void Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapOpened_Statics::NewProp_bAsTemplate_SetBit(void* Obj)
	{
		((OEIBookmarksWidgetBase_eventOnMapOpened_Parms*)Obj)->bAsTemplate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapOpened_Statics::NewProp_bAsTemplate = { "bAsTemplate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OEIBookmarksWidgetBase_eventOnMapOpened_Parms), &Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapOpened_Statics::NewProp_bAsTemplate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapOpened_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapOpened_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapOpened_Statics::NewProp_bAsTemplate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapOpened_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarksWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarksWidgetBase, nullptr, "OnMapOpened", nullptr, nullptr, sizeof(OEIBookmarksWidgetBase_eventOnMapOpened_Parms), Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapOpened_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapOpened_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapOpened_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapOpened_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapOpened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapOpened_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnOpenFileButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnOpenFileButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarksWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnOpenFileButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarksWidgetBase, nullptr, "OnOpenFileButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnOpenFileButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnOpenFileButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnOpenFileButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnOpenFileButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnRenameFolderClicked_Statics
	{
		struct OEIBookmarksWidgetBase_eventOnRenameFolderClicked_Parms
		{
			FString OldName;
			FString NewName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnRenameFolderClicked_Statics::NewProp_OldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnRenameFolderClicked_Statics::NewProp_OldName = { "OldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIBookmarksWidgetBase_eventOnRenameFolderClicked_Parms, OldName), METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnRenameFolderClicked_Statics::NewProp_OldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnRenameFolderClicked_Statics::NewProp_OldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnRenameFolderClicked_Statics::NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnRenameFolderClicked_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIBookmarksWidgetBase_eventOnRenameFolderClicked_Parms, NewName), METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnRenameFolderClicked_Statics::NewProp_NewName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnRenameFolderClicked_Statics::NewProp_NewName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnRenameFolderClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnRenameFolderClicked_Statics::NewProp_OldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnRenameFolderClicked_Statics::NewProp_NewName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnRenameFolderClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarksWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnRenameFolderClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarksWidgetBase, nullptr, "OnRenameFolderClicked", nullptr, nullptr, sizeof(OEIBookmarksWidgetBase_eventOnRenameFolderClicked_Parms), Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnRenameFolderClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnRenameFolderClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnRenameFolderClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnRenameFolderClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnRenameFolderClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnRenameFolderClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnSearchButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnSearchButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIBookmarksWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnSearchButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIBookmarksWidgetBase, nullptr, "OnSearchButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnSearchButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnSearchButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnSearchButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnSearchButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOEIBookmarksWidgetBase_NoRegister()
	{
		return UOEIBookmarksWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Switcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Switcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SearchBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SearchButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearSearchButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClearSearchButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BookmarksScrollBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BookmarksScrollBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EntryWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderEntryWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FolderEntryWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenFileButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OpenFileButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterByMapToggle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FilterByMapToggle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BookmarksData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BookmarksData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastClickedEntry_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastClickedEntry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIBookmarks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkEntryWidget, "CreateBookmarkEntryWidget" }, // 3452553925
		{ &Z_Construct_UFunction_UOEIBookmarksWidgetBase_CreateBookmarkFolderWidget, "CreateBookmarkFolderWidget" }, // 1288697408
		{ &Z_Construct_UFunction_UOEIBookmarksWidgetBase_FindWidget, "FindWidget" }, // 3158489892
		{ &Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddBookmarkClicked, "OnAddBookmarkClicked" }, // 3391446664
		{ &Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddFolderClicked, "OnAddFolderClicked" }, // 1612835462
		{ &Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAddFromClipboardButtonClicked, "OnAddFromClipboardButtonClicked" }, // 1011955652
		{ &Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnAnyEntryClicked, "OnAnyEntryClicked" }, // 259862295
		{ &Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnClearSearchButtonClicked, "OnClearSearchButtonClicked" }, // 2021241866
		{ &Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryDeleteButtonClicked, "OnEntryDeleteButtonClicked" }, // 3185695992
		{ &Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnEntryUpdateButtonClicked, "OnEntryUpdateButtonClicked" }, // 3832611317
		{ &Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderDeleteButtonClicked, "OnFolderDeleteButtonClicked" }, // 66351622
		{ &Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnFolderOpenCloseClicked, "OnFolderOpenCloseClicked" }, // 771504050
		{ &Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapFilterToggleChanged, "OnMapFilterToggleChanged" }, // 1051257784
		{ &Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnMapOpened, "OnMapOpened" }, // 2969041802
		{ &Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnOpenFileButtonClicked, "OnOpenFileButtonClicked" }, // 1588704138
		{ &Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnRenameFolderClicked, "OnRenameFolderClicked" }, // 1251556124
		{ &Z_Construct_UFunction_UOEIBookmarksWidgetBase_OnSearchButtonClicked, "OnSearchButtonClicked" }, // 3475334532
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEIBookmarksWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEIBookmarksWidgetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_Switcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIBookmarksWidgetBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OEIBookmarksWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_Switcher = { "Switcher", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIBookmarksWidgetBase, Switcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_Switcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_Switcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_SearchBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIBookmarksWidgetBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OEIBookmarksWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_SearchBox = { "SearchBox", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIBookmarksWidgetBase, SearchBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_SearchBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_SearchBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_SearchButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIBookmarksWidgetBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OEIBookmarksWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_SearchButton = { "SearchButton", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIBookmarksWidgetBase, SearchButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_SearchButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_SearchButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_ClearSearchButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIBookmarksWidgetBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OEIBookmarksWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_ClearSearchButton = { "ClearSearchButton", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIBookmarksWidgetBase, ClearSearchButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_ClearSearchButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_ClearSearchButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_BookmarksScrollBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIBookmarksWidgetBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OEIBookmarksWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_BookmarksScrollBox = { "BookmarksScrollBox", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIBookmarksWidgetBase, BookmarksScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_BookmarksScrollBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_BookmarksScrollBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_EntryWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIBookmarksWidgetBase" },
		{ "ModuleRelativePath", "Public/OEIBookmarksWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_EntryWidgetClass = { "EntryWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIBookmarksWidgetBase, EntryWidgetClass), Z_Construct_UClass_UOEIBookmarkEntryItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_EntryWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_EntryWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_FolderEntryWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIBookmarksWidgetBase" },
		{ "ModuleRelativePath", "Public/OEIBookmarksWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_FolderEntryWidgetClass = { "FolderEntryWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIBookmarksWidgetBase, FolderEntryWidgetClass), Z_Construct_UClass_UOEIBookmarkEntryFolder_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_FolderEntryWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_FolderEntryWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_OpenFileButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIBookmarksWidgetBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OEIBookmarksWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_OpenFileButton = { "OpenFileButton", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIBookmarksWidgetBase, OpenFileButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_OpenFileButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_OpenFileButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_FilterByMapToggle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIBookmarksWidgetBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OEIBookmarksWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_FilterByMapToggle = { "FilterByMapToggle", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIBookmarksWidgetBase, FilterByMapToggle), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_FilterByMapToggle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_FilterByMapToggle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_BookmarksData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIBookmarksWidgetBase" },
		{ "ModuleRelativePath", "Public/OEIBookmarksWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_BookmarksData = { "BookmarksData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIBookmarksWidgetBase, BookmarksData), Z_Construct_UScriptStruct_FOEIEditorBookmarks, METADATA_PARAMS(Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_BookmarksData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_BookmarksData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_LastClickedEntry_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIBookmarksWidgetBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OEIBookmarksWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_LastClickedEntry = { "LastClickedEntry", nullptr, (EPropertyFlags)0x004000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIBookmarksWidgetBase, LastClickedEntry), Z_Construct_UClass_UOEIBookmarkEntryBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_LastClickedEntry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_LastClickedEntry_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_Switcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_SearchBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_SearchButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_ClearSearchButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_BookmarksScrollBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_EntryWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_FolderEntryWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_OpenFileButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_FilterByMapToggle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_BookmarksData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::NewProp_LastClickedEntry,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEIBookmarksWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::ClassParams = {
		&UOEIBookmarksWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEIBookmarksWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEIBookmarksWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEIBookmarksWidgetBase, 2152590765);
	template<> OEIBOOKMARKS_API UClass* StaticClass<UOEIBookmarksWidgetBase>()
	{
		return UOEIBookmarksWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEIBookmarksWidgetBase(Z_Construct_UClass_UOEIBookmarksWidgetBase, &UOEIBookmarksWidgetBase::StaticClass, TEXT("/Script/OEIBookmarks"), TEXT("UOEIBookmarksWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEIBookmarksWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
