// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/CloudScriptPostFunctionResultForPlayerTriggeredActionRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCloudScriptPostFunctionResultForPlayerTriggeredActionRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptPostFunctionResultForPlayerTriggeredActionRequest"), sizeof(FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest), Get_Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest>()
{
	return FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest(FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("CloudScriptPostFunctionResultForPlayerTriggeredActionRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptPostFunctionResultForPlayerTriggeredActionRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptPostFunctionResultForPlayerTriggeredActionRequest()
	{
		UScriptStruct::DeferCppStructOps<FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest>(FName(TEXT("CloudScriptPostFunctionResultForPlayerTriggeredActionRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptPostFunctionResultForPlayerTriggeredActionRequest;
	struct Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayStreamEventEnvelope_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayStreamEventEnvelope;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CloudScriptPostFunctionResultForPlayerTriggeredActionRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CloudScriptPostFunctionResultForPlayerTriggeredActionRequest" },
		{ "ModuleRelativePath", "Public/CloudScriptPostFunctionResultForPlayerTriggeredActionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CloudScriptPostFunctionResultForPlayerTriggeredActionRequest" },
		{ "ModuleRelativePath", "Public/CloudScriptPostFunctionResultForPlayerTriggeredActionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_FunctionResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CloudScriptPostFunctionResultForPlayerTriggeredActionRequest" },
		{ "ModuleRelativePath", "Public/CloudScriptPostFunctionResultForPlayerTriggeredActionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_FunctionResult = { "FunctionResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest, FunctionResult), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_FunctionResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_FunctionResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_PlayerProfile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CloudScriptPostFunctionResultForPlayerTriggeredActionRequest" },
		{ "ModuleRelativePath", "Public/CloudScriptPostFunctionResultForPlayerTriggeredActionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_PlayerProfile = { "PlayerProfile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest, PlayerProfile), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_PlayerProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_PlayerProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_PlayStreamEventEnvelope_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CloudScriptPostFunctionResultForPlayerTriggeredActionRequest" },
		{ "ModuleRelativePath", "Public/CloudScriptPostFunctionResultForPlayerTriggeredActionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_PlayStreamEventEnvelope = { "PlayStreamEventEnvelope", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest, PlayStreamEventEnvelope), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_PlayStreamEventEnvelope_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_PlayStreamEventEnvelope_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_FunctionResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_PlayerProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::NewProp_PlayStreamEventEnvelope,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"CloudScriptPostFunctionResultForPlayerTriggeredActionRequest",
		sizeof(FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest),
		alignof(FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest),
		Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CloudScriptPostFunctionResultForPlayerTriggeredActionRequest"), sizeof(FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest), Get_Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest_Hash() { return 230746511U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
