// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIBookmarks/Public/OnEntryDeleteClickedDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnEntryDeleteClickedDelegate() {}
// Cross Module References
	OEIBOOKMARKS_API UFunction* Z_Construct_UDelegateFunction_OEIBookmarks_OnEntryDeleteClicked__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OEIBookmarks();
	OEIBOOKMARKS_API UScriptStruct* Z_Construct_UScriptStruct_FOEIEditorBookmark();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OEIBookmarks_OnEntryDeleteClicked__DelegateSignature_Statics
	{
		struct _Script_OEIBookmarks_eventOnEntryDeleteClicked_Parms
		{
			FOEIEditorBookmark BookMark;
			FString OwningFolderName;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BookMark;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OEIBookmarks_OnEntryDeleteClicked__DelegateSignature_Statics::NewProp_BookMark = { "BookMark", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OEIBookmarks_eventOnEntryDeleteClicked_Parms, BookMark), Z_Construct_UScriptStruct_FOEIEditorBookmark, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OEIBookmarks_OnEntryDeleteClicked__DelegateSignature_Statics::NewProp_OwningFolderName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OEIBookmarks_OnEntryDeleteClicked__DelegateSignature_Statics::NewProp_OwningFolderName = { "OwningFolderName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OEIBookmarks_eventOnEntryDeleteClicked_Parms, OwningFolderName), METADATA_PARAMS(Z_Construct_UDelegateFunction_OEIBookmarks_OnEntryDeleteClicked__DelegateSignature_Statics::NewProp_OwningFolderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OEIBookmarks_OnEntryDeleteClicked__DelegateSignature_Statics::NewProp_OwningFolderName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OEIBookmarks_OnEntryDeleteClicked__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OEIBookmarks_OnEntryDeleteClicked__DelegateSignature_Statics::NewProp_BookMark,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OEIBookmarks_OnEntryDeleteClicked__DelegateSignature_Statics::NewProp_OwningFolderName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OEIBookmarks_OnEntryDeleteClicked__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnEntryDeleteClickedDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OEIBookmarks_OnEntryDeleteClicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OEIBookmarks, nullptr, "OnEntryDeleteClicked__DelegateSignature", nullptr, nullptr, sizeof(_Script_OEIBookmarks_eventOnEntryDeleteClicked_Parms), Z_Construct_UDelegateFunction_OEIBookmarks_OnEntryDeleteClicked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OEIBookmarks_OnEntryDeleteClicked__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OEIBookmarks_OnEntryDeleteClicked__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OEIBookmarks_OnEntryDeleteClicked__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OEIBookmarks_OnEntryDeleteClicked__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OEIBookmarks_OnEntryDeleteClicked__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
