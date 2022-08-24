// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientAndroidDevicePushNotificationRegistrationRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientAndroidDevicePushNotificationRegistrationRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientAndroidDevicePushNotificationRegistrationRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientAndroidDevicePushNotificationRegistrationRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientAndroidDevicePushNotificationRegistrationRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientAndroidDevicePushNotificationRegistrationRequest"), sizeof(FClientAndroidDevicePushNotificationRegistrationRequest), Get_Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientAndroidDevicePushNotificationRegistrationRequest>()
{
	return FClientAndroidDevicePushNotificationRegistrationRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest(FClientAndroidDevicePushNotificationRegistrationRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientAndroidDevicePushNotificationRegistrationRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientAndroidDevicePushNotificationRegistrationRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientAndroidDevicePushNotificationRegistrationRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientAndroidDevicePushNotificationRegistrationRequest>(FName(TEXT("ClientAndroidDevicePushNotificationRegistrationRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientAndroidDevicePushNotificationRegistrationRequest;
	struct Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfirmationMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfirmationMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendPushNotificationConfirmation_MetaData[];
#endif
		static void NewProp_SendPushNotificationConfirmation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SendPushNotificationConfirmation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientAndroidDevicePushNotificationRegistrationRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientAndroidDevicePushNotificationRegistrationRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest_Statics::NewProp_ConfirmationMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientAndroidDevicePushNotificationRegistrationRequest" },
		{ "ModuleRelativePath", "Public/ClientAndroidDevicePushNotificationRegistrationRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest_Statics::NewProp_ConfirmationMessage = { "ConfirmationMessage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientAndroidDevicePushNotificationRegistrationRequest, ConfirmationMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest_Statics::NewProp_ConfirmationMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest_Statics::NewProp_ConfirmationMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest_Statics::NewProp_DeviceToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientAndroidDevicePushNotificationRegistrationRequest" },
		{ "ModuleRelativePath", "Public/ClientAndroidDevicePushNotificationRegistrationRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest_Statics::NewProp_DeviceToken = { "DeviceToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientAndroidDevicePushNotificationRegistrationRequest, DeviceToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest_Statics::NewProp_DeviceToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest_Statics::NewProp_DeviceToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest_Statics::NewProp_SendPushNotificationConfirmation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientAndroidDevicePushNotificationRegistrationRequest" },
		{ "ModuleRelativePath", "Public/ClientAndroidDevicePushNotificationRegistrationRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest_Statics::NewProp_SendPushNotificationConfirmation_SetBit(void* Obj)
	{
		((FClientAndroidDevicePushNotificationRegistrationRequest*)Obj)->SendPushNotificationConfirmation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest_Statics::NewProp_SendPushNotificationConfirmation = { "SendPushNotificationConfirmation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FClientAndroidDevicePushNotificationRegistrationRequest), &Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest_Statics::NewProp_SendPushNotificationConfirmation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest_Statics::NewProp_SendPushNotificationConfirmation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest_Statics::NewProp_SendPushNotificationConfirmation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest_Statics::NewProp_ConfirmationMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest_Statics::NewProp_DeviceToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest_Statics::NewProp_SendPushNotificationConfirmation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientAndroidDevicePushNotificationRegistrationRequest",
		sizeof(FClientAndroidDevicePushNotificationRegistrationRequest),
		alignof(FClientAndroidDevicePushNotificationRegistrationRequest),
		Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientAndroidDevicePushNotificationRegistrationRequest"), sizeof(FClientAndroidDevicePushNotificationRegistrationRequest), Get_Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientAndroidDevicePushNotificationRegistrationRequest_Hash() { return 1969619135U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
