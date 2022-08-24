// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientRemoveGenericIDRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientRemoveGenericIDRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientRemoveGenericIDRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientRemoveGenericIDRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientRemoveGenericIDRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientRemoveGenericIDRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientRemoveGenericIDRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientRemoveGenericIDRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientRemoveGenericIDRequest"), sizeof(FClientRemoveGenericIDRequest), Get_Z_Construct_UScriptStruct_FClientRemoveGenericIDRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientRemoveGenericIDRequest>()
{
	return FClientRemoveGenericIDRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientRemoveGenericIDRequest(FClientRemoveGenericIDRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientRemoveGenericIDRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientRemoveGenericIDRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientRemoveGenericIDRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientRemoveGenericIDRequest>(FName(TEXT("ClientRemoveGenericIDRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientRemoveGenericIDRequest;
	struct Z_Construct_UScriptStruct_FClientRemoveGenericIDRequest_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientRemoveGenericIDRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientRemoveGenericIDRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientRemoveGenericIDRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientRemoveGenericIDRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientRemoveGenericIDRequest_Statics::NewProp_GenericId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientRemoveGenericIDRequest" },
		{ "ModuleRelativePath", "Public/ClientRemoveGenericIDRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientRemoveGenericIDRequest_Statics::NewProp_GenericId = { "GenericId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientRemoveGenericIDRequest, GenericId), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientRemoveGenericIDRequest_Statics::NewProp_GenericId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRemoveGenericIDRequest_Statics::NewProp_GenericId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientRemoveGenericIDRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientRemoveGenericIDRequest_Statics::NewProp_GenericId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientRemoveGenericIDRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientRemoveGenericIDRequest",
		sizeof(FClientRemoveGenericIDRequest),
		alignof(FClientRemoveGenericIDRequest),
		Z_Construct_UScriptStruct_FClientRemoveGenericIDRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRemoveGenericIDRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientRemoveGenericIDRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRemoveGenericIDRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientRemoveGenericIDRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientRemoveGenericIDRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientRemoveGenericIDRequest"), sizeof(FClientRemoveGenericIDRequest), Get_Z_Construct_UScriptStruct_FClientRemoveGenericIDRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientRemoveGenericIDRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientRemoveGenericIDRequest_Hash() { return 4232708998U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
