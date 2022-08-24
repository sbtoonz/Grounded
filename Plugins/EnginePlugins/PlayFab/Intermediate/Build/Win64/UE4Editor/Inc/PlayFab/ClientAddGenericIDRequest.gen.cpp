// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientAddGenericIDRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientAddGenericIDRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientAddGenericIDRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientAddGenericIDRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientAddGenericIDRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientAddGenericIDRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientAddGenericIDRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientAddGenericIDRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientAddGenericIDRequest"), sizeof(FClientAddGenericIDRequest), Get_Z_Construct_UScriptStruct_FClientAddGenericIDRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientAddGenericIDRequest>()
{
	return FClientAddGenericIDRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientAddGenericIDRequest(FClientAddGenericIDRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientAddGenericIDRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientAddGenericIDRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientAddGenericIDRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientAddGenericIDRequest>(FName(TEXT("ClientAddGenericIDRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientAddGenericIDRequest;
	struct Z_Construct_UScriptStruct_FClientAddGenericIDRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenericId_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GenericId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientAddGenericIDRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientAddGenericIDRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientAddGenericIDRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientAddGenericIDRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientAddGenericIDRequest_Statics::NewProp_GenericId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientAddGenericIDRequest" },
		{ "ModuleRelativePath", "Public/ClientAddGenericIDRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientAddGenericIDRequest_Statics::NewProp_GenericId = { "GenericId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientAddGenericIDRequest, GenericId), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientAddGenericIDRequest_Statics::NewProp_GenericId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientAddGenericIDRequest_Statics::NewProp_GenericId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientAddGenericIDRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientAddGenericIDRequest_Statics::NewProp_GenericId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientAddGenericIDRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientAddGenericIDRequest",
		sizeof(FClientAddGenericIDRequest),
		alignof(FClientAddGenericIDRequest),
		Z_Construct_UScriptStruct_FClientAddGenericIDRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientAddGenericIDRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientAddGenericIDRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientAddGenericIDRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientAddGenericIDRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientAddGenericIDRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientAddGenericIDRequest"), sizeof(FClientAddGenericIDRequest), Get_Z_Construct_UScriptStruct_FClientAddGenericIDRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientAddGenericIDRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientAddGenericIDRequest_Hash() { return 123401136U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
