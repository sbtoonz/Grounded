// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerSavePushNotificationTemplateResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerSavePushNotificationTemplateResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FServerSavePushNotificationTemplateResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FServerSavePushNotificationTemplateResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FServerSavePushNotificationTemplateResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerSavePushNotificationTemplateResult"), sizeof(FServerSavePushNotificationTemplateResult), Get_Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerSavePushNotificationTemplateResult>()
{
	return FServerSavePushNotificationTemplateResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerSavePushNotificationTemplateResult(FServerSavePushNotificationTemplateResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerSavePushNotificationTemplateResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerSavePushNotificationTemplateResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerSavePushNotificationTemplateResult()
	{
		UScriptStruct::DeferCppStructOps<FServerSavePushNotificationTemplateResult>(FName(TEXT("ServerSavePushNotificationTemplateResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerSavePushNotificationTemplateResult;
	struct Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PushNotificationTemplateId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PushNotificationTemplateId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerSavePushNotificationTemplateResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerSavePushNotificationTemplateResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateResult_Statics::NewProp_PushNotificationTemplateId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerSavePushNotificationTemplateResult" },
		{ "ModuleRelativePath", "Public/ServerSavePushNotificationTemplateResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateResult_Statics::NewProp_PushNotificationTemplateId = { "PushNotificationTemplateId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerSavePushNotificationTemplateResult, PushNotificationTemplateId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateResult_Statics::NewProp_PushNotificationTemplateId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateResult_Statics::NewProp_PushNotificationTemplateId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateResult_Statics::NewProp_PushNotificationTemplateId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ServerSavePushNotificationTemplateResult",
		sizeof(FServerSavePushNotificationTemplateResult),
		alignof(FServerSavePushNotificationTemplateResult),
		Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerSavePushNotificationTemplateResult"), sizeof(FServerSavePushNotificationTemplateResult), Get_Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateResult_Hash() { return 129750254U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
