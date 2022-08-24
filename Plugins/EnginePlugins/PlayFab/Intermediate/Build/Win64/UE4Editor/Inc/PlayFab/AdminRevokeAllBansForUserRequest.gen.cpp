// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminRevokeAllBansForUserRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminRevokeAllBansForUserRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminRevokeAllBansForUserRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminRevokeAllBansForUserRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminRevokeAllBansForUserRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminRevokeAllBansForUserRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminRevokeAllBansForUserRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminRevokeAllBansForUserRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminRevokeAllBansForUserRequest"), sizeof(FAdminRevokeAllBansForUserRequest), Get_Z_Construct_UScriptStruct_FAdminRevokeAllBansForUserRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminRevokeAllBansForUserRequest>()
{
	return FAdminRevokeAllBansForUserRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminRevokeAllBansForUserRequest(FAdminRevokeAllBansForUserRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminRevokeAllBansForUserRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminRevokeAllBansForUserRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminRevokeAllBansForUserRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminRevokeAllBansForUserRequest>(FName(TEXT("AdminRevokeAllBansForUserRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminRevokeAllBansForUserRequest;
	struct Z_Construct_UScriptStruct_FAdminRevokeAllBansForUserRequest_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminRevokeAllBansForUserRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminRevokeAllBansForUserRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminRevokeAllBansForUserRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminRevokeAllBansForUserRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminRevokeAllBansForUserRequest_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminRevokeAllBansForUserRequest" },
		{ "ModuleRelativePath", "Public/AdminRevokeAllBansForUserRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminRevokeAllBansForUserRequest_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminRevokeAllBansForUserRequest, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminRevokeAllBansForUserRequest_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminRevokeAllBansForUserRequest_Statics::NewProp_PlayFabId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminRevokeAllBansForUserRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminRevokeAllBansForUserRequest_Statics::NewProp_PlayFabId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminRevokeAllBansForUserRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminRevokeAllBansForUserRequest",
		sizeof(FAdminRevokeAllBansForUserRequest),
		alignof(FAdminRevokeAllBansForUserRequest),
		Z_Construct_UScriptStruct_FAdminRevokeAllBansForUserRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminRevokeAllBansForUserRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminRevokeAllBansForUserRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminRevokeAllBansForUserRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminRevokeAllBansForUserRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminRevokeAllBansForUserRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminRevokeAllBansForUserRequest"), sizeof(FAdminRevokeAllBansForUserRequest), Get_Z_Construct_UScriptStruct_FAdminRevokeAllBansForUserRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminRevokeAllBansForUserRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminRevokeAllBansForUserRequest_Hash() { return 4164911283U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
