// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientUnlinkCustomIDRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientUnlinkCustomIDRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientUnlinkCustomIDRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientUnlinkCustomIDRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientUnlinkCustomIDRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientUnlinkCustomIDRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientUnlinkCustomIDRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientUnlinkCustomIDRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientUnlinkCustomIDRequest"), sizeof(FClientUnlinkCustomIDRequest), Get_Z_Construct_UScriptStruct_FClientUnlinkCustomIDRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientUnlinkCustomIDRequest>()
{
	return FClientUnlinkCustomIDRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientUnlinkCustomIDRequest(FClientUnlinkCustomIDRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientUnlinkCustomIDRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientUnlinkCustomIDRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientUnlinkCustomIDRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientUnlinkCustomIDRequest>(FName(TEXT("ClientUnlinkCustomIDRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientUnlinkCustomIDRequest;
	struct Z_Construct_UScriptStruct_FClientUnlinkCustomIDRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientUnlinkCustomIDRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientUnlinkCustomIDRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientUnlinkCustomIDRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientUnlinkCustomIDRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientUnlinkCustomIDRequest_Statics::NewProp_CustomId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientUnlinkCustomIDRequest" },
		{ "ModuleRelativePath", "Public/ClientUnlinkCustomIDRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientUnlinkCustomIDRequest_Statics::NewProp_CustomId = { "CustomId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientUnlinkCustomIDRequest, CustomId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientUnlinkCustomIDRequest_Statics::NewProp_CustomId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientUnlinkCustomIDRequest_Statics::NewProp_CustomId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientUnlinkCustomIDRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientUnlinkCustomIDRequest" },
		{ "ModuleRelativePath", "Public/ClientUnlinkCustomIDRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientUnlinkCustomIDRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientUnlinkCustomIDRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientUnlinkCustomIDRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientUnlinkCustomIDRequest_Statics::NewProp_CustomTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientUnlinkCustomIDRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientUnlinkCustomIDRequest_Statics::NewProp_CustomId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientUnlinkCustomIDRequest_Statics::NewProp_CustomTags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientUnlinkCustomIDRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientUnlinkCustomIDRequest",
		sizeof(FClientUnlinkCustomIDRequest),
		alignof(FClientUnlinkCustomIDRequest),
		Z_Construct_UScriptStruct_FClientUnlinkCustomIDRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientUnlinkCustomIDRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientUnlinkCustomIDRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientUnlinkCustomIDRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientUnlinkCustomIDRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientUnlinkCustomIDRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientUnlinkCustomIDRequest"), sizeof(FClientUnlinkCustomIDRequest), Get_Z_Construct_UScriptStruct_FClientUnlinkCustomIDRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientUnlinkCustomIDRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientUnlinkCustomIDRequest_Hash() { return 190934609U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
