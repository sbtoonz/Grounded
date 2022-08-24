// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminCheckLimitedEditionItemAvailabilityRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminCheckLimitedEditionItemAvailabilityRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminCheckLimitedEditionItemAvailabilityRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminCheckLimitedEditionItemAvailabilityRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminCheckLimitedEditionItemAvailabilityRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminCheckLimitedEditionItemAvailabilityRequest"), sizeof(FAdminCheckLimitedEditionItemAvailabilityRequest), Get_Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminCheckLimitedEditionItemAvailabilityRequest>()
{
	return FAdminCheckLimitedEditionItemAvailabilityRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityRequest(FAdminCheckLimitedEditionItemAvailabilityRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminCheckLimitedEditionItemAvailabilityRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminCheckLimitedEditionItemAvailabilityRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminCheckLimitedEditionItemAvailabilityRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminCheckLimitedEditionItemAvailabilityRequest>(FName(TEXT("AdminCheckLimitedEditionItemAvailabilityRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminCheckLimitedEditionItemAvailabilityRequest;
	struct Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CatalogVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CatalogVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminCheckLimitedEditionItemAvailabilityRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminCheckLimitedEditionItemAvailabilityRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityRequest_Statics::NewProp_CatalogVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminCheckLimitedEditionItemAvailabilityRequest" },
		{ "ModuleRelativePath", "Public/AdminCheckLimitedEditionItemAvailabilityRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityRequest_Statics::NewProp_CatalogVersion = { "CatalogVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminCheckLimitedEditionItemAvailabilityRequest, CatalogVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityRequest_Statics::NewProp_CatalogVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityRequest_Statics::NewProp_CatalogVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityRequest_Statics::NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminCheckLimitedEditionItemAvailabilityRequest" },
		{ "ModuleRelativePath", "Public/AdminCheckLimitedEditionItemAvailabilityRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityRequest_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminCheckLimitedEditionItemAvailabilityRequest, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityRequest_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityRequest_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityRequest_Statics::NewProp_CatalogVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityRequest_Statics::NewProp_ItemId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminCheckLimitedEditionItemAvailabilityRequest",
		sizeof(FAdminCheckLimitedEditionItemAvailabilityRequest),
		alignof(FAdminCheckLimitedEditionItemAvailabilityRequest),
		Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminCheckLimitedEditionItemAvailabilityRequest"), sizeof(FAdminCheckLimitedEditionItemAvailabilityRequest), Get_Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityRequest_Hash() { return 3384149843U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
