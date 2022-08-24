// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminCreatePlayerSharedSecretResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminCreatePlayerSharedSecretResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminCreatePlayerSharedSecretResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAdminCreatePlayerSharedSecretResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAdminCreatePlayerSharedSecretResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminCreatePlayerSharedSecretResult"), sizeof(FAdminCreatePlayerSharedSecretResult), Get_Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminCreatePlayerSharedSecretResult>()
{
	return FAdminCreatePlayerSharedSecretResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminCreatePlayerSharedSecretResult(FAdminCreatePlayerSharedSecretResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminCreatePlayerSharedSecretResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminCreatePlayerSharedSecretResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminCreatePlayerSharedSecretResult()
	{
		UScriptStruct::DeferCppStructOps<FAdminCreatePlayerSharedSecretResult>(FName(TEXT("AdminCreatePlayerSharedSecretResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminCreatePlayerSharedSecretResult;
	struct Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecretKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SecretKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminCreatePlayerSharedSecretResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminCreatePlayerSharedSecretResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretResult_Statics::NewProp_SecretKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminCreatePlayerSharedSecretResult" },
		{ "ModuleRelativePath", "Public/AdminCreatePlayerSharedSecretResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretResult_Statics::NewProp_SecretKey = { "SecretKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminCreatePlayerSharedSecretResult, SecretKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretResult_Statics::NewProp_SecretKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretResult_Statics::NewProp_SecretKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretResult_Statics::NewProp_SecretKey,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AdminCreatePlayerSharedSecretResult",
		sizeof(FAdminCreatePlayerSharedSecretResult),
		alignof(FAdminCreatePlayerSharedSecretResult),
		Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminCreatePlayerSharedSecretResult"), sizeof(FAdminCreatePlayerSharedSecretResult), Get_Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminCreatePlayerSharedSecretResult_Hash() { return 1270352696U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
