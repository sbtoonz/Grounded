// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerRedeemCouponResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerRedeemCouponResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerRedeemCouponResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerRedeemCouponResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FServerRedeemCouponResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FServerRedeemCouponResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerRedeemCouponResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerRedeemCouponResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerRedeemCouponResult"), sizeof(FServerRedeemCouponResult), Get_Z_Construct_UScriptStruct_FServerRedeemCouponResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerRedeemCouponResult>()
{
	return FServerRedeemCouponResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerRedeemCouponResult(FServerRedeemCouponResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerRedeemCouponResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerRedeemCouponResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerRedeemCouponResult()
	{
		UScriptStruct::DeferCppStructOps<FServerRedeemCouponResult>(FName(TEXT("ServerRedeemCouponResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerRedeemCouponResult;
	struct Z_Construct_UScriptStruct_FServerRedeemCouponResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrantedItems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrantedItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GrantedItems;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerRedeemCouponResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerRedeemCouponResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerRedeemCouponResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerRedeemCouponResult>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerRedeemCouponResult_Statics::NewProp_GrantedItems_Inner = { "GrantedItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerRedeemCouponResult_Statics::NewProp_GrantedItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerRedeemCouponResult" },
		{ "ModuleRelativePath", "Public/ServerRedeemCouponResult.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FServerRedeemCouponResult_Statics::NewProp_GrantedItems = { "GrantedItems", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerRedeemCouponResult, GrantedItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerRedeemCouponResult_Statics::NewProp_GrantedItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRedeemCouponResult_Statics::NewProp_GrantedItems_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerRedeemCouponResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerRedeemCouponResult_Statics::NewProp_GrantedItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerRedeemCouponResult_Statics::NewProp_GrantedItems,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerRedeemCouponResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ServerRedeemCouponResult",
		sizeof(FServerRedeemCouponResult),
		alignof(FServerRedeemCouponResult),
		Z_Construct_UScriptStruct_FServerRedeemCouponResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRedeemCouponResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerRedeemCouponResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRedeemCouponResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerRedeemCouponResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerRedeemCouponResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerRedeemCouponResult"), sizeof(FServerRedeemCouponResult), Get_Z_Construct_UScriptStruct_FServerRedeemCouponResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerRedeemCouponResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerRedeemCouponResult_Hash() { return 904274746U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
