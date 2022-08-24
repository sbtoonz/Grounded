// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientLoginWithFacebookInstantGamesIdRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientLoginWithFacebookInstantGamesIdRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientLoginWithFacebookInstantGamesIdRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientLoginWithFacebookInstantGamesIdRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientLoginWithFacebookInstantGamesIdRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientLoginWithFacebookInstantGamesIdRequest"), sizeof(FClientLoginWithFacebookInstantGamesIdRequest), Get_Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientLoginWithFacebookInstantGamesIdRequest>()
{
	return FClientLoginWithFacebookInstantGamesIdRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest(FClientLoginWithFacebookInstantGamesIdRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientLoginWithFacebookInstantGamesIdRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientLoginWithFacebookInstantGamesIdRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientLoginWithFacebookInstantGamesIdRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientLoginWithFacebookInstantGamesIdRequest>(FName(TEXT("ClientLoginWithFacebookInstantGamesIdRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientLoginWithFacebookInstantGamesIdRequest;
	struct Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreateAccount_MetaData[];
#endif
		static void NewProp_CreateAccount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CreateAccount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EncryptedRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EncryptedRequest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FacebookInstantGamesSignature_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FacebookInstantGamesSignature;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfoRequestParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InfoRequestParameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerSecret_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerSecret;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientLoginWithFacebookInstantGamesIdRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientLoginWithFacebookInstantGamesIdRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::NewProp_CreateAccount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientLoginWithFacebookInstantGamesIdRequest" },
		{ "ModuleRelativePath", "Public/ClientLoginWithFacebookInstantGamesIdRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::NewProp_CreateAccount_SetBit(void* Obj)
	{
		((FClientLoginWithFacebookInstantGamesIdRequest*)Obj)->CreateAccount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::NewProp_CreateAccount = { "CreateAccount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FClientLoginWithFacebookInstantGamesIdRequest), &Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::NewProp_CreateAccount_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::NewProp_CreateAccount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::NewProp_CreateAccount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientLoginWithFacebookInstantGamesIdRequest" },
		{ "ModuleRelativePath", "Public/ClientLoginWithFacebookInstantGamesIdRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLoginWithFacebookInstantGamesIdRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::NewProp_EncryptedRequest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientLoginWithFacebookInstantGamesIdRequest" },
		{ "ModuleRelativePath", "Public/ClientLoginWithFacebookInstantGamesIdRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::NewProp_EncryptedRequest = { "EncryptedRequest", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLoginWithFacebookInstantGamesIdRequest, EncryptedRequest), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::NewProp_EncryptedRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::NewProp_EncryptedRequest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::NewProp_FacebookInstantGamesSignature_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientLoginWithFacebookInstantGamesIdRequest" },
		{ "ModuleRelativePath", "Public/ClientLoginWithFacebookInstantGamesIdRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::NewProp_FacebookInstantGamesSignature = { "FacebookInstantGamesSignature", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLoginWithFacebookInstantGamesIdRequest, FacebookInstantGamesSignature), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::NewProp_FacebookInstantGamesSignature_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::NewProp_FacebookInstantGamesSignature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::NewProp_InfoRequestParameters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientLoginWithFacebookInstantGamesIdRequest" },
		{ "ModuleRelativePath", "Public/ClientLoginWithFacebookInstantGamesIdRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::NewProp_InfoRequestParameters = { "InfoRequestParameters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLoginWithFacebookInstantGamesIdRequest, InfoRequestParameters), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::NewProp_InfoRequestParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::NewProp_InfoRequestParameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::NewProp_PlayerSecret_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientLoginWithFacebookInstantGamesIdRequest" },
		{ "ModuleRelativePath", "Public/ClientLoginWithFacebookInstantGamesIdRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::NewProp_PlayerSecret = { "PlayerSecret", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLoginWithFacebookInstantGamesIdRequest, PlayerSecret), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::NewProp_PlayerSecret_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::NewProp_PlayerSecret_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::NewProp_CreateAccount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::NewProp_EncryptedRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::NewProp_FacebookInstantGamesSignature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::NewProp_InfoRequestParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::NewProp_PlayerSecret,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientLoginWithFacebookInstantGamesIdRequest",
		sizeof(FClientLoginWithFacebookInstantGamesIdRequest),
		alignof(FClientLoginWithFacebookInstantGamesIdRequest),
		Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientLoginWithFacebookInstantGamesIdRequest"), sizeof(FClientLoginWithFacebookInstantGamesIdRequest), Get_Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientLoginWithFacebookInstantGamesIdRequest_Hash() { return 2545391201U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif