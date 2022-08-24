// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientUnlinkKongregateAccountRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientUnlinkKongregateAccountRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientUnlinkKongregateAccountRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientUnlinkKongregateAccountRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientUnlinkKongregateAccountRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientUnlinkKongregateAccountRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientUnlinkKongregateAccountRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientUnlinkKongregateAccountRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientUnlinkKongregateAccountRequest"), sizeof(FClientUnlinkKongregateAccountRequest), Get_Z_Construct_UScriptStruct_FClientUnlinkKongregateAccountRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientUnlinkKongregateAccountRequest>()
{
	return FClientUnlinkKongregateAccountRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientUnlinkKongregateAccountRequest(FClientUnlinkKongregateAccountRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientUnlinkKongregateAccountRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientUnlinkKongregateAccountRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientUnlinkKongregateAccountRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientUnlinkKongregateAccountRequest>(FName(TEXT("ClientUnlinkKongregateAccountRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientUnlinkKongregateAccountRequest;
	struct Z_Construct_UScriptStruct_FClientUnlinkKongregateAccountRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientUnlinkKongregateAccountRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientUnlinkKongregateAccountRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientUnlinkKongregateAccountRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientUnlinkKongregateAccountRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientUnlinkKongregateAccountRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientUnlinkKongregateAccountRequest" },
		{ "ModuleRelativePath", "Public/ClientUnlinkKongregateAccountRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientUnlinkKongregateAccountRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientUnlinkKongregateAccountRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientUnlinkKongregateAccountRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientUnlinkKongregateAccountRequest_Statics::NewProp_CustomTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientUnlinkKongregateAccountRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientUnlinkKongregateAccountRequest_Statics::NewProp_CustomTags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientUnlinkKongregateAccountRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientUnlinkKongregateAccountRequest",
		sizeof(FClientUnlinkKongregateAccountRequest),
		alignof(FClientUnlinkKongregateAccountRequest),
		Z_Construct_UScriptStruct_FClientUnlinkKongregateAccountRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientUnlinkKongregateAccountRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientUnlinkKongregateAccountRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientUnlinkKongregateAccountRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientUnlinkKongregateAccountRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientUnlinkKongregateAccountRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientUnlinkKongregateAccountRequest"), sizeof(FClientUnlinkKongregateAccountRequest), Get_Z_Construct_UScriptStruct_FClientUnlinkKongregateAccountRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientUnlinkKongregateAccountRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientUnlinkKongregateAccountRequest_Hash() { return 2074623092U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
