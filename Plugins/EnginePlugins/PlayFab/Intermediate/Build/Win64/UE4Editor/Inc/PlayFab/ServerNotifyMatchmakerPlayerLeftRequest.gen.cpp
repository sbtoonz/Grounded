// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerNotifyMatchmakerPlayerLeftRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerNotifyMatchmakerPlayerLeftRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerNotifyMatchmakerPlayerLeftRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerNotifyMatchmakerPlayerLeftRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerNotifyMatchmakerPlayerLeftRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerNotifyMatchmakerPlayerLeftRequest"), sizeof(FServerNotifyMatchmakerPlayerLeftRequest), Get_Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerNotifyMatchmakerPlayerLeftRequest>()
{
	return FServerNotifyMatchmakerPlayerLeftRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest(FServerNotifyMatchmakerPlayerLeftRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerNotifyMatchmakerPlayerLeftRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerNotifyMatchmakerPlayerLeftRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerNotifyMatchmakerPlayerLeftRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerNotifyMatchmakerPlayerLeftRequest>(FName(TEXT("ServerNotifyMatchmakerPlayerLeftRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerNotifyMatchmakerPlayerLeftRequest;
	struct Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LobbyId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerNotifyMatchmakerPlayerLeftRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerNotifyMatchmakerPlayerLeftRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerNotifyMatchmakerPlayerLeftRequest" },
		{ "ModuleRelativePath", "Public/ServerNotifyMatchmakerPlayerLeftRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerNotifyMatchmakerPlayerLeftRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest_Statics::NewProp_LobbyId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerNotifyMatchmakerPlayerLeftRequest" },
		{ "ModuleRelativePath", "Public/ServerNotifyMatchmakerPlayerLeftRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerNotifyMatchmakerPlayerLeftRequest, LobbyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest_Statics::NewProp_LobbyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerNotifyMatchmakerPlayerLeftRequest" },
		{ "ModuleRelativePath", "Public/ServerNotifyMatchmakerPlayerLeftRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerNotifyMatchmakerPlayerLeftRequest, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest_Statics::NewProp_PlayFabId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest_Statics::NewProp_LobbyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest_Statics::NewProp_PlayFabId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerNotifyMatchmakerPlayerLeftRequest",
		sizeof(FServerNotifyMatchmakerPlayerLeftRequest),
		alignof(FServerNotifyMatchmakerPlayerLeftRequest),
		Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerNotifyMatchmakerPlayerLeftRequest"), sizeof(FServerNotifyMatchmakerPlayerLeftRequest), Get_Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftRequest_Hash() { return 2812547901U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
