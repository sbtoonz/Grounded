// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientUpdateUserTitleDisplayNameRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientUpdateUserTitleDisplayNameRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientUpdateUserTitleDisplayNameRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientUpdateUserTitleDisplayNameRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientUpdateUserTitleDisplayNameRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientUpdateUserTitleDisplayNameRequest"), sizeof(FClientUpdateUserTitleDisplayNameRequest), Get_Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientUpdateUserTitleDisplayNameRequest>()
{
	return FClientUpdateUserTitleDisplayNameRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientUpdateUserTitleDisplayNameRequest(FClientUpdateUserTitleDisplayNameRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientUpdateUserTitleDisplayNameRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientUpdateUserTitleDisplayNameRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientUpdateUserTitleDisplayNameRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientUpdateUserTitleDisplayNameRequest>(FName(TEXT("ClientUpdateUserTitleDisplayNameRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientUpdateUserTitleDisplayNameRequest;
	struct Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientUpdateUserTitleDisplayNameRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientUpdateUserTitleDisplayNameRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientUpdateUserTitleDisplayNameRequest" },
		{ "ModuleRelativePath", "Public/ClientUpdateUserTitleDisplayNameRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientUpdateUserTitleDisplayNameRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameRequest_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientUpdateUserTitleDisplayNameRequest" },
		{ "ModuleRelativePath", "Public/ClientUpdateUserTitleDisplayNameRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameRequest_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientUpdateUserTitleDisplayNameRequest, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameRequest_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameRequest_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameRequest_Statics::NewProp_DisplayName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientUpdateUserTitleDisplayNameRequest",
		sizeof(FClientUpdateUserTitleDisplayNameRequest),
		alignof(FClientUpdateUserTitleDisplayNameRequest),
		Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientUpdateUserTitleDisplayNameRequest"), sizeof(FClientUpdateUserTitleDisplayNameRequest), Get_Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameRequest_Hash() { return 1165422161U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
