// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientGetTradeStatusResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientGetTradeStatusResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientGetTradeStatusResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientGetTradeStatusResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FClientGetTradeStatusResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FClientGetTradeStatusResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientGetTradeStatusResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientGetTradeStatusResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientGetTradeStatusResponse"), sizeof(FClientGetTradeStatusResponse), Get_Z_Construct_UScriptStruct_FClientGetTradeStatusResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientGetTradeStatusResponse>()
{
	return FClientGetTradeStatusResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientGetTradeStatusResponse(FClientGetTradeStatusResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientGetTradeStatusResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientGetTradeStatusResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientGetTradeStatusResponse()
	{
		UScriptStruct::DeferCppStructOps<FClientGetTradeStatusResponse>(FName(TEXT("ClientGetTradeStatusResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientGetTradeStatusResponse;
	struct Z_Construct_UScriptStruct_FClientGetTradeStatusResponse_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetTradeStatusResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientGetTradeStatusResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientGetTradeStatusResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientGetTradeStatusResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetTradeStatusResponse_Statics::NewProp_Trade_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetTradeStatusResponse" },
		{ "ModuleRelativePath", "Public/ClientGetTradeStatusResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientGetTradeStatusResponse_Statics::NewProp_Trade = { "Trade", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetTradeStatusResponse, Trade), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetTradeStatusResponse_Statics::NewProp_Trade_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetTradeStatusResponse_Statics::NewProp_Trade_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientGetTradeStatusResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetTradeStatusResponse_Statics::NewProp_Trade,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientGetTradeStatusResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ClientGetTradeStatusResponse",
		sizeof(FClientGetTradeStatusResponse),
		alignof(FClientGetTradeStatusResponse),
		Z_Construct_UScriptStruct_FClientGetTradeStatusResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetTradeStatusResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetTradeStatusResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetTradeStatusResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientGetTradeStatusResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientGetTradeStatusResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientGetTradeStatusResponse"), sizeof(FClientGetTradeStatusResponse), Get_Z_Construct_UScriptStruct_FClientGetTradeStatusResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientGetTradeStatusResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientGetTradeStatusResponse_Hash() { return 1687005766U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
