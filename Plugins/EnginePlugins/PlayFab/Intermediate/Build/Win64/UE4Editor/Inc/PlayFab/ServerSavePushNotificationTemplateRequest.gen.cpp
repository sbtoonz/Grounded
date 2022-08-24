// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerSavePushNotificationTemplateRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerSavePushNotificationTemplateRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerSavePushNotificationTemplateRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerSavePushNotificationTemplateRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerSavePushNotificationTemplateRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerSavePushNotificationTemplateRequest"), sizeof(FServerSavePushNotificationTemplateRequest), Get_Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerSavePushNotificationTemplateRequest>()
{
	return FServerSavePushNotificationTemplateRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerSavePushNotificationTemplateRequest(FServerSavePushNotificationTemplateRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerSavePushNotificationTemplateRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerSavePushNotificationTemplateRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerSavePushNotificationTemplateRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerSavePushNotificationTemplateRequest>(FName(TEXT("ServerSavePushNotificationTemplateRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerSavePushNotificationTemplateRequest;
	struct Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AndroidPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AndroidPayload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IOSPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IOSPayload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizedPushNotificationTemplates_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocalizedPushNotificationTemplates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerSavePushNotificationTemplateRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerSavePushNotificationTemplateRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::NewProp_AndroidPayload_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerSavePushNotificationTemplateRequest" },
		{ "ModuleRelativePath", "Public/ServerSavePushNotificationTemplateRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::NewProp_AndroidPayload = { "AndroidPayload", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerSavePushNotificationTemplateRequest, AndroidPayload), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::NewProp_AndroidPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::NewProp_AndroidPayload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerSavePushNotificationTemplateRequest" },
		{ "ModuleRelativePath", "Public/ServerSavePushNotificationTemplateRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerSavePushNotificationTemplateRequest, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::NewProp_IOSPayload_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerSavePushNotificationTemplateRequest" },
		{ "ModuleRelativePath", "Public/ServerSavePushNotificationTemplateRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::NewProp_IOSPayload = { "IOSPayload", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerSavePushNotificationTemplateRequest, IOSPayload), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::NewProp_IOSPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::NewProp_IOSPayload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::NewProp_LocalizedPushNotificationTemplates_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerSavePushNotificationTemplateRequest" },
		{ "ModuleRelativePath", "Public/ServerSavePushNotificationTemplateRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::NewProp_LocalizedPushNotificationTemplates = { "LocalizedPushNotificationTemplates", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerSavePushNotificationTemplateRequest, LocalizedPushNotificationTemplates), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::NewProp_LocalizedPushNotificationTemplates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::NewProp_LocalizedPushNotificationTemplates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerSavePushNotificationTemplateRequest" },
		{ "ModuleRelativePath", "Public/ServerSavePushNotificationTemplateRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerSavePushNotificationTemplateRequest, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::NewProp_AndroidPayload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::NewProp_IOSPayload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::NewProp_LocalizedPushNotificationTemplates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerSavePushNotificationTemplateRequest",
		sizeof(FServerSavePushNotificationTemplateRequest),
		alignof(FServerSavePushNotificationTemplateRequest),
		Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerSavePushNotificationTemplateRequest"), sizeof(FServerSavePushNotificationTemplateRequest), Get_Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerSavePushNotificationTemplateRequest_Hash() { return 3862428981U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
