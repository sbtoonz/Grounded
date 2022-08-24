// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/DataInitiateFileUploadsResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataInitiateFileUploadsResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FDataInitiateFileUploadsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FDataInitiateFileUploadsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FDataInitiateFileUploadsResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("DataInitiateFileUploadsResponse"), sizeof(FDataInitiateFileUploadsResponse), Get_Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FDataInitiateFileUploadsResponse>()
{
	return FDataInitiateFileUploadsResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataInitiateFileUploadsResponse(FDataInitiateFileUploadsResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("DataInitiateFileUploadsResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFDataInitiateFileUploadsResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFDataInitiateFileUploadsResponse()
	{
		UScriptStruct::DeferCppStructOps<FDataInitiateFileUploadsResponse>(FName(TEXT("DataInitiateFileUploadsResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFDataInitiateFileUploadsResponse;
	struct Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UploadDetails_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UploadDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UploadDetails;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataInitiateFileUploadsResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataInitiateFileUploadsResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_Entity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataInitiateFileUploadsResponse" },
		{ "ModuleRelativePath", "Public/DataInitiateFileUploadsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataInitiateFileUploadsResponse, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataInitiateFileUploadsResponse" },
		{ "ModuleRelativePath", "Public/DataInitiateFileUploadsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataInitiateFileUploadsResponse, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_ProfileVersion_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_UploadDetails_Inner = { "UploadDetails", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_UploadDetails_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataInitiateFileUploadsResponse" },
		{ "ModuleRelativePath", "Public/DataInitiateFileUploadsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_UploadDetails = { "UploadDetails", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataInitiateFileUploadsResponse, UploadDetails), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_UploadDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_UploadDetails_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_ProfileVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_UploadDetails_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::NewProp_UploadDetails,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"DataInitiateFileUploadsResponse",
		sizeof(FDataInitiateFileUploadsResponse),
		alignof(FDataInitiateFileUploadsResponse),
		Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataInitiateFileUploadsResponse"), sizeof(FDataInitiateFileUploadsResponse), Get_Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataInitiateFileUploadsResponse_Hash() { return 3934817756U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
