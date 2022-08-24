// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminRevokeBansResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminRevokeBansResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminRevokeBansResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminRevokeBansResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAdminRevokeBansResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAdminRevokeBansResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminRevokeBansResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminRevokeBansResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminRevokeBansResult"), sizeof(FAdminRevokeBansResult), Get_Z_Construct_UScriptStruct_FAdminRevokeBansResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminRevokeBansResult>()
{
	return FAdminRevokeBansResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminRevokeBansResult(FAdminRevokeBansResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminRevokeBansResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminRevokeBansResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminRevokeBansResult()
	{
		UScriptStruct::DeferCppStructOps<FAdminRevokeBansResult>(FName(TEXT("AdminRevokeBansResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminRevokeBansResult;
	struct Z_Construct_UScriptStruct_FAdminRevokeBansResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BanData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BanData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BanData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminRevokeBansResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminRevokeBansResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminRevokeBansResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminRevokeBansResult>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminRevokeBansResult_Statics::NewProp_BanData_Inner = { "BanData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminRevokeBansResult_Statics::NewProp_BanData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminRevokeBansResult" },
		{ "ModuleRelativePath", "Public/AdminRevokeBansResult.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAdminRevokeBansResult_Statics::NewProp_BanData = { "BanData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminRevokeBansResult, BanData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminRevokeBansResult_Statics::NewProp_BanData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminRevokeBansResult_Statics::NewProp_BanData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminRevokeBansResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminRevokeBansResult_Statics::NewProp_BanData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminRevokeBansResult_Statics::NewProp_BanData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminRevokeBansResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AdminRevokeBansResult",
		sizeof(FAdminRevokeBansResult),
		alignof(FAdminRevokeBansResult),
		Z_Construct_UScriptStruct_FAdminRevokeBansResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminRevokeBansResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminRevokeBansResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminRevokeBansResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminRevokeBansResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminRevokeBansResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminRevokeBansResult"), sizeof(FAdminRevokeBansResult), Get_Z_Construct_UScriptStruct_FAdminRevokeBansResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminRevokeBansResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminRevokeBansResult_Hash() { return 2186851297U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
