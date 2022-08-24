// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminExportMasterPlayerDataRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminExportMasterPlayerDataRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminExportMasterPlayerDataRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminExportMasterPlayerDataRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminExportMasterPlayerDataRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminExportMasterPlayerDataRequest"), sizeof(FAdminExportMasterPlayerDataRequest), Get_Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminExportMasterPlayerDataRequest>()
{
	return FAdminExportMasterPlayerDataRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminExportMasterPlayerDataRequest(FAdminExportMasterPlayerDataRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminExportMasterPlayerDataRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminExportMasterPlayerDataRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminExportMasterPlayerDataRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminExportMasterPlayerDataRequest>(FName(TEXT("AdminExportMasterPlayerDataRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminExportMasterPlayerDataRequest;
	struct Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminExportMasterPlayerDataRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminExportMasterPlayerDataRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataRequest_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminExportMasterPlayerDataRequest" },
		{ "ModuleRelativePath", "Public/AdminExportMasterPlayerDataRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataRequest_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminExportMasterPlayerDataRequest, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataRequest_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataRequest_Statics::NewProp_PlayFabId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataRequest_Statics::NewProp_PlayFabId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminExportMasterPlayerDataRequest",
		sizeof(FAdminExportMasterPlayerDataRequest),
		alignof(FAdminExportMasterPlayerDataRequest),
		Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminExportMasterPlayerDataRequest"), sizeof(FAdminExportMasterPlayerDataRequest), Get_Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataRequest_Hash() { return 1387869488U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
