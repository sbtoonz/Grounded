// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/DataFinalizeFileUploadsRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataFinalizeFileUploadsRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FDataFinalizeFileUploadsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FDataFinalizeFileUploadsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FDataFinalizeFileUploadsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("DataFinalizeFileUploadsRequest"), sizeof(FDataFinalizeFileUploadsRequest), Get_Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataFinalizeFileUploadsRequest>()
{
	return FDataFinalizeFileUploadsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataFinalizeFileUploadsRequest(FDataFinalizeFileUploadsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("DataFinalizeFileUploadsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFDataFinalizeFileUploadsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFDataFinalizeFileUploadsRequest()
	{
		UScriptStruct::DeferCppStructOps<FDataFinalizeFileUploadsRequest>(FName(TEXT("DataFinalizeFileUploadsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFDataFinalizeFileUploadsRequest;
	struct Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Entity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataFinalizeFileUploadsRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataFinalizeFileUploadsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataFinalizeFileUploadsRequest" },
		{ "ModuleRelativePath", "Public/DataFinalizeFileUploadsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataFinalizeFileUploadsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataFinalizeFileUploadsRequest" },
		{ "ModuleRelativePath", "Public/DataFinalizeFileUploadsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataFinalizeFileUploadsRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_FileNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataFinalizeFileUploadsRequest" },
		{ "ModuleRelativePath", "Public/DataFinalizeFileUploadsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_FileNames = { "FileNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataFinalizeFileUploadsRequest, FileNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_FileNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_FileNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataFinalizeFileUploadsRequest" },
		{ "ModuleRelativePath", "Public/DataFinalizeFileUploadsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataFinalizeFileUploadsRequest, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_ProfileVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_FileNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::NewProp_ProfileVersion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"DataFinalizeFileUploadsRequest",
		sizeof(FDataFinalizeFileUploadsRequest),
		alignof(FDataFinalizeFileUploadsRequest),
		Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataFinalizeFileUploadsRequest"), sizeof(FDataFinalizeFileUploadsRequest), Get_Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataFinalizeFileUploadsRequest_Hash() { return 567376614U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
