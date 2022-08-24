// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientUnlinkWindowsHelloAccountRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientUnlinkWindowsHelloAccountRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientUnlinkWindowsHelloAccountRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientUnlinkWindowsHelloAccountRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientUnlinkWindowsHelloAccountRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientUnlinkWindowsHelloAccountRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientUnlinkWindowsHelloAccountRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientUnlinkWindowsHelloAccountRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientUnlinkWindowsHelloAccountRequest"), sizeof(FClientUnlinkWindowsHelloAccountRequest), Get_Z_Construct_UScriptStruct_FClientUnlinkWindowsHelloAccountRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientUnlinkWindowsHelloAccountRequest>()
{
	return FClientUnlinkWindowsHelloAccountRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientUnlinkWindowsHelloAccountRequest(FClientUnlinkWindowsHelloAccountRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientUnlinkWindowsHelloAccountRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientUnlinkWindowsHelloAccountRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientUnlinkWindowsHelloAccountRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientUnlinkWindowsHelloAccountRequest>(FName(TEXT("ClientUnlinkWindowsHelloAccountRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientUnlinkWindowsHelloAccountRequest;
	struct Z_Construct_UScriptStruct_FClientUnlinkWindowsHelloAccountRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PublicKeyHint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PublicKeyHint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientUnlinkWindowsHelloAccountRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientUnlinkWindowsHelloAccountRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientUnlinkWindowsHelloAccountRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientUnlinkWindowsHelloAccountRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientUnlinkWindowsHelloAccountRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientUnlinkWindowsHelloAccountRequest" },
		{ "ModuleRelativePath", "Public/ClientUnlinkWindowsHelloAccountRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientUnlinkWindowsHelloAccountRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientUnlinkWindowsHelloAccountRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientUnlinkWindowsHelloAccountRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientUnlinkWindowsHelloAccountRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientUnlinkWindowsHelloAccountRequest_Statics::NewProp_PublicKeyHint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientUnlinkWindowsHelloAccountRequest" },
		{ "ModuleRelativePath", "Public/ClientUnlinkWindowsHelloAccountRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientUnlinkWindowsHelloAccountRequest_Statics::NewProp_PublicKeyHint = { "PublicKeyHint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientUnlinkWindowsHelloAccountRequest, PublicKeyHint), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientUnlinkWindowsHelloAccountRequest_Statics::NewProp_PublicKeyHint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientUnlinkWindowsHelloAccountRequest_Statics::NewProp_PublicKeyHint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientUnlinkWindowsHelloAccountRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientUnlinkWindowsHelloAccountRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientUnlinkWindowsHelloAccountRequest_Statics::NewProp_PublicKeyHint,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientUnlinkWindowsHelloAccountRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientUnlinkWindowsHelloAccountRequest",
		sizeof(FClientUnlinkWindowsHelloAccountRequest),
		alignof(FClientUnlinkWindowsHelloAccountRequest),
		Z_Construct_UScriptStruct_FClientUnlinkWindowsHelloAccountRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientUnlinkWindowsHelloAccountRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientUnlinkWindowsHelloAccountRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientUnlinkWindowsHelloAccountRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientUnlinkWindowsHelloAccountRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientUnlinkWindowsHelloAccountRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientUnlinkWindowsHelloAccountRequest"), sizeof(FClientUnlinkWindowsHelloAccountRequest), Get_Z_Construct_UScriptStruct_FClientUnlinkWindowsHelloAccountRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientUnlinkWindowsHelloAccountRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientUnlinkWindowsHelloAccountRequest_Hash() { return 3024516625U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
