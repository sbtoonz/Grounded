// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerDeletePushNotificationTemplateRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerDeletePushNotificationTemplateRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerDeletePushNotificationTemplateRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FServerDeletePushNotificationTemplateRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerDeletePushNotificationTemplateRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerDeletePushNotificationTemplateRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerDeletePushNotificationTemplateRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerDeletePushNotificationTemplateRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerDeletePushNotificationTemplateRequest"), sizeof(FServerDeletePushNotificationTemplateRequest), Get_Z_Construct_UScriptStruct_FServerDeletePushNotificationTemplateRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerDeletePushNotificationTemplateRequest>()
{
	return FServerDeletePushNotificationTemplateRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerDeletePushNotificationTemplateRequest(FServerDeletePushNotificationTemplateRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerDeletePushNotificationTemplateRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerDeletePushNotificationTemplateRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerDeletePushNotificationTemplateRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerDeletePushNotificationTemplateRequest>(FName(TEXT("ServerDeletePushNotificationTemplateRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerDeletePushNotificationTemplateRequest;
	struct Z_Construct_UScriptStruct_FServerDeletePushNotificationTemplateRequest_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerDeletePushNotificationTemplateRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerDeletePushNotificationTemplateRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerDeletePushNotificationTemplateRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerDeletePushNotificationTemplateRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerDeletePushNotificationTemplateRequest_Statics::NewProp_PushNotificationTemplateId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerDeletePushNotificationTemplateRequest" },
		{ "ModuleRelativePath", "Public/ServerDeletePushNotificationTemplateRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerDeletePushNotificationTemplateRequest_Statics::NewProp_PushNotificationTemplateId = { "PushNotificationTemplateId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerDeletePushNotificationTemplateRequest, PushNotificationTemplateId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerDeletePushNotificationTemplateRequest_Statics::NewProp_PushNotificationTemplateId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerDeletePushNotificationTemplateRequest_Statics::NewProp_PushNotificationTemplateId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerDeletePushNotificationTemplateRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerDeletePushNotificationTemplateRequest_Statics::NewProp_PushNotificationTemplateId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerDeletePushNotificationTemplateRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerDeletePushNotificationTemplateRequest",
		sizeof(FServerDeletePushNotificationTemplateRequest),
		alignof(FServerDeletePushNotificationTemplateRequest),
		Z_Construct_UScriptStruct_FServerDeletePushNotificationTemplateRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerDeletePushNotificationTemplateRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerDeletePushNotificationTemplateRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerDeletePushNotificationTemplateRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerDeletePushNotificationTemplateRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerDeletePushNotificationTemplateRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerDeletePushNotificationTemplateRequest"), sizeof(FServerDeletePushNotificationTemplateRequest), Get_Z_Construct_UScriptStruct_FServerDeletePushNotificationTemplateRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerDeletePushNotificationTemplateRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerDeletePushNotificationTemplateRequest_Hash() { return 1113121526U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
