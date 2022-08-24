// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminGetRandomResultTablesResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminGetRandomResultTablesResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminGetRandomResultTablesResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminGetRandomResultTablesResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAdminGetRandomResultTablesResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAdminGetRandomResultTablesResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminGetRandomResultTablesResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminGetRandomResultTablesResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminGetRandomResultTablesResult"), sizeof(FAdminGetRandomResultTablesResult), Get_Z_Construct_UScriptStruct_FAdminGetRandomResultTablesResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminGetRandomResultTablesResult>()
{
	return FAdminGetRandomResultTablesResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminGetRandomResultTablesResult(FAdminGetRandomResultTablesResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminGetRandomResultTablesResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetRandomResultTablesResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetRandomResultTablesResult()
	{
		UScriptStruct::DeferCppStructOps<FAdminGetRandomResultTablesResult>(FName(TEXT("AdminGetRandomResultTablesResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminGetRandomResultTablesResult;
	struct Z_Construct_UScriptStruct_FAdminGetRandomResultTablesResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tables_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tables;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetRandomResultTablesResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminGetRandomResultTablesResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminGetRandomResultTablesResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminGetRandomResultTablesResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetRandomResultTablesResult_Statics::NewProp_Tables_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetRandomResultTablesResult" },
		{ "ModuleRelativePath", "Public/AdminGetRandomResultTablesResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminGetRandomResultTablesResult_Statics::NewProp_Tables = { "Tables", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetRandomResultTablesResult, Tables), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetRandomResultTablesResult_Statics::NewProp_Tables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetRandomResultTablesResult_Statics::NewProp_Tables_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminGetRandomResultTablesResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetRandomResultTablesResult_Statics::NewProp_Tables,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminGetRandomResultTablesResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AdminGetRandomResultTablesResult",
		sizeof(FAdminGetRandomResultTablesResult),
		alignof(FAdminGetRandomResultTablesResult),
		Z_Construct_UScriptStruct_FAdminGetRandomResultTablesResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetRandomResultTablesResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetRandomResultTablesResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetRandomResultTablesResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminGetRandomResultTablesResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminGetRandomResultTablesResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminGetRandomResultTablesResult"), sizeof(FAdminGetRandomResultTablesResult), Get_Z_Construct_UScriptStruct_FAdminGetRandomResultTablesResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminGetRandomResultTablesResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminGetRandomResultTablesResult_Hash() { return 3258597954U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif