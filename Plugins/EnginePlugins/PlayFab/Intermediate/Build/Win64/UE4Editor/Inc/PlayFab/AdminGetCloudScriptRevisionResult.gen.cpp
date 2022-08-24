// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminGetCloudScriptRevisionResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminGetCloudScriptRevisionResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminGetCloudScriptRevisionResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAdminGetCloudScriptRevisionResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAdminGetCloudScriptRevisionResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminGetCloudScriptRevisionResult"), sizeof(FAdminGetCloudScriptRevisionResult), Get_Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminGetCloudScriptRevisionResult>()
{
	return FAdminGetCloudScriptRevisionResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminGetCloudScriptRevisionResult(FAdminGetCloudScriptRevisionResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminGetCloudScriptRevisionResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetCloudScriptRevisionResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetCloudScriptRevisionResult()
	{
		UScriptStruct::DeferCppStructOps<FAdminGetCloudScriptRevisionResult>(FName(TEXT("AdminGetCloudScriptRevisionResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminGetCloudScriptRevisionResult;
	struct Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CreatedAt;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Files_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Files_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Files;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPublished_MetaData[];
#endif
		static void NewProp_IsPublished_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPublished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Revision_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Revision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Version;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminGetCloudScriptRevisionResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminGetCloudScriptRevisionResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::NewProp_CreatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetCloudScriptRevisionResult" },
		{ "ModuleRelativePath", "Public/AdminGetCloudScriptRevisionResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::NewProp_CreatedAt = { "CreatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetCloudScriptRevisionResult, CreatedAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::NewProp_CreatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::NewProp_CreatedAt_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::NewProp_Files_Inner = { "Files", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::NewProp_Files_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetCloudScriptRevisionResult" },
		{ "ModuleRelativePath", "Public/AdminGetCloudScriptRevisionResult.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetCloudScriptRevisionResult, Files), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::NewProp_Files_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::NewProp_Files_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::NewProp_IsPublished_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetCloudScriptRevisionResult" },
		{ "ModuleRelativePath", "Public/AdminGetCloudScriptRevisionResult.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::NewProp_IsPublished_SetBit(void* Obj)
	{
		((FAdminGetCloudScriptRevisionResult*)Obj)->IsPublished = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::NewProp_IsPublished = { "IsPublished", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAdminGetCloudScriptRevisionResult), &Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::NewProp_IsPublished_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::NewProp_IsPublished_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::NewProp_IsPublished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::NewProp_Revision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetCloudScriptRevisionResult" },
		{ "ModuleRelativePath", "Public/AdminGetCloudScriptRevisionResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::NewProp_Revision = { "Revision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetCloudScriptRevisionResult, Revision), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::NewProp_Revision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::NewProp_Revision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::NewProp_Version_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetCloudScriptRevisionResult" },
		{ "ModuleRelativePath", "Public/AdminGetCloudScriptRevisionResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetCloudScriptRevisionResult, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::NewProp_Version_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::NewProp_CreatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::NewProp_Files_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::NewProp_Files,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::NewProp_IsPublished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::NewProp_Revision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::NewProp_Version,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AdminGetCloudScriptRevisionResult",
		sizeof(FAdminGetCloudScriptRevisionResult),
		alignof(FAdminGetCloudScriptRevisionResult),
		Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminGetCloudScriptRevisionResult"), sizeof(FAdminGetCloudScriptRevisionResult), Get_Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionResult_Hash() { return 3857191403U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
