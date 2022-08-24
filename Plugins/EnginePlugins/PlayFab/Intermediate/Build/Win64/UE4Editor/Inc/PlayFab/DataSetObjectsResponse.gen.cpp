// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/DataSetObjectsResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataSetObjectsResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataSetObjectsResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FDataSetObjectsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FDataSetObjectsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FDataSetObjectsResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FDataSetObjectsResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataSetObjectsResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("DataSetObjectsResponse"), sizeof(FDataSetObjectsResponse), Get_Z_Construct_UScriptStruct_FDataSetObjectsResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataSetObjectsResponse>()
{
	return FDataSetObjectsResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataSetObjectsResponse(FDataSetObjectsResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("DataSetObjectsResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFDataSetObjectsResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFDataSetObjectsResponse()
	{
		UScriptStruct::DeferCppStructOps<FDataSetObjectsResponse>(FName(TEXT("DataSetObjectsResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFDataSetObjectsResponse;
	struct Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SetResults_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SetResults;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataSetObjectsResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataSetObjectsResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataSetObjectsResponse" },
		{ "ModuleRelativePath", "Public/DataSetObjectsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataSetObjectsResponse, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_ProfileVersion_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_SetResults_Inner = { "SetResults", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_SetResults_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataSetObjectsResponse" },
		{ "ModuleRelativePath", "Public/DataSetObjectsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_SetResults = { "SetResults", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataSetObjectsResponse, SetResults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_SetResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_SetResults_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_ProfileVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_SetResults_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::NewProp_SetResults,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"DataSetObjectsResponse",
		sizeof(FDataSetObjectsResponse),
		alignof(FDataSetObjectsResponse),
		Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataSetObjectsResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataSetObjectsResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataSetObjectsResponse"), sizeof(FDataSetObjectsResponse), Get_Z_Construct_UScriptStruct_FDataSetObjectsResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataSetObjectsResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataSetObjectsResponse_Hash() { return 2508654912U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
