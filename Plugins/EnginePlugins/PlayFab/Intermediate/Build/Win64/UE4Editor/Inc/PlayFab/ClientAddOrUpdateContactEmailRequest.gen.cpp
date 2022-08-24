// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientAddOrUpdateContactEmailRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientAddOrUpdateContactEmailRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientAddOrUpdateContactEmailRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientAddOrUpdateContactEmailRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientAddOrUpdateContactEmailRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientAddOrUpdateContactEmailRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientAddOrUpdateContactEmailRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientAddOrUpdateContactEmailRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientAddOrUpdateContactEmailRequest"), sizeof(FClientAddOrUpdateContactEmailRequest), Get_Z_Construct_UScriptStruct_FClientAddOrUpdateContactEmailRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientAddOrUpdateContactEmailRequest>()
{
	return FClientAddOrUpdateContactEmailRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientAddOrUpdateContactEmailRequest(FClientAddOrUpdateContactEmailRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientAddOrUpdateContactEmailRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientAddOrUpdateContactEmailRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientAddOrUpdateContactEmailRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientAddOrUpdateContactEmailRequest>(FName(TEXT("ClientAddOrUpdateContactEmailRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientAddOrUpdateContactEmailRequest;
	struct Z_Construct_UScriptStruct_FClientAddOrUpdateContactEmailRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmailAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EmailAddress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientAddOrUpdateContactEmailRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientAddOrUpdateContactEmailRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientAddOrUpdateContactEmailRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientAddOrUpdateContactEmailRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientAddOrUpdateContactEmailRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientAddOrUpdateContactEmailRequest" },
		{ "ModuleRelativePath", "Public/ClientAddOrUpdateContactEmailRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientAddOrUpdateContactEmailRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientAddOrUpdateContactEmailRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientAddOrUpdateContactEmailRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientAddOrUpdateContactEmailRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientAddOrUpdateContactEmailRequest_Statics::NewProp_EmailAddress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientAddOrUpdateContactEmailRequest" },
		{ "ModuleRelativePath", "Public/ClientAddOrUpdateContactEmailRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientAddOrUpdateContactEmailRequest_Statics::NewProp_EmailAddress = { "EmailAddress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientAddOrUpdateContactEmailRequest, EmailAddress), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientAddOrUpdateContactEmailRequest_Statics::NewProp_EmailAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientAddOrUpdateContactEmailRequest_Statics::NewProp_EmailAddress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientAddOrUpdateContactEmailRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientAddOrUpdateContactEmailRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientAddOrUpdateContactEmailRequest_Statics::NewProp_EmailAddress,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientAddOrUpdateContactEmailRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientAddOrUpdateContactEmailRequest",
		sizeof(FClientAddOrUpdateContactEmailRequest),
		alignof(FClientAddOrUpdateContactEmailRequest),
		Z_Construct_UScriptStruct_FClientAddOrUpdateContactEmailRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientAddOrUpdateContactEmailRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientAddOrUpdateContactEmailRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientAddOrUpdateContactEmailRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientAddOrUpdateContactEmailRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientAddOrUpdateContactEmailRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientAddOrUpdateContactEmailRequest"), sizeof(FClientAddOrUpdateContactEmailRequest), Get_Z_Construct_UScriptStruct_FClientAddOrUpdateContactEmailRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientAddOrUpdateContactEmailRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientAddOrUpdateContactEmailRequest_Hash() { return 18334752U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
