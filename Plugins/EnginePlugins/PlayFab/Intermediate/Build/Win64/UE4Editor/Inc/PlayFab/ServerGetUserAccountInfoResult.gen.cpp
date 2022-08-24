// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerGetUserAccountInfoResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerGetUserAccountInfoResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerGetUserAccountInfoResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerGetUserAccountInfoResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FServerGetUserAccountInfoResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FServerGetUserAccountInfoResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerGetUserAccountInfoResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerGetUserAccountInfoResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerGetUserAccountInfoResult"), sizeof(FServerGetUserAccountInfoResult), Get_Z_Construct_UScriptStruct_FServerGetUserAccountInfoResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerGetUserAccountInfoResult>()
{
	return FServerGetUserAccountInfoResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerGetUserAccountInfoResult(FServerGetUserAccountInfoResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerGetUserAccountInfoResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerGetUserAccountInfoResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerGetUserAccountInfoResult()
	{
		UScriptStruct::DeferCppStructOps<FServerGetUserAccountInfoResult>(FName(TEXT("ServerGetUserAccountInfoResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerGetUserAccountInfoResult;
	struct Z_Construct_UScriptStruct_FServerGetUserAccountInfoResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetUserAccountInfoResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerGetUserAccountInfoResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerGetUserAccountInfoResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerGetUserAccountInfoResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetUserAccountInfoResult_Statics::NewProp_UserInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetUserAccountInfoResult" },
		{ "ModuleRelativePath", "Public/ServerGetUserAccountInfoResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerGetUserAccountInfoResult_Statics::NewProp_UserInfo = { "UserInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetUserAccountInfoResult, UserInfo), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetUserAccountInfoResult_Statics::NewProp_UserInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetUserAccountInfoResult_Statics::NewProp_UserInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerGetUserAccountInfoResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetUserAccountInfoResult_Statics::NewProp_UserInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerGetUserAccountInfoResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ServerGetUserAccountInfoResult",
		sizeof(FServerGetUserAccountInfoResult),
		alignof(FServerGetUserAccountInfoResult),
		Z_Construct_UScriptStruct_FServerGetUserAccountInfoResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetUserAccountInfoResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetUserAccountInfoResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetUserAccountInfoResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerGetUserAccountInfoResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerGetUserAccountInfoResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerGetUserAccountInfoResult"), sizeof(FServerGetUserAccountInfoResult), Get_Z_Construct_UScriptStruct_FServerGetUserAccountInfoResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerGetUserAccountInfoResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerGetUserAccountInfoResult_Hash() { return 3311881175U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
