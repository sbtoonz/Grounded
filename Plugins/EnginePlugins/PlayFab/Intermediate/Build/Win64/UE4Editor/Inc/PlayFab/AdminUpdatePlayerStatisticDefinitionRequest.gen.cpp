// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminUpdatePlayerStatisticDefinitionRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminUpdatePlayerStatisticDefinitionRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EStatisticAggregationMethod();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EStatisticResetIntervalOption();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminUpdatePlayerStatisticDefinitionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminUpdatePlayerStatisticDefinitionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminUpdatePlayerStatisticDefinitionRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminUpdatePlayerStatisticDefinitionRequest"), sizeof(FAdminUpdatePlayerStatisticDefinitionRequest), Get_Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminUpdatePlayerStatisticDefinitionRequest>()
{
	return FAdminUpdatePlayerStatisticDefinitionRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest(FAdminUpdatePlayerStatisticDefinitionRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminUpdatePlayerStatisticDefinitionRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminUpdatePlayerStatisticDefinitionRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminUpdatePlayerStatisticDefinitionRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminUpdatePlayerStatisticDefinitionRequest>(FName(TEXT("AdminUpdatePlayerStatisticDefinitionRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminUpdatePlayerStatisticDefinitionRequest;
	struct Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AggregationMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AggregationMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AggregationMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatisticName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatisticName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VersionChangeInterval_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VersionChangeInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VersionChangeInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminUpdatePlayerStatisticDefinitionRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminUpdatePlayerStatisticDefinitionRequest>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Statics::NewProp_AggregationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Statics::NewProp_AggregationMethod_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminUpdatePlayerStatisticDefinitionRequest" },
		{ "ModuleRelativePath", "Public/AdminUpdatePlayerStatisticDefinitionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Statics::NewProp_AggregationMethod = { "AggregationMethod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminUpdatePlayerStatisticDefinitionRequest, AggregationMethod), Z_Construct_UEnum_PlayFab_EStatisticAggregationMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Statics::NewProp_AggregationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Statics::NewProp_AggregationMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Statics::NewProp_StatisticName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminUpdatePlayerStatisticDefinitionRequest" },
		{ "ModuleRelativePath", "Public/AdminUpdatePlayerStatisticDefinitionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Statics::NewProp_StatisticName = { "StatisticName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminUpdatePlayerStatisticDefinitionRequest, StatisticName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Statics::NewProp_StatisticName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Statics::NewProp_StatisticName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Statics::NewProp_VersionChangeInterval_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Statics::NewProp_VersionChangeInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminUpdatePlayerStatisticDefinitionRequest" },
		{ "ModuleRelativePath", "Public/AdminUpdatePlayerStatisticDefinitionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Statics::NewProp_VersionChangeInterval = { "VersionChangeInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminUpdatePlayerStatisticDefinitionRequest, VersionChangeInterval), Z_Construct_UEnum_PlayFab_EStatisticResetIntervalOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Statics::NewProp_VersionChangeInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Statics::NewProp_VersionChangeInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Statics::NewProp_AggregationMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Statics::NewProp_AggregationMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Statics::NewProp_StatisticName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Statics::NewProp_VersionChangeInterval_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Statics::NewProp_VersionChangeInterval,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminUpdatePlayerStatisticDefinitionRequest",
		sizeof(FAdminUpdatePlayerStatisticDefinitionRequest),
		alignof(FAdminUpdatePlayerStatisticDefinitionRequest),
		Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminUpdatePlayerStatisticDefinitionRequest"), sizeof(FAdminUpdatePlayerStatisticDefinitionRequest), Get_Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionRequest_Hash() { return 1884684134U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
