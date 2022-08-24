// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminAddVirtualCurrencyTypesRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminAddVirtualCurrencyTypesRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminAddVirtualCurrencyTypesRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminAddVirtualCurrencyTypesRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminAddVirtualCurrencyTypesRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminAddVirtualCurrencyTypesRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminAddVirtualCurrencyTypesRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminAddVirtualCurrencyTypesRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminAddVirtualCurrencyTypesRequest"), sizeof(FAdminAddVirtualCurrencyTypesRequest), Get_Z_Construct_UScriptStruct_FAdminAddVirtualCurrencyTypesRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminAddVirtualCurrencyTypesRequest>()
{
	return FAdminAddVirtualCurrencyTypesRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminAddVirtualCurrencyTypesRequest(FAdminAddVirtualCurrencyTypesRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminAddVirtualCurrencyTypesRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminAddVirtualCurrencyTypesRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminAddVirtualCurrencyTypesRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminAddVirtualCurrencyTypesRequest>(FName(TEXT("AdminAddVirtualCurrencyTypesRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminAddVirtualCurrencyTypesRequest;
	struct Z_Construct_UScriptStruct_FAdminAddVirtualCurrencyTypesRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VirtualCurrencies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualCurrencies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VirtualCurrencies;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminAddVirtualCurrencyTypesRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminAddVirtualCurrencyTypesRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminAddVirtualCurrencyTypesRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminAddVirtualCurrencyTypesRequest>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminAddVirtualCurrencyTypesRequest_Statics::NewProp_VirtualCurrencies_Inner = { "VirtualCurrencies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminAddVirtualCurrencyTypesRequest_Statics::NewProp_VirtualCurrencies_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminAddVirtualCurrencyTypesRequest" },
		{ "ModuleRelativePath", "Public/AdminAddVirtualCurrencyTypesRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAdminAddVirtualCurrencyTypesRequest_Statics::NewProp_VirtualCurrencies = { "VirtualCurrencies", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminAddVirtualCurrencyTypesRequest, VirtualCurrencies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminAddVirtualCurrencyTypesRequest_Statics::NewProp_VirtualCurrencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminAddVirtualCurrencyTypesRequest_Statics::NewProp_VirtualCurrencies_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminAddVirtualCurrencyTypesRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminAddVirtualCurrencyTypesRequest_Statics::NewProp_VirtualCurrencies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminAddVirtualCurrencyTypesRequest_Statics::NewProp_VirtualCurrencies,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminAddVirtualCurrencyTypesRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminAddVirtualCurrencyTypesRequest",
		sizeof(FAdminAddVirtualCurrencyTypesRequest),
		alignof(FAdminAddVirtualCurrencyTypesRequest),
		Z_Construct_UScriptStruct_FAdminAddVirtualCurrencyTypesRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminAddVirtualCurrencyTypesRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminAddVirtualCurrencyTypesRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminAddVirtualCurrencyTypesRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminAddVirtualCurrencyTypesRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminAddVirtualCurrencyTypesRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminAddVirtualCurrencyTypesRequest"), sizeof(FAdminAddVirtualCurrencyTypesRequest), Get_Z_Construct_UScriptStruct_FAdminAddVirtualCurrencyTypesRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminAddVirtualCurrencyTypesRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminAddVirtualCurrencyTypesRequest_Hash() { return 1102364424U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif