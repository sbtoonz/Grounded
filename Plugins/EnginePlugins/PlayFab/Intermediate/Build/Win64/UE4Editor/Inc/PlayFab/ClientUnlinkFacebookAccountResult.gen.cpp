// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientUnlinkFacebookAccountResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientUnlinkFacebookAccountResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientUnlinkFacebookAccountResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientUnlinkFacebookAccountResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FClientUnlinkFacebookAccountResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FClientUnlinkFacebookAccountResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientUnlinkFacebookAccountResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientUnlinkFacebookAccountResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientUnlinkFacebookAccountResult"), sizeof(FClientUnlinkFacebookAccountResult), Get_Z_Construct_UScriptStruct_FClientUnlinkFacebookAccountResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientUnlinkFacebookAccountResult>()
{
	return FClientUnlinkFacebookAccountResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientUnlinkFacebookAccountResult(FClientUnlinkFacebookAccountResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientUnlinkFacebookAccountResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientUnlinkFacebookAccountResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientUnlinkFacebookAccountResult()
	{
		UScriptStruct::DeferCppStructOps<FClientUnlinkFacebookAccountResult>(FName(TEXT("ClientUnlinkFacebookAccountResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientUnlinkFacebookAccountResult;
	struct Z_Construct_UScriptStruct_FClientUnlinkFacebookAccountResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientUnlinkFacebookAccountResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientUnlinkFacebookAccountResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientUnlinkFacebookAccountResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientUnlinkFacebookAccountResult>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientUnlinkFacebookAccountResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ClientUnlinkFacebookAccountResult",
		sizeof(FClientUnlinkFacebookAccountResult),
		alignof(FClientUnlinkFacebookAccountResult),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientUnlinkFacebookAccountResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientUnlinkFacebookAccountResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientUnlinkFacebookAccountResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientUnlinkFacebookAccountResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientUnlinkFacebookAccountResult"), sizeof(FClientUnlinkFacebookAccountResult), Get_Z_Construct_UScriptStruct_FClientUnlinkFacebookAccountResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientUnlinkFacebookAccountResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientUnlinkFacebookAccountResult_Hash() { return 2332209903U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
