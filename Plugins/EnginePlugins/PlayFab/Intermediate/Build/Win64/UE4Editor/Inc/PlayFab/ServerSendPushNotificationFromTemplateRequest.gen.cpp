// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerSendPushNotificationFromTemplateRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerSendPushNotificationFromTemplateRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerSendPushNotificationFromTemplateRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerSendPushNotificationFromTemplateRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerSendPushNotificationFromTemplateRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerSendPushNotificationFromTemplateRequest"), sizeof(FServerSendPushNotificationFromTemplateRequest), Get_Z_Construct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerSendPushNotificationFromTemplateRequest>()
{
	return FServerSendPushNotificationFromTemplateRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest(FServerSendPushNotificationFromTemplateRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerSendPushNotificationFromTemplateRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerSendPushNotificationFromTemplateRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerSendPushNotificationFromTemplateRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerSendPushNotificationFromTemplateRequest>(FName(TEXT("ServerSendPushNotificationFromTemplateRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerSendPushNotificationFromTemplateRequest;
	struct Z_Construct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PushNotificationTemplateId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PushNotificationTemplateId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Recipient_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Recipient;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerSendPushNotificationFromTemplateRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerSendPushNotificationFromTemplateRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerSendPushNotificationFromTemplateRequest" },
		{ "ModuleRelativePath", "Public/ServerSendPushNotificationFromTemplateRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerSendPushNotificationFromTemplateRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest_Statics::NewProp_PushNotificationTemplateId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerSendPushNotificationFromTemplateRequest" },
		{ "ModuleRelativePath", "Public/ServerSendPushNotificationFromTemplateRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest_Statics::NewProp_PushNotificationTemplateId = { "PushNotificationTemplateId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerSendPushNotificationFromTemplateRequest, PushNotificationTemplateId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest_Statics::NewProp_PushNotificationTemplateId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest_Statics::NewProp_PushNotificationTemplateId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest_Statics::NewProp_Recipient_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerSendPushNotificationFromTemplateRequest" },
		{ "ModuleRelativePath", "Public/ServerSendPushNotificationFromTemplateRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest_Statics::NewProp_Recipient = { "Recipient", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerSendPushNotificationFromTemplateRequest, Recipient), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest_Statics::NewProp_Recipient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest_Statics::NewProp_Recipient_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest_Statics::NewProp_PushNotificationTemplateId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest_Statics::NewProp_Recipient,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerSendPushNotificationFromTemplateRequest",
		sizeof(FServerSendPushNotificationFromTemplateRequest),
		alignof(FServerSendPushNotificationFromTemplateRequest),
		Z_Construct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerSendPushNotificationFromTemplateRequest"), sizeof(FServerSendPushNotificationFromTemplateRequest), Get_Z_Construct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerSendPushNotificationFromTemplateRequest_Hash() { return 471986589U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
