// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientAddFriendResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientAddFriendResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientAddFriendResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientAddFriendResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FClientAddFriendResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FClientAddFriendResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientAddFriendResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientAddFriendResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientAddFriendResult"), sizeof(FClientAddFriendResult), Get_Z_Construct_UScriptStruct_FClientAddFriendResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientAddFriendResult>()
{
	return FClientAddFriendResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientAddFriendResult(FClientAddFriendResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientAddFriendResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientAddFriendResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientAddFriendResult()
	{
		UScriptStruct::DeferCppStructOps<FClientAddFriendResult>(FName(TEXT("ClientAddFriendResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientAddFriendResult;
	struct Z_Construct_UScriptStruct_FClientAddFriendResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Created_MetaData[];
#endif
		static void NewProp_Created_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Created;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientAddFriendResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientAddFriendResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientAddFriendResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientAddFriendResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientAddFriendResult_Statics::NewProp_Created_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientAddFriendResult" },
		{ "ModuleRelativePath", "Public/ClientAddFriendResult.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FClientAddFriendResult_Statics::NewProp_Created_SetBit(void* Obj)
	{
		((FClientAddFriendResult*)Obj)->Created = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClientAddFriendResult_Statics::NewProp_Created = { "Created", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FClientAddFriendResult), &Z_Construct_UScriptStruct_FClientAddFriendResult_Statics::NewProp_Created_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientAddFriendResult_Statics::NewProp_Created_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientAddFriendResult_Statics::NewProp_Created_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientAddFriendResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientAddFriendResult_Statics::NewProp_Created,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientAddFriendResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ClientAddFriendResult",
		sizeof(FClientAddFriendResult),
		alignof(FClientAddFriendResult),
		Z_Construct_UScriptStruct_FClientAddFriendResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientAddFriendResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientAddFriendResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientAddFriendResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientAddFriendResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientAddFriendResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientAddFriendResult"), sizeof(FClientAddFriendResult), Get_Z_Construct_UScriptStruct_FClientAddFriendResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientAddFriendResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientAddFriendResult_Hash() { return 3027548082U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
