// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MultiplayerEnableMultiplayerServersForTitleRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerEnableMultiplayerServersForTitleRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiplayerEnableMultiplayerServersForTitleRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FMultiplayerEnableMultiplayerServersForTitleRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FMultiplayerEnableMultiplayerServersForTitleRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("MultiplayerEnableMultiplayerServersForTitleRequest"), sizeof(FMultiplayerEnableMultiplayerServersForTitleRequest), Get_Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMultiplayerEnableMultiplayerServersForTitleRequest>()
{
	return FMultiplayerEnableMultiplayerServersForTitleRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleRequest(FMultiplayerEnableMultiplayerServersForTitleRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MultiplayerEnableMultiplayerServersForTitleRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerEnableMultiplayerServersForTitleRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerEnableMultiplayerServersForTitleRequest()
	{
		UScriptStruct::DeferCppStructOps<FMultiplayerEnableMultiplayerServersForTitleRequest>(FName(TEXT("MultiplayerEnableMultiplayerServersForTitleRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerEnableMultiplayerServersForTitleRequest;
	struct Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleRequest_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerEnableMultiplayerServersForTitleRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerEnableMultiplayerServersForTitleRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerEnableMultiplayerServersForTitleRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerEnableMultiplayerServersForTitleRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerEnableMultiplayerServersForTitleRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleRequest_Statics::NewProp_CustomTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleRequest_Statics::NewProp_CustomTags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"MultiplayerEnableMultiplayerServersForTitleRequest",
		sizeof(FMultiplayerEnableMultiplayerServersForTitleRequest),
		alignof(FMultiplayerEnableMultiplayerServersForTitleRequest),
		Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiplayerEnableMultiplayerServersForTitleRequest"), sizeof(FMultiplayerEnableMultiplayerServersForTitleRequest), Get_Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleRequest_Hash() { return 1820155782U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
