// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerLinkPSNAccountRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerLinkPSNAccountRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerLinkPSNAccountRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerLinkPSNAccountRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerLinkPSNAccountRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerLinkPSNAccountRequest"), sizeof(FServerLinkPSNAccountRequest), Get_Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerLinkPSNAccountRequest>()
{
	return FServerLinkPSNAccountRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerLinkPSNAccountRequest(FServerLinkPSNAccountRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerLinkPSNAccountRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerLinkPSNAccountRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerLinkPSNAccountRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerLinkPSNAccountRequest>(FName(TEXT("ServerLinkPSNAccountRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerLinkPSNAccountRequest;
	struct Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuthCode;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IssuerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IssuerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedirectUri_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RedirectUri;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerLinkPSNAccountRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerLinkPSNAccountRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::NewProp_AuthCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerLinkPSNAccountRequest" },
		{ "ModuleRelativePath", "Public/ServerLinkPSNAccountRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::NewProp_AuthCode = { "AuthCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerLinkPSNAccountRequest, AuthCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::NewProp_AuthCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::NewProp_AuthCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerLinkPSNAccountRequest" },
		{ "ModuleRelativePath", "Public/ServerLinkPSNAccountRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerLinkPSNAccountRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::NewProp_ForceLink_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerLinkPSNAccountRequest" },
		{ "ModuleRelativePath", "Public/ServerLinkPSNAccountRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::NewProp_ForceLink_SetBit(void* Obj)
	{
		((FServerLinkPSNAccountRequest*)Obj)->ForceLink = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::NewProp_ForceLink = { "ForceLink", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FServerLinkPSNAccountRequest), &Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::NewProp_ForceLink_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::NewProp_ForceLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::NewProp_ForceLink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::NewProp_IssuerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerLinkPSNAccountRequest" },
		{ "ModuleRelativePath", "Public/ServerLinkPSNAccountRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::NewProp_IssuerId = { "IssuerId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerLinkPSNAccountRequest, IssuerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::NewProp_IssuerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::NewProp_IssuerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerLinkPSNAccountRequest" },
		{ "ModuleRelativePath", "Public/ServerLinkPSNAccountRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerLinkPSNAccountRequest, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::NewProp_PlayFabId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::NewProp_RedirectUri_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerLinkPSNAccountRequest" },
		{ "ModuleRelativePath", "Public/ServerLinkPSNAccountRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::NewProp_RedirectUri = { "RedirectUri", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerLinkPSNAccountRequest, RedirectUri), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::NewProp_RedirectUri_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::NewProp_RedirectUri_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::NewProp_AuthCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::NewProp_ForceLink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::NewProp_IssuerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::NewProp_PlayFabId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::NewProp_RedirectUri,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerLinkPSNAccountRequest",
		sizeof(FServerLinkPSNAccountRequest),
		alignof(FServerLinkPSNAccountRequest),
		Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerLinkPSNAccountRequest"), sizeof(FServerLinkPSNAccountRequest), Get_Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerLinkPSNAccountRequest_Hash() { return 3330750922U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
