// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerUpdateUserInternalDataRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerUpdateUserInternalDataRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerUpdateUserInternalDataRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerUpdateUserInternalDataRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerUpdateUserInternalDataRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerUpdateUserInternalDataRequest"), sizeof(FServerUpdateUserInternalDataRequest), Get_Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerUpdateUserInternalDataRequest>()
{
	return FServerUpdateUserInternalDataRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerUpdateUserInternalDataRequest(FServerUpdateUserInternalDataRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerUpdateUserInternalDataRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerUpdateUserInternalDataRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerUpdateUserInternalDataRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerUpdateUserInternalDataRequest>(FName(TEXT("ServerUpdateUserInternalDataRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerUpdateUserInternalDataRequest;
	struct Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeysToRemove_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KeysToRemove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerUpdateUserInternalDataRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerUpdateUserInternalDataRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerUpdateUserInternalDataRequest" },
		{ "ModuleRelativePath", "Public/ServerUpdateUserInternalDataRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerUpdateUserInternalDataRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Statics::NewProp_Data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerUpdateUserInternalDataRequest" },
		{ "ModuleRelativePath", "Public/ServerUpdateUserInternalDataRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerUpdateUserInternalDataRequest, Data), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Statics::NewProp_KeysToRemove_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerUpdateUserInternalDataRequest" },
		{ "ModuleRelativePath", "Public/ServerUpdateUserInternalDataRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Statics::NewProp_KeysToRemove = { "KeysToRemove", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerUpdateUserInternalDataRequest, KeysToRemove), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Statics::NewProp_KeysToRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Statics::NewProp_KeysToRemove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerUpdateUserInternalDataRequest" },
		{ "ModuleRelativePath", "Public/ServerUpdateUserInternalDataRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerUpdateUserInternalDataRequest, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Statics::NewProp_PlayFabId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Statics::NewProp_KeysToRemove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Statics::NewProp_PlayFabId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerUpdateUserInternalDataRequest",
		sizeof(FServerUpdateUserInternalDataRequest),
		alignof(FServerUpdateUserInternalDataRequest),
		Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerUpdateUserInternalDataRequest"), sizeof(FServerUpdateUserInternalDataRequest), Get_Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerUpdateUserInternalDataRequest_Hash() { return 452441147U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
