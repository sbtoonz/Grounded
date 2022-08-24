// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminAddNewsResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminAddNewsResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminAddNewsResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminAddNewsResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAdminAddNewsResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAdminAddNewsResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminAddNewsResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminAddNewsResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminAddNewsResult"), sizeof(FAdminAddNewsResult), Get_Z_Construct_UScriptStruct_FAdminAddNewsResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminAddNewsResult>()
{
	return FAdminAddNewsResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminAddNewsResult(FAdminAddNewsResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminAddNewsResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminAddNewsResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminAddNewsResult()
	{
		UScriptStruct::DeferCppStructOps<FAdminAddNewsResult>(FName(TEXT("AdminAddNewsResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminAddNewsResult;
	struct Z_Construct_UScriptStruct_FAdminAddNewsResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewsId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminAddNewsResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminAddNewsResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminAddNewsResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminAddNewsResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminAddNewsResult_Statics::NewProp_NewsId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminAddNewsResult" },
		{ "ModuleRelativePath", "Public/AdminAddNewsResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminAddNewsResult_Statics::NewProp_NewsId = { "NewsId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminAddNewsResult, NewsId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminAddNewsResult_Statics::NewProp_NewsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminAddNewsResult_Statics::NewProp_NewsId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminAddNewsResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminAddNewsResult_Statics::NewProp_NewsId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminAddNewsResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AdminAddNewsResult",
		sizeof(FAdminAddNewsResult),
		alignof(FAdminAddNewsResult),
		Z_Construct_UScriptStruct_FAdminAddNewsResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminAddNewsResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminAddNewsResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminAddNewsResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminAddNewsResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminAddNewsResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminAddNewsResult"), sizeof(FAdminAddNewsResult), Get_Z_Construct_UScriptStruct_FAdminAddNewsResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminAddNewsResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminAddNewsResult_Hash() { return 2533138453U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
