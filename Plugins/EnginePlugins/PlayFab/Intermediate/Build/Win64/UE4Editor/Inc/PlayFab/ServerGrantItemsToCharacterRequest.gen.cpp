// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerGrantItemsToCharacterRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerGrantItemsToCharacterRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerGrantItemsToCharacterRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerGrantItemsToCharacterRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerGrantItemsToCharacterRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerGrantItemsToCharacterRequest"), sizeof(FServerGrantItemsToCharacterRequest), Get_Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerGrantItemsToCharacterRequest>()
{
	return FServerGrantItemsToCharacterRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerGrantItemsToCharacterRequest(FServerGrantItemsToCharacterRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerGrantItemsToCharacterRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerGrantItemsToCharacterRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerGrantItemsToCharacterRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerGrantItemsToCharacterRequest>(FName(TEXT("ServerGrantItemsToCharacterRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerGrantItemsToCharacterRequest;
	struct Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Annotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Annotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CatalogVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CatalogVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacterId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemIds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerGrantItemsToCharacterRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerGrantItemsToCharacterRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::NewProp_Annotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGrantItemsToCharacterRequest" },
		{ "ModuleRelativePath", "Public/ServerGrantItemsToCharacterRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::NewProp_Annotation = { "Annotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGrantItemsToCharacterRequest, Annotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::NewProp_Annotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::NewProp_Annotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::NewProp_CatalogVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGrantItemsToCharacterRequest" },
		{ "ModuleRelativePath", "Public/ServerGrantItemsToCharacterRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::NewProp_CatalogVersion = { "CatalogVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGrantItemsToCharacterRequest, CatalogVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::NewProp_CatalogVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::NewProp_CatalogVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::NewProp_CharacterId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGrantItemsToCharacterRequest" },
		{ "ModuleRelativePath", "Public/ServerGrantItemsToCharacterRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGrantItemsToCharacterRequest, CharacterId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::NewProp_CharacterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::NewProp_CharacterId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGrantItemsToCharacterRequest" },
		{ "ModuleRelativePath", "Public/ServerGrantItemsToCharacterRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGrantItemsToCharacterRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::NewProp_ItemIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGrantItemsToCharacterRequest" },
		{ "ModuleRelativePath", "Public/ServerGrantItemsToCharacterRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::NewProp_ItemIds = { "ItemIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGrantItemsToCharacterRequest, ItemIds), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::NewProp_ItemIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::NewProp_ItemIds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGrantItemsToCharacterRequest" },
		{ "ModuleRelativePath", "Public/ServerGrantItemsToCharacterRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGrantItemsToCharacterRequest, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::NewProp_PlayFabId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::NewProp_Annotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::NewProp_CatalogVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::NewProp_CharacterId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::NewProp_ItemIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::NewProp_PlayFabId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerGrantItemsToCharacterRequest",
		sizeof(FServerGrantItemsToCharacterRequest),
		alignof(FServerGrantItemsToCharacterRequest),
		Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerGrantItemsToCharacterRequest"), sizeof(FServerGrantItemsToCharacterRequest), Get_Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerGrantItemsToCharacterRequest_Hash() { return 2494828573U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
