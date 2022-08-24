// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerServerLoginResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerServerLoginResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerServerLoginResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabLoginResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerServerLoginResult>() == std::is_polymorphic<FPlayFabLoginResultCommon>(), "USTRUCT FServerServerLoginResult cannot be polymorphic unless super FPlayFabLoginResultCommon is polymorphic");

class UScriptStruct* FServerServerLoginResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerServerLoginResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerServerLoginResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerServerLoginResult"), sizeof(FServerServerLoginResult), Get_Z_Construct_UScriptStruct_FServerServerLoginResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerServerLoginResult>()
{
	return FServerServerLoginResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerServerLoginResult(FServerServerLoginResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerServerLoginResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerServerLoginResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerServerLoginResult()
	{
		UScriptStruct::DeferCppStructOps<FServerServerLoginResult>(FName(TEXT("ServerServerLoginResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerServerLoginResult;
	struct Z_Construct_UScriptStruct_FServerServerLoginResult_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfoResultPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InfoResultPayload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastLoginTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastLoginTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewlyCreated_MetaData[];
#endif
		static void NewProp_NewlyCreated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewlyCreated;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreatmentAssignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TreatmentAssignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerServerLoginResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerServerLoginResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_EntityToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerServerLoginResult" },
		{ "ModuleRelativePath", "Public/ServerServerLoginResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_EntityToken = { "EntityToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerServerLoginResult, EntityToken), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_EntityToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_EntityToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_InfoResultPayload_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerServerLoginResult" },
		{ "ModuleRelativePath", "Public/ServerServerLoginResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_InfoResultPayload = { "InfoResultPayload", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerServerLoginResult, InfoResultPayload), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_InfoResultPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_InfoResultPayload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_LastLoginTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerServerLoginResult" },
		{ "ModuleRelativePath", "Public/ServerServerLoginResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_LastLoginTime = { "LastLoginTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerServerLoginResult, LastLoginTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_LastLoginTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_LastLoginTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_NewlyCreated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerServerLoginResult" },
		{ "ModuleRelativePath", "Public/ServerServerLoginResult.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_NewlyCreated_SetBit(void* Obj)
	{
		((FServerServerLoginResult*)Obj)->NewlyCreated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_NewlyCreated = { "NewlyCreated", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FServerServerLoginResult), &Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_NewlyCreated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_NewlyCreated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_NewlyCreated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerServerLoginResult" },
		{ "ModuleRelativePath", "Public/ServerServerLoginResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerServerLoginResult, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_PlayFabId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_SessionTicket_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerServerLoginResult" },
		{ "ModuleRelativePath", "Public/ServerServerLoginResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_SessionTicket = { "SessionTicket", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerServerLoginResult, SessionTicket), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_SessionTicket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_SessionTicket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_SettingsForUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerServerLoginResult" },
		{ "ModuleRelativePath", "Public/ServerServerLoginResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_SettingsForUser = { "SettingsForUser", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerServerLoginResult, SettingsForUser), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_SettingsForUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_SettingsForUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_TreatmentAssignment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerServerLoginResult" },
		{ "ModuleRelativePath", "Public/ServerServerLoginResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_TreatmentAssignment = { "TreatmentAssignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerServerLoginResult, TreatmentAssignment), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_TreatmentAssignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_TreatmentAssignment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_EntityToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_InfoResultPayload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_LastLoginTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_NewlyCreated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_PlayFabId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_SessionTicket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_SettingsForUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::NewProp_TreatmentAssignment,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabLoginResultCommon,
		&NewStructOps,
		"ServerServerLoginResult",
		sizeof(FServerServerLoginResult),
		alignof(FServerServerLoginResult),
		Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerServerLoginResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerServerLoginResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerServerLoginResult"), sizeof(FServerServerLoginResult), Get_Z_Construct_UScriptStruct_FServerServerLoginResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerServerLoginResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerServerLoginResult_Hash() { return 1291872033U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
