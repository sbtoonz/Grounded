// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/PlayFabLoginResultCommon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabLoginResultCommon() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabLoginResultCommon();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFABCOMMON_API UClass* Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FPlayFabLoginResultCommon>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FPlayFabLoginResultCommon cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FPlayFabLoginResultCommon::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FPlayFabLoginResultCommon_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayFabLoginResultCommon, Z_Construct_UPackage__Script_PlayFab(), TEXT("PlayFabLoginResultCommon"), sizeof(FPlayFabLoginResultCommon), Get_Z_Construct_UScriptStruct_FPlayFabLoginResultCommon_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FPlayFabLoginResultCommon>()
{
	return FPlayFabLoginResultCommon::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayFabLoginResultCommon(FPlayFabLoginResultCommon::StaticStruct, TEXT("/Script/PlayFab"), TEXT("PlayFabLoginResultCommon"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFPlayFabLoginResultCommon
{
	FScriptStruct_PlayFab_StaticRegisterNativesFPlayFabLoginResultCommon()
	{
		UScriptStruct::DeferCppStructOps<FPlayFabLoginResultCommon>(FName(TEXT("PlayFabLoginResultCommon")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFPlayFabLoginResultCommon;
	struct Z_Construct_UScriptStruct_FPlayFabLoginResultCommon_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabLoginResultCommon_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayFabLoginResultCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayFabLoginResultCommon_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayFabLoginResultCommon>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabLoginResultCommon_Statics::NewProp_AuthenticationContext_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayFabLoginResultCommon" },
		{ "ModuleRelativePath", "Public/PlayFabLoginResultCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayFabLoginResultCommon_Statics::NewProp_AuthenticationContext = { "AuthenticationContext", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayFabLoginResultCommon, AuthenticationContext), Z_Construct_UClass_UPlayFabAuthenticationContext_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabLoginResultCommon_Statics::NewProp_AuthenticationContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabLoginResultCommon_Statics::NewProp_AuthenticationContext_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayFabLoginResultCommon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabLoginResultCommon_Statics::NewProp_AuthenticationContext,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayFabLoginResultCommon_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"PlayFabLoginResultCommon",
		sizeof(FPlayFabLoginResultCommon),
		alignof(FPlayFabLoginResultCommon),
		Z_Construct_UScriptStruct_FPlayFabLoginResultCommon_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabLoginResultCommon_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabLoginResultCommon_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabLoginResultCommon_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayFabLoginResultCommon()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayFabLoginResultCommon_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayFabLoginResultCommon"), sizeof(FPlayFabLoginResultCommon), Get_Z_Construct_UScriptStruct_FPlayFabLoginResultCommon_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayFabLoginResultCommon_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayFabLoginResultCommon_Hash() { return 1080019309U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
