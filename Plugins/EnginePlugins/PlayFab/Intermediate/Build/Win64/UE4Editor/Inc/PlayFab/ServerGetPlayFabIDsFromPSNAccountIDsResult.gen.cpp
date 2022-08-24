// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerGetPlayFabIDsFromPSNAccountIDsResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerGetPlayFabIDsFromPSNAccountIDsResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerGetPlayFabIDsFromPSNAccountIDsResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FServerGetPlayFabIDsFromPSNAccountIDsResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FServerGetPlayFabIDsFromPSNAccountIDsResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerGetPlayFabIDsFromPSNAccountIDsResult"), sizeof(FServerGetPlayFabIDsFromPSNAccountIDsResult), Get_Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerGetPlayFabIDsFromPSNAccountIDsResult>()
{
	return FServerGetPlayFabIDsFromPSNAccountIDsResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsResult(FServerGetPlayFabIDsFromPSNAccountIDsResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerGetPlayFabIDsFromPSNAccountIDsResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerGetPlayFabIDsFromPSNAccountIDsResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerGetPlayFabIDsFromPSNAccountIDsResult()
	{
		UScriptStruct::DeferCppStructOps<FServerGetPlayFabIDsFromPSNAccountIDsResult>(FName(TEXT("ServerGetPlayFabIDsFromPSNAccountIDsResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerGetPlayFabIDsFromPSNAccountIDsResult;
	struct Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerGetPlayFabIDsFromPSNAccountIDsResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerGetPlayFabIDsFromPSNAccountIDsResult>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsResult_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsResult_Statics::NewProp_Data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetPlayFabIDsFromPSNAccountIDsResult" },
		{ "ModuleRelativePath", "Public/ServerGetPlayFabIDsFromPSNAccountIDsResult.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsResult_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetPlayFabIDsFromPSNAccountIDsResult, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsResult_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsResult_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsResult_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsResult_Statics::NewProp_Data,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ServerGetPlayFabIDsFromPSNAccountIDsResult",
		sizeof(FServerGetPlayFabIDsFromPSNAccountIDsResult),
		alignof(FServerGetPlayFabIDsFromPSNAccountIDsResult),
		Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerGetPlayFabIDsFromPSNAccountIDsResult"), sizeof(FServerGetPlayFabIDsFromPSNAccountIDsResult), Get_Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsResult_Hash() { return 1167276842U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
