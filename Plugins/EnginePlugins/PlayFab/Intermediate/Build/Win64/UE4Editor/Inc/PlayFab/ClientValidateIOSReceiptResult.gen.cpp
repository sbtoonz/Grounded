// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientValidateIOSReceiptResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientValidateIOSReceiptResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientValidateIOSReceiptResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientValidateIOSReceiptResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FClientValidateIOSReceiptResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FClientValidateIOSReceiptResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientValidateIOSReceiptResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientValidateIOSReceiptResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientValidateIOSReceiptResult"), sizeof(FClientValidateIOSReceiptResult), Get_Z_Construct_UScriptStruct_FClientValidateIOSReceiptResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientValidateIOSReceiptResult>()
{
	return FClientValidateIOSReceiptResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientValidateIOSReceiptResult(FClientValidateIOSReceiptResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientValidateIOSReceiptResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientValidateIOSReceiptResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientValidateIOSReceiptResult()
	{
		UScriptStruct::DeferCppStructOps<FClientValidateIOSReceiptResult>(FName(TEXT("ClientValidateIOSReceiptResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientValidateIOSReceiptResult;
	struct Z_Construct_UScriptStruct_FClientValidateIOSReceiptResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Fulfillments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fulfillments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Fulfillments;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientValidateIOSReceiptResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientValidateIOSReceiptResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientValidateIOSReceiptResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientValidateIOSReceiptResult>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientValidateIOSReceiptResult_Statics::NewProp_Fulfillments_Inner = { "Fulfillments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientValidateIOSReceiptResult_Statics::NewProp_Fulfillments_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientValidateIOSReceiptResult" },
		{ "ModuleRelativePath", "Public/ClientValidateIOSReceiptResult.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClientValidateIOSReceiptResult_Statics::NewProp_Fulfillments = { "Fulfillments", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientValidateIOSReceiptResult, Fulfillments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientValidateIOSReceiptResult_Statics::NewProp_Fulfillments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientValidateIOSReceiptResult_Statics::NewProp_Fulfillments_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientValidateIOSReceiptResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientValidateIOSReceiptResult_Statics::NewProp_Fulfillments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientValidateIOSReceiptResult_Statics::NewProp_Fulfillments,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientValidateIOSReceiptResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ClientValidateIOSReceiptResult",
		sizeof(FClientValidateIOSReceiptResult),
		alignof(FClientValidateIOSReceiptResult),
		Z_Construct_UScriptStruct_FClientValidateIOSReceiptResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientValidateIOSReceiptResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientValidateIOSReceiptResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientValidateIOSReceiptResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientValidateIOSReceiptResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientValidateIOSReceiptResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientValidateIOSReceiptResult"), sizeof(FClientValidateIOSReceiptResult), Get_Z_Construct_UScriptStruct_FClientValidateIOSReceiptResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientValidateIOSReceiptResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientValidateIOSReceiptResult_Hash() { return 2551507197U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
