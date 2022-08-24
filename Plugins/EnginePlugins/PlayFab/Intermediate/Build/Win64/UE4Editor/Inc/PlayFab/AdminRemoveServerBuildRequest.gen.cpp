// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminRemoveServerBuildRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminRemoveServerBuildRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminRemoveServerBuildRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminRemoveServerBuildRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminRemoveServerBuildRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminRemoveServerBuildRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminRemoveServerBuildRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminRemoveServerBuildRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminRemoveServerBuildRequest"), sizeof(FAdminRemoveServerBuildRequest), Get_Z_Construct_UScriptStruct_FAdminRemoveServerBuildRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminRemoveServerBuildRequest>()
{
	return FAdminRemoveServerBuildRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminRemoveServerBuildRequest(FAdminRemoveServerBuildRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminRemoveServerBuildRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminRemoveServerBuildRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminRemoveServerBuildRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminRemoveServerBuildRequest>(FName(TEXT("AdminRemoveServerBuildRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminRemoveServerBuildRequest;
	struct Z_Construct_UScriptStruct_FAdminRemoveServerBuildRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminRemoveServerBuildRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminRemoveServerBuildRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminRemoveServerBuildRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminRemoveServerBuildRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminRemoveServerBuildRequest_Statics::NewProp_BuildId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminRemoveServerBuildRequest" },
		{ "ModuleRelativePath", "Public/AdminRemoveServerBuildRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminRemoveServerBuildRequest_Statics::NewProp_BuildId = { "BuildId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminRemoveServerBuildRequest, BuildId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminRemoveServerBuildRequest_Statics::NewProp_BuildId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminRemoveServerBuildRequest_Statics::NewProp_BuildId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminRemoveServerBuildRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminRemoveServerBuildRequest_Statics::NewProp_BuildId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminRemoveServerBuildRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminRemoveServerBuildRequest",
		sizeof(FAdminRemoveServerBuildRequest),
		alignof(FAdminRemoveServerBuildRequest),
		Z_Construct_UScriptStruct_FAdminRemoveServerBuildRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminRemoveServerBuildRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminRemoveServerBuildRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminRemoveServerBuildRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminRemoveServerBuildRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminRemoveServerBuildRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminRemoveServerBuildRequest"), sizeof(FAdminRemoveServerBuildRequest), Get_Z_Construct_UScriptStruct_FAdminRemoveServerBuildRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminRemoveServerBuildRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminRemoveServerBuildRequest_Hash() { return 1972183488U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
