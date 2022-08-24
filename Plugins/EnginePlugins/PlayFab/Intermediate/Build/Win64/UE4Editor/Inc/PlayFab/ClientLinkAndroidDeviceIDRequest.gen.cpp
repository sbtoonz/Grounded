// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientLinkAndroidDeviceIDRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientLinkAndroidDeviceIDRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientLinkAndroidDeviceIDRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientLinkAndroidDeviceIDRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientLinkAndroidDeviceIDRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientLinkAndroidDeviceIDRequest"), sizeof(FClientLinkAndroidDeviceIDRequest), Get_Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientLinkAndroidDeviceIDRequest>()
{
	return FClientLinkAndroidDeviceIDRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientLinkAndroidDeviceIDRequest(FClientLinkAndroidDeviceIDRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientLinkAndroidDeviceIDRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientLinkAndroidDeviceIDRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientLinkAndroidDeviceIDRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientLinkAndroidDeviceIDRequest>(FName(TEXT("ClientLinkAndroidDeviceIDRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientLinkAndroidDeviceIDRequest;
	struct Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AndroidDevice_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AndroidDevice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AndroidDeviceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AndroidDeviceId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceLink_MetaData[];
#endif
		static void NewProp_ForceLink_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceLink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OS_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OS;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientLinkAndroidDeviceIDRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientLinkAndroidDeviceIDRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::NewProp_AndroidDevice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientLinkAndroidDeviceIDRequest" },
		{ "ModuleRelativePath", "Public/ClientLinkAndroidDeviceIDRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::NewProp_AndroidDevice = { "AndroidDevice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLinkAndroidDeviceIDRequest, AndroidDevice), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::NewProp_AndroidDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::NewProp_AndroidDevice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::NewProp_AndroidDeviceId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientLinkAndroidDeviceIDRequest" },
		{ "ModuleRelativePath", "Public/ClientLinkAndroidDeviceIDRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::NewProp_AndroidDeviceId = { "AndroidDeviceId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLinkAndroidDeviceIDRequest, AndroidDeviceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::NewProp_AndroidDeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::NewProp_AndroidDeviceId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientLinkAndroidDeviceIDRequest" },
		{ "ModuleRelativePath", "Public/ClientLinkAndroidDeviceIDRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLinkAndroidDeviceIDRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::NewProp_ForceLink_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientLinkAndroidDeviceIDRequest" },
		{ "ModuleRelativePath", "Public/ClientLinkAndroidDeviceIDRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::NewProp_ForceLink_SetBit(void* Obj)
	{
		((FClientLinkAndroidDeviceIDRequest*)Obj)->ForceLink = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::NewProp_ForceLink = { "ForceLink", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FClientLinkAndroidDeviceIDRequest), &Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::NewProp_ForceLink_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::NewProp_ForceLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::NewProp_ForceLink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::NewProp_OS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientLinkAndroidDeviceIDRequest" },
		{ "ModuleRelativePath", "Public/ClientLinkAndroidDeviceIDRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::NewProp_OS = { "OS", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLinkAndroidDeviceIDRequest, OS), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::NewProp_OS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::NewProp_OS_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::NewProp_AndroidDevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::NewProp_AndroidDeviceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::NewProp_ForceLink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::NewProp_OS,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientLinkAndroidDeviceIDRequest",
		sizeof(FClientLinkAndroidDeviceIDRequest),
		alignof(FClientLinkAndroidDeviceIDRequest),
		Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientLinkAndroidDeviceIDRequest"), sizeof(FClientLinkAndroidDeviceIDRequest), Get_Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientLinkAndroidDeviceIDRequest_Hash() { return 3608363111U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
