// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerDeleteSharedGroupRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerDeleteSharedGroupRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerDeleteSharedGroupRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FServerDeleteSharedGroupRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerDeleteSharedGroupRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerDeleteSharedGroupRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerDeleteSharedGroupRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerDeleteSharedGroupRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerDeleteSharedGroupRequest"), sizeof(FServerDeleteSharedGroupRequest), Get_Z_Construct_UScriptStruct_FServerDeleteSharedGroupRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerDeleteSharedGroupRequest>()
{
	return FServerDeleteSharedGroupRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerDeleteSharedGroupRequest(FServerDeleteSharedGroupRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerDeleteSharedGroupRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerDeleteSharedGroupRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerDeleteSharedGroupRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerDeleteSharedGroupRequest>(FName(TEXT("ServerDeleteSharedGroupRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerDeleteSharedGroupRequest;
	struct Z_Construct_UScriptStruct_FServerDeleteSharedGroupRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedGroupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SharedGroupId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerDeleteSharedGroupRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerDeleteSharedGroupRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerDeleteSharedGroupRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerDeleteSharedGroupRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerDeleteSharedGroupRequest_Statics::NewProp_SharedGroupId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerDeleteSharedGroupRequest" },
		{ "ModuleRelativePath", "Public/ServerDeleteSharedGroupRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerDeleteSharedGroupRequest_Statics::NewProp_SharedGroupId = { "SharedGroupId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerDeleteSharedGroupRequest, SharedGroupId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerDeleteSharedGroupRequest_Statics::NewProp_SharedGroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerDeleteSharedGroupRequest_Statics::NewProp_SharedGroupId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerDeleteSharedGroupRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerDeleteSharedGroupRequest_Statics::NewProp_SharedGroupId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerDeleteSharedGroupRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerDeleteSharedGroupRequest",
		sizeof(FServerDeleteSharedGroupRequest),
		alignof(FServerDeleteSharedGroupRequest),
		Z_Construct_UScriptStruct_FServerDeleteSharedGroupRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerDeleteSharedGroupRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerDeleteSharedGroupRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerDeleteSharedGroupRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerDeleteSharedGroupRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerDeleteSharedGroupRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerDeleteSharedGroupRequest"), sizeof(FServerDeleteSharedGroupRequest), Get_Z_Construct_UScriptStruct_FServerDeleteSharedGroupRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerDeleteSharedGroupRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerDeleteSharedGroupRequest_Hash() { return 2929126176U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
