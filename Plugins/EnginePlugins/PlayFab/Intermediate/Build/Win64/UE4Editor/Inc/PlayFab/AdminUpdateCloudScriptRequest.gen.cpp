// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminUpdateCloudScriptRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminUpdateCloudScriptRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminUpdateCloudScriptRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminUpdateCloudScriptRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminUpdateCloudScriptRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminUpdateCloudScriptRequest"), sizeof(FAdminUpdateCloudScriptRequest), Get_Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminUpdateCloudScriptRequest>()
{
	return FAdminUpdateCloudScriptRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminUpdateCloudScriptRequest(FAdminUpdateCloudScriptRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminUpdateCloudScriptRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminUpdateCloudScriptRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminUpdateCloudScriptRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminUpdateCloudScriptRequest>(FName(TEXT("AdminUpdateCloudScriptRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminUpdateCloudScriptRequest;
	struct Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeveloperPlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeveloperPlayFabId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Files_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Files_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Files;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Publish_MetaData[];
#endif
		static void NewProp_Publish_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Publish;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminUpdateCloudScriptRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminUpdateCloudScriptRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminUpdateCloudScriptRequest" },
		{ "ModuleRelativePath", "Public/AdminUpdateCloudScriptRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminUpdateCloudScriptRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics::NewProp_DeveloperPlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminUpdateCloudScriptRequest" },
		{ "ModuleRelativePath", "Public/AdminUpdateCloudScriptRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics::NewProp_DeveloperPlayFabId = { "DeveloperPlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminUpdateCloudScriptRequest, DeveloperPlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics::NewProp_DeveloperPlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics::NewProp_DeveloperPlayFabId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics::NewProp_Files_Inner = { "Files", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics::NewProp_Files_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminUpdateCloudScriptRequest" },
		{ "ModuleRelativePath", "Public/AdminUpdateCloudScriptRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminUpdateCloudScriptRequest, Files), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics::NewProp_Files_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics::NewProp_Files_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics::NewProp_Publish_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminUpdateCloudScriptRequest" },
		{ "ModuleRelativePath", "Public/AdminUpdateCloudScriptRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics::NewProp_Publish_SetBit(void* Obj)
	{
		((FAdminUpdateCloudScriptRequest*)Obj)->Publish = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics::NewProp_Publish = { "Publish", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAdminUpdateCloudScriptRequest), &Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics::NewProp_Publish_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics::NewProp_Publish_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics::NewProp_Publish_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics::NewProp_DeveloperPlayFabId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics::NewProp_Files_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics::NewProp_Files,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics::NewProp_Publish,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminUpdateCloudScriptRequest",
		sizeof(FAdminUpdateCloudScriptRequest),
		alignof(FAdminUpdateCloudScriptRequest),
		Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminUpdateCloudScriptRequest"), sizeof(FAdminUpdateCloudScriptRequest), Get_Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminUpdateCloudScriptRequest_Hash() { return 2129304105U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
