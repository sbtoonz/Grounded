// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerGetTitleDataRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerGetTitleDataRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerGetTitleDataRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FServerGetTitleDataRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerGetTitleDataRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerGetTitleDataRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerGetTitleDataRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerGetTitleDataRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerGetTitleDataRequest"), sizeof(FServerGetTitleDataRequest), Get_Z_Construct_UScriptStruct_FServerGetTitleDataRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerGetTitleDataRequest>()
{
	return FServerGetTitleDataRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerGetTitleDataRequest(FServerGetTitleDataRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerGetTitleDataRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerGetTitleDataRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerGetTitleDataRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerGetTitleDataRequest>(FName(TEXT("ServerGetTitleDataRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerGetTitleDataRequest;
	struct Z_Construct_UScriptStruct_FServerGetTitleDataRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Keys;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OverrideLabel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetTitleDataRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerGetTitleDataRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerGetTitleDataRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerGetTitleDataRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetTitleDataRequest_Statics::NewProp_Keys_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetTitleDataRequest" },
		{ "ModuleRelativePath", "Public/ServerGetTitleDataRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerGetTitleDataRequest_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetTitleDataRequest, Keys), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetTitleDataRequest_Statics::NewProp_Keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetTitleDataRequest_Statics::NewProp_Keys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetTitleDataRequest_Statics::NewProp_OverrideLabel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetTitleDataRequest" },
		{ "ModuleRelativePath", "Public/ServerGetTitleDataRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerGetTitleDataRequest_Statics::NewProp_OverrideLabel = { "OverrideLabel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetTitleDataRequest, OverrideLabel), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetTitleDataRequest_Statics::NewProp_OverrideLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetTitleDataRequest_Statics::NewProp_OverrideLabel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerGetTitleDataRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetTitleDataRequest_Statics::NewProp_Keys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetTitleDataRequest_Statics::NewProp_OverrideLabel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerGetTitleDataRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerGetTitleDataRequest",
		sizeof(FServerGetTitleDataRequest),
		alignof(FServerGetTitleDataRequest),
		Z_Construct_UScriptStruct_FServerGetTitleDataRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetTitleDataRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetTitleDataRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetTitleDataRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerGetTitleDataRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerGetTitleDataRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerGetTitleDataRequest"), sizeof(FServerGetTitleDataRequest), Get_Z_Construct_UScriptStruct_FServerGetTitleDataRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerGetTitleDataRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerGetTitleDataRequest_Hash() { return 2400765448U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
