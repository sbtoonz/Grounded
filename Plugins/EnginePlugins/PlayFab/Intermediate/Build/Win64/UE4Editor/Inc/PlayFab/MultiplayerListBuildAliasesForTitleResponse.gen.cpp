// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MultiplayerListBuildAliasesForTitleResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerListBuildAliasesForTitleResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerListBuildAliasesForTitleResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiplayerListBuildAliasesForTitleResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FMultiplayerListBuildAliasesForTitleResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FMultiplayerListBuildAliasesForTitleResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMultiplayerListBuildAliasesForTitleResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerListBuildAliasesForTitleResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("MultiplayerListBuildAliasesForTitleResponse"), sizeof(FMultiplayerListBuildAliasesForTitleResponse), Get_Z_Construct_UScriptStruct_FMultiplayerListBuildAliasesForTitleResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMultiplayerListBuildAliasesForTitleResponse>()
{
	return FMultiplayerListBuildAliasesForTitleResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiplayerListBuildAliasesForTitleResponse(FMultiplayerListBuildAliasesForTitleResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MultiplayerListBuildAliasesForTitleResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerListBuildAliasesForTitleResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerListBuildAliasesForTitleResponse()
	{
		UScriptStruct::DeferCppStructOps<FMultiplayerListBuildAliasesForTitleResponse>(FName(TEXT("MultiplayerListBuildAliasesForTitleResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerListBuildAliasesForTitleResponse;
	struct Z_Construct_UScriptStruct_FMultiplayerListBuildAliasesForTitleResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BuildAliases_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildAliases_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BuildAliases;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerListBuildAliasesForTitleResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerListBuildAliasesForTitleResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerListBuildAliasesForTitleResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerListBuildAliasesForTitleResponse>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerListBuildAliasesForTitleResponse_Statics::NewProp_BuildAliases_Inner = { "BuildAliases", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerListBuildAliasesForTitleResponse_Statics::NewProp_BuildAliases_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerListBuildAliasesForTitleResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerListBuildAliasesForTitleResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMultiplayerListBuildAliasesForTitleResponse_Statics::NewProp_BuildAliases = { "BuildAliases", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerListBuildAliasesForTitleResponse, BuildAliases), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerListBuildAliasesForTitleResponse_Statics::NewProp_BuildAliases_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListBuildAliasesForTitleResponse_Statics::NewProp_BuildAliases_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayerListBuildAliasesForTitleResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerListBuildAliasesForTitleResponse_Statics::NewProp_BuildAliases_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerListBuildAliasesForTitleResponse_Statics::NewProp_BuildAliases,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerListBuildAliasesForTitleResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"MultiplayerListBuildAliasesForTitleResponse",
		sizeof(FMultiplayerListBuildAliasesForTitleResponse),
		alignof(FMultiplayerListBuildAliasesForTitleResponse),
		Z_Construct_UScriptStruct_FMultiplayerListBuildAliasesForTitleResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListBuildAliasesForTitleResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerListBuildAliasesForTitleResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListBuildAliasesForTitleResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerListBuildAliasesForTitleResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiplayerListBuildAliasesForTitleResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiplayerListBuildAliasesForTitleResponse"), sizeof(FMultiplayerListBuildAliasesForTitleResponse), Get_Z_Construct_UScriptStruct_FMultiplayerListBuildAliasesForTitleResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiplayerListBuildAliasesForTitleResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiplayerListBuildAliasesForTitleResponse_Hash() { return 393512053U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
