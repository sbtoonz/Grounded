// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminGetTaskInstancesRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminGetTaskInstancesRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ETaskInstanceStatus();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminGetTaskInstancesRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminGetTaskInstancesRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminGetTaskInstancesRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminGetTaskInstancesRequest"), sizeof(FAdminGetTaskInstancesRequest), Get_Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminGetTaskInstancesRequest>()
{
	return FAdminGetTaskInstancesRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminGetTaskInstancesRequest(FAdminGetTaskInstancesRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminGetTaskInstancesRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetTaskInstancesRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetTaskInstancesRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminGetTaskInstancesRequest>(FName(TEXT("AdminGetTaskInstancesRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminGetTaskInstancesRequest;
	struct Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartedAtRangeFrom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartedAtRangeFrom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartedAtRangeTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartedAtRangeTo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StatusFilter_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StatusFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskIdentifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TaskIdentifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminGetTaskInstancesRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminGetTaskInstancesRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Statics::NewProp_StartedAtRangeFrom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetTaskInstancesRequest" },
		{ "ModuleRelativePath", "Public/AdminGetTaskInstancesRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Statics::NewProp_StartedAtRangeFrom = { "StartedAtRangeFrom", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetTaskInstancesRequest, StartedAtRangeFrom), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Statics::NewProp_StartedAtRangeFrom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Statics::NewProp_StartedAtRangeFrom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Statics::NewProp_StartedAtRangeTo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetTaskInstancesRequest" },
		{ "ModuleRelativePath", "Public/AdminGetTaskInstancesRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Statics::NewProp_StartedAtRangeTo = { "StartedAtRangeTo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetTaskInstancesRequest, StartedAtRangeTo), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Statics::NewProp_StartedAtRangeTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Statics::NewProp_StartedAtRangeTo_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Statics::NewProp_StatusFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Statics::NewProp_StatusFilter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetTaskInstancesRequest" },
		{ "ModuleRelativePath", "Public/AdminGetTaskInstancesRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Statics::NewProp_StatusFilter = { "StatusFilter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetTaskInstancesRequest, StatusFilter), Z_Construct_UEnum_PlayFab_ETaskInstanceStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Statics::NewProp_StatusFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Statics::NewProp_StatusFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Statics::NewProp_TaskIdentifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetTaskInstancesRequest" },
		{ "ModuleRelativePath", "Public/AdminGetTaskInstancesRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Statics::NewProp_TaskIdentifier = { "TaskIdentifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetTaskInstancesRequest, TaskIdentifier), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Statics::NewProp_TaskIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Statics::NewProp_TaskIdentifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Statics::NewProp_StartedAtRangeFrom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Statics::NewProp_StartedAtRangeTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Statics::NewProp_StatusFilter_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Statics::NewProp_StatusFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Statics::NewProp_TaskIdentifier,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminGetTaskInstancesRequest",
		sizeof(FAdminGetTaskInstancesRequest),
		alignof(FAdminGetTaskInstancesRequest),
		Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminGetTaskInstancesRequest"), sizeof(FAdminGetTaskInstancesRequest), Get_Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminGetTaskInstancesRequest_Hash() { return 788644695U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
