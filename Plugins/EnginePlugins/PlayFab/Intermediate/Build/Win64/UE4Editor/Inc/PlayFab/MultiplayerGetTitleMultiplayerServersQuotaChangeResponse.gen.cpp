// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MultiplayerGetTitleMultiplayerServersQuotaChangeResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerGetTitleMultiplayerServersQuotaChangeResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("MultiplayerGetTitleMultiplayerServersQuotaChangeResponse"), sizeof(FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse), Get_Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse>()
{
	return FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse(FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MultiplayerGetTitleMultiplayerServersQuotaChangeResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerGetTitleMultiplayerServersQuotaChangeResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerGetTitleMultiplayerServersQuotaChangeResponse()
	{
		UScriptStruct::DeferCppStructOps<FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse>(FName(TEXT("MultiplayerGetTitleMultiplayerServersQuotaChangeResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerGetTitleMultiplayerServersQuotaChangeResponse;
	struct Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Change_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Change;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerGetTitleMultiplayerServersQuotaChangeResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse_Statics::NewProp_Change_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerGetTitleMultiplayerServersQuotaChangeResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerGetTitleMultiplayerServersQuotaChangeResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse_Statics::NewProp_Change = { "Change", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse, Change), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse_Statics::NewProp_Change_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse_Statics::NewProp_Change_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse_Statics::NewProp_Change,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"MultiplayerGetTitleMultiplayerServersQuotaChangeResponse",
		sizeof(FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse),
		alignof(FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse),
		Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiplayerGetTitleMultiplayerServersQuotaChangeResponse"), sizeof(FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse), Get_Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse_Hash() { return 3468258619U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
