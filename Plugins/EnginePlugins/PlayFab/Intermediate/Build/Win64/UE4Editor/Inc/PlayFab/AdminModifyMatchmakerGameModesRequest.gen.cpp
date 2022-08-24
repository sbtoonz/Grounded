// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminModifyMatchmakerGameModesRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminModifyMatchmakerGameModesRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminModifyMatchmakerGameModesRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminModifyMatchmakerGameModesRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminModifyMatchmakerGameModesRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminModifyMatchmakerGameModesRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminModifyMatchmakerGameModesRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminModifyMatchmakerGameModesRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminModifyMatchmakerGameModesRequest"), sizeof(FAdminModifyMatchmakerGameModesRequest), Get_Z_Construct_UScriptStruct_FAdminModifyMatchmakerGameModesRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminModifyMatchmakerGameModesRequest>()
{
	return FAdminModifyMatchmakerGameModesRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminModifyMatchmakerGameModesRequest(FAdminModifyMatchmakerGameModesRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminModifyMatchmakerGameModesRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminModifyMatchmakerGameModesRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminModifyMatchmakerGameModesRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminModifyMatchmakerGameModesRequest>(FName(TEXT("AdminModifyMatchmakerGameModesRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminModifyMatchmakerGameModesRequest;
	struct Z_Construct_UScriptStruct_FAdminModifyMatchmakerGameModesRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildVersion;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameModes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameModes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameModes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminModifyMatchmakerGameModesRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminModifyMatchmakerGameModesRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminModifyMatchmakerGameModesRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminModifyMatchmakerGameModesRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminModifyMatchmakerGameModesRequest_Statics::NewProp_BuildVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminModifyMatchmakerGameModesRequest" },
		{ "ModuleRelativePath", "Public/AdminModifyMatchmakerGameModesRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminModifyMatchmakerGameModesRequest_Statics::NewProp_BuildVersion = { "BuildVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminModifyMatchmakerGameModesRequest, BuildVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminModifyMatchmakerGameModesRequest_Statics::NewProp_BuildVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminModifyMatchmakerGameModesRequest_Statics::NewProp_BuildVersion_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminModifyMatchmakerGameModesRequest_Statics::NewProp_GameModes_Inner = { "GameModes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminModifyMatchmakerGameModesRequest_Statics::NewProp_GameModes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminModifyMatchmakerGameModesRequest" },
		{ "ModuleRelativePath", "Public/AdminModifyMatchmakerGameModesRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAdminModifyMatchmakerGameModesRequest_Statics::NewProp_GameModes = { "GameModes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminModifyMatchmakerGameModesRequest, GameModes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminModifyMatchmakerGameModesRequest_Statics::NewProp_GameModes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminModifyMatchmakerGameModesRequest_Statics::NewProp_GameModes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminModifyMatchmakerGameModesRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminModifyMatchmakerGameModesRequest_Statics::NewProp_BuildVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminModifyMatchmakerGameModesRequest_Statics::NewProp_GameModes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminModifyMatchmakerGameModesRequest_Statics::NewProp_GameModes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminModifyMatchmakerGameModesRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminModifyMatchmakerGameModesRequest",
		sizeof(FAdminModifyMatchmakerGameModesRequest),
		alignof(FAdminModifyMatchmakerGameModesRequest),
		Z_Construct_UScriptStruct_FAdminModifyMatchmakerGameModesRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminModifyMatchmakerGameModesRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminModifyMatchmakerGameModesRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminModifyMatchmakerGameModesRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminModifyMatchmakerGameModesRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminModifyMatchmakerGameModesRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminModifyMatchmakerGameModesRequest"), sizeof(FAdminModifyMatchmakerGameModesRequest), Get_Z_Construct_UScriptStruct_FAdminModifyMatchmakerGameModesRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminModifyMatchmakerGameModesRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminModifyMatchmakerGameModesRequest_Hash() { return 2083031887U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
