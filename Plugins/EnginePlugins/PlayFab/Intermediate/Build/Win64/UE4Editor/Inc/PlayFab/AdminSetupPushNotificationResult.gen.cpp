// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminSetupPushNotificationResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminSetupPushNotificationResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminSetupPushNotificationResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminSetupPushNotificationResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAdminSetupPushNotificationResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAdminSetupPushNotificationResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminSetupPushNotificationResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminSetupPushNotificationResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminSetupPushNotificationResult"), sizeof(FAdminSetupPushNotificationResult), Get_Z_Construct_UScriptStruct_FAdminSetupPushNotificationResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminSetupPushNotificationResult>()
{
	return FAdminSetupPushNotificationResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminSetupPushNotificationResult(FAdminSetupPushNotificationResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminSetupPushNotificationResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminSetupPushNotificationResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminSetupPushNotificationResult()
	{
		UScriptStruct::DeferCppStructOps<FAdminSetupPushNotificationResult>(FName(TEXT("AdminSetupPushNotificationResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminSetupPushNotificationResult;
	struct Z_Construct_UScriptStruct_FAdminSetupPushNotificationResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ARN_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ARN;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminSetupPushNotificationResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminSetupPushNotificationResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminSetupPushNotificationResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminSetupPushNotificationResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminSetupPushNotificationResult_Statics::NewProp_ARN_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminSetupPushNotificationResult" },
		{ "ModuleRelativePath", "Public/AdminSetupPushNotificationResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminSetupPushNotificationResult_Statics::NewProp_ARN = { "ARN", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminSetupPushNotificationResult, ARN), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminSetupPushNotificationResult_Statics::NewProp_ARN_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminSetupPushNotificationResult_Statics::NewProp_ARN_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminSetupPushNotificationResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminSetupPushNotificationResult_Statics::NewProp_ARN,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminSetupPushNotificationResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AdminSetupPushNotificationResult",
		sizeof(FAdminSetupPushNotificationResult),
		alignof(FAdminSetupPushNotificationResult),
		Z_Construct_UScriptStruct_FAdminSetupPushNotificationResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminSetupPushNotificationResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminSetupPushNotificationResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminSetupPushNotificationResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminSetupPushNotificationResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminSetupPushNotificationResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminSetupPushNotificationResult"), sizeof(FAdminSetupPushNotificationResult), Get_Z_Construct_UScriptStruct_FAdminSetupPushNotificationResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminSetupPushNotificationResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminSetupPushNotificationResult_Hash() { return 3924932813U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
