// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AuthenticationGetEntityTokenResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuthenticationGetEntityTokenResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAuthenticationGetEntityTokenResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAuthenticationGetEntityTokenResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAuthenticationGetEntityTokenResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("AuthenticationGetEntityTokenResponse"), sizeof(FAuthenticationGetEntityTokenResponse), Get_Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAuthenticationGetEntityTokenResponse>()
{
	return FAuthenticationGetEntityTokenResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAuthenticationGetEntityTokenResponse(FAuthenticationGetEntityTokenResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AuthenticationGetEntityTokenResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAuthenticationGetEntityTokenResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAuthenticationGetEntityTokenResponse()
	{
		UScriptStruct::DeferCppStructOps<FAuthenticationGetEntityTokenResponse>(FName(TEXT("AuthenticationGetEntityTokenResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAuthenticationGetEntityTokenResponse;
	struct Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Entity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntityToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EntityToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TokenExpiration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TokenExpiration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AuthenticationGetEntityTokenResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuthenticationGetEntityTokenResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_Entity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AuthenticationGetEntityTokenResponse" },
		{ "ModuleRelativePath", "Public/AuthenticationGetEntityTokenResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuthenticationGetEntityTokenResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_EntityToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AuthenticationGetEntityTokenResponse" },
		{ "ModuleRelativePath", "Public/AuthenticationGetEntityTokenResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_EntityToken = { "EntityToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuthenticationGetEntityTokenResponse, EntityToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_EntityToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_EntityToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_TokenExpiration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AuthenticationGetEntityTokenResponse" },
		{ "ModuleRelativePath", "Public/AuthenticationGetEntityTokenResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_TokenExpiration = { "TokenExpiration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuthenticationGetEntityTokenResponse, TokenExpiration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_TokenExpiration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_TokenExpiration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_EntityToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::NewProp_TokenExpiration,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AuthenticationGetEntityTokenResponse",
		sizeof(FAuthenticationGetEntityTokenResponse),
		alignof(FAuthenticationGetEntityTokenResponse),
		Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AuthenticationGetEntityTokenResponse"), sizeof(FAuthenticationGetEntityTokenResponse), Get_Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAuthenticationGetEntityTokenResponse_Hash() { return 2231286618U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
