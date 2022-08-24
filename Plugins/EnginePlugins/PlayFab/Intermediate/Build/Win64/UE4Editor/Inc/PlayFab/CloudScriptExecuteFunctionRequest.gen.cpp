// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/CloudScriptExecuteFunctionRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCloudScriptExecuteFunctionRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FCloudScriptExecuteFunctionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FCloudScriptExecuteFunctionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FCloudScriptExecuteFunctionRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptExecuteFunctionRequest"), sizeof(FCloudScriptExecuteFunctionRequest), Get_Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptExecuteFunctionRequest>()
{
	return FCloudScriptExecuteFunctionRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCloudScriptExecuteFunctionRequest(FCloudScriptExecuteFunctionRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("CloudScriptExecuteFunctionRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptExecuteFunctionRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptExecuteFunctionRequest()
	{
		UScriptStruct::DeferCppStructOps<FCloudScriptExecuteFunctionRequest>(FName(TEXT("CloudScriptExecuteFunctionRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptExecuteFunctionRequest;
	struct Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FunctionParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratePlayStreamEvent_MetaData[];
#endif
		static void NewProp_GeneratePlayStreamEvent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_GeneratePlayStreamEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CloudScriptExecuteFunctionRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptExecuteFunctionRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CloudScriptExecuteFunctionRequest" },
		{ "ModuleRelativePath", "Public/CloudScriptExecuteFunctionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteFunctionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CloudScriptExecuteFunctionRequest" },
		{ "ModuleRelativePath", "Public/CloudScriptExecuteFunctionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteFunctionRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_FunctionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CloudScriptExecuteFunctionRequest" },
		{ "ModuleRelativePath", "Public/CloudScriptExecuteFunctionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteFunctionRequest, FunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_FunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_FunctionParameter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CloudScriptExecuteFunctionRequest" },
		{ "ModuleRelativePath", "Public/CloudScriptExecuteFunctionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_FunctionParameter = { "FunctionParameter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteFunctionRequest, FunctionParameter), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_FunctionParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_FunctionParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_GeneratePlayStreamEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CloudScriptExecuteFunctionRequest" },
		{ "ModuleRelativePath", "Public/CloudScriptExecuteFunctionRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_GeneratePlayStreamEvent_SetBit(void* Obj)
	{
		((FCloudScriptExecuteFunctionRequest*)Obj)->GeneratePlayStreamEvent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_GeneratePlayStreamEvent = { "GeneratePlayStreamEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCloudScriptExecuteFunctionRequest), &Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_GeneratePlayStreamEvent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_GeneratePlayStreamEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_GeneratePlayStreamEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_FunctionParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::NewProp_GeneratePlayStreamEvent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"CloudScriptExecuteFunctionRequest",
		sizeof(FCloudScriptExecuteFunctionRequest),
		alignof(FCloudScriptExecuteFunctionRequest),
		Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CloudScriptExecuteFunctionRequest"), sizeof(FCloudScriptExecuteFunctionRequest), Get_Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionRequest_Hash() { return 380344265U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
