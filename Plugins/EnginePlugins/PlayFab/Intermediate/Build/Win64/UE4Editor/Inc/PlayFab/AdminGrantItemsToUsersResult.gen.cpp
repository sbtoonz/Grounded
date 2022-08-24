// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminGrantItemsToUsersResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminGrantItemsToUsersResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminGrantItemsToUsersResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminGrantItemsToUsersResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAdminGrantItemsToUsersResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAdminGrantItemsToUsersResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminGrantItemsToUsersResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminGrantItemsToUsersResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminGrantItemsToUsersResult"), sizeof(FAdminGrantItemsToUsersResult), Get_Z_Construct_UScriptStruct_FAdminGrantItemsToUsersResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminGrantItemsToUsersResult>()
{
	return FAdminGrantItemsToUsersResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminGrantItemsToUsersResult(FAdminGrantItemsToUsersResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminGrantItemsToUsersResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminGrantItemsToUsersResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminGrantItemsToUsersResult()
	{
		UScriptStruct::DeferCppStructOps<FAdminGrantItemsToUsersResult>(FName(TEXT("AdminGrantItemsToUsersResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminGrantItemsToUsersResult;
	struct Z_Construct_UScriptStruct_FAdminGrantItemsToUsersResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemGrantResults_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemGrantResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemGrantResults;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGrantItemsToUsersResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminGrantItemsToUsersResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminGrantItemsToUsersResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminGrantItemsToUsersResult>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminGrantItemsToUsersResult_Statics::NewProp_ItemGrantResults_Inner = { "ItemGrantResults", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGrantItemsToUsersResult_Statics::NewProp_ItemGrantResults_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGrantItemsToUsersResult" },
		{ "ModuleRelativePath", "Public/AdminGrantItemsToUsersResult.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAdminGrantItemsToUsersResult_Statics::NewProp_ItemGrantResults = { "ItemGrantResults", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGrantItemsToUsersResult, ItemGrantResults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGrantItemsToUsersResult_Statics::NewProp_ItemGrantResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGrantItemsToUsersResult_Statics::NewProp_ItemGrantResults_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminGrantItemsToUsersResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGrantItemsToUsersResult_Statics::NewProp_ItemGrantResults_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGrantItemsToUsersResult_Statics::NewProp_ItemGrantResults,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminGrantItemsToUsersResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AdminGrantItemsToUsersResult",
		sizeof(FAdminGrantItemsToUsersResult),
		alignof(FAdminGrantItemsToUsersResult),
		Z_Construct_UScriptStruct_FAdminGrantItemsToUsersResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGrantItemsToUsersResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGrantItemsToUsersResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGrantItemsToUsersResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminGrantItemsToUsersResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminGrantItemsToUsersResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminGrantItemsToUsersResult"), sizeof(FAdminGrantItemsToUsersResult), Get_Z_Construct_UScriptStruct_FAdminGrantItemsToUsersResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminGrantItemsToUsersResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminGrantItemsToUsersResult_Hash() { return 3432610662U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
