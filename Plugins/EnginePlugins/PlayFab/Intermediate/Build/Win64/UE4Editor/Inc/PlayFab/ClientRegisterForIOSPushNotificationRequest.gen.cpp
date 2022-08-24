// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientRegisterForIOSPushNotificationRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientRegisterForIOSPushNotificationRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientRegisterForIOSPushNotificationRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientRegisterForIOSPushNotificationRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientRegisterForIOSPushNotificationRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientRegisterForIOSPushNotificationRequest"), sizeof(FClientRegisterForIOSPushNotificationRequest), Get_Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientRegisterForIOSPushNotificationRequest>()
{
	return FClientRegisterForIOSPushNotificationRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest(FClientRegisterForIOSPushNotificationRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientRegisterForIOSPushNotificationRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientRegisterForIOSPushNotificationRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientRegisterForIOSPushNotificationRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientRegisterForIOSPushNotificationRequest>(FName(TEXT("ClientRegisterForIOSPushNotificationRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientRegisterForIOSPushNotificationRequest;
	struct Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientRegisterForIOSPushNotificationRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientRegisterForIOSPushNotificationRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest_Statics::NewProp_ConfirmationMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientRegisterForIOSPushNotificationRequest" },
		{ "ModuleRelativePath", "Public/ClientRegisterForIOSPushNotificationRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest_Statics::NewProp_ConfirmationMessage = { "ConfirmationMessage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientRegisterForIOSPushNotificationRequest, ConfirmationMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest_Statics::NewProp_ConfirmationMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest_Statics::NewProp_ConfirmationMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest_Statics::NewProp_DeviceToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientRegisterForIOSPushNotificationRequest" },
		{ "ModuleRelativePath", "Public/ClientRegisterForIOSPushNotificationRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest_Statics::NewProp_DeviceToken = { "DeviceToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientRegisterForIOSPushNotificationRequest, DeviceToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest_Statics::NewProp_DeviceToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest_Statics::NewProp_DeviceToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest_Statics::NewProp_SendPushNotificationConfirmation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientRegisterForIOSPushNotificationRequest" },
		{ "ModuleRelativePath", "Public/ClientRegisterForIOSPushNotificationRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest_Statics::NewProp_SendPushNotificationConfirmation_SetBit(void* Obj)
	{
		((FClientRegisterForIOSPushNotificationRequest*)Obj)->SendPushNotificationConfirmation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest_Statics::NewProp_SendPushNotificationConfirmation = { "SendPushNotificationConfirmation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FClientRegisterForIOSPushNotificationRequest), &Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest_Statics::NewProp_SendPushNotificationConfirmation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest_Statics::NewProp_SendPushNotificationConfirmation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest_Statics::NewProp_SendPushNotificationConfirmation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest_Statics::NewProp_ConfirmationMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest_Statics::NewProp_DeviceToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest_Statics::NewProp_SendPushNotificationConfirmation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientRegisterForIOSPushNotificationRequest",
		sizeof(FClientRegisterForIOSPushNotificationRequest),
		alignof(FClientRegisterForIOSPushNotificationRequest),
		Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientRegisterForIOSPushNotificationRequest"), sizeof(FClientRegisterForIOSPushNotificationRequest), Get_Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientRegisterForIOSPushNotificationRequest_Hash() { return 1694868891U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
