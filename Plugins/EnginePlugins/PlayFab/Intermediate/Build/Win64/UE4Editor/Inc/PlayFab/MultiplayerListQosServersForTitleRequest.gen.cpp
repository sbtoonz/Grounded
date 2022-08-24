// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MultiplayerListQosServersForTitleRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerListQosServersForTitleRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerListQosServersForTitleRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiplayerListQosServersForTitleRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FMultiplayerListQosServersForTitleRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FMultiplayerListQosServersForTitleRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMultiplayerListQosServersForTitleRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerListQosServersForTitleRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("MultiplayerListQosServersForTitleRequest"), sizeof(FMultiplayerListQosServersForTitleRequest), Get_Z_Construct_UScriptStruct_FMultiplayerListQosServersForTitleRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMultiplayerListQosServersForTitleRequest>()
{
	return FMultiplayerListQosServersForTitleRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiplayerListQosServersForTitleRequest(FMultiplayerListQosServersForTitleRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MultiplayerListQosServersForTitleRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerListQosServersForTitleRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerListQosServersForTitleRequest()
	{
		UScriptStruct::DeferCppStructOps<FMultiplayerListQosServersForTitleRequest>(FName(TEXT("MultiplayerListQosServersForTitleRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerListQosServersForTitleRequest;
	struct Z_Construct_UScriptStruct_FMultiplayerListQosServersForTitleRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeAllRegions_MetaData[];
#endif
		static void NewProp_IncludeAllRegions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeAllRegions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerListQosServersForTitleRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerListQosServersForTitleRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerListQosServersForTitleRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerListQosServersForTitleRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerListQosServersForTitleRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerListQosServersForTitleRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerListQosServersForTitleRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerListQosServersForTitleRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerListQosServersForTitleRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerListQosServersForTitleRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListQosServersForTitleRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerListQosServersForTitleRequest_Statics::NewProp_IncludeAllRegions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerListQosServersForTitleRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerListQosServersForTitleRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMultiplayerListQosServersForTitleRequest_Statics::NewProp_IncludeAllRegions_SetBit(void* Obj)
	{
		((FMultiplayerListQosServersForTitleRequest*)Obj)->IncludeAllRegions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMultiplayerListQosServersForTitleRequest_Statics::NewProp_IncludeAllRegions = { "IncludeAllRegions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMultiplayerListQosServersForTitleRequest), &Z_Construct_UScriptStruct_FMultiplayerListQosServersForTitleRequest_Statics::NewProp_IncludeAllRegions_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerListQosServersForTitleRequest_Statics::NewProp_IncludeAllRegions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListQosServersForTitleRequest_Statics::NewProp_IncludeAllRegions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayerListQosServersForTitleRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerListQosServersForTitleRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerListQosServersForTitleRequest_Statics::NewProp_IncludeAllRegions,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerListQosServersForTitleRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"MultiplayerListQosServersForTitleRequest",
		sizeof(FMultiplayerListQosServersForTitleRequest),
		alignof(FMultiplayerListQosServersForTitleRequest),
		Z_Construct_UScriptStruct_FMultiplayerListQosServersForTitleRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListQosServersForTitleRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerListQosServersForTitleRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListQosServersForTitleRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerListQosServersForTitleRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiplayerListQosServersForTitleRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiplayerListQosServersForTitleRequest"), sizeof(FMultiplayerListQosServersForTitleRequest), Get_Z_Construct_UScriptStruct_FMultiplayerListQosServersForTitleRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiplayerListQosServersForTitleRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiplayerListQosServersForTitleRequest_Hash() { return 1469085130U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
