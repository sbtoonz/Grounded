// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MultiplayerEnableMultiplayerServersForTitleResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerEnableMultiplayerServersForTitleResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ETitleMultiplayerServerEnabledStatus();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiplayerEnableMultiplayerServersForTitleResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FMultiplayerEnableMultiplayerServersForTitleResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FMultiplayerEnableMultiplayerServersForTitleResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("MultiplayerEnableMultiplayerServersForTitleResponse"), sizeof(FMultiplayerEnableMultiplayerServersForTitleResponse), Get_Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMultiplayerEnableMultiplayerServersForTitleResponse>()
{
	return FMultiplayerEnableMultiplayerServersForTitleResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleResponse(FMultiplayerEnableMultiplayerServersForTitleResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MultiplayerEnableMultiplayerServersForTitleResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerEnableMultiplayerServersForTitleResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerEnableMultiplayerServersForTitleResponse()
	{
		UScriptStruct::DeferCppStructOps<FMultiplayerEnableMultiplayerServersForTitleResponse>(FName(TEXT("MultiplayerEnableMultiplayerServersForTitleResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerEnableMultiplayerServersForTitleResponse;
	struct Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerEnableMultiplayerServersForTitleResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerEnableMultiplayerServersForTitleResponse>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleResponse_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleResponse_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerEnableMultiplayerServersForTitleResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerEnableMultiplayerServersForTitleResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleResponse_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerEnableMultiplayerServersForTitleResponse, Status), Z_Construct_UEnum_PlayFab_ETitleMultiplayerServerEnabledStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleResponse_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleResponse_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleResponse_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleResponse_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"MultiplayerEnableMultiplayerServersForTitleResponse",
		sizeof(FMultiplayerEnableMultiplayerServersForTitleResponse),
		alignof(FMultiplayerEnableMultiplayerServersForTitleResponse),
		Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiplayerEnableMultiplayerServersForTitleResponse"), sizeof(FMultiplayerEnableMultiplayerServersForTitleResponse), Get_Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiplayerEnableMultiplayerServersForTitleResponse_Hash() { return 3707054753U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
