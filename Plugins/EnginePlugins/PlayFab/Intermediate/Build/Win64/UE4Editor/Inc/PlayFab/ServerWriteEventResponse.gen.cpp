// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerWriteEventResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerWriteEventResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerWriteEventResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FServerWriteEventResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FServerWriteEventResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FServerWriteEventResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerWriteEventResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerWriteEventResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerWriteEventResponse"), sizeof(FServerWriteEventResponse), Get_Z_Construct_UScriptStruct_FServerWriteEventResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerWriteEventResponse>()
{
	return FServerWriteEventResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerWriteEventResponse(FServerWriteEventResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerWriteEventResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerWriteEventResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerWriteEventResponse()
	{
		UScriptStruct::DeferCppStructOps<FServerWriteEventResponse>(FName(TEXT("ServerWriteEventResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerWriteEventResponse;
	struct Z_Construct_UScriptStruct_FServerWriteEventResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerWriteEventResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerWriteEventResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerWriteEventResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerWriteEventResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerWriteEventResponse_Statics::NewProp_EventId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerWriteEventResponse" },
		{ "ModuleRelativePath", "Public/ServerWriteEventResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerWriteEventResponse_Statics::NewProp_EventId = { "EventId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerWriteEventResponse, EventId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerWriteEventResponse_Statics::NewProp_EventId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerWriteEventResponse_Statics::NewProp_EventId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerWriteEventResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerWriteEventResponse_Statics::NewProp_EventId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerWriteEventResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ServerWriteEventResponse",
		sizeof(FServerWriteEventResponse),
		alignof(FServerWriteEventResponse),
		Z_Construct_UScriptStruct_FServerWriteEventResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerWriteEventResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerWriteEventResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerWriteEventResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerWriteEventResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerWriteEventResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerWriteEventResponse"), sizeof(FServerWriteEventResponse), Get_Z_Construct_UScriptStruct_FServerWriteEventResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerWriteEventResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerWriteEventResponse_Hash() { return 3280321142U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
