// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientGetAccountInfoResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientGetAccountInfoResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientGetAccountInfoResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientGetAccountInfoResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FClientGetAccountInfoResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FClientGetAccountInfoResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientGetAccountInfoResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientGetAccountInfoResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientGetAccountInfoResult"), sizeof(FClientGetAccountInfoResult), Get_Z_Construct_UScriptStruct_FClientGetAccountInfoResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientGetAccountInfoResult>()
{
	return FClientGetAccountInfoResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientGetAccountInfoResult(FClientGetAccountInfoResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientGetAccountInfoResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientGetAccountInfoResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientGetAccountInfoResult()
	{
		UScriptStruct::DeferCppStructOps<FClientGetAccountInfoResult>(FName(TEXT("ClientGetAccountInfoResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientGetAccountInfoResult;
	struct Z_Construct_UScriptStruct_FClientGetAccountInfoResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccountInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AccountInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetAccountInfoResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientGetAccountInfoResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientGetAccountInfoResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientGetAccountInfoResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetAccountInfoResult_Statics::NewProp_AccountInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetAccountInfoResult" },
		{ "ModuleRelativePath", "Public/ClientGetAccountInfoResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientGetAccountInfoResult_Statics::NewProp_AccountInfo = { "AccountInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetAccountInfoResult, AccountInfo), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetAccountInfoResult_Statics::NewProp_AccountInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetAccountInfoResult_Statics::NewProp_AccountInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientGetAccountInfoResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetAccountInfoResult_Statics::NewProp_AccountInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientGetAccountInfoResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ClientGetAccountInfoResult",
		sizeof(FClientGetAccountInfoResult),
		alignof(FClientGetAccountInfoResult),
		Z_Construct_UScriptStruct_FClientGetAccountInfoResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetAccountInfoResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetAccountInfoResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetAccountInfoResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientGetAccountInfoResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientGetAccountInfoResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientGetAccountInfoResult"), sizeof(FClientGetAccountInfoResult), Get_Z_Construct_UScriptStruct_FClientGetAccountInfoResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientGetAccountInfoResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientGetAccountInfoResult_Hash() { return 2739265394U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
