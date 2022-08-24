// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerUpdateCharacterDataRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerUpdateCharacterDataRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EUserDataPermission();
// End Cross Module References

static_assert(std::is_polymorphic<FServerUpdateCharacterDataRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerUpdateCharacterDataRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerUpdateCharacterDataRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerUpdateCharacterDataRequest"), sizeof(FServerUpdateCharacterDataRequest), Get_Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerUpdateCharacterDataRequest>()
{
	return FServerUpdateCharacterDataRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerUpdateCharacterDataRequest(FServerUpdateCharacterDataRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerUpdateCharacterDataRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerUpdateCharacterDataRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerUpdateCharacterDataRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerUpdateCharacterDataRequest>(FName(TEXT("ServerUpdateCharacterDataRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerUpdateCharacterDataRequest;
	struct Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeysToRemove_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KeysToRemove;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Permission_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Permission_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Permission;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerUpdateCharacterDataRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerUpdateCharacterDataRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::NewProp_CharacterId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerUpdateCharacterDataRequest" },
		{ "ModuleRelativePath", "Public/ServerUpdateCharacterDataRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerUpdateCharacterDataRequest, CharacterId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::NewProp_CharacterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::NewProp_CharacterId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerUpdateCharacterDataRequest" },
		{ "ModuleRelativePath", "Public/ServerUpdateCharacterDataRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerUpdateCharacterDataRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::NewProp_Data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerUpdateCharacterDataRequest" },
		{ "ModuleRelativePath", "Public/ServerUpdateCharacterDataRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerUpdateCharacterDataRequest, Data), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::NewProp_KeysToRemove_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerUpdateCharacterDataRequest" },
		{ "ModuleRelativePath", "Public/ServerUpdateCharacterDataRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::NewProp_KeysToRemove = { "KeysToRemove", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerUpdateCharacterDataRequest, KeysToRemove), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::NewProp_KeysToRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::NewProp_KeysToRemove_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::NewProp_Permission_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::NewProp_Permission_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerUpdateCharacterDataRequest" },
		{ "ModuleRelativePath", "Public/ServerUpdateCharacterDataRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::NewProp_Permission = { "Permission", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerUpdateCharacterDataRequest, Permission), Z_Construct_UEnum_PlayFab_EUserDataPermission, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::NewProp_Permission_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::NewProp_Permission_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerUpdateCharacterDataRequest" },
		{ "ModuleRelativePath", "Public/ServerUpdateCharacterDataRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerUpdateCharacterDataRequest, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::NewProp_PlayFabId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::NewProp_CharacterId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::NewProp_KeysToRemove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::NewProp_Permission_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::NewProp_Permission,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::NewProp_PlayFabId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerUpdateCharacterDataRequest",
		sizeof(FServerUpdateCharacterDataRequest),
		alignof(FServerUpdateCharacterDataRequest),
		Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerUpdateCharacterDataRequest"), sizeof(FServerUpdateCharacterDataRequest), Get_Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerUpdateCharacterDataRequest_Hash() { return 2128841547U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
