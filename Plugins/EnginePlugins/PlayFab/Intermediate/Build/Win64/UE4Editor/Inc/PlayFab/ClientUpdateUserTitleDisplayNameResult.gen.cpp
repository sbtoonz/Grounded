// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientUpdateUserTitleDisplayNameResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientUpdateUserTitleDisplayNameResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientUpdateUserTitleDisplayNameResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FClientUpdateUserTitleDisplayNameResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FClientUpdateUserTitleDisplayNameResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientUpdateUserTitleDisplayNameResult"), sizeof(FClientUpdateUserTitleDisplayNameResult), Get_Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientUpdateUserTitleDisplayNameResult>()
{
	return FClientUpdateUserTitleDisplayNameResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientUpdateUserTitleDisplayNameResult(FClientUpdateUserTitleDisplayNameResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientUpdateUserTitleDisplayNameResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientUpdateUserTitleDisplayNameResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientUpdateUserTitleDisplayNameResult()
	{
		UScriptStruct::DeferCppStructOps<FClientUpdateUserTitleDisplayNameResult>(FName(TEXT("ClientUpdateUserTitleDisplayNameResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientUpdateUserTitleDisplayNameResult;
	struct Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientUpdateUserTitleDisplayNameResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientUpdateUserTitleDisplayNameResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameResult_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientUpdateUserTitleDisplayNameResult" },
		{ "ModuleRelativePath", "Public/ClientUpdateUserTitleDisplayNameResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameResult_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientUpdateUserTitleDisplayNameResult, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameResult_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameResult_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameResult_Statics::NewProp_DisplayName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ClientUpdateUserTitleDisplayNameResult",
		sizeof(FClientUpdateUserTitleDisplayNameResult),
		alignof(FClientUpdateUserTitleDisplayNameResult),
		Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientUpdateUserTitleDisplayNameResult"), sizeof(FClientUpdateUserTitleDisplayNameResult), Get_Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientUpdateUserTitleDisplayNameResult_Hash() { return 1213702073U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
