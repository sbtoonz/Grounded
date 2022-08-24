// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerLoginWithXboxIdRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerLoginWithXboxIdRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerLoginWithXboxIdRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerLoginWithXboxIdRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerLoginWithXboxIdRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerLoginWithXboxIdRequest"), sizeof(FServerLoginWithXboxIdRequest), Get_Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerLoginWithXboxIdRequest>()
{
	return FServerLoginWithXboxIdRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerLoginWithXboxIdRequest(FServerLoginWithXboxIdRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerLoginWithXboxIdRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerLoginWithXboxIdRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerLoginWithXboxIdRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerLoginWithXboxIdRequest>(FName(TEXT("ServerLoginWithXboxIdRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerLoginWithXboxIdRequest;
	struct Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfoRequestParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InfoRequestParameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sandbox_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Sandbox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XboxId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_XboxId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerLoginWithXboxIdRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerLoginWithXboxIdRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::NewProp_CreateAccount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerLoginWithXboxIdRequest" },
		{ "ModuleRelativePath", "Public/ServerLoginWithXboxIdRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::NewProp_CreateAccount_SetBit(void* Obj)
	{
		((FServerLoginWithXboxIdRequest*)Obj)->CreateAccount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::NewProp_CreateAccount = { "CreateAccount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FServerLoginWithXboxIdRequest), &Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::NewProp_CreateAccount_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::NewProp_CreateAccount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::NewProp_CreateAccount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerLoginWithXboxIdRequest" },
		{ "ModuleRelativePath", "Public/ServerLoginWithXboxIdRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerLoginWithXboxIdRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::NewProp_InfoRequestParameters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerLoginWithXboxIdRequest" },
		{ "ModuleRelativePath", "Public/ServerLoginWithXboxIdRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::NewProp_InfoRequestParameters = { "InfoRequestParameters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerLoginWithXboxIdRequest, InfoRequestParameters), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::NewProp_InfoRequestParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::NewProp_InfoRequestParameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::NewProp_Sandbox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerLoginWithXboxIdRequest" },
		{ "ModuleRelativePath", "Public/ServerLoginWithXboxIdRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::NewProp_Sandbox = { "Sandbox", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerLoginWithXboxIdRequest, Sandbox), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::NewProp_Sandbox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::NewProp_Sandbox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::NewProp_XboxId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerLoginWithXboxIdRequest" },
		{ "ModuleRelativePath", "Public/ServerLoginWithXboxIdRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::NewProp_XboxId = { "XboxId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerLoginWithXboxIdRequest, XboxId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::NewProp_XboxId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::NewProp_XboxId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::NewProp_CreateAccount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::NewProp_InfoRequestParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::NewProp_Sandbox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::NewProp_XboxId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerLoginWithXboxIdRequest",
		sizeof(FServerLoginWithXboxIdRequest),
		alignof(FServerLoginWithXboxIdRequest),
		Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerLoginWithXboxIdRequest"), sizeof(FServerLoginWithXboxIdRequest), Get_Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerLoginWithXboxIdRequest_Hash() { return 215885771U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
