// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerUpdatePlayerStatisticsRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerUpdatePlayerStatisticsRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerUpdatePlayerStatisticsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerUpdatePlayerStatisticsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerUpdatePlayerStatisticsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerUpdatePlayerStatisticsRequest"), sizeof(FServerUpdatePlayerStatisticsRequest), Get_Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerUpdatePlayerStatisticsRequest>()
{
	return FServerUpdatePlayerStatisticsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerUpdatePlayerStatisticsRequest(FServerUpdatePlayerStatisticsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerUpdatePlayerStatisticsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerUpdatePlayerStatisticsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerUpdatePlayerStatisticsRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerUpdatePlayerStatisticsRequest>(FName(TEXT("ServerUpdatePlayerStatisticsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerUpdatePlayerStatisticsRequest;
	struct Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceUpdate_MetaData[];
#endif
		static void NewProp_ForceUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Statistics_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Statistics_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Statistics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerUpdatePlayerStatisticsRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerUpdatePlayerStatisticsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerUpdatePlayerStatisticsRequest" },
		{ "ModuleRelativePath", "Public/ServerUpdatePlayerStatisticsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerUpdatePlayerStatisticsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics::NewProp_ForceUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerUpdatePlayerStatisticsRequest" },
		{ "ModuleRelativePath", "Public/ServerUpdatePlayerStatisticsRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics::NewProp_ForceUpdate_SetBit(void* Obj)
	{
		((FServerUpdatePlayerStatisticsRequest*)Obj)->ForceUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics::NewProp_ForceUpdate = { "ForceUpdate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FServerUpdatePlayerStatisticsRequest), &Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics::NewProp_ForceUpdate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics::NewProp_ForceUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics::NewProp_ForceUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerUpdatePlayerStatisticsRequest" },
		{ "ModuleRelativePath", "Public/ServerUpdatePlayerStatisticsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerUpdatePlayerStatisticsRequest, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics::NewProp_PlayFabId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics::NewProp_Statistics_Inner = { "Statistics", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics::NewProp_Statistics_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerUpdatePlayerStatisticsRequest" },
		{ "ModuleRelativePath", "Public/ServerUpdatePlayerStatisticsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics::NewProp_Statistics = { "Statistics", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerUpdatePlayerStatisticsRequest, Statistics), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics::NewProp_Statistics_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics::NewProp_Statistics_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics::NewProp_ForceUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics::NewProp_PlayFabId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics::NewProp_Statistics_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics::NewProp_Statistics,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerUpdatePlayerStatisticsRequest",
		sizeof(FServerUpdatePlayerStatisticsRequest),
		alignof(FServerUpdatePlayerStatisticsRequest),
		Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerUpdatePlayerStatisticsRequest"), sizeof(FServerUpdatePlayerStatisticsRequest), Get_Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerUpdatePlayerStatisticsRequest_Hash() { return 1935454027U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
