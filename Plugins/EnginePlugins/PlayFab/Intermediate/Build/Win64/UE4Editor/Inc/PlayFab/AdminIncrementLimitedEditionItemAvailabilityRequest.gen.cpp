// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminIncrementLimitedEditionItemAvailabilityRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminIncrementLimitedEditionItemAvailabilityRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminIncrementLimitedEditionItemAvailabilityRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminIncrementLimitedEditionItemAvailabilityRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminIncrementLimitedEditionItemAvailabilityRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminIncrementLimitedEditionItemAvailabilityRequest"), sizeof(FAdminIncrementLimitedEditionItemAvailabilityRequest), Get_Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminIncrementLimitedEditionItemAvailabilityRequest>()
{
	return FAdminIncrementLimitedEditionItemAvailabilityRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest(FAdminIncrementLimitedEditionItemAvailabilityRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminIncrementLimitedEditionItemAvailabilityRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminIncrementLimitedEditionItemAvailabilityRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminIncrementLimitedEditionItemAvailabilityRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminIncrementLimitedEditionItemAvailabilityRequest>(FName(TEXT("AdminIncrementLimitedEditionItemAvailabilityRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminIncrementLimitedEditionItemAvailabilityRequest;
	struct Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CatalogVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CatalogVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminIncrementLimitedEditionItemAvailabilityRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminIncrementLimitedEditionItemAvailabilityRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Statics::NewProp_Amount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminIncrementLimitedEditionItemAvailabilityRequest" },
		{ "ModuleRelativePath", "Public/AdminIncrementLimitedEditionItemAvailabilityRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminIncrementLimitedEditionItemAvailabilityRequest, Amount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Statics::NewProp_Amount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Statics::NewProp_CatalogVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminIncrementLimitedEditionItemAvailabilityRequest" },
		{ "ModuleRelativePath", "Public/AdminIncrementLimitedEditionItemAvailabilityRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Statics::NewProp_CatalogVersion = { "CatalogVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminIncrementLimitedEditionItemAvailabilityRequest, CatalogVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Statics::NewProp_CatalogVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Statics::NewProp_CatalogVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminIncrementLimitedEditionItemAvailabilityRequest" },
		{ "ModuleRelativePath", "Public/AdminIncrementLimitedEditionItemAvailabilityRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminIncrementLimitedEditionItemAvailabilityRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Statics::NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminIncrementLimitedEditionItemAvailabilityRequest" },
		{ "ModuleRelativePath", "Public/AdminIncrementLimitedEditionItemAvailabilityRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminIncrementLimitedEditionItemAvailabilityRequest, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Statics::NewProp_CatalogVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Statics::NewProp_ItemId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminIncrementLimitedEditionItemAvailabilityRequest",
		sizeof(FAdminIncrementLimitedEditionItemAvailabilityRequest),
		alignof(FAdminIncrementLimitedEditionItemAvailabilityRequest),
		Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminIncrementLimitedEditionItemAvailabilityRequest"), sizeof(FAdminIncrementLimitedEditionItemAvailabilityRequest), Get_Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminIncrementLimitedEditionItemAvailabilityRequest_Hash() { return 29186700U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
