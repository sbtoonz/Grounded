// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ExperimentationUpdateExclusionGroupRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExperimentationUpdateExclusionGroupRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FExperimentationUpdateExclusionGroupRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FExperimentationUpdateExclusionGroupRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FExperimentationUpdateExclusionGroupRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationUpdateExclusionGroupRequest"), sizeof(FExperimentationUpdateExclusionGroupRequest), Get_Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationUpdateExclusionGroupRequest>()
{
	return FExperimentationUpdateExclusionGroupRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest(FExperimentationUpdateExclusionGroupRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ExperimentationUpdateExclusionGroupRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationUpdateExclusionGroupRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationUpdateExclusionGroupRequest()
	{
		UScriptStruct::DeferCppStructOps<FExperimentationUpdateExclusionGroupRequest>(FName(TEXT("ExperimentationUpdateExclusionGroupRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFExperimentationUpdateExclusionGroupRequest;
	struct Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExclusionGroupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExclusionGroupId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ExperimentationUpdateExclusionGroupRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationUpdateExclusionGroupRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExperimentationUpdateExclusionGroupRequest" },
		{ "ModuleRelativePath", "Public/ExperimentationUpdateExclusionGroupRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationUpdateExclusionGroupRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExperimentationUpdateExclusionGroupRequest" },
		{ "ModuleRelativePath", "Public/ExperimentationUpdateExclusionGroupRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationUpdateExclusionGroupRequest, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_ExclusionGroupId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExperimentationUpdateExclusionGroupRequest" },
		{ "ModuleRelativePath", "Public/ExperimentationUpdateExclusionGroupRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_ExclusionGroupId = { "ExclusionGroupId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationUpdateExclusionGroupRequest, ExclusionGroupId), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_ExclusionGroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_ExclusionGroupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExperimentationUpdateExclusionGroupRequest" },
		{ "ModuleRelativePath", "Public/ExperimentationUpdateExclusionGroupRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationUpdateExclusionGroupRequest, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_ExclusionGroupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ExperimentationUpdateExclusionGroupRequest",
		sizeof(FExperimentationUpdateExclusionGroupRequest),
		alignof(FExperimentationUpdateExclusionGroupRequest),
		Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExperimentationUpdateExclusionGroupRequest"), sizeof(FExperimentationUpdateExclusionGroupRequest), Get_Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExperimentationUpdateExclusionGroupRequest_Hash() { return 4118802154U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
