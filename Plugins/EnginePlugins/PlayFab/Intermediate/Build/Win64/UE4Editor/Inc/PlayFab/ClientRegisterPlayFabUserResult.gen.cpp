// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientRegisterPlayFabUserResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientRegisterPlayFabUserResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientRegisterPlayFabUserResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FClientRegisterPlayFabUserResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FClientRegisterPlayFabUserResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientRegisterPlayFabUserResult"), sizeof(FClientRegisterPlayFabUserResult), Get_Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientRegisterPlayFabUserResult>()
{
	return FClientRegisterPlayFabUserResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientRegisterPlayFabUserResult(FClientRegisterPlayFabUserResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientRegisterPlayFabUserResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientRegisterPlayFabUserResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientRegisterPlayFabUserResult()
	{
		UScriptStruct::DeferCppStructOps<FClientRegisterPlayFabUserResult>(FName(TEXT("ClientRegisterPlayFabUserResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientRegisterPlayFabUserResult;
	struct Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntityToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EntityToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionTicket_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionTicket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsForUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SettingsForUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Username;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientRegisterPlayFabUserResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientRegisterPlayFabUserResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::NewProp_EntityToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientRegisterPlayFabUserResult" },
		{ "ModuleRelativePath", "Public/ClientRegisterPlayFabUserResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::NewProp_EntityToken = { "EntityToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientRegisterPlayFabUserResult, EntityToken), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::NewProp_EntityToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::NewProp_EntityToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientRegisterPlayFabUserResult" },
		{ "ModuleRelativePath", "Public/ClientRegisterPlayFabUserResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientRegisterPlayFabUserResult, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::NewProp_PlayFabId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::NewProp_SessionTicket_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientRegisterPlayFabUserResult" },
		{ "ModuleRelativePath", "Public/ClientRegisterPlayFabUserResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::NewProp_SessionTicket = { "SessionTicket", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientRegisterPlayFabUserResult, SessionTicket), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::NewProp_SessionTicket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::NewProp_SessionTicket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::NewProp_SettingsForUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientRegisterPlayFabUserResult" },
		{ "ModuleRelativePath", "Public/ClientRegisterPlayFabUserResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::NewProp_SettingsForUser = { "SettingsForUser", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientRegisterPlayFabUserResult, SettingsForUser), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::NewProp_SettingsForUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::NewProp_SettingsForUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::NewProp_Username_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientRegisterPlayFabUserResult" },
		{ "ModuleRelativePath", "Public/ClientRegisterPlayFabUserResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientRegisterPlayFabUserResult, Username), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::NewProp_Username_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::NewProp_EntityToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::NewProp_PlayFabId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::NewProp_SessionTicket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::NewProp_SettingsForUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::NewProp_Username,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ClientRegisterPlayFabUserResult",
		sizeof(FClientRegisterPlayFabUserResult),
		alignof(FClientRegisterPlayFabUserResult),
		Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientRegisterPlayFabUserResult"), sizeof(FClientRegisterPlayFabUserResult), Get_Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientRegisterPlayFabUserResult_Hash() { return 246071844U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
