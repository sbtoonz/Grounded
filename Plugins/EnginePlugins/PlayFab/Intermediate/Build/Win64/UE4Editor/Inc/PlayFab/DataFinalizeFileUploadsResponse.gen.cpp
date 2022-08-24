// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/DataFinalizeFileUploadsResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataFinalizeFileUploadsResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FDataFinalizeFileUploadsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FDataFinalizeFileUploadsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FDataFinalizeFileUploadsResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("DataFinalizeFileUploadsResponse"), sizeof(FDataFinalizeFileUploadsResponse), Get_Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataFinalizeFileUploadsResponse>()
{
	return FDataFinalizeFileUploadsResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataFinalizeFileUploadsResponse(FDataFinalizeFileUploadsResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("DataFinalizeFileUploadsResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFDataFinalizeFileUploadsResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFDataFinalizeFileUploadsResponse()
	{
		UScriptStruct::DeferCppStructOps<FDataFinalizeFileUploadsResponse>(FName(TEXT("DataFinalizeFileUploadsResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFDataFinalizeFileUploadsResponse;
	struct Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Entity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MetaData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataFinalizeFileUploadsResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataFinalizeFileUploadsResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_Entity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataFinalizeFileUploadsResponse" },
		{ "ModuleRelativePath", "Public/DataFinalizeFileUploadsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataFinalizeFileUploadsResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_MetaData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataFinalizeFileUploadsResponse" },
		{ "ModuleRelativePath", "Public/DataFinalizeFileUploadsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataFinalizeFileUploadsResponse, MetaData), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_MetaData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataFinalizeFileUploadsResponse" },
		{ "ModuleRelativePath", "Public/DataFinalizeFileUploadsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataFinalizeFileUploadsResponse, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_ProfileVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_MetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::NewProp_ProfileVersion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"DataFinalizeFileUploadsResponse",
		sizeof(FDataFinalizeFileUploadsResponse),
		alignof(FDataFinalizeFileUploadsResponse),
		Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataFinalizeFileUploadsResponse"), sizeof(FDataFinalizeFileUploadsResponse), Get_Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataFinalizeFileUploadsResponse_Hash() { return 448966780U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
