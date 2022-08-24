// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientLinkGameCenterAccountRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientLinkGameCenterAccountRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientLinkGameCenterAccountRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientLinkGameCenterAccountRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientLinkGameCenterAccountRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientLinkGameCenterAccountRequest"), sizeof(FClientLinkGameCenterAccountRequest), Get_Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientLinkGameCenterAccountRequest>()
{
	return FClientLinkGameCenterAccountRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientLinkGameCenterAccountRequest(FClientLinkGameCenterAccountRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientLinkGameCenterAccountRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientLinkGameCenterAccountRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientLinkGameCenterAccountRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientLinkGameCenterAccountRequest>(FName(TEXT("ClientLinkGameCenterAccountRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientLinkGameCenterAccountRequest;
	struct Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceLink_MetaData[];
#endif
		static void NewProp_ForceLink_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceLink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameCenterId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameCenterId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PublicKeyUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PublicKeyUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Salt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Salt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Signature_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Signature;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Timestamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientLinkGameCenterAccountRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientLinkGameCenterAccountRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientLinkGameCenterAccountRequest" },
		{ "ModuleRelativePath", "Public/ClientLinkGameCenterAccountRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLinkGameCenterAccountRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_ForceLink_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientLinkGameCenterAccountRequest" },
		{ "ModuleRelativePath", "Public/ClientLinkGameCenterAccountRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_ForceLink_SetBit(void* Obj)
	{
		((FClientLinkGameCenterAccountRequest*)Obj)->ForceLink = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_ForceLink = { "ForceLink", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FClientLinkGameCenterAccountRequest), &Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_ForceLink_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_ForceLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_ForceLink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_GameCenterId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientLinkGameCenterAccountRequest" },
		{ "ModuleRelativePath", "Public/ClientLinkGameCenterAccountRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_GameCenterId = { "GameCenterId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLinkGameCenterAccountRequest, GameCenterId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_GameCenterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_GameCenterId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_PublicKeyUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientLinkGameCenterAccountRequest" },
		{ "ModuleRelativePath", "Public/ClientLinkGameCenterAccountRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_PublicKeyUrl = { "PublicKeyUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLinkGameCenterAccountRequest, PublicKeyUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_PublicKeyUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_PublicKeyUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_Salt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientLinkGameCenterAccountRequest" },
		{ "ModuleRelativePath", "Public/ClientLinkGameCenterAccountRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_Salt = { "Salt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLinkGameCenterAccountRequest, Salt), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_Salt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_Salt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_Signature_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientLinkGameCenterAccountRequest" },
		{ "ModuleRelativePath", "Public/ClientLinkGameCenterAccountRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_Signature = { "Signature", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLinkGameCenterAccountRequest, Signature), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_Signature_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_Signature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_Timestamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientLinkGameCenterAccountRequest" },
		{ "ModuleRelativePath", "Public/ClientLinkGameCenterAccountRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLinkGameCenterAccountRequest, Timestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_Timestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_Timestamp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_ForceLink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_GameCenterId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_PublicKeyUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_Salt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_Signature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::NewProp_Timestamp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientLinkGameCenterAccountRequest",
		sizeof(FClientLinkGameCenterAccountRequest),
		alignof(FClientLinkGameCenterAccountRequest),
		Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientLinkGameCenterAccountRequest"), sizeof(FClientLinkGameCenterAccountRequest), Get_Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientLinkGameCenterAccountRequest_Hash() { return 1660827301U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
