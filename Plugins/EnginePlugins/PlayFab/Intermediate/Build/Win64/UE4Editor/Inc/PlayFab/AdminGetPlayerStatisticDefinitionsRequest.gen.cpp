// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminGetPlayerStatisticDefinitionsRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminGetPlayerStatisticDefinitionsRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminGetPlayerStatisticDefinitionsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminGetPlayerStatisticDefinitionsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminGetPlayerStatisticDefinitionsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminGetPlayerStatisticDefinitionsRequest"), sizeof(FAdminGetPlayerStatisticDefinitionsRequest), Get_Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminGetPlayerStatisticDefinitionsRequest>()
{
	return FAdminGetPlayerStatisticDefinitionsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsRequest(FAdminGetPlayerStatisticDefinitionsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminGetPlayerStatisticDefinitionsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetPlayerStatisticDefinitionsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetPlayerStatisticDefinitionsRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminGetPlayerStatisticDefinitionsRequest>(FName(TEXT("AdminGetPlayerStatisticDefinitionsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminGetPlayerStatisticDefinitionsRequest;
	struct Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminGetPlayerStatisticDefinitionsRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminGetPlayerStatisticDefinitionsRequest>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminGetPlayerStatisticDefinitionsRequest",
		sizeof(FAdminGetPlayerStatisticDefinitionsRequest),
		alignof(FAdminGetPlayerStatisticDefinitionsRequest),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminGetPlayerStatisticDefinitionsRequest"), sizeof(FAdminGetPlayerStatisticDefinitionsRequest), Get_Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsRequest_Hash() { return 3278956905U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
