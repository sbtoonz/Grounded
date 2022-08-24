// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerGetPlayFabIDsFromGenericIDsRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerGetPlayFabIDsFromGenericIDsRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromGenericIDsRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerGetPlayFabIDsFromGenericIDsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerGetPlayFabIDsFromGenericIDsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerGetPlayFabIDsFromGenericIDsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromGenericIDsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromGenericIDsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerGetPlayFabIDsFromGenericIDsRequest"), sizeof(FServerGetPlayFabIDsFromGenericIDsRequest), Get_Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromGenericIDsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerGetPlayFabIDsFromGenericIDsRequest>()
{
	return FServerGetPlayFabIDsFromGenericIDsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerGetPlayFabIDsFromGenericIDsRequest(FServerGetPlayFabIDsFromGenericIDsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerGetPlayFabIDsFromGenericIDsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerGetPlayFabIDsFromGenericIDsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerGetPlayFabIDsFromGenericIDsRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerGetPlayFabIDsFromGenericIDsRequest>(FName(TEXT("ServerGetPlayFabIDsFromGenericIDsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerGetPlayFabIDsFromGenericIDsRequest;
	struct Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromGenericIDsRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GenericIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenericIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GenericIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromGenericIDsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerGetPlayFabIDsFromGenericIDsRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromGenericIDsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerGetPlayFabIDsFromGenericIDsRequest>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromGenericIDsRequest_Statics::NewProp_GenericIDs_Inner = { "GenericIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromGenericIDsRequest_Statics::NewProp_GenericIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetPlayFabIDsFromGenericIDsRequest" },
		{ "ModuleRelativePath", "Public/ServerGetPlayFabIDsFromGenericIDsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromGenericIDsRequest_Statics::NewProp_GenericIDs = { "GenericIDs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetPlayFabIDsFromGenericIDsRequest, GenericIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromGenericIDsRequest_Statics::NewProp_GenericIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromGenericIDsRequest_Statics::NewProp_GenericIDs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromGenericIDsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromGenericIDsRequest_Statics::NewProp_GenericIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromGenericIDsRequest_Statics::NewProp_GenericIDs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromGenericIDsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerGetPlayFabIDsFromGenericIDsRequest",
		sizeof(FServerGetPlayFabIDsFromGenericIDsRequest),
		alignof(FServerGetPlayFabIDsFromGenericIDsRequest),
		Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromGenericIDsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromGenericIDsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromGenericIDsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromGenericIDsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromGenericIDsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromGenericIDsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerGetPlayFabIDsFromGenericIDsRequest"), sizeof(FServerGetPlayFabIDsFromGenericIDsRequest), Get_Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromGenericIDsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromGenericIDsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromGenericIDsRequest_Hash() { return 3910056140U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
