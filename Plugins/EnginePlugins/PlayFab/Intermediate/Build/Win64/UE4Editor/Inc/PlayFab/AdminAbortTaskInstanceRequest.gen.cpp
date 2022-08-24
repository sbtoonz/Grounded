// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminAbortTaskInstanceRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminAbortTaskInstanceRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminAbortTaskInstanceRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminAbortTaskInstanceRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminAbortTaskInstanceRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminAbortTaskInstanceRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminAbortTaskInstanceRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminAbortTaskInstanceRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminAbortTaskInstanceRequest"), sizeof(FAdminAbortTaskInstanceRequest), Get_Z_Construct_UScriptStruct_FAdminAbortTaskInstanceRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminAbortTaskInstanceRequest>()
{
	return FAdminAbortTaskInstanceRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminAbortTaskInstanceRequest(FAdminAbortTaskInstanceRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminAbortTaskInstanceRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminAbortTaskInstanceRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminAbortTaskInstanceRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminAbortTaskInstanceRequest>(FName(TEXT("AdminAbortTaskInstanceRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminAbortTaskInstanceRequest;
	struct Z_Construct_UScriptStruct_FAdminAbortTaskInstanceRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskInstanceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TaskInstanceId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminAbortTaskInstanceRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminAbortTaskInstanceRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminAbortTaskInstanceRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminAbortTaskInstanceRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminAbortTaskInstanceRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminAbortTaskInstanceRequest" },
		{ "ModuleRelativePath", "Public/AdminAbortTaskInstanceRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminAbortTaskInstanceRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminAbortTaskInstanceRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminAbortTaskInstanceRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminAbortTaskInstanceRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminAbortTaskInstanceRequest_Statics::NewProp_TaskInstanceId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminAbortTaskInstanceRequest" },
		{ "ModuleRelativePath", "Public/AdminAbortTaskInstanceRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminAbortTaskInstanceRequest_Statics::NewProp_TaskInstanceId = { "TaskInstanceId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminAbortTaskInstanceRequest, TaskInstanceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminAbortTaskInstanceRequest_Statics::NewProp_TaskInstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminAbortTaskInstanceRequest_Statics::NewProp_TaskInstanceId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminAbortTaskInstanceRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminAbortTaskInstanceRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminAbortTaskInstanceRequest_Statics::NewProp_TaskInstanceId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminAbortTaskInstanceRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminAbortTaskInstanceRequest",
		sizeof(FAdminAbortTaskInstanceRequest),
		alignof(FAdminAbortTaskInstanceRequest),
		Z_Construct_UScriptStruct_FAdminAbortTaskInstanceRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminAbortTaskInstanceRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminAbortTaskInstanceRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminAbortTaskInstanceRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminAbortTaskInstanceRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminAbortTaskInstanceRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminAbortTaskInstanceRequest"), sizeof(FAdminAbortTaskInstanceRequest), Get_Z_Construct_UScriptStruct_FAdminAbortTaskInstanceRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminAbortTaskInstanceRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminAbortTaskInstanceRequest_Hash() { return 2157524198U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
