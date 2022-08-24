// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerRedeemMatchmakerTicketResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerRedeemMatchmakerTicketResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerRedeemMatchmakerTicketResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FServerRedeemMatchmakerTicketResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FServerRedeemMatchmakerTicketResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerRedeemMatchmakerTicketResult"), sizeof(FServerRedeemMatchmakerTicketResult), Get_Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerRedeemMatchmakerTicketResult>()
{
	return FServerRedeemMatchmakerTicketResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerRedeemMatchmakerTicketResult(FServerRedeemMatchmakerTicketResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerRedeemMatchmakerTicketResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerRedeemMatchmakerTicketResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerRedeemMatchmakerTicketResult()
	{
		UScriptStruct::DeferCppStructOps<FServerRedeemMatchmakerTicketResult>(FName(TEXT("ServerRedeemMatchmakerTicketResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerRedeemMatchmakerTicketResult;
	struct Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Error;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TicketIsValid_MetaData[];
#endif
		static void NewProp_TicketIsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TicketIsValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerRedeemMatchmakerTicketResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerRedeemMatchmakerTicketResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult_Statics::NewProp_Error_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerRedeemMatchmakerTicketResult" },
		{ "ModuleRelativePath", "Public/ServerRedeemMatchmakerTicketResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerRedeemMatchmakerTicketResult, Error), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult_Statics::NewProp_Error_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult_Statics::NewProp_TicketIsValid_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerRedeemMatchmakerTicketResult" },
		{ "ModuleRelativePath", "Public/ServerRedeemMatchmakerTicketResult.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult_Statics::NewProp_TicketIsValid_SetBit(void* Obj)
	{
		((FServerRedeemMatchmakerTicketResult*)Obj)->TicketIsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult_Statics::NewProp_TicketIsValid = { "TicketIsValid", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FServerRedeemMatchmakerTicketResult), &Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult_Statics::NewProp_TicketIsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult_Statics::NewProp_TicketIsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult_Statics::NewProp_TicketIsValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult_Statics::NewProp_UserInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerRedeemMatchmakerTicketResult" },
		{ "ModuleRelativePath", "Public/ServerRedeemMatchmakerTicketResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult_Statics::NewProp_UserInfo = { "UserInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerRedeemMatchmakerTicketResult, UserInfo), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult_Statics::NewProp_UserInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult_Statics::NewProp_UserInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult_Statics::NewProp_Error,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult_Statics::NewProp_TicketIsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult_Statics::NewProp_UserInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ServerRedeemMatchmakerTicketResult",
		sizeof(FServerRedeemMatchmakerTicketResult),
		alignof(FServerRedeemMatchmakerTicketResult),
		Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerRedeemMatchmakerTicketResult"), sizeof(FServerRedeemMatchmakerTicketResult), Get_Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketResult_Hash() { return 2853392374U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
