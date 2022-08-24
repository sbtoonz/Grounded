// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminSetupPushNotificationRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminSetupPushNotificationRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EPushSetupPlatform();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminSetupPushNotificationRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminSetupPushNotificationRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminSetupPushNotificationRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminSetupPushNotificationRequest"), sizeof(FAdminSetupPushNotificationRequest), Get_Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminSetupPushNotificationRequest>()
{
	return FAdminSetupPushNotificationRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminSetupPushNotificationRequest(FAdminSetupPushNotificationRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminSetupPushNotificationRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminSetupPushNotificationRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminSetupPushNotificationRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminSetupPushNotificationRequest>(FName(TEXT("AdminSetupPushNotificationRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminSetupPushNotificationRequest;
	struct Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Credential_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Credential;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverwriteOldARN_MetaData[];
#endif
		static void NewProp_OverwriteOldARN_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OverwriteOldARN;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Platform_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Platform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminSetupPushNotificationRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminSetupPushNotificationRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::NewProp_Credential_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminSetupPushNotificationRequest" },
		{ "ModuleRelativePath", "Public/AdminSetupPushNotificationRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::NewProp_Credential = { "Credential", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminSetupPushNotificationRequest, Credential), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::NewProp_Credential_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::NewProp_Credential_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::NewProp_Key_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminSetupPushNotificationRequest" },
		{ "ModuleRelativePath", "Public/AdminSetupPushNotificationRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminSetupPushNotificationRequest, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminSetupPushNotificationRequest" },
		{ "ModuleRelativePath", "Public/AdminSetupPushNotificationRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminSetupPushNotificationRequest, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::NewProp_OverwriteOldARN_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminSetupPushNotificationRequest" },
		{ "ModuleRelativePath", "Public/AdminSetupPushNotificationRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::NewProp_OverwriteOldARN_SetBit(void* Obj)
	{
		((FAdminSetupPushNotificationRequest*)Obj)->OverwriteOldARN = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::NewProp_OverwriteOldARN = { "OverwriteOldARN", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAdminSetupPushNotificationRequest), &Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::NewProp_OverwriteOldARN_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::NewProp_OverwriteOldARN_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::NewProp_OverwriteOldARN_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::NewProp_Platform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::NewProp_Platform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminSetupPushNotificationRequest" },
		{ "ModuleRelativePath", "Public/AdminSetupPushNotificationRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminSetupPushNotificationRequest, Platform), Z_Construct_UEnum_PlayFab_EPushSetupPlatform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::NewProp_Platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::NewProp_Platform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::NewProp_Credential,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::NewProp_OverwriteOldARN,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::NewProp_Platform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::NewProp_Platform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminSetupPushNotificationRequest",
		sizeof(FAdminSetupPushNotificationRequest),
		alignof(FAdminSetupPushNotificationRequest),
		Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminSetupPushNotificationRequest"), sizeof(FAdminSetupPushNotificationRequest), Get_Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminSetupPushNotificationRequest_Hash() { return 108442876U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
