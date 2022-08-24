// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminGetServerBuildUploadURLRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminGetServerBuildUploadURLRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminGetServerBuildUploadURLRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminGetServerBuildUploadURLRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminGetServerBuildUploadURLRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminGetServerBuildUploadURLRequest"), sizeof(FAdminGetServerBuildUploadURLRequest), Get_Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminGetServerBuildUploadURLRequest>()
{
	return FAdminGetServerBuildUploadURLRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminGetServerBuildUploadURLRequest(FAdminGetServerBuildUploadURLRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminGetServerBuildUploadURLRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetServerBuildUploadURLRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetServerBuildUploadURLRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminGetServerBuildUploadURLRequest>(FName(TEXT("AdminGetServerBuildUploadURLRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminGetServerBuildUploadURLRequest;
	struct Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLRequest_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminGetServerBuildUploadURLRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminGetServerBuildUploadURLRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLRequest_Statics::NewProp_BuildId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetServerBuildUploadURLRequest" },
		{ "ModuleRelativePath", "Public/AdminGetServerBuildUploadURLRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLRequest_Statics::NewProp_BuildId = { "BuildId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetServerBuildUploadURLRequest, BuildId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLRequest_Statics::NewProp_BuildId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLRequest_Statics::NewProp_BuildId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLRequest_Statics::NewProp_BuildId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminGetServerBuildUploadURLRequest",
		sizeof(FAdminGetServerBuildUploadURLRequest),
		alignof(FAdminGetServerBuildUploadURLRequest),
		Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminGetServerBuildUploadURLRequest"), sizeof(FAdminGetServerBuildUploadURLRequest), Get_Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLRequest_Hash() { return 137171469U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
