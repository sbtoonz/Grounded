// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerNotifyMatchmakerPlayerLeftResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerNotifyMatchmakerPlayerLeftResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EPlayerConnectionState();
// End Cross Module References

static_assert(std::is_polymorphic<FServerNotifyMatchmakerPlayerLeftResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FServerNotifyMatchmakerPlayerLeftResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FServerNotifyMatchmakerPlayerLeftResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerNotifyMatchmakerPlayerLeftResult"), sizeof(FServerNotifyMatchmakerPlayerLeftResult), Get_Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerNotifyMatchmakerPlayerLeftResult>()
{
	return FServerNotifyMatchmakerPlayerLeftResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftResult(FServerNotifyMatchmakerPlayerLeftResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerNotifyMatchmakerPlayerLeftResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerNotifyMatchmakerPlayerLeftResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerNotifyMatchmakerPlayerLeftResult()
	{
		UScriptStruct::DeferCppStructOps<FServerNotifyMatchmakerPlayerLeftResult>(FName(TEXT("ServerNotifyMatchmakerPlayerLeftResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerNotifyMatchmakerPlayerLeftResult;
	struct Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerNotifyMatchmakerPlayerLeftResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerNotifyMatchmakerPlayerLeftResult>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftResult_Statics::NewProp_PlayerState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftResult_Statics::NewProp_PlayerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerNotifyMatchmakerPlayerLeftResult" },
		{ "ModuleRelativePath", "Public/ServerNotifyMatchmakerPlayerLeftResult.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftResult_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerNotifyMatchmakerPlayerLeftResult, PlayerState), Z_Construct_UEnum_PlayFab_EPlayerConnectionState, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftResult_Statics::NewProp_PlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftResult_Statics::NewProp_PlayerState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftResult_Statics::NewProp_PlayerState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftResult_Statics::NewProp_PlayerState,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ServerNotifyMatchmakerPlayerLeftResult",
		sizeof(FServerNotifyMatchmakerPlayerLeftResult),
		alignof(FServerNotifyMatchmakerPlayerLeftResult),
		Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerNotifyMatchmakerPlayerLeftResult"), sizeof(FServerNotifyMatchmakerPlayerLeftResult), Get_Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerNotifyMatchmakerPlayerLeftResult_Hash() { return 3909477723U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
