// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminAddServerBuildResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminAddServerBuildResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminAddServerBuildResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EGameBuildStatus();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminAddServerBuildResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAdminAddServerBuildResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAdminAddServerBuildResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminAddServerBuildResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminAddServerBuildResult"), sizeof(FAdminAddServerBuildResult), Get_Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminAddServerBuildResult>()
{
	return FAdminAddServerBuildResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminAddServerBuildResult(FAdminAddServerBuildResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminAddServerBuildResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminAddServerBuildResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminAddServerBuildResult()
	{
		UScriptStruct::DeferCppStructOps<FAdminAddServerBuildResult>(FName(TEXT("AdminAddServerBuildResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminAddServerBuildResult;
	struct Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveRegions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActiveRegions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommandLineTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CommandLineTemplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Comment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutablePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExecutablePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxGamesPerHost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxGamesPerHost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinFreeGameSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinFreeGameSlots;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Timestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TitleId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminAddServerBuildResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminAddServerBuildResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_ActiveRegions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminAddServerBuildResult" },
		{ "ModuleRelativePath", "Public/AdminAddServerBuildResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_ActiveRegions = { "ActiveRegions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminAddServerBuildResult, ActiveRegions), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_ActiveRegions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_ActiveRegions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_BuildId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminAddServerBuildResult" },
		{ "ModuleRelativePath", "Public/AdminAddServerBuildResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_BuildId = { "BuildId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminAddServerBuildResult, BuildId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_BuildId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_BuildId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_CommandLineTemplate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminAddServerBuildResult" },
		{ "ModuleRelativePath", "Public/AdminAddServerBuildResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_CommandLineTemplate = { "CommandLineTemplate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminAddServerBuildResult, CommandLineTemplate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_CommandLineTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_CommandLineTemplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_Comment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminAddServerBuildResult" },
		{ "ModuleRelativePath", "Public/AdminAddServerBuildResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminAddServerBuildResult, Comment), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_Comment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_Comment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_ExecutablePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminAddServerBuildResult" },
		{ "ModuleRelativePath", "Public/AdminAddServerBuildResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_ExecutablePath = { "ExecutablePath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminAddServerBuildResult, ExecutablePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_ExecutablePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_ExecutablePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_MaxGamesPerHost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminAddServerBuildResult" },
		{ "ModuleRelativePath", "Public/AdminAddServerBuildResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_MaxGamesPerHost = { "MaxGamesPerHost", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminAddServerBuildResult, MaxGamesPerHost), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_MaxGamesPerHost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_MaxGamesPerHost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_MinFreeGameSlots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminAddServerBuildResult" },
		{ "ModuleRelativePath", "Public/AdminAddServerBuildResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_MinFreeGameSlots = { "MinFreeGameSlots", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminAddServerBuildResult, MinFreeGameSlots), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_MinFreeGameSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_MinFreeGameSlots_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminAddServerBuildResult" },
		{ "ModuleRelativePath", "Public/AdminAddServerBuildResult.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminAddServerBuildResult, Status), Z_Construct_UEnum_PlayFab_EGameBuildStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_Timestamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminAddServerBuildResult" },
		{ "ModuleRelativePath", "Public/AdminAddServerBuildResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminAddServerBuildResult, Timestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_Timestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_Timestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_TitleId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminAddServerBuildResult" },
		{ "ModuleRelativePath", "Public/AdminAddServerBuildResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_TitleId = { "TitleId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminAddServerBuildResult, TitleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_TitleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_TitleId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_ActiveRegions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_BuildId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_CommandLineTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_Comment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_ExecutablePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_MaxGamesPerHost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_MinFreeGameSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_Timestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::NewProp_TitleId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AdminAddServerBuildResult",
		sizeof(FAdminAddServerBuildResult),
		alignof(FAdminAddServerBuildResult),
		Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminAddServerBuildResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminAddServerBuildResult"), sizeof(FAdminAddServerBuildResult), Get_Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminAddServerBuildResult_Hash() { return 245251035U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
