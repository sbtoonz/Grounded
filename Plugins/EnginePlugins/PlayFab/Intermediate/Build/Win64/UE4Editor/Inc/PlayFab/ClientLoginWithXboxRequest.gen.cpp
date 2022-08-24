// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientLoginWithXboxRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientLoginWithXboxRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientLoginWithXboxRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientLoginWithXboxRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientLoginWithXboxRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientLoginWithXboxRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientLoginWithXboxRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientLoginWithXboxRequest"), sizeof(FClientLoginWithXboxRequest), Get_Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientLoginWithXboxRequest>()
{
	return FClientLoginWithXboxRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientLoginWithXboxRequest(FClientLoginWithXboxRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientLoginWithXboxRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientLoginWithXboxRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientLoginWithXboxRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientLoginWithXboxRequest>(FName(TEXT("ClientLoginWithXboxRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientLoginWithXboxRequest;
	struct Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfoRequestParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InfoRequestParameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerSecret_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerSecret;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XboxToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_XboxToken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientLoginWithXboxRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientLoginWithXboxRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::NewProp_CreateAccount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientLoginWithXboxRequest" },
		{ "ModuleRelativePath", "Public/ClientLoginWithXboxRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::NewProp_CreateAccount_SetBit(void* Obj)
	{
		((FClientLoginWithXboxRequest*)Obj)->CreateAccount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::NewProp_CreateAccount = { "CreateAccount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FClientLoginWithXboxRequest), &Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::NewProp_CreateAccount_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::NewProp_CreateAccount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::NewProp_CreateAccount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientLoginWithXboxRequest" },
		{ "ModuleRelativePath", "Public/ClientLoginWithXboxRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLoginWithXboxRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::NewProp_EncryptedRequest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientLoginWithXboxRequest" },
		{ "ModuleRelativePath", "Public/ClientLoginWithXboxRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::NewProp_EncryptedRequest = { "EncryptedRequest", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLoginWithXboxRequest, EncryptedRequest), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::NewProp_EncryptedRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::NewProp_EncryptedRequest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::NewProp_InfoRequestParameters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientLoginWithXboxRequest" },
		{ "ModuleRelativePath", "Public/ClientLoginWithXboxRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::NewProp_InfoRequestParameters = { "InfoRequestParameters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLoginWithXboxRequest, InfoRequestParameters), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::NewProp_InfoRequestParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::NewProp_InfoRequestParameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::NewProp_PlayerSecret_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientLoginWithXboxRequest" },
		{ "ModuleRelativePath", "Public/ClientLoginWithXboxRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::NewProp_PlayerSecret = { "PlayerSecret", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLoginWithXboxRequest, PlayerSecret), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::NewProp_PlayerSecret_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::NewProp_PlayerSecret_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::NewProp_XboxToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientLoginWithXboxRequest" },
		{ "ModuleRelativePath", "Public/ClientLoginWithXboxRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::NewProp_XboxToken = { "XboxToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLoginWithXboxRequest, XboxToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::NewProp_XboxToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::NewProp_XboxToken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::NewProp_CreateAccount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::NewProp_EncryptedRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::NewProp_InfoRequestParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::NewProp_PlayerSecret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::NewProp_XboxToken,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientLoginWithXboxRequest",
		sizeof(FClientLoginWithXboxRequest),
		alignof(FClientLoginWithXboxRequest),
		Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientLoginWithXboxRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientLoginWithXboxRequest"), sizeof(FClientLoginWithXboxRequest), Get_Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientLoginWithXboxRequest_Hash() { return 188028148U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
