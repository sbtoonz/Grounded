// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminSetTitleDataAndOverridesRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminSetTitleDataAndOverridesRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminSetTitleDataAndOverridesRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminSetTitleDataAndOverridesRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminSetTitleDataAndOverridesRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminSetTitleDataAndOverridesRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminSetTitleDataAndOverridesRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminSetTitleDataAndOverridesRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminSetTitleDataAndOverridesRequest"), sizeof(FAdminSetTitleDataAndOverridesRequest), Get_Z_Construct_UScriptStruct_FAdminSetTitleDataAndOverridesRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminSetTitleDataAndOverridesRequest>()
{
	return FAdminSetTitleDataAndOverridesRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminSetTitleDataAndOverridesRequest(FAdminSetTitleDataAndOverridesRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminSetTitleDataAndOverridesRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminSetTitleDataAndOverridesRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminSetTitleDataAndOverridesRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminSetTitleDataAndOverridesRequest>(FName(TEXT("AdminSetTitleDataAndOverridesRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminSetTitleDataAndOverridesRequest;
	struct Z_Construct_UScriptStruct_FAdminSetTitleDataAndOverridesRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KeyValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeyValues;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OverrideLabel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminSetTitleDataAndOverridesRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminSetTitleDataAndOverridesRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminSetTitleDataAndOverridesRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminSetTitleDataAndOverridesRequest>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminSetTitleDataAndOverridesRequest_Statics::NewProp_KeyValues_Inner = { "KeyValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminSetTitleDataAndOverridesRequest_Statics::NewProp_KeyValues_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminSetTitleDataAndOverridesRequest" },
		{ "ModuleRelativePath", "Public/AdminSetTitleDataAndOverridesRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAdminSetTitleDataAndOverridesRequest_Statics::NewProp_KeyValues = { "KeyValues", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminSetTitleDataAndOverridesRequest, KeyValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminSetTitleDataAndOverridesRequest_Statics::NewProp_KeyValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminSetTitleDataAndOverridesRequest_Statics::NewProp_KeyValues_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminSetTitleDataAndOverridesRequest_Statics::NewProp_OverrideLabel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminSetTitleDataAndOverridesRequest" },
		{ "ModuleRelativePath", "Public/AdminSetTitleDataAndOverridesRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminSetTitleDataAndOverridesRequest_Statics::NewProp_OverrideLabel = { "OverrideLabel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminSetTitleDataAndOverridesRequest, OverrideLabel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminSetTitleDataAndOverridesRequest_Statics::NewProp_OverrideLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminSetTitleDataAndOverridesRequest_Statics::NewProp_OverrideLabel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminSetTitleDataAndOverridesRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminSetTitleDataAndOverridesRequest_Statics::NewProp_KeyValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminSetTitleDataAndOverridesRequest_Statics::NewProp_KeyValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminSetTitleDataAndOverridesRequest_Statics::NewProp_OverrideLabel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminSetTitleDataAndOverridesRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminSetTitleDataAndOverridesRequest",
		sizeof(FAdminSetTitleDataAndOverridesRequest),
		alignof(FAdminSetTitleDataAndOverridesRequest),
		Z_Construct_UScriptStruct_FAdminSetTitleDataAndOverridesRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminSetTitleDataAndOverridesRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminSetTitleDataAndOverridesRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminSetTitleDataAndOverridesRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminSetTitleDataAndOverridesRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminSetTitleDataAndOverridesRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminSetTitleDataAndOverridesRequest"), sizeof(FAdminSetTitleDataAndOverridesRequest), Get_Z_Construct_UScriptStruct_FAdminSetTitleDataAndOverridesRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminSetTitleDataAndOverridesRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminSetTitleDataAndOverridesRequest_Hash() { return 1080825517U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
