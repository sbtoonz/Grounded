// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ProfilesSetProfileLanguageResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProfilesSetProfileLanguageResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EOperationTypes();
// End Cross Module References

static_assert(std::is_polymorphic<FProfilesSetProfileLanguageResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProfilesSetProfileLanguageResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FProfilesSetProfileLanguageResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesSetProfileLanguageResponse"), sizeof(FProfilesSetProfileLanguageResponse), Get_Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesSetProfileLanguageResponse>()
{
	return FProfilesSetProfileLanguageResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilesSetProfileLanguageResponse(FProfilesSetProfileLanguageResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ProfilesSetProfileLanguageResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFProfilesSetProfileLanguageResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFProfilesSetProfileLanguageResponse()
	{
		UScriptStruct::DeferCppStructOps<FProfilesSetProfileLanguageResponse>(FName(TEXT("ProfilesSetProfileLanguageResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFProfilesSetProfileLanguageResponse;
	struct Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OperationResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OperationResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VersionNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VersionNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProfilesSetProfileLanguageResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesSetProfileLanguageResponse>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_OperationResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_OperationResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfilesSetProfileLanguageResponse" },
		{ "ModuleRelativePath", "Public/ProfilesSetProfileLanguageResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_OperationResult = { "OperationResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesSetProfileLanguageResponse, OperationResult), Z_Construct_UEnum_PlayFab_EOperationTypes, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_OperationResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_OperationResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_VersionNumber_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfilesSetProfileLanguageResponse" },
		{ "ModuleRelativePath", "Public/ProfilesSetProfileLanguageResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_VersionNumber = { "VersionNumber", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesSetProfileLanguageResponse, VersionNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_VersionNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_VersionNumber_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_OperationResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_OperationResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::NewProp_VersionNumber,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ProfilesSetProfileLanguageResponse",
		sizeof(FProfilesSetProfileLanguageResponse),
		alignof(FProfilesSetProfileLanguageResponse),
		Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilesSetProfileLanguageResponse"), sizeof(FProfilesSetProfileLanguageResponse), Get_Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilesSetProfileLanguageResponse_Hash() { return 4244638976U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
