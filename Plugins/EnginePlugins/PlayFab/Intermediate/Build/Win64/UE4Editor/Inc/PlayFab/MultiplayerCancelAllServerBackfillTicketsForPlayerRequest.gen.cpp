// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MultiplayerCancelAllServerBackfillTicketsForPlayerRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerCancelAllServerBackfillTicketsForPlayerRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("MultiplayerCancelAllServerBackfillTicketsForPlayerRequest"), sizeof(FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest), Get_Z_Construct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest>()
{
	return FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest(FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MultiplayerCancelAllServerBackfillTicketsForPlayerRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerCancelAllServerBackfillTicketsForPlayerRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerCancelAllServerBackfillTicketsForPlayerRequest()
	{
		UScriptStruct::DeferCppStructOps<FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest>(FName(TEXT("MultiplayerCancelAllServerBackfillTicketsForPlayerRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerCancelAllServerBackfillTicketsForPlayerRequest;
	struct Z_Construct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Entity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueueName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QueueName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerCancelAllServerBackfillTicketsForPlayerRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCancelAllServerBackfillTicketsForPlayerRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerCancelAllServerBackfillTicketsForPlayerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCancelAllServerBackfillTicketsForPlayerRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerCancelAllServerBackfillTicketsForPlayerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest_Statics::NewProp_QueueName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCancelAllServerBackfillTicketsForPlayerRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerCancelAllServerBackfillTicketsForPlayerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest_Statics::NewProp_QueueName = { "QueueName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest, QueueName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest_Statics::NewProp_QueueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest_Statics::NewProp_QueueName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest_Statics::NewProp_QueueName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"MultiplayerCancelAllServerBackfillTicketsForPlayerRequest",
		sizeof(FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest),
		alignof(FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest),
		Z_Construct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiplayerCancelAllServerBackfillTicketsForPlayerRequest"), sizeof(FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest), Get_Z_Construct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest_Hash() { return 3368710088U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
