// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MultiplayerListVirtualMachineSummariesResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerListVirtualMachineSummariesResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiplayerListVirtualMachineSummariesResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FMultiplayerListVirtualMachineSummariesResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FMultiplayerListVirtualMachineSummariesResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("MultiplayerListVirtualMachineSummariesResponse"), sizeof(FMultiplayerListVirtualMachineSummariesResponse), Get_Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMultiplayerListVirtualMachineSummariesResponse>()
{
	return FMultiplayerListVirtualMachineSummariesResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse(FMultiplayerListVirtualMachineSummariesResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MultiplayerListVirtualMachineSummariesResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerListVirtualMachineSummariesResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerListVirtualMachineSummariesResponse()
	{
		UScriptStruct::DeferCppStructOps<FMultiplayerListVirtualMachineSummariesResponse>(FName(TEXT("MultiplayerListVirtualMachineSummariesResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerListVirtualMachineSummariesResponse;
	struct Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PageSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PageSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SkipToken;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VirtualMachines_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualMachines_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VirtualMachines;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerListVirtualMachineSummariesResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerListVirtualMachineSummariesResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse_Statics::NewProp_PageSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerListVirtualMachineSummariesResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerListVirtualMachineSummariesResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse_Statics::NewProp_PageSize = { "PageSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerListVirtualMachineSummariesResponse, PageSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse_Statics::NewProp_PageSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse_Statics::NewProp_PageSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse_Statics::NewProp_SkipToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerListVirtualMachineSummariesResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerListVirtualMachineSummariesResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse_Statics::NewProp_SkipToken = { "SkipToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerListVirtualMachineSummariesResponse, SkipToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse_Statics::NewProp_SkipToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse_Statics::NewProp_SkipToken_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse_Statics::NewProp_VirtualMachines_Inner = { "VirtualMachines", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse_Statics::NewProp_VirtualMachines_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerListVirtualMachineSummariesResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerListVirtualMachineSummariesResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse_Statics::NewProp_VirtualMachines = { "VirtualMachines", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerListVirtualMachineSummariesResponse, VirtualMachines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse_Statics::NewProp_VirtualMachines_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse_Statics::NewProp_VirtualMachines_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse_Statics::NewProp_PageSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse_Statics::NewProp_SkipToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse_Statics::NewProp_VirtualMachines_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse_Statics::NewProp_VirtualMachines,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"MultiplayerListVirtualMachineSummariesResponse",
		sizeof(FMultiplayerListVirtualMachineSummariesResponse),
		alignof(FMultiplayerListVirtualMachineSummariesResponse),
		Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiplayerListVirtualMachineSummariesResponse"), sizeof(FMultiplayerListVirtualMachineSummariesResponse), Get_Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiplayerListVirtualMachineSummariesResponse_Hash() { return 8123267U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
