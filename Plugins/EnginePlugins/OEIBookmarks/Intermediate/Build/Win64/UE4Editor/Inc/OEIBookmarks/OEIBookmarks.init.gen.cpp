// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIBookmarks_init() {}
	OEIBOOKMARKS_API UFunction* Z_Construct_UDelegateFunction_OEIBookmarks_OnAddToFolderClicked__DelegateSignature();
	OEIBOOKMARKS_API UFunction* Z_Construct_UDelegateFunction_OEIBookmarks_OnDeleteFolderClicked__DelegateSignature();
	OEIBOOKMARKS_API UFunction* Z_Construct_UDelegateFunction_OEIBookmarks_OnEnterFolderClicked__DelegateSignature();
	OEIBOOKMARKS_API UFunction* Z_Construct_UDelegateFunction_OEIBookmarks_OnEntryClicked__DelegateSignature();
	OEIBOOKMARKS_API UFunction* Z_Construct_UDelegateFunction_OEIBookmarks_OnEntryDeleteClicked__DelegateSignature();
	OEIBOOKMARKS_API UFunction* Z_Construct_UDelegateFunction_OEIBookmarks_OnEntryUpdateClicked__DelegateSignature();
	OEIBOOKMARKS_API UFunction* Z_Construct_UDelegateFunction_OEIBookmarks_OnFolderOpenCloseClicked__DelegateSignature();
	OEIBOOKMARKS_API UFunction* Z_Construct_UDelegateFunction_OEIBookmarks_OnRenameFolderClicked__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OEIBookmarks()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_OEIBookmarks_OnAddToFolderClicked__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OEIBookmarks_OnDeleteFolderClicked__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OEIBookmarks_OnEnterFolderClicked__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OEIBookmarks_OnEntryClicked__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OEIBookmarks_OnEntryDeleteClicked__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OEIBookmarks_OnEntryUpdateClicked__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OEIBookmarks_OnFolderOpenCloseClicked__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OEIBookmarks_OnRenameFolderClicked__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/OEIBookmarks",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE53F6EFB,
				0x6CE25ABA,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
