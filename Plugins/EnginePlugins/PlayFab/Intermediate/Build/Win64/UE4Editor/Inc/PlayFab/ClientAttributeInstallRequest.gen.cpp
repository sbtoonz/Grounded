// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientAttributeInstallRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientAttributeInstallRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientAttributeInstallRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientAttributeInstallRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientAttributeInstallRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientAttributeInstallRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientAttributeInstallRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientAttributeInstallRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientAttributeInstallRequest"), sizeof(FClientAttributeInstallRequest), Get_Z_Construct_UScriptStruct_FClientAttributeInstallRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientAttributeInstallRequest>()
{
	return FClientAttributeInstallRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientAttributeInstallRequest(FClientAttributeInstallRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientAttributeInstallRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientAttributeInstallRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientAttributeInstallRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientAttributeInstallRequest>(FName(TEXT("ClientAttributeInstallRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientAttributeInstallRequest;
	struct Z_Construct_UScriptStruct_FClientAttributeInstallRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Adid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Adid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Idfa_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Idfa;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientAttributeInstallRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientAttributeInstallRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientAttributeInstallRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientAttributeInstallRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientAttributeInstallRequest_Statics::NewProp_Adid_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientAttributeInstallRequest" },
		{ "ModuleRelativePath", "Public/ClientAttributeInstallRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientAttributeInstallRequest_Statics::NewProp_Adid = { "Adid", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientAttributeInstallRequest, Adid), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientAttributeInstallRequest_Statics::NewProp_Adid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientAttributeInstallRequest_Statics::NewProp_Adid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientAttributeInstallRequest_Statics::NewProp_Idfa_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientAttributeInstallRequest" },
		{ "ModuleRelativePath", "Public/ClientAttributeInstallRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientAttributeInstallRequest_Statics::NewProp_Idfa = { "Idfa", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientAttributeInstallRequest, Idfa), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientAttributeInstallRequest_Statics::NewProp_Idfa_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientAttributeInstallRequest_Statics::NewProp_Idfa_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientAttributeInstallRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientAttributeInstallRequest_Statics::NewProp_Adid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientAttributeInstallRequest_Statics::NewProp_Idfa,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientAttributeInstallRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientAttributeInstallRequest",
		sizeof(FClientAttributeInstallRequest),
		alignof(FClientAttributeInstallRequest),
		Z_Construct_UScriptStruct_FClientAttributeInstallRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientAttributeInstallRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientAttributeInstallRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientAttributeInstallRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientAttributeInstallRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientAttributeInstallRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientAttributeInstallRequest"), sizeof(FClientAttributeInstallRequest), Get_Z_Construct_UScriptStruct_FClientAttributeInstallRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientAttributeInstallRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientAttributeInstallRequest_Hash() { return 752954218U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
