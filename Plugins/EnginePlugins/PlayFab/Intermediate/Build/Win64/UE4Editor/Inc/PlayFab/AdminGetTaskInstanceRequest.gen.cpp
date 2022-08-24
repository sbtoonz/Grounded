// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminGetTaskInstanceRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminGetTaskInstanceRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminGetTaskInstanceRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminGetTaskInstanceRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminGetTaskInstanceRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminGetTaskInstanceRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminGetTaskInstanceRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminGetTaskInstanceRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminGetTaskInstanceRequest"), sizeof(FAdminGetTaskInstanceRequest), Get_Z_Construct_UScriptStruct_FAdminGetTaskInstanceRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminGetTaskInstanceRequest>()
{
	return FAdminGetTaskInstanceRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminGetTaskInstanceRequest(FAdminGetTaskInstanceRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminGetTaskInstanceRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetTaskInstanceRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetTaskInstanceRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminGetTaskInstanceRequest>(FName(TEXT("AdminGetTaskInstanceRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminGetTaskInstanceRequest;
	struct Z_Construct_UScriptStruct_FAdminGetTaskInstanceRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskInstanceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TaskInstanceId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetTaskInstanceRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminGetTaskInstanceRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminGetTaskInstanceRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminGetTaskInstanceRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetTaskInstanceRequest_Statics::NewProp_TaskInstanceId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetTaskInstanceRequest" },
		{ "ModuleRelativePath", "Public/AdminGetTaskInstanceRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminGetTaskInstanceRequest_Statics::NewProp_TaskInstanceId = { "TaskInstanceId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetTaskInstanceRequest, TaskInstanceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetTaskInstanceRequest_Statics::NewProp_TaskInstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetTaskInstanceRequest_Statics::NewProp_TaskInstanceId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminGetTaskInstanceRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetTaskInstanceRequest_Statics::NewProp_TaskInstanceId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminGetTaskInstanceRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminGetTaskInstanceRequest",
		sizeof(FAdminGetTaskInstanceRequest),
		alignof(FAdminGetTaskInstanceRequest),
		Z_Construct_UScriptStruct_FAdminGetTaskInstanceRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetTaskInstanceRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetTaskInstanceRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetTaskInstanceRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminGetTaskInstanceRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminGetTaskInstanceRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminGetTaskInstanceRequest"), sizeof(FAdminGetTaskInstanceRequest), Get_Z_Construct_UScriptStruct_FAdminGetTaskInstanceRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminGetTaskInstanceRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminGetTaskInstanceRequest_Hash() { return 4278571060U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
