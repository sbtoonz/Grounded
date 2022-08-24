// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminGetMatchmakerGameInfoResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminGetMatchmakerGameInfoResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ERegion();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminGetMatchmakerGameInfoResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAdminGetMatchmakerGameInfoResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAdminGetMatchmakerGameInfoResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminGetMatchmakerGameInfoResult"), sizeof(FAdminGetMatchmakerGameInfoResult), Get_Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminGetMatchmakerGameInfoResult>()
{
	return FAdminGetMatchmakerGameInfoResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminGetMatchmakerGameInfoResult(FAdminGetMatchmakerGameInfoResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminGetMatchmakerGameInfoResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetMatchmakerGameInfoResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetMatchmakerGameInfoResult()
	{
		UScriptStruct::DeferCppStructOps<FAdminGetMatchmakerGameInfoResult>(FName(TEXT("AdminGetMatchmakerGameInfoResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminGetMatchmakerGameInfoResult;
	struct Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LobbyId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Players;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Region_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Region;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerIPV4Address_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerIPV4Address;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerIPV6Address_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerIPV6Address;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ServerPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerPublicDNSName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerPublicDNSName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TitleId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminGetMatchmakerGameInfoResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminGetMatchmakerGameInfoResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_BuildVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetMatchmakerGameInfoResult" },
		{ "ModuleRelativePath", "Public/AdminGetMatchmakerGameInfoResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_BuildVersion = { "BuildVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetMatchmakerGameInfoResult, BuildVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_BuildVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_BuildVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_EndTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetMatchmakerGameInfoResult" },
		{ "ModuleRelativePath", "Public/AdminGetMatchmakerGameInfoResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetMatchmakerGameInfoResult, EndTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_EndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_EndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_LobbyId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetMatchmakerGameInfoResult" },
		{ "ModuleRelativePath", "Public/AdminGetMatchmakerGameInfoResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetMatchmakerGameInfoResult, LobbyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_LobbyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_Mode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetMatchmakerGameInfoResult" },
		{ "ModuleRelativePath", "Public/AdminGetMatchmakerGameInfoResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetMatchmakerGameInfoResult, Mode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_Mode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_Players_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetMatchmakerGameInfoResult" },
		{ "ModuleRelativePath", "Public/AdminGetMatchmakerGameInfoResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetMatchmakerGameInfoResult, Players), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_Players_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_Players_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_Region_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_Region_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetMatchmakerGameInfoResult" },
		{ "ModuleRelativePath", "Public/AdminGetMatchmakerGameInfoResult.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetMatchmakerGameInfoResult, Region), Z_Construct_UEnum_PlayFab_ERegion, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_Region_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_ServerIPV4Address_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetMatchmakerGameInfoResult" },
		{ "ModuleRelativePath", "Public/AdminGetMatchmakerGameInfoResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_ServerIPV4Address = { "ServerIPV4Address", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetMatchmakerGameInfoResult, ServerIPV4Address), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_ServerIPV4Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_ServerIPV4Address_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_ServerIPV6Address_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetMatchmakerGameInfoResult" },
		{ "ModuleRelativePath", "Public/AdminGetMatchmakerGameInfoResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_ServerIPV6Address = { "ServerIPV6Address", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetMatchmakerGameInfoResult, ServerIPV6Address), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_ServerIPV6Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_ServerIPV6Address_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_ServerPort_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetMatchmakerGameInfoResult" },
		{ "ModuleRelativePath", "Public/AdminGetMatchmakerGameInfoResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_ServerPort = { "ServerPort", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetMatchmakerGameInfoResult, ServerPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_ServerPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_ServerPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_ServerPublicDNSName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetMatchmakerGameInfoResult" },
		{ "ModuleRelativePath", "Public/AdminGetMatchmakerGameInfoResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_ServerPublicDNSName = { "ServerPublicDNSName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetMatchmakerGameInfoResult, ServerPublicDNSName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_ServerPublicDNSName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_ServerPublicDNSName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_StartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetMatchmakerGameInfoResult" },
		{ "ModuleRelativePath", "Public/AdminGetMatchmakerGameInfoResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetMatchmakerGameInfoResult, StartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_TitleId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetMatchmakerGameInfoResult" },
		{ "ModuleRelativePath", "Public/AdminGetMatchmakerGameInfoResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_TitleId = { "TitleId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetMatchmakerGameInfoResult, TitleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_TitleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_TitleId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_BuildVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_EndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_LobbyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_Players,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_Region_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_Region,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_ServerIPV4Address,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_ServerIPV6Address,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_ServerPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_ServerPublicDNSName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::NewProp_TitleId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AdminGetMatchmakerGameInfoResult",
		sizeof(FAdminGetMatchmakerGameInfoResult),
		alignof(FAdminGetMatchmakerGameInfoResult),
		Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminGetMatchmakerGameInfoResult"), sizeof(FAdminGetMatchmakerGameInfoResult), Get_Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoResult_Hash() { return 1000396070U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
