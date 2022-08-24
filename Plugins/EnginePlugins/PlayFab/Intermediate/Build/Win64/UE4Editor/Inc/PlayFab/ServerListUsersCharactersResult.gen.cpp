// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerListUsersCharactersResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerListUsersCharactersResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerListUsersCharactersResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerListUsersCharactersResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FServerListUsersCharactersResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FServerListUsersCharactersResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerListUsersCharactersResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerListUsersCharactersResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerListUsersCharactersResult"), sizeof(FServerListUsersCharactersResult), Get_Z_Construct_UScriptStruct_FServerListUsersCharactersResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerListUsersCharactersResult>()
{
	return FServerListUsersCharactersResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerListUsersCharactersResult(FServerListUsersCharactersResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerListUsersCharactersResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerListUsersCharactersResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerListUsersCharactersResult()
	{
		UScriptStruct::DeferCppStructOps<FServerListUsersCharactersResult>(FName(TEXT("ServerListUsersCharactersResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerListUsersCharactersResult;
	struct Z_Construct_UScriptStruct_FServerListUsersCharactersResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Characters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Characters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Characters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerListUsersCharactersResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerListUsersCharactersResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerListUsersCharactersResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerListUsersCharactersResult>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerListUsersCharactersResult_Statics::NewProp_Characters_Inner = { "Characters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerListUsersCharactersResult_Statics::NewProp_Characters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerListUsersCharactersResult" },
		{ "ModuleRelativePath", "Public/ServerListUsersCharactersResult.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FServerListUsersCharactersResult_Statics::NewProp_Characters = { "Characters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerListUsersCharactersResult, Characters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerListUsersCharactersResult_Statics::NewProp_Characters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerListUsersCharactersResult_Statics::NewProp_Characters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerListUsersCharactersResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerListUsersCharactersResult_Statics::NewProp_Characters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerListUsersCharactersResult_Statics::NewProp_Characters,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerListUsersCharactersResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ServerListUsersCharactersResult",
		sizeof(FServerListUsersCharactersResult),
		alignof(FServerListUsersCharactersResult),
		Z_Construct_UScriptStruct_FServerListUsersCharactersResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerListUsersCharactersResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerListUsersCharactersResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerListUsersCharactersResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerListUsersCharactersResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerListUsersCharactersResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerListUsersCharactersResult"), sizeof(FServerListUsersCharactersResult), Get_Z_Construct_UScriptStruct_FServerListUsersCharactersResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerListUsersCharactersResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerListUsersCharactersResult_Hash() { return 1800009097U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
