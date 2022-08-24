// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminListBuildsResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminListBuildsResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminListBuildsResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminListBuildsResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAdminListBuildsResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAdminListBuildsResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminListBuildsResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminListBuildsResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminListBuildsResult"), sizeof(FAdminListBuildsResult), Get_Z_Construct_UScriptStruct_FAdminListBuildsResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminListBuildsResult>()
{
	return FAdminListBuildsResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminListBuildsResult(FAdminListBuildsResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminListBuildsResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminListBuildsResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminListBuildsResult()
	{
		UScriptStruct::DeferCppStructOps<FAdminListBuildsResult>(FName(TEXT("AdminListBuildsResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminListBuildsResult;
	struct Z_Construct_UScriptStruct_FAdminListBuildsResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Builds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Builds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Builds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminListBuildsResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminListBuildsResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminListBuildsResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminListBuildsResult>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminListBuildsResult_Statics::NewProp_Builds_Inner = { "Builds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminListBuildsResult_Statics::NewProp_Builds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminListBuildsResult" },
		{ "ModuleRelativePath", "Public/AdminListBuildsResult.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAdminListBuildsResult_Statics::NewProp_Builds = { "Builds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminListBuildsResult, Builds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminListBuildsResult_Statics::NewProp_Builds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminListBuildsResult_Statics::NewProp_Builds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminListBuildsResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminListBuildsResult_Statics::NewProp_Builds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminListBuildsResult_Statics::NewProp_Builds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminListBuildsResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AdminListBuildsResult",
		sizeof(FAdminListBuildsResult),
		alignof(FAdminListBuildsResult),
		Z_Construct_UScriptStruct_FAdminListBuildsResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminListBuildsResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminListBuildsResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminListBuildsResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminListBuildsResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminListBuildsResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminListBuildsResult"), sizeof(FAdminListBuildsResult), Get_Z_Construct_UScriptStruct_FAdminListBuildsResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminListBuildsResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminListBuildsResult_Hash() { return 1755615590U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
