// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/CloudScriptExecuteEntityCloudScriptRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCloudScriptExecuteEntityCloudScriptRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ECloudScriptRevisionOption();
// End Cross Module References

static_assert(std::is_polymorphic<FCloudScriptExecuteEntityCloudScriptRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FCloudScriptExecuteEntityCloudScriptRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FCloudScriptExecuteEntityCloudScriptRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptExecuteEntityCloudScriptRequest"), sizeof(FCloudScriptExecuteEntityCloudScriptRequest), Get_Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptExecuteEntityCloudScriptRequest>()
{
	return FCloudScriptExecuteEntityCloudScriptRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest(FCloudScriptExecuteEntityCloudScriptRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("CloudScriptExecuteEntityCloudScriptRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptExecuteEntityCloudScriptRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptExecuteEntityCloudScriptRequest()
	{
		UScriptStruct::DeferCppStructOps<FCloudScriptExecuteEntityCloudScriptRequest>(FName(TEXT("CloudScriptExecuteEntityCloudScriptRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptExecuteEntityCloudScriptRequest;
	struct Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics
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
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RevisionSelection_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RevisionSelection_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RevisionSelection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecificRevision_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpecificRevision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CloudScriptExecuteEntityCloudScriptRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptExecuteEntityCloudScriptRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CloudScriptExecuteEntityCloudScriptRequest" },
		{ "ModuleRelativePath", "Public/CloudScriptExecuteEntityCloudScriptRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteEntityCloudScriptRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CloudScriptExecuteEntityCloudScriptRequest" },
		{ "ModuleRelativePath", "Public/CloudScriptExecuteEntityCloudScriptRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteEntityCloudScriptRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_FunctionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CloudScriptExecuteEntityCloudScriptRequest" },
		{ "ModuleRelativePath", "Public/CloudScriptExecuteEntityCloudScriptRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteEntityCloudScriptRequest, FunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_FunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_FunctionParameter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CloudScriptExecuteEntityCloudScriptRequest" },
		{ "ModuleRelativePath", "Public/CloudScriptExecuteEntityCloudScriptRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_FunctionParameter = { "FunctionParameter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteEntityCloudScriptRequest, FunctionParameter), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_FunctionParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_FunctionParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_GeneratePlayStreamEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CloudScriptExecuteEntityCloudScriptRequest" },
		{ "ModuleRelativePath", "Public/CloudScriptExecuteEntityCloudScriptRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_GeneratePlayStreamEvent_SetBit(void* Obj)
	{
		((FCloudScriptExecuteEntityCloudScriptRequest*)Obj)->GeneratePlayStreamEvent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_GeneratePlayStreamEvent = { "GeneratePlayStreamEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCloudScriptExecuteEntityCloudScriptRequest), &Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_GeneratePlayStreamEvent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_GeneratePlayStreamEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_GeneratePlayStreamEvent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_RevisionSelection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_RevisionSelection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CloudScriptExecuteEntityCloudScriptRequest" },
		{ "ModuleRelativePath", "Public/CloudScriptExecuteEntityCloudScriptRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_RevisionSelection = { "RevisionSelection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteEntityCloudScriptRequest, RevisionSelection), Z_Construct_UEnum_PlayFab_ECloudScriptRevisionOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_RevisionSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_RevisionSelection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_SpecificRevision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CloudScriptExecuteEntityCloudScriptRequest" },
		{ "ModuleRelativePath", "Public/CloudScriptExecuteEntityCloudScriptRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_SpecificRevision = { "SpecificRevision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteEntityCloudScriptRequest, SpecificRevision), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_SpecificRevision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_SpecificRevision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_FunctionParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_GeneratePlayStreamEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_RevisionSelection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_RevisionSelection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::NewProp_SpecificRevision,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"CloudScriptExecuteEntityCloudScriptRequest",
		sizeof(FCloudScriptExecuteEntityCloudScriptRequest),
		alignof(FCloudScriptExecuteEntityCloudScriptRequest),
		Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CloudScriptExecuteEntityCloudScriptRequest"), sizeof(FCloudScriptExecuteEntityCloudScriptRequest), Get_Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCloudScriptExecuteEntityCloudScriptRequest_Hash() { return 1347884373U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
