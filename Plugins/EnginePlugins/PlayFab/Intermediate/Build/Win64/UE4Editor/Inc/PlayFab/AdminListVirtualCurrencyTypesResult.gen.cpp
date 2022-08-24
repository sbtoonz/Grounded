// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminListVirtualCurrencyTypesResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminListVirtualCurrencyTypesResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminListVirtualCurrencyTypesResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAdminListVirtualCurrencyTypesResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAdminListVirtualCurrencyTypesResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminListVirtualCurrencyTypesResult"), sizeof(FAdminListVirtualCurrencyTypesResult), Get_Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminListVirtualCurrencyTypesResult>()
{
	return FAdminListVirtualCurrencyTypesResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminListVirtualCurrencyTypesResult(FAdminListVirtualCurrencyTypesResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminListVirtualCurrencyTypesResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminListVirtualCurrencyTypesResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminListVirtualCurrencyTypesResult()
	{
		UScriptStruct::DeferCppStructOps<FAdminListVirtualCurrencyTypesResult>(FName(TEXT("AdminListVirtualCurrencyTypesResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminListVirtualCurrencyTypesResult;
	struct Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VirtualCurrencies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualCurrencies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VirtualCurrencies;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminListVirtualCurrencyTypesResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminListVirtualCurrencyTypesResult>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesResult_Statics::NewProp_VirtualCurrencies_Inner = { "VirtualCurrencies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesResult_Statics::NewProp_VirtualCurrencies_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminListVirtualCurrencyTypesResult" },
		{ "ModuleRelativePath", "Public/AdminListVirtualCurrencyTypesResult.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesResult_Statics::NewProp_VirtualCurrencies = { "VirtualCurrencies", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminListVirtualCurrencyTypesResult, VirtualCurrencies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesResult_Statics::NewProp_VirtualCurrencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesResult_Statics::NewProp_VirtualCurrencies_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesResult_Statics::NewProp_VirtualCurrencies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesResult_Statics::NewProp_VirtualCurrencies,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AdminListVirtualCurrencyTypesResult",
		sizeof(FAdminListVirtualCurrencyTypesResult),
		alignof(FAdminListVirtualCurrencyTypesResult),
		Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminListVirtualCurrencyTypesResult"), sizeof(FAdminListVirtualCurrencyTypesResult), Get_Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesResult_Hash() { return 3838509892U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
