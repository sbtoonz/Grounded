// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/PlayFabRequestCommon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabRequestCommon() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFABCOMMON_API UClass* Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister();
// End Cross Module References
class UScriptStruct* FPlayFabRequestCommon::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FPlayFabRequestCommon_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayFabRequestCommon, Z_Construct_UPackage__Script_PlayFab(), TEXT("PlayFabRequestCommon"), sizeof(FPlayFabRequestCommon), Get_Z_Construct_UScriptStruct_FPlayFabRequestCommon_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FPlayFabRequestCommon>()
{
	return FPlayFabRequestCommon::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayFabRequestCommon(FPlayFabRequestCommon::StaticStruct, TEXT("/Script/PlayFab"), TEXT("PlayFabRequestCommon"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFPlayFabRequestCommon
{
	FScriptStruct_PlayFab_StaticRegisterNativesFPlayFabRequestCommon()
	{
		UScriptStruct::DeferCppStructOps<FPlayFabRequestCommon>(FName(TEXT("PlayFabRequestCommon")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFPlayFabRequestCommon;
	struct Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthenticationContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuthenticationContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayFabRequestCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayFabRequestCommon>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::NewProp_AuthenticationContext_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayFabRequestCommon" },
		{ "ModuleRelativePath", "Public/PlayFabRequestCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::NewProp_AuthenticationContext = { "AuthenticationContext", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayFabRequestCommon, AuthenticationContext), Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::NewProp_AuthenticationContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::NewProp_AuthenticationContext_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::NewProp_AuthenticationContext,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		nullptr,
		&NewStructOps,
		"PlayFabRequestCommon",
		sizeof(FPlayFabRequestCommon),
		alignof(FPlayFabRequestCommon),
		Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayFabRequestCommon_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayFabRequestCommon"), sizeof(FPlayFabRequestCommon), Get_Z_Construct_UScriptStruct_FPlayFabRequestCommon_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayFabRequestCommon_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayFabRequestCommon_Hash() { return 1692044174U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
