// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerSendCustomAccountRecoveryEmailRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerSendCustomAccountRecoveryEmailRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerSendCustomAccountRecoveryEmailRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerSendCustomAccountRecoveryEmailRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerSendCustomAccountRecoveryEmailRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerSendCustomAccountRecoveryEmailRequest"), sizeof(FServerSendCustomAccountRecoveryEmailRequest), Get_Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerSendCustomAccountRecoveryEmailRequest>()
{
	return FServerSendCustomAccountRecoveryEmailRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest(FServerSendCustomAccountRecoveryEmailRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerSendCustomAccountRecoveryEmailRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerSendCustomAccountRecoveryEmailRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerSendCustomAccountRecoveryEmailRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerSendCustomAccountRecoveryEmailRequest>(FName(TEXT("ServerSendCustomAccountRecoveryEmailRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerSendCustomAccountRecoveryEmailRequest;
	struct Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Email;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmailTemplateId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EmailTemplateId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Username;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerSendCustomAccountRecoveryEmailRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerSendCustomAccountRecoveryEmailRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerSendCustomAccountRecoveryEmailRequest" },
		{ "ModuleRelativePath", "Public/ServerSendCustomAccountRecoveryEmailRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerSendCustomAccountRecoveryEmailRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Statics::NewProp_Email_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerSendCustomAccountRecoveryEmailRequest" },
		{ "ModuleRelativePath", "Public/ServerSendCustomAccountRecoveryEmailRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerSendCustomAccountRecoveryEmailRequest, Email), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Statics::NewProp_Email_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Statics::NewProp_EmailTemplateId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerSendCustomAccountRecoveryEmailRequest" },
		{ "ModuleRelativePath", "Public/ServerSendCustomAccountRecoveryEmailRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Statics::NewProp_EmailTemplateId = { "EmailTemplateId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerSendCustomAccountRecoveryEmailRequest, EmailTemplateId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Statics::NewProp_EmailTemplateId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Statics::NewProp_EmailTemplateId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Statics::NewProp_Username_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerSendCustomAccountRecoveryEmailRequest" },
		{ "ModuleRelativePath", "Public/ServerSendCustomAccountRecoveryEmailRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerSendCustomAccountRecoveryEmailRequest, Username), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Statics::NewProp_Username_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Statics::NewProp_Email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Statics::NewProp_EmailTemplateId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Statics::NewProp_Username,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerSendCustomAccountRecoveryEmailRequest",
		sizeof(FServerSendCustomAccountRecoveryEmailRequest),
		alignof(FServerSendCustomAccountRecoveryEmailRequest),
		Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerSendCustomAccountRecoveryEmailRequest"), sizeof(FServerSendCustomAccountRecoveryEmailRequest), Get_Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerSendCustomAccountRecoveryEmailRequest_Hash() { return 1586638317U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
