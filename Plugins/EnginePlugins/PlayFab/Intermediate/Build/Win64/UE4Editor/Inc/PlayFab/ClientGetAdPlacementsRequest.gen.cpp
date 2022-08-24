// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientGetAdPlacementsRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientGetAdPlacementsRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientGetAdPlacementsRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientGetAdPlacementsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientGetAdPlacementsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientGetAdPlacementsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientGetAdPlacementsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientGetAdPlacementsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientGetAdPlacementsRequest"), sizeof(FClientGetAdPlacementsRequest), Get_Z_Construct_UScriptStruct_FClientGetAdPlacementsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientGetAdPlacementsRequest>()
{
	return FClientGetAdPlacementsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientGetAdPlacementsRequest(FClientGetAdPlacementsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientGetAdPlacementsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientGetAdPlacementsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientGetAdPlacementsRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientGetAdPlacementsRequest>(FName(TEXT("ClientGetAdPlacementsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientGetAdPlacementsRequest;
	struct Z_Construct_UScriptStruct_FClientGetAdPlacementsRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Identifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetAdPlacementsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientGetAdPlacementsRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientGetAdPlacementsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientGetAdPlacementsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetAdPlacementsRequest_Statics::NewProp_AppId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetAdPlacementsRequest" },
		{ "ModuleRelativePath", "Public/ClientGetAdPlacementsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientGetAdPlacementsRequest_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetAdPlacementsRequest, AppId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetAdPlacementsRequest_Statics::NewProp_AppId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetAdPlacementsRequest_Statics::NewProp_AppId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetAdPlacementsRequest_Statics::NewProp_Identifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetAdPlacementsRequest" },
		{ "ModuleRelativePath", "Public/ClientGetAdPlacementsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientGetAdPlacementsRequest_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetAdPlacementsRequest, Identifier), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetAdPlacementsRequest_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetAdPlacementsRequest_Statics::NewProp_Identifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientGetAdPlacementsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetAdPlacementsRequest_Statics::NewProp_AppId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetAdPlacementsRequest_Statics::NewProp_Identifier,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientGetAdPlacementsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientGetAdPlacementsRequest",
		sizeof(FClientGetAdPlacementsRequest),
		alignof(FClientGetAdPlacementsRequest),
		Z_Construct_UScriptStruct_FClientGetAdPlacementsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetAdPlacementsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetAdPlacementsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetAdPlacementsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientGetAdPlacementsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientGetAdPlacementsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientGetAdPlacementsRequest"), sizeof(FClientGetAdPlacementsRequest), Get_Z_Construct_UScriptStruct_FClientGetAdPlacementsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientGetAdPlacementsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientGetAdPlacementsRequest_Hash() { return 958696416U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
