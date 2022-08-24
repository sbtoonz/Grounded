// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientLinkXboxAccountRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientLinkXboxAccountRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientLinkXboxAccountRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientLinkXboxAccountRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientLinkXboxAccountRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientLinkXboxAccountRequest"), sizeof(FClientLinkXboxAccountRequest), Get_Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientLinkXboxAccountRequest>()
{
	return FClientLinkXboxAccountRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientLinkXboxAccountRequest(FClientLinkXboxAccountRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientLinkXboxAccountRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientLinkXboxAccountRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientLinkXboxAccountRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientLinkXboxAccountRequest>(FName(TEXT("ClientLinkXboxAccountRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientLinkXboxAccountRequest;
	struct Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceLink_MetaData[];
#endif
		static void NewProp_ForceLink_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceLink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XboxToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_XboxToken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientLinkXboxAccountRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientLinkXboxAccountRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientLinkXboxAccountRequest" },
		{ "ModuleRelativePath", "Public/ClientLinkXboxAccountRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLinkXboxAccountRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest_Statics::NewProp_ForceLink_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientLinkXboxAccountRequest" },
		{ "ModuleRelativePath", "Public/ClientLinkXboxAccountRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest_Statics::NewProp_ForceLink_SetBit(void* Obj)
	{
		((FClientLinkXboxAccountRequest*)Obj)->ForceLink = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest_Statics::NewProp_ForceLink = { "ForceLink", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FClientLinkXboxAccountRequest), &Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest_Statics::NewProp_ForceLink_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest_Statics::NewProp_ForceLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest_Statics::NewProp_ForceLink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest_Statics::NewProp_XboxToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientLinkXboxAccountRequest" },
		{ "ModuleRelativePath", "Public/ClientLinkXboxAccountRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest_Statics::NewProp_XboxToken = { "XboxToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientLinkXboxAccountRequest, XboxToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest_Statics::NewProp_XboxToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest_Statics::NewProp_XboxToken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest_Statics::NewProp_ForceLink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest_Statics::NewProp_XboxToken,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientLinkXboxAccountRequest",
		sizeof(FClientLinkXboxAccountRequest),
		alignof(FClientLinkXboxAccountRequest),
		Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientLinkXboxAccountRequest"), sizeof(FClientLinkXboxAccountRequest), Get_Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientLinkXboxAccountRequest_Hash() { return 26355510U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
