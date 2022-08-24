// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ProfilesGetEntityProfilesRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProfilesGetEntityProfilesRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FProfilesGetEntityProfilesRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProfilesGetEntityProfilesRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FProfilesGetEntityProfilesRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetEntityProfilesRequest"), sizeof(FProfilesGetEntityProfilesRequest), Get_Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetEntityProfilesRequest>()
{
	return FProfilesGetEntityProfilesRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilesGetEntityProfilesRequest(FProfilesGetEntityProfilesRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ProfilesGetEntityProfilesRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetEntityProfilesRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetEntityProfilesRequest()
	{
		UScriptStruct::DeferCppStructOps<FProfilesGetEntityProfilesRequest>(FName(TEXT("ProfilesGetEntityProfilesRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetEntityProfilesRequest;
	struct Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataAsObject_MetaData[];
#endif
		static void NewProp_DataAsObject_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DataAsObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Entities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Entities;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProfilesGetEntityProfilesRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetEntityProfilesRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfilesGetEntityProfilesRequest" },
		{ "ModuleRelativePath", "Public/ProfilesGetEntityProfilesRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesGetEntityProfilesRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_DataAsObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfilesGetEntityProfilesRequest" },
		{ "ModuleRelativePath", "Public/ProfilesGetEntityProfilesRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_DataAsObject_SetBit(void* Obj)
	{
		((FProfilesGetEntityProfilesRequest*)Obj)->DataAsObject = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_DataAsObject = { "DataAsObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProfilesGetEntityProfilesRequest), &Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_DataAsObject_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_DataAsObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_DataAsObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_Entities_Inner = { "Entities", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_Entities_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfilesGetEntityProfilesRequest" },
		{ "ModuleRelativePath", "Public/ProfilesGetEntityProfilesRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_Entities = { "Entities", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesGetEntityProfilesRequest, Entities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_Entities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_Entities_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_DataAsObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_Entities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::NewProp_Entities,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ProfilesGetEntityProfilesRequest",
		sizeof(FProfilesGetEntityProfilesRequest),
		alignof(FProfilesGetEntityProfilesRequest),
		Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilesGetEntityProfilesRequest"), sizeof(FProfilesGetEntityProfilesRequest), Get_Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilesGetEntityProfilesRequest_Hash() { return 1171272698U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif