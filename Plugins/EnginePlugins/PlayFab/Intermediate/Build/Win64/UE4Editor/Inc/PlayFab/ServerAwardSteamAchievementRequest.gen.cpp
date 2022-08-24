// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerAwardSteamAchievementRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerAwardSteamAchievementRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerAwardSteamAchievementRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerAwardSteamAchievementRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerAwardSteamAchievementRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerAwardSteamAchievementRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerAwardSteamAchievementRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerAwardSteamAchievementRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerAwardSteamAchievementRequest"), sizeof(FServerAwardSteamAchievementRequest), Get_Z_Construct_UScriptStruct_FServerAwardSteamAchievementRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerAwardSteamAchievementRequest>()
{
	return FServerAwardSteamAchievementRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerAwardSteamAchievementRequest(FServerAwardSteamAchievementRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerAwardSteamAchievementRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerAwardSteamAchievementRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerAwardSteamAchievementRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerAwardSteamAchievementRequest>(FName(TEXT("ServerAwardSteamAchievementRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerAwardSteamAchievementRequest;
	struct Z_Construct_UScriptStruct_FServerAwardSteamAchievementRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Achievements_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Achievements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Achievements;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerAwardSteamAchievementRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerAwardSteamAchievementRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerAwardSteamAchievementRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerAwardSteamAchievementRequest>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerAwardSteamAchievementRequest_Statics::NewProp_Achievements_Inner = { "Achievements", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerAwardSteamAchievementRequest_Statics::NewProp_Achievements_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerAwardSteamAchievementRequest" },
		{ "ModuleRelativePath", "Public/ServerAwardSteamAchievementRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FServerAwardSteamAchievementRequest_Statics::NewProp_Achievements = { "Achievements", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerAwardSteamAchievementRequest, Achievements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerAwardSteamAchievementRequest_Statics::NewProp_Achievements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAwardSteamAchievementRequest_Statics::NewProp_Achievements_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerAwardSteamAchievementRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerAwardSteamAchievementRequest_Statics::NewProp_Achievements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerAwardSteamAchievementRequest_Statics::NewProp_Achievements,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerAwardSteamAchievementRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerAwardSteamAchievementRequest",
		sizeof(FServerAwardSteamAchievementRequest),
		alignof(FServerAwardSteamAchievementRequest),
		Z_Construct_UScriptStruct_FServerAwardSteamAchievementRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAwardSteamAchievementRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerAwardSteamAchievementRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAwardSteamAchievementRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerAwardSteamAchievementRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerAwardSteamAchievementRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerAwardSteamAchievementRequest"), sizeof(FServerAwardSteamAchievementRequest), Get_Z_Construct_UScriptStruct_FServerAwardSteamAchievementRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerAwardSteamAchievementRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerAwardSteamAchievementRequest_Hash() { return 1011899382U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
