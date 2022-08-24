// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerExecuteCloudScriptServerRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerExecuteCloudScriptServerRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ECloudScriptRevisionOption();
// End Cross Module References

static_assert(std::is_polymorphic<FServerExecuteCloudScriptServerRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerExecuteCloudScriptServerRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerExecuteCloudScriptServerRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerExecuteCloudScriptServerRequest"), sizeof(FServerExecuteCloudScriptServerRequest), Get_Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerExecuteCloudScriptServerRequest>()
{
	return FServerExecuteCloudScriptServerRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerExecuteCloudScriptServerRequest(FServerExecuteCloudScriptServerRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerExecuteCloudScriptServerRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerExecuteCloudScriptServerRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerExecuteCloudScriptServerRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerExecuteCloudScriptServerRequest>(FName(TEXT("ServerExecuteCloudScriptServerRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerExecuteCloudScriptServerRequest;
	struct Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerExecuteCloudScriptServerRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerExecuteCloudScriptServerRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerExecuteCloudScriptServerRequest" },
		{ "ModuleRelativePath", "Public/ServerExecuteCloudScriptServerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerExecuteCloudScriptServerRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_FunctionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerExecuteCloudScriptServerRequest" },
		{ "ModuleRelativePath", "Public/ServerExecuteCloudScriptServerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerExecuteCloudScriptServerRequest, FunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_FunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_FunctionParameter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerExecuteCloudScriptServerRequest" },
		{ "ModuleRelativePath", "Public/ServerExecuteCloudScriptServerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_FunctionParameter = { "FunctionParameter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerExecuteCloudScriptServerRequest, FunctionParameter), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_FunctionParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_FunctionParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_GeneratePlayStreamEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerExecuteCloudScriptServerRequest" },
		{ "ModuleRelativePath", "Public/ServerExecuteCloudScriptServerRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_GeneratePlayStreamEvent_SetBit(void* Obj)
	{
		((FServerExecuteCloudScriptServerRequest*)Obj)->GeneratePlayStreamEvent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_GeneratePlayStreamEvent = { "GeneratePlayStreamEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FServerExecuteCloudScriptServerRequest), &Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_GeneratePlayStreamEvent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_GeneratePlayStreamEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_GeneratePlayStreamEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerExecuteCloudScriptServerRequest" },
		{ "ModuleRelativePath", "Public/ServerExecuteCloudScriptServerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerExecuteCloudScriptServerRequest, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_PlayFabId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_RevisionSelection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_RevisionSelection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerExecuteCloudScriptServerRequest" },
		{ "ModuleRelativePath", "Public/ServerExecuteCloudScriptServerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_RevisionSelection = { "RevisionSelection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerExecuteCloudScriptServerRequest, RevisionSelection), Z_Construct_UEnum_PlayFab_ECloudScriptRevisionOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_RevisionSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_RevisionSelection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_SpecificRevision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerExecuteCloudScriptServerRequest" },
		{ "ModuleRelativePath", "Public/ServerExecuteCloudScriptServerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_SpecificRevision = { "SpecificRevision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerExecuteCloudScriptServerRequest, SpecificRevision), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_SpecificRevision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_SpecificRevision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_FunctionParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_GeneratePlayStreamEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_PlayFabId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_RevisionSelection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_RevisionSelection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::NewProp_SpecificRevision,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerExecuteCloudScriptServerRequest",
		sizeof(FServerExecuteCloudScriptServerRequest),
		alignof(FServerExecuteCloudScriptServerRequest),
		Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerExecuteCloudScriptServerRequest"), sizeof(FServerExecuteCloudScriptServerRequest), Get_Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerExecuteCloudScriptServerRequest_Hash() { return 3543665046U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
