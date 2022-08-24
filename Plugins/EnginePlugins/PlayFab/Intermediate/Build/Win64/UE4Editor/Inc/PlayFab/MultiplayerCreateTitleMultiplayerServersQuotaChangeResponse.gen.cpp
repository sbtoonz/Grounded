// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MultiplayerCreateTitleMultiplayerServersQuotaChangeResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("MultiplayerCreateTitleMultiplayerServersQuotaChangeResponse"), sizeof(FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse), Get_Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse>()
{
	return FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse(FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MultiplayerCreateTitleMultiplayerServersQuotaChangeResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse()
	{
		UScriptStruct::DeferCppStructOps<FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse>(FName(TEXT("MultiplayerCreateTitleMultiplayerServersQuotaChangeResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse;
	struct Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RequestId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WasApproved_MetaData[];
#endif
		static void NewProp_WasApproved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WasApproved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateTitleMultiplayerServersQuotaChangeResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse_Statics::NewProp_RequestId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateTitleMultiplayerServersQuotaChangeResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateTitleMultiplayerServersQuotaChangeResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse_Statics::NewProp_RequestId = { "RequestId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse, RequestId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse_Statics::NewProp_RequestId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse_Statics::NewProp_RequestId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse_Statics::NewProp_WasApproved_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateTitleMultiplayerServersQuotaChangeResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateTitleMultiplayerServersQuotaChangeResponse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse_Statics::NewProp_WasApproved_SetBit(void* Obj)
	{
		((FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse*)Obj)->WasApproved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse_Statics::NewProp_WasApproved = { "WasApproved", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse), &Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse_Statics::NewProp_WasApproved_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse_Statics::NewProp_WasApproved_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse_Statics::NewProp_WasApproved_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse_Statics::NewProp_RequestId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse_Statics::NewProp_WasApproved,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"MultiplayerCreateTitleMultiplayerServersQuotaChangeResponse",
		sizeof(FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse),
		alignof(FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse),
		Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiplayerCreateTitleMultiplayerServersQuotaChangeResponse"), sizeof(FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse), Get_Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse_Hash() { return 3430746216U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
