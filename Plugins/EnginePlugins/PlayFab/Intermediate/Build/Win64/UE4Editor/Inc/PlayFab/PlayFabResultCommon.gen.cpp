// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/PlayFabResultCommon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabResultCommon() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References
class UScriptStruct* FPlayFabResultCommon::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FPlayFabResultCommon_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayFabResultCommon, Z_Construct_UPackage__Script_PlayFab(), TEXT("PlayFabResultCommon"), sizeof(FPlayFabResultCommon), Get_Z_Construct_UScriptStruct_FPlayFabResultCommon_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FPlayFabResultCommon>()
{
	return FPlayFabResultCommon::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayFabResultCommon(FPlayFabResultCommon::StaticStruct, TEXT("/Script/PlayFab"), TEXT("PlayFabResultCommon"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFPlayFabResultCommon
{
	FScriptStruct_PlayFab_StaticRegisterNativesFPlayFabResultCommon()
	{
		UScriptStruct::DeferCppStructOps<FPlayFabResultCommon>(FName(TEXT("PlayFabResultCommon")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFPlayFabResultCommon;
	struct Z_Construct_UScriptStruct_FPlayFabResultCommon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabResultCommon_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayFabResultCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayFabResultCommon_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayFabResultCommon>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabResultCommon_Statics::NewProp_Request_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayFabResultCommon" },
		{ "ModuleRelativePath", "Public/PlayFabResultCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayFabResultCommon_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayFabResultCommon, Request), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabResultCommon_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabResultCommon_Statics::NewProp_Request_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayFabResultCommon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabResultCommon_Statics::NewProp_Request,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayFabResultCommon_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		nullptr,
		&NewStructOps,
		"PlayFabResultCommon",
		sizeof(FPlayFabResultCommon),
		alignof(FPlayFabResultCommon),
		Z_Construct_UScriptStruct_FPlayFabResultCommon_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabResultCommon_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabResultCommon_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabResultCommon_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayFabResultCommon_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayFabResultCommon"), sizeof(FPlayFabResultCommon), Get_Z_Construct_UScriptStruct_FPlayFabResultCommon_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayFabResultCommon_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayFabResultCommon_Hash() { return 2014924757U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
