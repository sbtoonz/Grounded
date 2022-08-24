// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminDeleteMasterPlayerAccountRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminDeleteMasterPlayerAccountRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminDeleteMasterPlayerAccountRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminDeleteMasterPlayerAccountRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminDeleteMasterPlayerAccountRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminDeleteMasterPlayerAccountRequest"), sizeof(FAdminDeleteMasterPlayerAccountRequest), Get_Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminDeleteMasterPlayerAccountRequest>()
{
	return FAdminDeleteMasterPlayerAccountRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminDeleteMasterPlayerAccountRequest(FAdminDeleteMasterPlayerAccountRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminDeleteMasterPlayerAccountRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminDeleteMasterPlayerAccountRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminDeleteMasterPlayerAccountRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminDeleteMasterPlayerAccountRequest>(FName(TEXT("AdminDeleteMasterPlayerAccountRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminDeleteMasterPlayerAccountRequest;
	struct Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MetaData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminDeleteMasterPlayerAccountRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminDeleteMasterPlayerAccountRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountRequest_Statics::NewProp_MetaData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminDeleteMasterPlayerAccountRequest" },
		{ "ModuleRelativePath", "Public/AdminDeleteMasterPlayerAccountRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountRequest_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminDeleteMasterPlayerAccountRequest, MetaData), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountRequest_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountRequest_Statics::NewProp_MetaData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountRequest_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminDeleteMasterPlayerAccountRequest" },
		{ "ModuleRelativePath", "Public/AdminDeleteMasterPlayerAccountRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountRequest_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminDeleteMasterPlayerAccountRequest, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountRequest_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountRequest_Statics::NewProp_PlayFabId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountRequest_Statics::NewProp_MetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountRequest_Statics::NewProp_PlayFabId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminDeleteMasterPlayerAccountRequest",
		sizeof(FAdminDeleteMasterPlayerAccountRequest),
		alignof(FAdminDeleteMasterPlayerAccountRequest),
		Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminDeleteMasterPlayerAccountRequest"), sizeof(FAdminDeleteMasterPlayerAccountRequest), Get_Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountRequest_Hash() { return 987375885U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
