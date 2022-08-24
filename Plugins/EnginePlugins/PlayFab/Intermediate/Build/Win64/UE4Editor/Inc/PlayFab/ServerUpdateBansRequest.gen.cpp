// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerUpdateBansRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerUpdateBansRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerUpdateBansRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerUpdateBansRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerUpdateBansRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerUpdateBansRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerUpdateBansRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerUpdateBansRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerUpdateBansRequest"), sizeof(FServerUpdateBansRequest), Get_Z_Construct_UScriptStruct_FServerUpdateBansRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerUpdateBansRequest>()
{
	return FServerUpdateBansRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerUpdateBansRequest(FServerUpdateBansRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerUpdateBansRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerUpdateBansRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerUpdateBansRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerUpdateBansRequest>(FName(TEXT("ServerUpdateBansRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerUpdateBansRequest;
	struct Z_Construct_UScriptStruct_FServerUpdateBansRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Bans_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bans_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bans;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerUpdateBansRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerUpdateBansRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerUpdateBansRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerUpdateBansRequest>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerUpdateBansRequest_Statics::NewProp_Bans_Inner = { "Bans", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerUpdateBansRequest_Statics::NewProp_Bans_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerUpdateBansRequest" },
		{ "ModuleRelativePath", "Public/ServerUpdateBansRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FServerUpdateBansRequest_Statics::NewProp_Bans = { "Bans", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerUpdateBansRequest, Bans), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerUpdateBansRequest_Statics::NewProp_Bans_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerUpdateBansRequest_Statics::NewProp_Bans_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerUpdateBansRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerUpdateBansRequest_Statics::NewProp_Bans_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerUpdateBansRequest_Statics::NewProp_Bans,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerUpdateBansRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerUpdateBansRequest",
		sizeof(FServerUpdateBansRequest),
		alignof(FServerUpdateBansRequest),
		Z_Construct_UScriptStruct_FServerUpdateBansRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerUpdateBansRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerUpdateBansRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerUpdateBansRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerUpdateBansRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerUpdateBansRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerUpdateBansRequest"), sizeof(FServerUpdateBansRequest), Get_Z_Construct_UScriptStruct_FServerUpdateBansRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerUpdateBansRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerUpdateBansRequest_Hash() { return 2348639856U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
