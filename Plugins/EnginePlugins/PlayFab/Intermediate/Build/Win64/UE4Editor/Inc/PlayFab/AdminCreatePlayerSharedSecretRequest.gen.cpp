// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminCreatePlayerSharedSecretRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminCreatePlayerSharedSecretRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminCreatePlayerSharedSecretRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminCreatePlayerSharedSecretRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminCreatePlayerSharedSecretRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminCreatePlayerSharedSecretRequest"), sizeof(FAdminCreatePlayerSharedSecretRequest), Get_Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminCreatePlayerSharedSecretRequest>()
{
	return FAdminCreatePlayerSharedSecretRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminCreatePlayerSharedSecretRequest(FAdminCreatePlayerSharedSecretRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminCreatePlayerSharedSecretRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminCreatePlayerSharedSecretRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminCreatePlayerSharedSecretRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminCreatePlayerSharedSecretRequest>(FName(TEXT("AdminCreatePlayerSharedSecretRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminCreatePlayerSharedSecretRequest;
	struct Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendlyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendlyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminCreatePlayerSharedSecretRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminCreatePlayerSharedSecretRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretRequest_Statics::NewProp_FriendlyName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminCreatePlayerSharedSecretRequest" },
		{ "ModuleRelativePath", "Public/AdminCreatePlayerSharedSecretRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretRequest_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminCreatePlayerSharedSecretRequest, FriendlyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretRequest_Statics::NewProp_FriendlyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretRequest_Statics::NewProp_FriendlyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretRequest_Statics::NewProp_FriendlyName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminCreatePlayerSharedSecretRequest",
		sizeof(FAdminCreatePlayerSharedSecretRequest),
		alignof(FAdminCreatePlayerSharedSecretRequest),
		Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminCreatePlayerSharedSecretRequest"), sizeof(FAdminCreatePlayerSharedSecretRequest), Get_Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretRequest_Hash() { return 4171194567U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
