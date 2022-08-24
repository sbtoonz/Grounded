// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MultiplayerGetTitleMultiplayerServersQuotasResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerGetTitleMultiplayerServersQuotasResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotasResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiplayerGetTitleMultiplayerServersQuotasResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FMultiplayerGetTitleMultiplayerServersQuotasResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FMultiplayerGetTitleMultiplayerServersQuotasResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotasResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotasResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("MultiplayerGetTitleMultiplayerServersQuotasResponse"), sizeof(FMultiplayerGetTitleMultiplayerServersQuotasResponse), Get_Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotasResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMultiplayerGetTitleMultiplayerServersQuotasResponse>()
{
	return FMultiplayerGetTitleMultiplayerServersQuotasResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotasResponse(FMultiplayerGetTitleMultiplayerServersQuotasResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MultiplayerGetTitleMultiplayerServersQuotasResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerGetTitleMultiplayerServersQuotasResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerGetTitleMultiplayerServersQuotasResponse()
	{
		UScriptStruct::DeferCppStructOps<FMultiplayerGetTitleMultiplayerServersQuotasResponse>(FName(TEXT("MultiplayerGetTitleMultiplayerServersQuotasResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerGetTitleMultiplayerServersQuotasResponse;
	struct Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotasResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quotas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Quotas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotasResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerGetTitleMultiplayerServersQuotasResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotasResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerGetTitleMultiplayerServersQuotasResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotasResponse_Statics::NewProp_Quotas_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerGetTitleMultiplayerServersQuotasResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerGetTitleMultiplayerServersQuotasResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotasResponse_Statics::NewProp_Quotas = { "Quotas", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerGetTitleMultiplayerServersQuotasResponse, Quotas), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotasResponse_Statics::NewProp_Quotas_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotasResponse_Statics::NewProp_Quotas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotasResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotasResponse_Statics::NewProp_Quotas,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotasResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"MultiplayerGetTitleMultiplayerServersQuotasResponse",
		sizeof(FMultiplayerGetTitleMultiplayerServersQuotasResponse),
		alignof(FMultiplayerGetTitleMultiplayerServersQuotasResponse),
		Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotasResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotasResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotasResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotasResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotasResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotasResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiplayerGetTitleMultiplayerServersQuotasResponse"), sizeof(FMultiplayerGetTitleMultiplayerServersQuotasResponse), Get_Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotasResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotasResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotasResponse_Hash() { return 2188502535U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
