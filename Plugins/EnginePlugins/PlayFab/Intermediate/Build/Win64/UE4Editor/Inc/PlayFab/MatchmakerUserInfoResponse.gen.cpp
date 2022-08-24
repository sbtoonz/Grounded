// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MatchmakerUserInfoResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchmakerUserInfoResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FMatchmakerUserInfoResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FMatchmakerUserInfoResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FMatchmakerUserInfoResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("MatchmakerUserInfoResponse"), sizeof(FMatchmakerUserInfoResponse), Get_Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMatchmakerUserInfoResponse>()
{
	return FMatchmakerUserInfoResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchmakerUserInfoResponse(FMatchmakerUserInfoResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MatchmakerUserInfoResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerUserInfoResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerUserInfoResponse()
	{
		UScriptStruct::DeferCppStructOps<FMatchmakerUserInfoResponse>(FName(TEXT("MatchmakerUserInfoResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerUserInfoResponse;
	struct Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDeveloper_MetaData[];
#endif
		static void NewProp_IsDeveloper_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDeveloper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TitleDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Username;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualCurrency_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VirtualCurrency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualCurrencyRechargeTimes_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VirtualCurrencyRechargeTimes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MatchmakerUserInfoResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerUserInfoResponse>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Inventory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchmakerUserInfoResponse" },
		{ "ModuleRelativePath", "Public/MatchmakerUserInfoResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerUserInfoResponse, Inventory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Inventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_IsDeveloper_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchmakerUserInfoResponse" },
		{ "ModuleRelativePath", "Public/MatchmakerUserInfoResponse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_IsDeveloper_SetBit(void* Obj)
	{
		((FMatchmakerUserInfoResponse*)Obj)->IsDeveloper = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_IsDeveloper = { "IsDeveloper", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMatchmakerUserInfoResponse), &Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_IsDeveloper_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_IsDeveloper_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_IsDeveloper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchmakerUserInfoResponse" },
		{ "ModuleRelativePath", "Public/MatchmakerUserInfoResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerUserInfoResponse, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_PlayFabId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_SteamId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchmakerUserInfoResponse" },
		{ "ModuleRelativePath", "Public/MatchmakerUserInfoResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerUserInfoResponse, SteamId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_SteamId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_SteamId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_TitleDisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchmakerUserInfoResponse" },
		{ "ModuleRelativePath", "Public/MatchmakerUserInfoResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_TitleDisplayName = { "TitleDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerUserInfoResponse, TitleDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_TitleDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_TitleDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Username_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchmakerUserInfoResponse" },
		{ "ModuleRelativePath", "Public/MatchmakerUserInfoResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerUserInfoResponse, Username), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Username_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_VirtualCurrency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchmakerUserInfoResponse" },
		{ "ModuleRelativePath", "Public/MatchmakerUserInfoResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_VirtualCurrency = { "VirtualCurrency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerUserInfoResponse, VirtualCurrency), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_VirtualCurrency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_VirtualCurrency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_VirtualCurrencyRechargeTimes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchmakerUserInfoResponse" },
		{ "ModuleRelativePath", "Public/MatchmakerUserInfoResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_VirtualCurrencyRechargeTimes = { "VirtualCurrencyRechargeTimes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerUserInfoResponse, VirtualCurrencyRechargeTimes), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_VirtualCurrencyRechargeTimes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_VirtualCurrencyRechargeTimes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Inventory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_IsDeveloper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_PlayFabId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_SteamId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_TitleDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_Username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_VirtualCurrency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::NewProp_VirtualCurrencyRechargeTimes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"MatchmakerUserInfoResponse",
		sizeof(FMatchmakerUserInfoResponse),
		alignof(FMatchmakerUserInfoResponse),
		Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchmakerUserInfoResponse"), sizeof(FMatchmakerUserInfoResponse), Get_Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchmakerUserInfoResponse_Hash() { return 1157383091U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
