// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerRemoveGenericIDRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerRemoveGenericIDRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerRemoveGenericIDRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerRemoveGenericIDRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerRemoveGenericIDRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerRemoveGenericIDRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerRemoveGenericIDRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerRemoveGenericIDRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerRemoveGenericIDRequest"), sizeof(FServerRemoveGenericIDRequest), Get_Z_Construct_UScriptStruct_FServerRemoveGenericIDRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerRemoveGenericIDRequest>()
{
	return FServerRemoveGenericIDRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerRemoveGenericIDRequest(FServerRemoveGenericIDRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerRemoveGenericIDRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerRemoveGenericIDRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerRemoveGenericIDRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerRemoveGenericIDRequest>(FName(TEXT("ServerRemoveGenericIDRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerRemoveGenericIDRequest;
	struct Z_Construct_UScriptStruct_FServerRemoveGenericIDRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenericId_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GenericId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerRemoveGenericIDRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerRemoveGenericIDRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerRemoveGenericIDRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerRemoveGenericIDRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerRemoveGenericIDRequest_Statics::NewProp_GenericId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerRemoveGenericIDRequest" },
		{ "ModuleRelativePath", "Public/ServerRemoveGenericIDRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerRemoveGenericIDRequest_Statics::NewProp_GenericId = { "GenericId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerRemoveGenericIDRequest, GenericId), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerRemoveGenericIDRequest_Statics::NewProp_GenericId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRemoveGenericIDRequest_Statics::NewProp_GenericId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerRemoveGenericIDRequest_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerRemoveGenericIDRequest" },
		{ "ModuleRelativePath", "Public/ServerRemoveGenericIDRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerRemoveGenericIDRequest_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerRemoveGenericIDRequest, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerRemoveGenericIDRequest_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRemoveGenericIDRequest_Statics::NewProp_PlayFabId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerRemoveGenericIDRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerRemoveGenericIDRequest_Statics::NewProp_GenericId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerRemoveGenericIDRequest_Statics::NewProp_PlayFabId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerRemoveGenericIDRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerRemoveGenericIDRequest",
		sizeof(FServerRemoveGenericIDRequest),
		alignof(FServerRemoveGenericIDRequest),
		Z_Construct_UScriptStruct_FServerRemoveGenericIDRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRemoveGenericIDRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerRemoveGenericIDRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRemoveGenericIDRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerRemoveGenericIDRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerRemoveGenericIDRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerRemoveGenericIDRequest"), sizeof(FServerRemoveGenericIDRequest), Get_Z_Construct_UScriptStruct_FServerRemoveGenericIDRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerRemoveGenericIDRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerRemoveGenericIDRequest_Hash() { return 1047290604U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
