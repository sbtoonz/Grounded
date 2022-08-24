// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminUpdateUserDataResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminUpdateUserDataResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminUpdateUserDataResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminUpdateUserDataResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAdminUpdateUserDataResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAdminUpdateUserDataResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminUpdateUserDataResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminUpdateUserDataResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminUpdateUserDataResult"), sizeof(FAdminUpdateUserDataResult), Get_Z_Construct_UScriptStruct_FAdminUpdateUserDataResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminUpdateUserDataResult>()
{
	return FAdminUpdateUserDataResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminUpdateUserDataResult(FAdminUpdateUserDataResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminUpdateUserDataResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminUpdateUserDataResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminUpdateUserDataResult()
	{
		UScriptStruct::DeferCppStructOps<FAdminUpdateUserDataResult>(FName(TEXT("AdminUpdateUserDataResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminUpdateUserDataResult;
	struct Z_Construct_UScriptStruct_FAdminUpdateUserDataResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DataVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdateUserDataResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminUpdateUserDataResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminUpdateUserDataResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminUpdateUserDataResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdateUserDataResult_Statics::NewProp_DataVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminUpdateUserDataResult" },
		{ "ModuleRelativePath", "Public/AdminUpdateUserDataResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAdminUpdateUserDataResult_Statics::NewProp_DataVersion = { "DataVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminUpdateUserDataResult, DataVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdateUserDataResult_Statics::NewProp_DataVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdateUserDataResult_Statics::NewProp_DataVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminUpdateUserDataResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminUpdateUserDataResult_Statics::NewProp_DataVersion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminUpdateUserDataResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AdminUpdateUserDataResult",
		sizeof(FAdminUpdateUserDataResult),
		alignof(FAdminUpdateUserDataResult),
		Z_Construct_UScriptStruct_FAdminUpdateUserDataResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdateUserDataResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdateUserDataResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdateUserDataResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminUpdateUserDataResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminUpdateUserDataResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminUpdateUserDataResult"), sizeof(FAdminUpdateUserDataResult), Get_Z_Construct_UScriptStruct_FAdminUpdateUserDataResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminUpdateUserDataResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminUpdateUserDataResult_Hash() { return 2908225714U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
