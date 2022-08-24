// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminRemoveVirtualCurrencyTypesRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminRemoveVirtualCurrencyTypesRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminRemoveVirtualCurrencyTypesRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminRemoveVirtualCurrencyTypesRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminRemoveVirtualCurrencyTypesRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminRemoveVirtualCurrencyTypesRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminRemoveVirtualCurrencyTypesRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminRemoveVirtualCurrencyTypesRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminRemoveVirtualCurrencyTypesRequest"), sizeof(FAdminRemoveVirtualCurrencyTypesRequest), Get_Z_Construct_UScriptStruct_FAdminRemoveVirtualCurrencyTypesRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminRemoveVirtualCurrencyTypesRequest>()
{
	return FAdminRemoveVirtualCurrencyTypesRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminRemoveVirtualCurrencyTypesRequest(FAdminRemoveVirtualCurrencyTypesRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminRemoveVirtualCurrencyTypesRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminRemoveVirtualCurrencyTypesRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminRemoveVirtualCurrencyTypesRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminRemoveVirtualCurrencyTypesRequest>(FName(TEXT("AdminRemoveVirtualCurrencyTypesRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminRemoveVirtualCurrencyTypesRequest;
	struct Z_Construct_UScriptStruct_FAdminRemoveVirtualCurrencyTypesRequest_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminRemoveVirtualCurrencyTypesRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminRemoveVirtualCurrencyTypesRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminRemoveVirtualCurrencyTypesRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminRemoveVirtualCurrencyTypesRequest>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminRemoveVirtualCurrencyTypesRequest_Statics::NewProp_VirtualCurrencies_Inner = { "VirtualCurrencies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminRemoveVirtualCurrencyTypesRequest_Statics::NewProp_VirtualCurrencies_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminRemoveVirtualCurrencyTypesRequest" },
		{ "ModuleRelativePath", "Public/AdminRemoveVirtualCurrencyTypesRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAdminRemoveVirtualCurrencyTypesRequest_Statics::NewProp_VirtualCurrencies = { "VirtualCurrencies", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminRemoveVirtualCurrencyTypesRequest, VirtualCurrencies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminRemoveVirtualCurrencyTypesRequest_Statics::NewProp_VirtualCurrencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminRemoveVirtualCurrencyTypesRequest_Statics::NewProp_VirtualCurrencies_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminRemoveVirtualCurrencyTypesRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminRemoveVirtualCurrencyTypesRequest_Statics::NewProp_VirtualCurrencies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminRemoveVirtualCurrencyTypesRequest_Statics::NewProp_VirtualCurrencies,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminRemoveVirtualCurrencyTypesRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminRemoveVirtualCurrencyTypesRequest",
		sizeof(FAdminRemoveVirtualCurrencyTypesRequest),
		alignof(FAdminRemoveVirtualCurrencyTypesRequest),
		Z_Construct_UScriptStruct_FAdminRemoveVirtualCurrencyTypesRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminRemoveVirtualCurrencyTypesRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminRemoveVirtualCurrencyTypesRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminRemoveVirtualCurrencyTypesRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminRemoveVirtualCurrencyTypesRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminRemoveVirtualCurrencyTypesRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminRemoveVirtualCurrencyTypesRequest"), sizeof(FAdminRemoveVirtualCurrencyTypesRequest), Get_Z_Construct_UScriptStruct_FAdminRemoveVirtualCurrencyTypesRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminRemoveVirtualCurrencyTypesRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminRemoveVirtualCurrencyTypesRequest_Hash() { return 2962815709U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
