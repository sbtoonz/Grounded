// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientSendAccountRecoveryEmailRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientSendAccountRecoveryEmailRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientSendAccountRecoveryEmailRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientSendAccountRecoveryEmailRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientSendAccountRecoveryEmailRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientSendAccountRecoveryEmailRequest"), sizeof(FClientSendAccountRecoveryEmailRequest), Get_Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientSendAccountRecoveryEmailRequest>()
{
	return FClientSendAccountRecoveryEmailRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientSendAccountRecoveryEmailRequest(FClientSendAccountRecoveryEmailRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientSendAccountRecoveryEmailRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientSendAccountRecoveryEmailRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientSendAccountRecoveryEmailRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientSendAccountRecoveryEmailRequest>(FName(TEXT("ClientSendAccountRecoveryEmailRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientSendAccountRecoveryEmailRequest;
	struct Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailRequest_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientSendAccountRecoveryEmailRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientSendAccountRecoveryEmailRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientSendAccountRecoveryEmailRequest" },
		{ "ModuleRelativePath", "Public/ClientSendAccountRecoveryEmailRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientSendAccountRecoveryEmailRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailRequest_Statics::NewProp_Email_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientSendAccountRecoveryEmailRequest" },
		{ "ModuleRelativePath", "Public/ClientSendAccountRecoveryEmailRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailRequest_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientSendAccountRecoveryEmailRequest, Email), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailRequest_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailRequest_Statics::NewProp_Email_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailRequest_Statics::NewProp_EmailTemplateId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientSendAccountRecoveryEmailRequest" },
		{ "ModuleRelativePath", "Public/ClientSendAccountRecoveryEmailRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailRequest_Statics::NewProp_EmailTemplateId = { "EmailTemplateId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientSendAccountRecoveryEmailRequest, EmailTemplateId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailRequest_Statics::NewProp_EmailTemplateId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailRequest_Statics::NewProp_EmailTemplateId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailRequest_Statics::NewProp_Email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailRequest_Statics::NewProp_EmailTemplateId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientSendAccountRecoveryEmailRequest",
		sizeof(FClientSendAccountRecoveryEmailRequest),
		alignof(FClientSendAccountRecoveryEmailRequest),
		Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientSendAccountRecoveryEmailRequest"), sizeof(FClientSendAccountRecoveryEmailRequest), Get_Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailRequest_Hash() { return 3161239576U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
