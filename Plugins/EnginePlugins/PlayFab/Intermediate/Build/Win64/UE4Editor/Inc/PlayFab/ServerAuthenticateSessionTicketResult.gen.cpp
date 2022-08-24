// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerAuthenticateSessionTicketResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerAuthenticateSessionTicketResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerAuthenticateSessionTicketResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FServerAuthenticateSessionTicketResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FServerAuthenticateSessionTicketResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerAuthenticateSessionTicketResult"), sizeof(FServerAuthenticateSessionTicketResult), Get_Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerAuthenticateSessionTicketResult>()
{
	return FServerAuthenticateSessionTicketResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerAuthenticateSessionTicketResult(FServerAuthenticateSessionTicketResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerAuthenticateSessionTicketResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerAuthenticateSessionTicketResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerAuthenticateSessionTicketResult()
	{
		UScriptStruct::DeferCppStructOps<FServerAuthenticateSessionTicketResult>(FName(TEXT("ServerAuthenticateSessionTicketResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerAuthenticateSessionTicketResult;
	struct Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSessionTicketExpired_MetaData[];
#endif
		static void NewProp_IsSessionTicketExpired_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSessionTicketExpired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerAuthenticateSessionTicketResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerAuthenticateSessionTicketResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketResult_Statics::NewProp_IsSessionTicketExpired_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerAuthenticateSessionTicketResult" },
		{ "ModuleRelativePath", "Public/ServerAuthenticateSessionTicketResult.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketResult_Statics::NewProp_IsSessionTicketExpired_SetBit(void* Obj)
	{
		((FServerAuthenticateSessionTicketResult*)Obj)->IsSessionTicketExpired = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketResult_Statics::NewProp_IsSessionTicketExpired = { "IsSessionTicketExpired", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FServerAuthenticateSessionTicketResult), &Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketResult_Statics::NewProp_IsSessionTicketExpired_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketResult_Statics::NewProp_IsSessionTicketExpired_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketResult_Statics::NewProp_IsSessionTicketExpired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketResult_Statics::NewProp_UserInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerAuthenticateSessionTicketResult" },
		{ "ModuleRelativePath", "Public/ServerAuthenticateSessionTicketResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketResult_Statics::NewProp_UserInfo = { "UserInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerAuthenticateSessionTicketResult, UserInfo), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketResult_Statics::NewProp_UserInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketResult_Statics::NewProp_UserInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketResult_Statics::NewProp_IsSessionTicketExpired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketResult_Statics::NewProp_UserInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ServerAuthenticateSessionTicketResult",
		sizeof(FServerAuthenticateSessionTicketResult),
		alignof(FServerAuthenticateSessionTicketResult),
		Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerAuthenticateSessionTicketResult"), sizeof(FServerAuthenticateSessionTicketResult), Get_Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketResult_Hash() { return 2732721740U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
