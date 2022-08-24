// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientGetTitlePublicKeyResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientGetTitlePublicKeyResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientGetTitlePublicKeyResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientGetTitlePublicKeyResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FClientGetTitlePublicKeyResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FClientGetTitlePublicKeyResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientGetTitlePublicKeyResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientGetTitlePublicKeyResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientGetTitlePublicKeyResult"), sizeof(FClientGetTitlePublicKeyResult), Get_Z_Construct_UScriptStruct_FClientGetTitlePublicKeyResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientGetTitlePublicKeyResult>()
{
	return FClientGetTitlePublicKeyResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientGetTitlePublicKeyResult(FClientGetTitlePublicKeyResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientGetTitlePublicKeyResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientGetTitlePublicKeyResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientGetTitlePublicKeyResult()
	{
		UScriptStruct::DeferCppStructOps<FClientGetTitlePublicKeyResult>(FName(TEXT("ClientGetTitlePublicKeyResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientGetTitlePublicKeyResult;
	struct Z_Construct_UScriptStruct_FClientGetTitlePublicKeyResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RSAPublicKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RSAPublicKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetTitlePublicKeyResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientGetTitlePublicKeyResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientGetTitlePublicKeyResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientGetTitlePublicKeyResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetTitlePublicKeyResult_Statics::NewProp_RSAPublicKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetTitlePublicKeyResult" },
		{ "ModuleRelativePath", "Public/ClientGetTitlePublicKeyResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientGetTitlePublicKeyResult_Statics::NewProp_RSAPublicKey = { "RSAPublicKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetTitlePublicKeyResult, RSAPublicKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetTitlePublicKeyResult_Statics::NewProp_RSAPublicKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetTitlePublicKeyResult_Statics::NewProp_RSAPublicKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientGetTitlePublicKeyResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetTitlePublicKeyResult_Statics::NewProp_RSAPublicKey,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientGetTitlePublicKeyResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ClientGetTitlePublicKeyResult",
		sizeof(FClientGetTitlePublicKeyResult),
		alignof(FClientGetTitlePublicKeyResult),
		Z_Construct_UScriptStruct_FClientGetTitlePublicKeyResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetTitlePublicKeyResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetTitlePublicKeyResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetTitlePublicKeyResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientGetTitlePublicKeyResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientGetTitlePublicKeyResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientGetTitlePublicKeyResult"), sizeof(FClientGetTitlePublicKeyResult), Get_Z_Construct_UScriptStruct_FClientGetTitlePublicKeyResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientGetTitlePublicKeyResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientGetTitlePublicKeyResult_Hash() { return 3650350186U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
