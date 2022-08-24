// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientGetPlayerProfileResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientGetPlayerProfileResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientGetPlayerProfileResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientGetPlayerProfileResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FClientGetPlayerProfileResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FClientGetPlayerProfileResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientGetPlayerProfileResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientGetPlayerProfileResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientGetPlayerProfileResult"), sizeof(FClientGetPlayerProfileResult), Get_Z_Construct_UScriptStruct_FClientGetPlayerProfileResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientGetPlayerProfileResult>()
{
	return FClientGetPlayerProfileResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientGetPlayerProfileResult(FClientGetPlayerProfileResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientGetPlayerProfileResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientGetPlayerProfileResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientGetPlayerProfileResult()
	{
		UScriptStruct::DeferCppStructOps<FClientGetPlayerProfileResult>(FName(TEXT("ClientGetPlayerProfileResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientGetPlayerProfileResult;
	struct Z_Construct_UScriptStruct_FClientGetPlayerProfileResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerProfile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetPlayerProfileResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientGetPlayerProfileResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientGetPlayerProfileResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientGetPlayerProfileResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetPlayerProfileResult_Statics::NewProp_PlayerProfile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetPlayerProfileResult" },
		{ "ModuleRelativePath", "Public/ClientGetPlayerProfileResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientGetPlayerProfileResult_Statics::NewProp_PlayerProfile = { "PlayerProfile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetPlayerProfileResult, PlayerProfile), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetPlayerProfileResult_Statics::NewProp_PlayerProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetPlayerProfileResult_Statics::NewProp_PlayerProfile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientGetPlayerProfileResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetPlayerProfileResult_Statics::NewProp_PlayerProfile,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientGetPlayerProfileResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ClientGetPlayerProfileResult",
		sizeof(FClientGetPlayerProfileResult),
		alignof(FClientGetPlayerProfileResult),
		Z_Construct_UScriptStruct_FClientGetPlayerProfileResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetPlayerProfileResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetPlayerProfileResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetPlayerProfileResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientGetPlayerProfileResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientGetPlayerProfileResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientGetPlayerProfileResult"), sizeof(FClientGetPlayerProfileResult), Get_Z_Construct_UScriptStruct_FClientGetPlayerProfileResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientGetPlayerProfileResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientGetPlayerProfileResult_Hash() { return 2535956311U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
