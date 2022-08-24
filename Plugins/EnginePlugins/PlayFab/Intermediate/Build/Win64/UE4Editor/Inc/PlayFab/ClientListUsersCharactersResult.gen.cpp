// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientListUsersCharactersResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientListUsersCharactersResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientListUsersCharactersResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientListUsersCharactersResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FClientListUsersCharactersResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FClientListUsersCharactersResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientListUsersCharactersResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientListUsersCharactersResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientListUsersCharactersResult"), sizeof(FClientListUsersCharactersResult), Get_Z_Construct_UScriptStruct_FClientListUsersCharactersResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientListUsersCharactersResult>()
{
	return FClientListUsersCharactersResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientListUsersCharactersResult(FClientListUsersCharactersResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientListUsersCharactersResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientListUsersCharactersResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientListUsersCharactersResult()
	{
		UScriptStruct::DeferCppStructOps<FClientListUsersCharactersResult>(FName(TEXT("ClientListUsersCharactersResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientListUsersCharactersResult;
	struct Z_Construct_UScriptStruct_FClientListUsersCharactersResult_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientListUsersCharactersResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientListUsersCharactersResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientListUsersCharactersResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientListUsersCharactersResult>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientListUsersCharactersResult_Statics::NewProp_Characters_Inner = { "Characters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientListUsersCharactersResult_Statics::NewProp_Characters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientListUsersCharactersResult" },
		{ "ModuleRelativePath", "Public/ClientListUsersCharactersResult.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClientListUsersCharactersResult_Statics::NewProp_Characters = { "Characters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientListUsersCharactersResult, Characters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientListUsersCharactersResult_Statics::NewProp_Characters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientListUsersCharactersResult_Statics::NewProp_Characters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientListUsersCharactersResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientListUsersCharactersResult_Statics::NewProp_Characters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientListUsersCharactersResult_Statics::NewProp_Characters,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientListUsersCharactersResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ClientListUsersCharactersResult",
		sizeof(FClientListUsersCharactersResult),
		alignof(FClientListUsersCharactersResult),
		Z_Construct_UScriptStruct_FClientListUsersCharactersResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientListUsersCharactersResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientListUsersCharactersResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientListUsersCharactersResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientListUsersCharactersResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientListUsersCharactersResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientListUsersCharactersResult"), sizeof(FClientListUsersCharactersResult), Get_Z_Construct_UScriptStruct_FClientListUsersCharactersResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientListUsersCharactersResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientListUsersCharactersResult_Hash() { return 221101821U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
