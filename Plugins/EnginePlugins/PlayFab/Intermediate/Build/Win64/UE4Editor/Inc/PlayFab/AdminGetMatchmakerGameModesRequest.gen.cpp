// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminGetMatchmakerGameModesRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminGetMatchmakerGameModesRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminGetMatchmakerGameModesRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminGetMatchmakerGameModesRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminGetMatchmakerGameModesRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminGetMatchmakerGameModesRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminGetMatchmakerGameModesRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameModesRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminGetMatchmakerGameModesRequest"), sizeof(FAdminGetMatchmakerGameModesRequest), Get_Z_Construct_UScriptStruct_FAdminGetMatchmakerGameModesRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminGetMatchmakerGameModesRequest>()
{
	return FAdminGetMatchmakerGameModesRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminGetMatchmakerGameModesRequest(FAdminGetMatchmakerGameModesRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminGetMatchmakerGameModesRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetMatchmakerGameModesRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetMatchmakerGameModesRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminGetMatchmakerGameModesRequest>(FName(TEXT("AdminGetMatchmakerGameModesRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminGetMatchmakerGameModesRequest;
	struct Z_Construct_UScriptStruct_FAdminGetMatchmakerGameModesRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetMatchmakerGameModesRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminGetMatchmakerGameModesRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminGetMatchmakerGameModesRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminGetMatchmakerGameModesRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetMatchmakerGameModesRequest_Statics::NewProp_BuildVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetMatchmakerGameModesRequest" },
		{ "ModuleRelativePath", "Public/AdminGetMatchmakerGameModesRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminGetMatchmakerGameModesRequest_Statics::NewProp_BuildVersion = { "BuildVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetMatchmakerGameModesRequest, BuildVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameModesRequest_Statics::NewProp_BuildVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameModesRequest_Statics::NewProp_BuildVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminGetMatchmakerGameModesRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetMatchmakerGameModesRequest_Statics::NewProp_BuildVersion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminGetMatchmakerGameModesRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminGetMatchmakerGameModesRequest",
		sizeof(FAdminGetMatchmakerGameModesRequest),
		alignof(FAdminGetMatchmakerGameModesRequest),
		Z_Construct_UScriptStruct_FAdminGetMatchmakerGameModesRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameModesRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameModesRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameModesRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminGetMatchmakerGameModesRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminGetMatchmakerGameModesRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminGetMatchmakerGameModesRequest"), sizeof(FAdminGetMatchmakerGameModesRequest), Get_Z_Construct_UScriptStruct_FAdminGetMatchmakerGameModesRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminGetMatchmakerGameModesRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminGetMatchmakerGameModesRequest_Hash() { return 1126814599U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
