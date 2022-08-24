// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ExperimentationCreateExclusionGroupRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExperimentationCreateExclusionGroupRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FExperimentationCreateExclusionGroupRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FExperimentationCreateExclusionGroupRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FExperimentationCreateExclusionGroupRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationCreateExclusionGroupRequest"), sizeof(FExperimentationCreateExclusionGroupRequest), Get_Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationCreateExclusionGroupRequest>()
{
	return FExperimentationCreateExclusionGroupRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExperimentationCreateExclusionGroupRequest(FExperimentationCreateExclusionGroupRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ExperimentationCreateExclusionGroupRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationCreateExclusionGroupRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationCreateExclusionGroupRequest()
	{
		UScriptStruct::DeferCppStructOps<FExperimentationCreateExclusionGroupRequest>(FName(TEXT("ExperimentationCreateExclusionGroupRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFExperimentationCreateExclusionGroupRequest;
	struct Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ExperimentationCreateExclusionGroupRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationCreateExclusionGroupRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExperimentationCreateExclusionGroupRequest" },
		{ "ModuleRelativePath", "Public/ExperimentationCreateExclusionGroupRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationCreateExclusionGroupRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExperimentationCreateExclusionGroupRequest" },
		{ "ModuleRelativePath", "Public/ExperimentationCreateExclusionGroupRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationCreateExclusionGroupRequest, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExperimentationCreateExclusionGroupRequest" },
		{ "ModuleRelativePath", "Public/ExperimentationCreateExclusionGroupRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationCreateExclusionGroupRequest, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ExperimentationCreateExclusionGroupRequest",
		sizeof(FExperimentationCreateExclusionGroupRequest),
		alignof(FExperimentationCreateExclusionGroupRequest),
		Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExperimentationCreateExclusionGroupRequest"), sizeof(FExperimentationCreateExclusionGroupRequest), Get_Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupRequest_Hash() { return 392211218U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
