// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/CloudScriptPostFunctionResultForEntityTriggeredActionRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCloudScriptPostFunctionResultForEntityTriggeredActionRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FCloudScriptPostFunctionResultForEntityTriggeredActionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FCloudScriptPostFunctionResultForEntityTriggeredActionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FCloudScriptPostFunctionResultForEntityTriggeredActionRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptPostFunctionResultForEntityTriggeredActionRequest"), sizeof(FCloudScriptPostFunctionResultForEntityTriggeredActionRequest), Get_Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptPostFunctionResultForEntityTriggeredActionRequest>()
{
	return FCloudScriptPostFunctionResultForEntityTriggeredActionRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest(FCloudScriptPostFunctionResultForEntityTriggeredActionRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("CloudScriptPostFunctionResultForEntityTriggeredActionRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptPostFunctionResultForEntityTriggeredActionRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptPostFunctionResultForEntityTriggeredActionRequest()
	{
		UScriptStruct::DeferCppStructOps<FCloudScriptPostFunctionResultForEntityTriggeredActionRequest>(FName(TEXT("CloudScriptPostFunctionResultForEntityTriggeredActionRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptPostFunctionResultForEntityTriggeredActionRequest;
	struct Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Entity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FunctionResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CloudScriptPostFunctionResultForEntityTriggeredActionRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptPostFunctionResultForEntityTriggeredActionRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CloudScriptPostFunctionResultForEntityTriggeredActionRequest" },
		{ "ModuleRelativePath", "Public/CloudScriptPostFunctionResultForEntityTriggeredActionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForEntityTriggeredActionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CloudScriptPostFunctionResultForEntityTriggeredActionRequest" },
		{ "ModuleRelativePath", "Public/CloudScriptPostFunctionResultForEntityTriggeredActionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForEntityTriggeredActionRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_FunctionResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CloudScriptPostFunctionResultForEntityTriggeredActionRequest" },
		{ "ModuleRelativePath", "Public/CloudScriptPostFunctionResultForEntityTriggeredActionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_FunctionResult = { "FunctionResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForEntityTriggeredActionRequest, FunctionResult), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_FunctionResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_FunctionResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::NewProp_FunctionResult,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"CloudScriptPostFunctionResultForEntityTriggeredActionRequest",
		sizeof(FCloudScriptPostFunctionResultForEntityTriggeredActionRequest),
		alignof(FCloudScriptPostFunctionResultForEntityTriggeredActionRequest),
		Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CloudScriptPostFunctionResultForEntityTriggeredActionRequest"), sizeof(FCloudScriptPostFunctionResultForEntityTriggeredActionRequest), Get_Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForEntityTriggeredActionRequest_Hash() { return 3863389115U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif