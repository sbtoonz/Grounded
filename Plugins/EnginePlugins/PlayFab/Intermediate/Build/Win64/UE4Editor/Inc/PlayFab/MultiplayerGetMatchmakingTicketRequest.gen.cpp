// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MultiplayerGetMatchmakingTicketRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerGetMatchmakingTicketRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiplayerGetMatchmakingTicketRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FMultiplayerGetMatchmakingTicketRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FMultiplayerGetMatchmakingTicketRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("MultiplayerGetMatchmakingTicketRequest"), sizeof(FMultiplayerGetMatchmakingTicketRequest), Get_Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMultiplayerGetMatchmakingTicketRequest>()
{
	return FMultiplayerGetMatchmakingTicketRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest(FMultiplayerGetMatchmakingTicketRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MultiplayerGetMatchmakingTicketRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerGetMatchmakingTicketRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerGetMatchmakingTicketRequest()
	{
		UScriptStruct::DeferCppStructOps<FMultiplayerGetMatchmakingTicketRequest>(FName(TEXT("MultiplayerGetMatchmakingTicketRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerGetMatchmakingTicketRequest;
	struct Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscapeObject_MetaData[];
#endif
		static void NewProp_EscapeObject_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EscapeObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueueName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QueueName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TicketId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TicketId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerGetMatchmakingTicketRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerGetMatchmakingTicketRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerGetMatchmakingTicketRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerGetMatchmakingTicketRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerGetMatchmakingTicketRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Statics::NewProp_EscapeObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerGetMatchmakingTicketRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerGetMatchmakingTicketRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Statics::NewProp_EscapeObject_SetBit(void* Obj)
	{
		((FMultiplayerGetMatchmakingTicketRequest*)Obj)->EscapeObject = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Statics::NewProp_EscapeObject = { "EscapeObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMultiplayerGetMatchmakingTicketRequest), &Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Statics::NewProp_EscapeObject_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Statics::NewProp_EscapeObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Statics::NewProp_EscapeObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Statics::NewProp_QueueName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerGetMatchmakingTicketRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerGetMatchmakingTicketRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Statics::NewProp_QueueName = { "QueueName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerGetMatchmakingTicketRequest, QueueName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Statics::NewProp_QueueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Statics::NewProp_QueueName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Statics::NewProp_TicketId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerGetMatchmakingTicketRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerGetMatchmakingTicketRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Statics::NewProp_TicketId = { "TicketId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerGetMatchmakingTicketRequest, TicketId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Statics::NewProp_TicketId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Statics::NewProp_TicketId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Statics::NewProp_EscapeObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Statics::NewProp_QueueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Statics::NewProp_TicketId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"MultiplayerGetMatchmakingTicketRequest",
		sizeof(FMultiplayerGetMatchmakingTicketRequest),
		alignof(FMultiplayerGetMatchmakingTicketRequest),
		Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiplayerGetMatchmakingTicketRequest"), sizeof(FMultiplayerGetMatchmakingTicketRequest), Get_Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiplayerGetMatchmakingTicketRequest_Hash() { return 3770604560U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
