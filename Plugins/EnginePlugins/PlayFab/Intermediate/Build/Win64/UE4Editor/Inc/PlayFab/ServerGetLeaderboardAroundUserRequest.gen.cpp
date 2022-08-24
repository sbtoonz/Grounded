// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerGetLeaderboardAroundUserRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerGetLeaderboardAroundUserRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerGetLeaderboardAroundUserRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerGetLeaderboardAroundUserRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerGetLeaderboardAroundUserRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerGetLeaderboardAroundUserRequest"), sizeof(FServerGetLeaderboardAroundUserRequest), Get_Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerGetLeaderboardAroundUserRequest>()
{
	return FServerGetLeaderboardAroundUserRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerGetLeaderboardAroundUserRequest(FServerGetLeaderboardAroundUserRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerGetLeaderboardAroundUserRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerGetLeaderboardAroundUserRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerGetLeaderboardAroundUserRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerGetLeaderboardAroundUserRequest>(FName(TEXT("ServerGetLeaderboardAroundUserRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerGetLeaderboardAroundUserRequest;
	struct Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxResultsCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxResultsCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileConstraints_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProfileConstraints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatisticName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatisticName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseSpecificVersion_MetaData[];
#endif
		static void NewProp_UseSpecificVersion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseSpecificVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Version;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerGetLeaderboardAroundUserRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerGetLeaderboardAroundUserRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetLeaderboardAroundUserRequest" },
		{ "ModuleRelativePath", "Public/ServerGetLeaderboardAroundUserRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetLeaderboardAroundUserRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_MaxResultsCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetLeaderboardAroundUserRequest" },
		{ "ModuleRelativePath", "Public/ServerGetLeaderboardAroundUserRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_MaxResultsCount = { "MaxResultsCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetLeaderboardAroundUserRequest, MaxResultsCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_MaxResultsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_MaxResultsCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetLeaderboardAroundUserRequest" },
		{ "ModuleRelativePath", "Public/ServerGetLeaderboardAroundUserRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetLeaderboardAroundUserRequest, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_PlayFabId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_ProfileConstraints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetLeaderboardAroundUserRequest" },
		{ "ModuleRelativePath", "Public/ServerGetLeaderboardAroundUserRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_ProfileConstraints = { "ProfileConstraints", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetLeaderboardAroundUserRequest, ProfileConstraints), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_ProfileConstraints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_ProfileConstraints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_StatisticName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetLeaderboardAroundUserRequest" },
		{ "ModuleRelativePath", "Public/ServerGetLeaderboardAroundUserRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_StatisticName = { "StatisticName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetLeaderboardAroundUserRequest, StatisticName), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_StatisticName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_StatisticName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_UseSpecificVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetLeaderboardAroundUserRequest" },
		{ "ModuleRelativePath", "Public/ServerGetLeaderboardAroundUserRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_UseSpecificVersion_SetBit(void* Obj)
	{
		((FServerGetLeaderboardAroundUserRequest*)Obj)->UseSpecificVersion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_UseSpecificVersion = { "UseSpecificVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FServerGetLeaderboardAroundUserRequest), &Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_UseSpecificVersion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_UseSpecificVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_UseSpecificVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_Version_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetLeaderboardAroundUserRequest" },
		{ "ModuleRelativePath", "Public/ServerGetLeaderboardAroundUserRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetLeaderboardAroundUserRequest, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_Version_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_MaxResultsCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_PlayFabId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_ProfileConstraints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_StatisticName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_UseSpecificVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::NewProp_Version,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerGetLeaderboardAroundUserRequest",
		sizeof(FServerGetLeaderboardAroundUserRequest),
		alignof(FServerGetLeaderboardAroundUserRequest),
		Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerGetLeaderboardAroundUserRequest"), sizeof(FServerGetLeaderboardAroundUserRequest), Get_Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerGetLeaderboardAroundUserRequest_Hash() { return 3894970369U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif