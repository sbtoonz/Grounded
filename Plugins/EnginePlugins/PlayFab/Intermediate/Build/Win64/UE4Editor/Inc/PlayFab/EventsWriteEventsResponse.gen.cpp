// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/EventsWriteEventsResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventsWriteEventsResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FEventsWriteEventsResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FEventsWriteEventsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FEventsWriteEventsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FEventsWriteEventsResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventsWriteEventsResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("EventsWriteEventsResponse"), sizeof(FEventsWriteEventsResponse), Get_Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FEventsWriteEventsResponse>()
{
	return FEventsWriteEventsResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventsWriteEventsResponse(FEventsWriteEventsResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("EventsWriteEventsResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFEventsWriteEventsResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFEventsWriteEventsResponse()
	{
		UScriptStruct::DeferCppStructOps<FEventsWriteEventsResponse>(FName(TEXT("EventsWriteEventsResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFEventsWriteEventsResponse;
	struct Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssignedEventIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssignedEventIds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EventsWriteEventsResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventsWriteEventsResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::NewProp_AssignedEventIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EventsWriteEventsResponse" },
		{ "ModuleRelativePath", "Public/EventsWriteEventsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::NewProp_AssignedEventIds = { "AssignedEventIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventsWriteEventsResponse, AssignedEventIds), METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::NewProp_AssignedEventIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::NewProp_AssignedEventIds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::NewProp_AssignedEventIds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"EventsWriteEventsResponse",
		sizeof(FEventsWriteEventsResponse),
		alignof(FEventsWriteEventsResponse),
		Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventsWriteEventsResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventsWriteEventsResponse"), sizeof(FEventsWriteEventsResponse), Get_Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventsWriteEventsResponse_Hash() { return 3979735044U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
