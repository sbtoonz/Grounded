// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MatchmakerStartGameRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchmakerStartGameRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerStartGameRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ERegion();
// End Cross Module References

static_assert(std::is_polymorphic<FMatchmakerStartGameRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FMatchmakerStartGameRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FMatchmakerStartGameRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerStartGameRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("MatchmakerStartGameRequest"), sizeof(FMatchmakerStartGameRequest), Get_Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMatchmakerStartGameRequest>()
{
	return FMatchmakerStartGameRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchmakerStartGameRequest(FMatchmakerStartGameRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MatchmakerStartGameRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerStartGameRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerStartGameRequest()
	{
		UScriptStruct::DeferCppStructOps<FMatchmakerStartGameRequest>(FName(TEXT("MatchmakerStartGameRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerStartGameRequest;
	struct Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Build_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Build;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomCommandLineData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomCommandLineData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalMatchmakerEventEndpoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExternalMatchmakerEventEndpoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Region_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Region;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MatchmakerStartGameRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerStartGameRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::NewProp_Build_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchmakerStartGameRequest" },
		{ "ModuleRelativePath", "Public/MatchmakerStartGameRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::NewProp_Build = { "Build", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerStartGameRequest, Build), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::NewProp_Build_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::NewProp_Build_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::NewProp_CustomCommandLineData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchmakerStartGameRequest" },
		{ "ModuleRelativePath", "Public/MatchmakerStartGameRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::NewProp_CustomCommandLineData = { "CustomCommandLineData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerStartGameRequest, CustomCommandLineData), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::NewProp_CustomCommandLineData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::NewProp_CustomCommandLineData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchmakerStartGameRequest" },
		{ "ModuleRelativePath", "Public/MatchmakerStartGameRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerStartGameRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::NewProp_ExternalMatchmakerEventEndpoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchmakerStartGameRequest" },
		{ "ModuleRelativePath", "Public/MatchmakerStartGameRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::NewProp_ExternalMatchmakerEventEndpoint = { "ExternalMatchmakerEventEndpoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerStartGameRequest, ExternalMatchmakerEventEndpoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::NewProp_ExternalMatchmakerEventEndpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::NewProp_ExternalMatchmakerEventEndpoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::NewProp_GameMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchmakerStartGameRequest" },
		{ "ModuleRelativePath", "Public/MatchmakerStartGameRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerStartGameRequest, GameMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::NewProp_GameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::NewProp_GameMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::NewProp_Region_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::NewProp_Region_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchmakerStartGameRequest" },
		{ "ModuleRelativePath", "Public/MatchmakerStartGameRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerStartGameRequest, Region), Z_Construct_UEnum_PlayFab_ERegion, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::NewProp_Region_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::NewProp_Build,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::NewProp_CustomCommandLineData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::NewProp_ExternalMatchmakerEventEndpoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::NewProp_GameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::NewProp_Region_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::NewProp_Region,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"MatchmakerStartGameRequest",
		sizeof(FMatchmakerStartGameRequest),
		alignof(FMatchmakerStartGameRequest),
		Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerStartGameRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchmakerStartGameRequest"), sizeof(FMatchmakerStartGameRequest), Get_Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchmakerStartGameRequest_Hash() { return 3863580005U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
