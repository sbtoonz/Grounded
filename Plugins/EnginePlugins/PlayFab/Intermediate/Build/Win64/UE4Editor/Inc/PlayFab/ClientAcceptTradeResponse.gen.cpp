// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientAcceptTradeResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientAcceptTradeResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientAcceptTradeResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientAcceptTradeResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FClientAcceptTradeResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FClientAcceptTradeResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientAcceptTradeResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientAcceptTradeResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientAcceptTradeResponse"), sizeof(FClientAcceptTradeResponse), Get_Z_Construct_UScriptStruct_FClientAcceptTradeResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientAcceptTradeResponse>()
{
	return FClientAcceptTradeResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientAcceptTradeResponse(FClientAcceptTradeResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientAcceptTradeResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientAcceptTradeResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientAcceptTradeResponse()
	{
		UScriptStruct::DeferCppStructOps<FClientAcceptTradeResponse>(FName(TEXT("ClientAcceptTradeResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientAcceptTradeResponse;
	struct Z_Construct_UScriptStruct_FClientAcceptTradeResponse_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientAcceptTradeResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientAcceptTradeResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientAcceptTradeResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientAcceptTradeResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientAcceptTradeResponse_Statics::NewProp_Trade_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientAcceptTradeResponse" },
		{ "ModuleRelativePath", "Public/ClientAcceptTradeResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientAcceptTradeResponse_Statics::NewProp_Trade = { "Trade", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientAcceptTradeResponse, Trade), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientAcceptTradeResponse_Statics::NewProp_Trade_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientAcceptTradeResponse_Statics::NewProp_Trade_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientAcceptTradeResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientAcceptTradeResponse_Statics::NewProp_Trade,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientAcceptTradeResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ClientAcceptTradeResponse",
		sizeof(FClientAcceptTradeResponse),
		alignof(FClientAcceptTradeResponse),
		Z_Construct_UScriptStruct_FClientAcceptTradeResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientAcceptTradeResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientAcceptTradeResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientAcceptTradeResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientAcceptTradeResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientAcceptTradeResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientAcceptTradeResponse"), sizeof(FClientAcceptTradeResponse), Get_Z_Construct_UScriptStruct_FClientAcceptTradeResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientAcceptTradeResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientAcceptTradeResponse_Hash() { return 4136296888U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
