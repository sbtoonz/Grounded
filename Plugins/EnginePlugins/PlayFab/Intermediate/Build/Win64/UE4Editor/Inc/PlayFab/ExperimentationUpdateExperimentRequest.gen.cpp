// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ExperimentationUpdateExperimentRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExperimentationUpdateExperimentRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EExperimentType();
// End Cross Module References

static_assert(std::is_polymorphic<FExperimentationUpdateExperimentRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FExperimentationUpdateExperimentRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FExperimentationUpdateExperimentRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationUpdateExperimentRequest"), sizeof(FExperimentationUpdateExperimentRequest), Get_Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationUpdateExperimentRequest>()
{
	return FExperimentationUpdateExperimentRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExperimentationUpdateExperimentRequest(FExperimentationUpdateExperimentRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ExperimentationUpdateExperimentRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationUpdateExperimentRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationUpdateExperimentRequest()
	{
		UScriptStruct::DeferCppStructOps<FExperimentationUpdateExperimentRequest>(FName(TEXT("ExperimentationUpdateExperimentRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFExperimentationUpdateExperimentRequest;
	struct Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EndDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExclusionGroupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExclusionGroupId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExclusionGroupTrafficAllocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExclusionGroupTrafficAllocation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ExperimentType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExperimentType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ExperimentType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SegmentId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitlePlayerAccountTestIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TitlePlayerAccountTestIds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Variants_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Variants_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Variants;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ExperimentationUpdateExperimentRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationUpdateExperimentRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExperimentationUpdateExperimentRequest" },
		{ "ModuleRelativePath", "Public/ExperimentationUpdateExperimentRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExperimentationUpdateExperimentRequest" },
		{ "ModuleRelativePath", "Public/ExperimentationUpdateExperimentRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Duration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExperimentationUpdateExperimentRequest" },
		{ "ModuleRelativePath", "Public/ExperimentationUpdateExperimentRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_EndDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExperimentationUpdateExperimentRequest" },
		{ "ModuleRelativePath", "Public/ExperimentationUpdateExperimentRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, EndDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_EndDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_EndDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExclusionGroupId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExperimentationUpdateExperimentRequest" },
		{ "ModuleRelativePath", "Public/ExperimentationUpdateExperimentRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExclusionGroupId = { "ExclusionGroupId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, ExclusionGroupId), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExclusionGroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExclusionGroupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExclusionGroupTrafficAllocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExperimentationUpdateExperimentRequest" },
		{ "ModuleRelativePath", "Public/ExperimentationUpdateExperimentRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExclusionGroupTrafficAllocation = { "ExclusionGroupTrafficAllocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, ExclusionGroupTrafficAllocation), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExclusionGroupTrafficAllocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExclusionGroupTrafficAllocation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExperimentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExperimentType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExperimentationUpdateExperimentRequest" },
		{ "ModuleRelativePath", "Public/ExperimentationUpdateExperimentRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExperimentType = { "ExperimentType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, ExperimentType), Z_Construct_UEnum_PlayFab_EExperimentType, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExperimentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExperimentType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExperimentationUpdateExperimentRequest" },
		{ "ModuleRelativePath", "Public/ExperimentationUpdateExperimentRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExperimentationUpdateExperimentRequest" },
		{ "ModuleRelativePath", "Public/ExperimentationUpdateExperimentRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_SegmentId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExperimentationUpdateExperimentRequest" },
		{ "ModuleRelativePath", "Public/ExperimentationUpdateExperimentRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_SegmentId = { "SegmentId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, SegmentId), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_SegmentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_SegmentId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_StartDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExperimentationUpdateExperimentRequest" },
		{ "ModuleRelativePath", "Public/ExperimentationUpdateExperimentRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_StartDate = { "StartDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, StartDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_StartDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_StartDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_TitlePlayerAccountTestIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExperimentationUpdateExperimentRequest" },
		{ "ModuleRelativePath", "Public/ExperimentationUpdateExperimentRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_TitlePlayerAccountTestIds = { "TitlePlayerAccountTestIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, TitlePlayerAccountTestIds), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_TitlePlayerAccountTestIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_TitlePlayerAccountTestIds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Variants_Inner = { "Variants", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Variants_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExperimentationUpdateExperimentRequest" },
		{ "ModuleRelativePath", "Public/ExperimentationUpdateExperimentRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Variants = { "Variants", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationUpdateExperimentRequest, Variants), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Variants_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Variants_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_EndDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExclusionGroupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExclusionGroupTrafficAllocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExperimentType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ExperimentType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_SegmentId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_StartDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_TitlePlayerAccountTestIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Variants_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::NewProp_Variants,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ExperimentationUpdateExperimentRequest",
		sizeof(FExperimentationUpdateExperimentRequest),
		alignof(FExperimentationUpdateExperimentRequest),
		Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExperimentationUpdateExperimentRequest"), sizeof(FExperimentationUpdateExperimentRequest), Get_Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExperimentationUpdateExperimentRequest_Hash() { return 2024033446U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
