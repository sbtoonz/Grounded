// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerGetCatalogItemsResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerGetCatalogItemsResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerGetCatalogItemsResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerGetCatalogItemsResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FServerGetCatalogItemsResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FServerGetCatalogItemsResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerGetCatalogItemsResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerGetCatalogItemsResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerGetCatalogItemsResult"), sizeof(FServerGetCatalogItemsResult), Get_Z_Construct_UScriptStruct_FServerGetCatalogItemsResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerGetCatalogItemsResult>()
{
	return FServerGetCatalogItemsResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerGetCatalogItemsResult(FServerGetCatalogItemsResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerGetCatalogItemsResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerGetCatalogItemsResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerGetCatalogItemsResult()
	{
		UScriptStruct::DeferCppStructOps<FServerGetCatalogItemsResult>(FName(TEXT("ServerGetCatalogItemsResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerGetCatalogItemsResult;
	struct Z_Construct_UScriptStruct_FServerGetCatalogItemsResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Catalog_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Catalog_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Catalog;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetCatalogItemsResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerGetCatalogItemsResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerGetCatalogItemsResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerGetCatalogItemsResult>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerGetCatalogItemsResult_Statics::NewProp_Catalog_Inner = { "Catalog", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetCatalogItemsResult_Statics::NewProp_Catalog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetCatalogItemsResult" },
		{ "ModuleRelativePath", "Public/ServerGetCatalogItemsResult.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FServerGetCatalogItemsResult_Statics::NewProp_Catalog = { "Catalog", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetCatalogItemsResult, Catalog), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetCatalogItemsResult_Statics::NewProp_Catalog_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetCatalogItemsResult_Statics::NewProp_Catalog_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerGetCatalogItemsResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetCatalogItemsResult_Statics::NewProp_Catalog_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetCatalogItemsResult_Statics::NewProp_Catalog,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerGetCatalogItemsResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ServerGetCatalogItemsResult",
		sizeof(FServerGetCatalogItemsResult),
		alignof(FServerGetCatalogItemsResult),
		Z_Construct_UScriptStruct_FServerGetCatalogItemsResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetCatalogItemsResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetCatalogItemsResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetCatalogItemsResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerGetCatalogItemsResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerGetCatalogItemsResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerGetCatalogItemsResult"), sizeof(FServerGetCatalogItemsResult), Get_Z_Construct_UScriptStruct_FServerGetCatalogItemsResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerGetCatalogItemsResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerGetCatalogItemsResult_Hash() { return 4294598077U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
