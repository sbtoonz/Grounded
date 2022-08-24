// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientOpenTradeResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientOpenTradeResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientOpenTradeResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientOpenTradeResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FClientOpenTradeResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FClientOpenTradeResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientOpenTradeResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientOpenTradeResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientOpenTradeResponse"), sizeof(FClientOpenTradeResponse), Get_Z_Construct_UScriptStruct_FClientOpenTradeResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientOpenTradeResponse>()
{
	return FClientOpenTradeResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientOpenTradeResponse(FClientOpenTradeResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientOpenTradeResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientOpenTradeResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientOpenTradeResponse()
	{
		UScriptStruct::DeferCppStructOps<FClientOpenTradeResponse>(FName(TEXT("ClientOpenTradeResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientOpenTradeResponse;
	struct Z_Construct_UScriptStruct_FClientOpenTradeResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trade_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Trade;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientOpenTradeResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientOpenTradeResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientOpenTradeResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientOpenTradeResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientOpenTradeResponse_Statics::NewProp_Trade_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientOpenTradeResponse" },
		{ "ModuleRelativePath", "Public/ClientOpenTradeResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientOpenTradeResponse_Statics::NewProp_Trade = { "Trade", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientOpenTradeResponse, Trade), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientOpenTradeResponse_Statics::NewProp_Trade_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientOpenTradeResponse_Statics::NewProp_Trade_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientOpenTradeResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientOpenTradeResponse_Statics::NewProp_Trade,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientOpenTradeResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ClientOpenTradeResponse",
		sizeof(FClientOpenTradeResponse),
		alignof(FClientOpenTradeResponse),
		Z_Construct_UScriptStruct_FClientOpenTradeResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientOpenTradeResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientOpenTradeResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientOpenTradeResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientOpenTradeResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientOpenTradeResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientOpenTradeResponse"), sizeof(FClientOpenTradeResponse), Get_Z_Construct_UScriptStruct_FClientOpenTradeResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientOpenTradeResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientOpenTradeResponse_Hash() { return 3675015021U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
