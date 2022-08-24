// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerGetUserAccountInfoRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerGetUserAccountInfoRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerGetUserAccountInfoRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FServerGetUserAccountInfoRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerGetUserAccountInfoRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerGetUserAccountInfoRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerGetUserAccountInfoRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerGetUserAccountInfoRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerGetUserAccountInfoRequest"), sizeof(FServerGetUserAccountInfoRequest), Get_Z_Construct_UScriptStruct_FServerGetUserAccountInfoRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerGetUserAccountInfoRequest>()
{
	return FServerGetUserAccountInfoRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerGetUserAccountInfoRequest(FServerGetUserAccountInfoRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerGetUserAccountInfoRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerGetUserAccountInfoRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerGetUserAccountInfoRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerGetUserAccountInfoRequest>(FName(TEXT("ServerGetUserAccountInfoRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerGetUserAccountInfoRequest;
	struct Z_Construct_UScriptStruct_FServerGetUserAccountInfoRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetUserAccountInfoRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerGetUserAccountInfoRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerGetUserAccountInfoRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerGetUserAccountInfoRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetUserAccountInfoRequest_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetUserAccountInfoRequest" },
		{ "ModuleRelativePath", "Public/ServerGetUserAccountInfoRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerGetUserAccountInfoRequest_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetUserAccountInfoRequest, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetUserAccountInfoRequest_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetUserAccountInfoRequest_Statics::NewProp_PlayFabId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerGetUserAccountInfoRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetUserAccountInfoRequest_Statics::NewProp_PlayFabId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerGetUserAccountInfoRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerGetUserAccountInfoRequest",
		sizeof(FServerGetUserAccountInfoRequest),
		alignof(FServerGetUserAccountInfoRequest),
		Z_Construct_UScriptStruct_FServerGetUserAccountInfoRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetUserAccountInfoRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetUserAccountInfoRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetUserAccountInfoRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerGetUserAccountInfoRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerGetUserAccountInfoRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerGetUserAccountInfoRequest"), sizeof(FServerGetUserAccountInfoRequest), Get_Z_Construct_UScriptStruct_FServerGetUserAccountInfoRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerGetUserAccountInfoRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerGetUserAccountInfoRequest_Hash() { return 131514504U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
