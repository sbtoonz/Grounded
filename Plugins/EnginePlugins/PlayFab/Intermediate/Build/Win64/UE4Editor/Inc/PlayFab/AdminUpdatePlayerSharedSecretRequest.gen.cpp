// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminUpdatePlayerSharedSecretRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminUpdatePlayerSharedSecretRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminUpdatePlayerSharedSecretRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminUpdatePlayerSharedSecretRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminUpdatePlayerSharedSecretRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminUpdatePlayerSharedSecretRequest"), sizeof(FAdminUpdatePlayerSharedSecretRequest), Get_Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminUpdatePlayerSharedSecretRequest>()
{
	return FAdminUpdatePlayerSharedSecretRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest(FAdminUpdatePlayerSharedSecretRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminUpdatePlayerSharedSecretRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminUpdatePlayerSharedSecretRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminUpdatePlayerSharedSecretRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminUpdatePlayerSharedSecretRequest>(FName(TEXT("AdminUpdatePlayerSharedSecretRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminUpdatePlayerSharedSecretRequest;
	struct Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Disabled_MetaData[];
#endif
		static void NewProp_Disabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Disabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendlyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendlyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecretKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SecretKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminUpdatePlayerSharedSecretRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminUpdatePlayerSharedSecretRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest_Statics::NewProp_Disabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminUpdatePlayerSharedSecretRequest" },
		{ "ModuleRelativePath", "Public/AdminUpdatePlayerSharedSecretRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest_Statics::NewProp_Disabled_SetBit(void* Obj)
	{
		((FAdminUpdatePlayerSharedSecretRequest*)Obj)->Disabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest_Statics::NewProp_Disabled = { "Disabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAdminUpdatePlayerSharedSecretRequest), &Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest_Statics::NewProp_Disabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest_Statics::NewProp_Disabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest_Statics::NewProp_Disabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest_Statics::NewProp_FriendlyName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminUpdatePlayerSharedSecretRequest" },
		{ "ModuleRelativePath", "Public/AdminUpdatePlayerSharedSecretRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminUpdatePlayerSharedSecretRequest, FriendlyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest_Statics::NewProp_FriendlyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest_Statics::NewProp_FriendlyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest_Statics::NewProp_SecretKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminUpdatePlayerSharedSecretRequest" },
		{ "ModuleRelativePath", "Public/AdminUpdatePlayerSharedSecretRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest_Statics::NewProp_SecretKey = { "SecretKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminUpdatePlayerSharedSecretRequest, SecretKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest_Statics::NewProp_SecretKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest_Statics::NewProp_SecretKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest_Statics::NewProp_Disabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest_Statics::NewProp_FriendlyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest_Statics::NewProp_SecretKey,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminUpdatePlayerSharedSecretRequest",
		sizeof(FAdminUpdatePlayerSharedSecretRequest),
		alignof(FAdminUpdatePlayerSharedSecretRequest),
		Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminUpdatePlayerSharedSecretRequest"), sizeof(FAdminUpdatePlayerSharedSecretRequest), Get_Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretRequest_Hash() { return 3169671357U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
