// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminGetCloudScriptVersionsRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminGetCloudScriptVersionsRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminGetCloudScriptVersionsRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminGetCloudScriptVersionsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminGetCloudScriptVersionsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminGetCloudScriptVersionsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminGetCloudScriptVersionsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminGetCloudScriptVersionsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminGetCloudScriptVersionsRequest"), sizeof(FAdminGetCloudScriptVersionsRequest), Get_Z_Construct_UScriptStruct_FAdminGetCloudScriptVersionsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminGetCloudScriptVersionsRequest>()
{
	return FAdminGetCloudScriptVersionsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminGetCloudScriptVersionsRequest(FAdminGetCloudScriptVersionsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminGetCloudScriptVersionsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetCloudScriptVersionsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetCloudScriptVersionsRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminGetCloudScriptVersionsRequest>(FName(TEXT("AdminGetCloudScriptVersionsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminGetCloudScriptVersionsRequest;
	struct Z_Construct_UScriptStruct_FAdminGetCloudScriptVersionsRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetCloudScriptVersionsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminGetCloudScriptVersionsRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminGetCloudScriptVersionsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminGetCloudScriptVersionsRequest>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminGetCloudScriptVersionsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminGetCloudScriptVersionsRequest",
		sizeof(FAdminGetCloudScriptVersionsRequest),
		alignof(FAdminGetCloudScriptVersionsRequest),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetCloudScriptVersionsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetCloudScriptVersionsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminGetCloudScriptVersionsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminGetCloudScriptVersionsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminGetCloudScriptVersionsRequest"), sizeof(FAdminGetCloudScriptVersionsRequest), Get_Z_Construct_UScriptStruct_FAdminGetCloudScriptVersionsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminGetCloudScriptVersionsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminGetCloudScriptVersionsRequest_Hash() { return 3922502940U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
