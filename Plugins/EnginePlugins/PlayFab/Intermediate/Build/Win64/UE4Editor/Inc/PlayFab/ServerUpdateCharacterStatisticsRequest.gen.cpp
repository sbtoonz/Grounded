// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerUpdateCharacterStatisticsRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerUpdateCharacterStatisticsRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerUpdateCharacterStatisticsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerUpdateCharacterStatisticsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerUpdateCharacterStatisticsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerUpdateCharacterStatisticsRequest"), sizeof(FServerUpdateCharacterStatisticsRequest), Get_Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerUpdateCharacterStatisticsRequest>()
{
	return FServerUpdateCharacterStatisticsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerUpdateCharacterStatisticsRequest(FServerUpdateCharacterStatisticsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerUpdateCharacterStatisticsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerUpdateCharacterStatisticsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerUpdateCharacterStatisticsRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerUpdateCharacterStatisticsRequest>(FName(TEXT("ServerUpdateCharacterStatisticsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerUpdateCharacterStatisticsRequest;
	struct Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacterId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterStatistics_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterStatistics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerUpdateCharacterStatisticsRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerUpdateCharacterStatisticsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Statics::NewProp_CharacterId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerUpdateCharacterStatisticsRequest" },
		{ "ModuleRelativePath", "Public/ServerUpdateCharacterStatisticsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerUpdateCharacterStatisticsRequest, CharacterId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Statics::NewProp_CharacterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Statics::NewProp_CharacterId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Statics::NewProp_CharacterStatistics_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerUpdateCharacterStatisticsRequest" },
		{ "ModuleRelativePath", "Public/ServerUpdateCharacterStatisticsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Statics::NewProp_CharacterStatistics = { "CharacterStatistics", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerUpdateCharacterStatisticsRequest, CharacterStatistics), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Statics::NewProp_CharacterStatistics_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Statics::NewProp_CharacterStatistics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerUpdateCharacterStatisticsRequest" },
		{ "ModuleRelativePath", "Public/ServerUpdateCharacterStatisticsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerUpdateCharacterStatisticsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerUpdateCharacterStatisticsRequest" },
		{ "ModuleRelativePath", "Public/ServerUpdateCharacterStatisticsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerUpdateCharacterStatisticsRequest, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Statics::NewProp_PlayFabId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Statics::NewProp_CharacterId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Statics::NewProp_CharacterStatistics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Statics::NewProp_PlayFabId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerUpdateCharacterStatisticsRequest",
		sizeof(FServerUpdateCharacterStatisticsRequest),
		alignof(FServerUpdateCharacterStatisticsRequest),
		Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerUpdateCharacterStatisticsRequest"), sizeof(FServerUpdateCharacterStatisticsRequest), Get_Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerUpdateCharacterStatisticsRequest_Hash() { return 796439164U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
