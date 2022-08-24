// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminCreateOpenIdConnectionRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminCreateOpenIdConnectionRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminCreateOpenIdConnectionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminCreateOpenIdConnectionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminCreateOpenIdConnectionRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminCreateOpenIdConnectionRequest"), sizeof(FAdminCreateOpenIdConnectionRequest), Get_Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminCreateOpenIdConnectionRequest>()
{
	return FAdminCreateOpenIdConnectionRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminCreateOpenIdConnectionRequest(FAdminCreateOpenIdConnectionRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminCreateOpenIdConnectionRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminCreateOpenIdConnectionRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminCreateOpenIdConnectionRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminCreateOpenIdConnectionRequest>(FName(TEXT("AdminCreateOpenIdConnectionRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminCreateOpenIdConnectionRequest;
	struct Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreNonce_MetaData[];
#endif
		static void NewProp_IgnoreNonce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IgnoreNonce;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminCreateOpenIdConnectionRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminCreateOpenIdConnectionRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::NewProp_ClientId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminCreateOpenIdConnectionRequest" },
		{ "ModuleRelativePath", "Public/AdminCreateOpenIdConnectionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminCreateOpenIdConnectionRequest, ClientId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::NewProp_ClientId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::NewProp_ClientId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::NewProp_ClientSecret_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminCreateOpenIdConnectionRequest" },
		{ "ModuleRelativePath", "Public/AdminCreateOpenIdConnectionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::NewProp_ClientSecret = { "ClientSecret", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminCreateOpenIdConnectionRequest, ClientSecret), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::NewProp_ClientSecret_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::NewProp_ClientSecret_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::NewProp_ConnectionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminCreateOpenIdConnectionRequest" },
		{ "ModuleRelativePath", "Public/AdminCreateOpenIdConnectionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::NewProp_ConnectionId = { "ConnectionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminCreateOpenIdConnectionRequest, ConnectionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::NewProp_ConnectionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::NewProp_ConnectionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::NewProp_IgnoreNonce_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminCreateOpenIdConnectionRequest" },
		{ "ModuleRelativePath", "Public/AdminCreateOpenIdConnectionRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::NewProp_IgnoreNonce_SetBit(void* Obj)
	{
		((FAdminCreateOpenIdConnectionRequest*)Obj)->IgnoreNonce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::NewProp_IgnoreNonce = { "IgnoreNonce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAdminCreateOpenIdConnectionRequest), &Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::NewProp_IgnoreNonce_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::NewProp_IgnoreNonce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::NewProp_IgnoreNonce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::NewProp_IssuerDiscoveryUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminCreateOpenIdConnectionRequest" },
		{ "ModuleRelativePath", "Public/AdminCreateOpenIdConnectionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::NewProp_IssuerDiscoveryUrl = { "IssuerDiscoveryUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminCreateOpenIdConnectionRequest, IssuerDiscoveryUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::NewProp_IssuerDiscoveryUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::NewProp_IssuerDiscoveryUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::NewProp_IssuerInformation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminCreateOpenIdConnectionRequest" },
		{ "ModuleRelativePath", "Public/AdminCreateOpenIdConnectionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::NewProp_IssuerInformation = { "IssuerInformation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminCreateOpenIdConnectionRequest, IssuerInformation), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::NewProp_IssuerInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::NewProp_IssuerInformation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::NewProp_ClientId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::NewProp_ClientSecret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::NewProp_ConnectionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::NewProp_IgnoreNonce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::NewProp_IssuerDiscoveryUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::NewProp_IssuerInformation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminCreateOpenIdConnectionRequest",
		sizeof(FAdminCreateOpenIdConnectionRequest),
		alignof(FAdminCreateOpenIdConnectionRequest),
		Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminCreateOpenIdConnectionRequest"), sizeof(FAdminCreateOpenIdConnectionRequest), Get_Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminCreateOpenIdConnectionRequest_Hash() { return 4234698030U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
