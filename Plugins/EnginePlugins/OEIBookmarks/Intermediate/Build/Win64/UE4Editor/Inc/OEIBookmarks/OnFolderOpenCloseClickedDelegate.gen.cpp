// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIBookmarks/Public/OnFolderOpenCloseClickedDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnFolderOpenCloseClickedDelegate() {}
// Cross Module References
	OEIBOOKMARKS_API UFunction* Z_Construct_UDelegateFunction_OEIBookmarks_OnFolderOpenCloseClicked__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OEIBookmarks();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OEIBookmarks_OnFolderOpenCloseClicked__DelegateSignature_Statics
	{
		struct _Script_OEIBookmarks_eventOnFolderOpenCloseClicked_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OEIBookmarks_OnFolderOpenCloseClicked__DelegateSignature_Statics::NewProp_FolderName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OEIBookmarks_OnFolderOpenCloseClicked__DelegateSignature_Statics::NewProp_FolderName = { "FolderName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OEIBookmarks_eventOnFolderOpenCloseClicked_Parms, FolderName), METADATA_PARAMS(Z_Construct_UDelegateFunction_OEIBookmarks_OnFolderOpenCloseClicked__DelegateSignature_Statics::NewProp_FolderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OEIBookmarks_OnFolderOpenCloseClicked__DelegateSignature_Statics::NewProp_FolderName_MetaData)) };
	void Z_Construct_UDelegateFunction_OEIBookmarks_OnFolderOpenCloseClicked__DelegateSignature_Statics::NewProp_bIsOpen_SetBit(void* Obj)
	{
		((_Script_OEIBookmarks_eventOnFolderOpenCloseClicked_Parms*)Obj)->bIsOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OEIBookmarks_OnFolderOpenCloseClicked__DelegateSignature_Statics::NewProp_bIsOpen = { "bIsOpen", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OEIBookmarks_eventOnFolderOpenCloseClicked_Parms), &Z_Construct_UDelegateFunction_OEIBookmarks_OnFolderOpenCloseClicked__DelegateSignature_Statics::NewProp_bIsOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OEIBookmarks_OnFolderOpenCloseClicked__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OEIBookmarks_OnFolderOpenCloseClicked__DelegateSignature_Statics::NewProp_FolderName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OEIBookmarks_OnFolderOpenCloseClicked__DelegateSignature_Statics::NewProp_bIsOpen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OEIBookmarks_OnFolderOpenCloseClicked__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnFolderOpenCloseClickedDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OEIBookmarks_OnFolderOpenCloseClicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OEIBookmarks, nullptr, "OnFolderOpenCloseClicked__DelegateSignature", nullptr, nullptr, sizeof(_Script_OEIBookmarks_eventOnFolderOpenCloseClicked_Parms), Z_Construct_UDelegateFunction_OEIBookmarks_OnFolderOpenCloseClicked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OEIBookmarks_OnFolderOpenCloseClicked__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OEIBookmarks_OnFolderOpenCloseClicked__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OEIBookmarks_OnFolderOpenCloseClicked__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OEIBookmarks_OnFolderOpenCloseClicked__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OEIBookmarks_OnFolderOpenCloseClicked__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
