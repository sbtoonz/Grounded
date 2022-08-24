// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MultiplayerUpdateBuildRegionRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerUpdateBuildRegionRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiplayerUpdateBuildRegionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FMultiplayerUpdateBuildRegionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FMultiplayerUpdateBuildRegionRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("MultiplayerUpdateBuildRegionRequest"), sizeof(FMultiplayerUpdateBuildRegionRequest), Get_Z_Construct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMultiplayerUpdateBuildRegionRequest>()
{
	return FMultiplayerUpdateBuildRegionRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest(FMultiplayerUpdateBuildRegionRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MultiplayerUpdateBuildRegionRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerUpdateBuildRegionRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerUpdateBuildRegionRequest()
	{
		UScriptStruct::DeferCppStructOps<FMultiplayerUpdateBuildRegionRequest>(FName(TEXT("MultiplayerUpdateBuildRegionRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerUpdateBuildRegionRequest;
	struct Z_Construct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildRegion_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BuildRegion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerUpdateBuildRegionRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerUpdateBuildRegionRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest_Statics::NewProp_BuildId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerUpdateBuildRegionRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerUpdateBuildRegionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest_Statics::NewProp_BuildId = { "BuildId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerUpdateBuildRegionRequest, BuildId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest_Statics::NewProp_BuildId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest_Statics::NewProp_BuildId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest_Statics::NewProp_BuildRegion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerUpdateBuildRegionRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerUpdateBuildRegionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest_Statics::NewProp_BuildRegion = { "BuildRegion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerUpdateBuildRegionRequest, BuildRegion), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest_Statics::NewProp_BuildRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest_Statics::NewProp_BuildRegion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerUpdateBuildRegionRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerUpdateBuildRegionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerUpdateBuildRegionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest_Statics::NewProp_CustomTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest_Statics::NewProp_BuildId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest_Statics::NewProp_BuildRegion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest_Statics::NewProp_CustomTags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"MultiplayerUpdateBuildRegionRequest",
		sizeof(FMultiplayerUpdateBuildRegionRequest),
		alignof(FMultiplayerUpdateBuildRegionRequest),
		Z_Construct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiplayerUpdateBuildRegionRequest"), sizeof(FMultiplayerUpdateBuildRegionRequest), Get_Z_Construct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiplayerUpdateBuildRegionRequest_Hash() { return 736072739U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
