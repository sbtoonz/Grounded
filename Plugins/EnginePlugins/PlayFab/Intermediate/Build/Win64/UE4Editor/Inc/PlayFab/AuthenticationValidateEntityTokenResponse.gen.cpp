// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AuthenticationValidateEntityTokenResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuthenticationValidateEntityTokenResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EIdentifiedDeviceType();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ELoginIdentityProvider();
// End Cross Module References

static_assert(std::is_polymorphic<FAuthenticationValidateEntityTokenResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAuthenticationValidateEntityTokenResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAuthenticationValidateEntityTokenResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("AuthenticationValidateEntityTokenResponse"), sizeof(FAuthenticationValidateEntityTokenResponse), Get_Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAuthenticationValidateEntityTokenResponse>()
{
	return FAuthenticationValidateEntityTokenResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAuthenticationValidateEntityTokenResponse(FAuthenticationValidateEntityTokenResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AuthenticationValidateEntityTokenResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAuthenticationValidateEntityTokenResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAuthenticationValidateEntityTokenResponse()
	{
		UScriptStruct::DeferCppStructOps<FAuthenticationValidateEntityTokenResponse>(FName(TEXT("AuthenticationValidateEntityTokenResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAuthenticationValidateEntityTokenResponse;
	struct Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Entity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IdentifiedDeviceType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdentifiedDeviceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_IdentifiedDeviceType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IdentityProvider_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdentityProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_IdentityProvider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lineage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Lineage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AuthenticationValidateEntityTokenResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuthenticationValidateEntityTokenResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_Entity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AuthenticationValidateEntityTokenResponse" },
		{ "ModuleRelativePath", "Public/AuthenticationValidateEntityTokenResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuthenticationValidateEntityTokenResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_Entity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentifiedDeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentifiedDeviceType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AuthenticationValidateEntityTokenResponse" },
		{ "ModuleRelativePath", "Public/AuthenticationValidateEntityTokenResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentifiedDeviceType = { "IdentifiedDeviceType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuthenticationValidateEntityTokenResponse, IdentifiedDeviceType), Z_Construct_UEnum_PlayFab_EIdentifiedDeviceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentifiedDeviceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentifiedDeviceType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentityProvider_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentityProvider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AuthenticationValidateEntityTokenResponse" },
		{ "ModuleRelativePath", "Public/AuthenticationValidateEntityTokenResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentityProvider = { "IdentityProvider", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuthenticationValidateEntityTokenResponse, IdentityProvider), Z_Construct_UEnum_PlayFab_ELoginIdentityProvider, METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentityProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentityProvider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_Lineage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AuthenticationValidateEntityTokenResponse" },
		{ "ModuleRelativePath", "Public/AuthenticationValidateEntityTokenResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_Lineage = { "Lineage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuthenticationValidateEntityTokenResponse, Lineage), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_Lineage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_Lineage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentifiedDeviceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentifiedDeviceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentityProvider_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_IdentityProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::NewProp_Lineage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AuthenticationValidateEntityTokenResponse",
		sizeof(FAuthenticationValidateEntityTokenResponse),
		alignof(FAuthenticationValidateEntityTokenResponse),
		Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AuthenticationValidateEntityTokenResponse"), sizeof(FAuthenticationValidateEntityTokenResponse), Get_Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAuthenticationValidateEntityTokenResponse_Hash() { return 135337078U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
