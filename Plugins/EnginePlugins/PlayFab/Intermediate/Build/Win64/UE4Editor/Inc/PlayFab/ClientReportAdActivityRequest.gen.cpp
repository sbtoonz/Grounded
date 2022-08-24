// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientReportAdActivityRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientReportAdActivityRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientReportAdActivityRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EAdActivity();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientReportAdActivityRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientReportAdActivityRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientReportAdActivityRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientReportAdActivityRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientReportAdActivityRequest"), sizeof(FClientReportAdActivityRequest), Get_Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientReportAdActivityRequest>()
{
	return FClientReportAdActivityRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientReportAdActivityRequest(FClientReportAdActivityRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientReportAdActivityRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientReportAdActivityRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientReportAdActivityRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientReportAdActivityRequest>(FName(TEXT("ClientReportAdActivityRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientReportAdActivityRequest;
	struct Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Activity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Activity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Activity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlacementId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlacementId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RewardId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientReportAdActivityRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientReportAdActivityRequest>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Statics::NewProp_Activity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Statics::NewProp_Activity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientReportAdActivityRequest" },
		{ "ModuleRelativePath", "Public/ClientReportAdActivityRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Statics::NewProp_Activity = { "Activity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientReportAdActivityRequest, Activity), Z_Construct_UEnum_PlayFab_EAdActivity, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Statics::NewProp_Activity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Statics::NewProp_Activity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientReportAdActivityRequest" },
		{ "ModuleRelativePath", "Public/ClientReportAdActivityRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientReportAdActivityRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Statics::NewProp_PlacementId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientReportAdActivityRequest" },
		{ "ModuleRelativePath", "Public/ClientReportAdActivityRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Statics::NewProp_PlacementId = { "PlacementId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientReportAdActivityRequest, PlacementId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Statics::NewProp_PlacementId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Statics::NewProp_PlacementId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Statics::NewProp_RewardId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientReportAdActivityRequest" },
		{ "ModuleRelativePath", "Public/ClientReportAdActivityRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Statics::NewProp_RewardId = { "RewardId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientReportAdActivityRequest, RewardId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Statics::NewProp_RewardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Statics::NewProp_RewardId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Statics::NewProp_Activity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Statics::NewProp_Activity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Statics::NewProp_PlacementId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Statics::NewProp_RewardId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientReportAdActivityRequest",
		sizeof(FClientReportAdActivityRequest),
		alignof(FClientReportAdActivityRequest),
		Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientReportAdActivityRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientReportAdActivityRequest"), sizeof(FClientReportAdActivityRequest), Get_Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientReportAdActivityRequest_Hash() { return 2888622298U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
