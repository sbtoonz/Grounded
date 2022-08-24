// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerGetServerCustomIDsFromPlayFabIDsResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerGetServerCustomIDsFromPlayFabIDsResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerGetServerCustomIDsFromPlayFabIDsResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FServerGetServerCustomIDsFromPlayFabIDsResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FServerGetServerCustomIDsFromPlayFabIDsResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerGetServerCustomIDsFromPlayFabIDsResult"), sizeof(FServerGetServerCustomIDsFromPlayFabIDsResult), Get_Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerGetServerCustomIDsFromPlayFabIDsResult>()
{
	return FServerGetServerCustomIDsFromPlayFabIDsResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsResult(FServerGetServerCustomIDsFromPlayFabIDsResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerGetServerCustomIDsFromPlayFabIDsResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerGetServerCustomIDsFromPlayFabIDsResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerGetServerCustomIDsFromPlayFabIDsResult()
	{
		UScriptStruct::DeferCppStructOps<FServerGetServerCustomIDsFromPlayFabIDsResult>(FName(TEXT("ServerGetServerCustomIDsFromPlayFabIDsResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerGetServerCustomIDsFromPlayFabIDsResult;
	struct Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsResult_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerGetServerCustomIDsFromPlayFabIDsResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerGetServerCustomIDsFromPlayFabIDsResult>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsResult_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsResult_Statics::NewProp_Data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetServerCustomIDsFromPlayFabIDsResult" },
		{ "ModuleRelativePath", "Public/ServerGetServerCustomIDsFromPlayFabIDsResult.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsResult_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetServerCustomIDsFromPlayFabIDsResult, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsResult_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsResult_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsResult_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsResult_Statics::NewProp_Data,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ServerGetServerCustomIDsFromPlayFabIDsResult",
		sizeof(FServerGetServerCustomIDsFromPlayFabIDsResult),
		alignof(FServerGetServerCustomIDsFromPlayFabIDsResult),
		Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerGetServerCustomIDsFromPlayFabIDsResult"), sizeof(FServerGetServerCustomIDsFromPlayFabIDsResult), Get_Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsResult_Hash() { return 60800133U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
