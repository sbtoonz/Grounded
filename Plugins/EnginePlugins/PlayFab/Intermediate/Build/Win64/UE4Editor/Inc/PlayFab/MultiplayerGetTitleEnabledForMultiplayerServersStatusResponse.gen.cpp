// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MultiplayerGetTitleEnabledForMultiplayerServersStatusResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ETitleMultiplayerServerEnabledStatus();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("MultiplayerGetTitleEnabledForMultiplayerServersStatusResponse"), sizeof(FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse), Get_Z_Construct_UScriptStruct_FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse>()
{
	return FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse(FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MultiplayerGetTitleEnabledForMultiplayerServersStatusResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse()
	{
		UScriptStruct::DeferCppStructOps<FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse>(FName(TEXT("MultiplayerGetTitleEnabledForMultiplayerServersStatusResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse;
	struct Z_Construct_UScriptStruct_FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerGetTitleEnabledForMultiplayerServersStatusResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerGetTitleEnabledForMultiplayerServersStatusResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerGetTitleEnabledForMultiplayerServersStatusResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse, Status), Z_Construct_UEnum_PlayFab_ETitleMultiplayerServerEnabledStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"MultiplayerGetTitleEnabledForMultiplayerServersStatusResponse",
		sizeof(FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse),
		alignof(FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse),
		Z_Construct_UScriptStruct_FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiplayerGetTitleEnabledForMultiplayerServersStatusResponse"), sizeof(FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse), Get_Z_Construct_UScriptStruct_FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse_Hash() { return 223589839U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
