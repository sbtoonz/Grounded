// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerSendPushNotificationRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerSendPushNotificationRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerSendPushNotificationRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerSendPushNotificationRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerSendPushNotificationRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerSendPushNotificationRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerSendPushNotificationRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerSendPushNotificationRequest"), sizeof(FServerSendPushNotificationRequest), Get_Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerSendPushNotificationRequest>()
{
	return FServerSendPushNotificationRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerSendPushNotificationRequest(FServerSendPushNotificationRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerSendPushNotificationRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerSendPushNotificationRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerSendPushNotificationRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerSendPushNotificationRequest>(FName(TEXT("ServerSendPushNotificationRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerSendPushNotificationRequest;
	struct Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdvancedPlatformDelivery_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdvancedPlatformDelivery_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdvancedPlatformDelivery;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Package_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Package;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Recipient_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Recipient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subject_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Subject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPlatforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetPlatforms;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerSendPushNotificationRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerSendPushNotificationRequest>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_AdvancedPlatformDelivery_Inner = { "AdvancedPlatformDelivery", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_AdvancedPlatformDelivery_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerSendPushNotificationRequest" },
		{ "ModuleRelativePath", "Public/ServerSendPushNotificationRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_AdvancedPlatformDelivery = { "AdvancedPlatformDelivery", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerSendPushNotificationRequest, AdvancedPlatformDelivery), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_AdvancedPlatformDelivery_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_AdvancedPlatformDelivery_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerSendPushNotificationRequest" },
		{ "ModuleRelativePath", "Public/ServerSendPushNotificationRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerSendPushNotificationRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_Message_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerSendPushNotificationRequest" },
		{ "ModuleRelativePath", "Public/ServerSendPushNotificationRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerSendPushNotificationRequest, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_Package_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerSendPushNotificationRequest" },
		{ "ModuleRelativePath", "Public/ServerSendPushNotificationRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_Package = { "Package", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerSendPushNotificationRequest, Package), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_Package_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_Package_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_Recipient_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerSendPushNotificationRequest" },
		{ "ModuleRelativePath", "Public/ServerSendPushNotificationRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_Recipient = { "Recipient", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerSendPushNotificationRequest, Recipient), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_Recipient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_Recipient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_Subject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerSendPushNotificationRequest" },
		{ "ModuleRelativePath", "Public/ServerSendPushNotificationRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerSendPushNotificationRequest, Subject), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_Subject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_Subject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_TargetPlatforms_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerSendPushNotificationRequest" },
		{ "ModuleRelativePath", "Public/ServerSendPushNotificationRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_TargetPlatforms = { "TargetPlatforms", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerSendPushNotificationRequest, TargetPlatforms), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_TargetPlatforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_TargetPlatforms_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_AdvancedPlatformDelivery_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_AdvancedPlatformDelivery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_Package,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_Recipient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_Subject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::NewProp_TargetPlatforms,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerSendPushNotificationRequest",
		sizeof(FServerSendPushNotificationRequest),
		alignof(FServerSendPushNotificationRequest),
		Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerSendPushNotificationRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerSendPushNotificationRequest"), sizeof(FServerSendPushNotificationRequest), Get_Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerSendPushNotificationRequest_Hash() { return 1226726383U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
