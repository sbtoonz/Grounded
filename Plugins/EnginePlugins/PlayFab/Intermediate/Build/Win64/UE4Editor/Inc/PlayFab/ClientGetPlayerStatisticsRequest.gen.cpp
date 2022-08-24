// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientGetPlayerStatisticsRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientGetPlayerStatisticsRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientGetPlayerStatisticsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientGetPlayerStatisticsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientGetPlayerStatisticsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientGetPlayerStatisticsRequest"), sizeof(FClientGetPlayerStatisticsRequest), Get_Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientGetPlayerStatisticsRequest>()
{
	return FClientGetPlayerStatisticsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientGetPlayerStatisticsRequest(FClientGetPlayerStatisticsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientGetPlayerStatisticsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientGetPlayerStatisticsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientGetPlayerStatisticsRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientGetPlayerStatisticsRequest>(FName(TEXT("ClientGetPlayerStatisticsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientGetPlayerStatisticsRequest;
	struct Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatisticNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatisticNames;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StatisticNameVersions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatisticNameVersions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StatisticNameVersions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientGetPlayerStatisticsRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientGetPlayerStatisticsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetPlayerStatisticsRequest" },
		{ "ModuleRelativePath", "Public/ClientGetPlayerStatisticsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetPlayerStatisticsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest_Statics::NewProp_StatisticNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetPlayerStatisticsRequest" },
		{ "ModuleRelativePath", "Public/ClientGetPlayerStatisticsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest_Statics::NewProp_StatisticNames = { "StatisticNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetPlayerStatisticsRequest, StatisticNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest_Statics::NewProp_StatisticNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest_Statics::NewProp_StatisticNames_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest_Statics::NewProp_StatisticNameVersions_Inner = { "StatisticNameVersions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest_Statics::NewProp_StatisticNameVersions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetPlayerStatisticsRequest" },
		{ "ModuleRelativePath", "Public/ClientGetPlayerStatisticsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest_Statics::NewProp_StatisticNameVersions = { "StatisticNameVersions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetPlayerStatisticsRequest, StatisticNameVersions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest_Statics::NewProp_StatisticNameVersions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest_Statics::NewProp_StatisticNameVersions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest_Statics::NewProp_StatisticNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest_Statics::NewProp_StatisticNameVersions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest_Statics::NewProp_StatisticNameVersions,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientGetPlayerStatisticsRequest",
		sizeof(FClientGetPlayerStatisticsRequest),
		alignof(FClientGetPlayerStatisticsRequest),
		Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientGetPlayerStatisticsRequest"), sizeof(FClientGetPlayerStatisticsRequest), Get_Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientGetPlayerStatisticsRequest_Hash() { return 3142999592U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
