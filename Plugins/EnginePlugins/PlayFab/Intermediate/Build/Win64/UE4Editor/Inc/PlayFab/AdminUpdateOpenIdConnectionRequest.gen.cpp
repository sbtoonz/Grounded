// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminUpdateOpenIdConnectionRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminUpdateOpenIdConnectionRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminUpdateOpenIdConnectionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminUpdateOpenIdConnectionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminUpdateOpenIdConnectionRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminUpdateOpenIdConnectionRequest"), sizeof(FAdminUpdateOpenIdConnectionRequest), Get_Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminUpdateOpenIdConnectionRequest>()
{
	return FAdminUpdateOpenIdConnectionRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest(FAdminUpdateOpenIdConnectionRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminUpdateOpenIdConnectionRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminUpdateOpenIdConnectionRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminUpdateOpenIdConnectionRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminUpdateOpenIdConnectionRequest>(FName(TEXT("AdminUpdateOpenIdConnectionRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminUpdateOpenIdConnectionRequest;
	struct Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientSecret_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientSecret;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConnectionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IssuerDiscoveryUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IssuerDiscoveryUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IssuerInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IssuerInformation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminUpdateOpenIdConnectionRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminUpdateOpenIdConnectionRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::NewProp_ClientId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminUpdateOpenIdConnectionRequest" },
		{ "ModuleRelativePath", "Public/AdminUpdateOpenIdConnectionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminUpdateOpenIdConnectionRequest, ClientId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::NewProp_ClientId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::NewProp_ClientId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::NewProp_ClientSecret_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminUpdateOpenIdConnectionRequest" },
		{ "ModuleRelativePath", "Public/AdminUpdateOpenIdConnectionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::NewProp_ClientSecret = { "ClientSecret", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminUpdateOpenIdConnectionRequest, ClientSecret), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::NewProp_ClientSecret_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::NewProp_ClientSecret_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::NewProp_ConnectionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminUpdateOpenIdConnectionRequest" },
		{ "ModuleRelativePath", "Public/AdminUpdateOpenIdConnectionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::NewProp_ConnectionId = { "ConnectionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminUpdateOpenIdConnectionRequest, ConnectionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::NewProp_ConnectionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::NewProp_ConnectionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::NewProp_IssuerDiscoveryUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminUpdateOpenIdConnectionRequest" },
		{ "ModuleRelativePath", "Public/AdminUpdateOpenIdConnectionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::NewProp_IssuerDiscoveryUrl = { "IssuerDiscoveryUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminUpdateOpenIdConnectionRequest, IssuerDiscoveryUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::NewProp_IssuerDiscoveryUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::NewProp_IssuerDiscoveryUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::NewProp_IssuerInformation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminUpdateOpenIdConnectionRequest" },
		{ "ModuleRelativePath", "Public/AdminUpdateOpenIdConnectionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::NewProp_IssuerInformation = { "IssuerInformation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminUpdateOpenIdConnectionRequest, IssuerInformation), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::NewProp_IssuerInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::NewProp_IssuerInformation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::NewProp_ClientId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::NewProp_ClientSecret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::NewProp_ConnectionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::NewProp_IssuerDiscoveryUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::NewProp_IssuerInformation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminUpdateOpenIdConnectionRequest",
		sizeof(FAdminUpdateOpenIdConnectionRequest),
		alignof(FAdminUpdateOpenIdConnectionRequest),
		Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminUpdateOpenIdConnectionRequest"), sizeof(FAdminUpdateOpenIdConnectionRequest), Get_Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminUpdateOpenIdConnectionRequest_Hash() { return 164447755U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
