// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminSendAccountRecoveryEmailRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminSendAccountRecoveryEmailRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminSendAccountRecoveryEmailRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminSendAccountRecoveryEmailRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminSendAccountRecoveryEmailRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminSendAccountRecoveryEmailRequest"), sizeof(FAdminSendAccountRecoveryEmailRequest), Get_Z_Construct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminSendAccountRecoveryEmailRequest>()
{
	return FAdminSendAccountRecoveryEmailRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest(FAdminSendAccountRecoveryEmailRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminSendAccountRecoveryEmailRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminSendAccountRecoveryEmailRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminSendAccountRecoveryEmailRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminSendAccountRecoveryEmailRequest>(FName(TEXT("AdminSendAccountRecoveryEmailRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminSendAccountRecoveryEmailRequest;
	struct Z_Construct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminSendAccountRecoveryEmailRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminSendAccountRecoveryEmailRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminSendAccountRecoveryEmailRequest" },
		{ "ModuleRelativePath", "Public/AdminSendAccountRecoveryEmailRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminSendAccountRecoveryEmailRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest_Statics::NewProp_Email_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminSendAccountRecoveryEmailRequest" },
		{ "ModuleRelativePath", "Public/AdminSendAccountRecoveryEmailRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminSendAccountRecoveryEmailRequest, Email), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest_Statics::NewProp_Email_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest_Statics::NewProp_EmailTemplateId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminSendAccountRecoveryEmailRequest" },
		{ "ModuleRelativePath", "Public/AdminSendAccountRecoveryEmailRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest_Statics::NewProp_EmailTemplateId = { "EmailTemplateId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminSendAccountRecoveryEmailRequest, EmailTemplateId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest_Statics::NewProp_EmailTemplateId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest_Statics::NewProp_EmailTemplateId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest_Statics::NewProp_Email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest_Statics::NewProp_EmailTemplateId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminSendAccountRecoveryEmailRequest",
		sizeof(FAdminSendAccountRecoveryEmailRequest),
		alignof(FAdminSendAccountRecoveryEmailRequest),
		Z_Construct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminSendAccountRecoveryEmailRequest"), sizeof(FAdminSendAccountRecoveryEmailRequest), Get_Z_Construct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminSendAccountRecoveryEmailRequest_Hash() { return 34573123U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
