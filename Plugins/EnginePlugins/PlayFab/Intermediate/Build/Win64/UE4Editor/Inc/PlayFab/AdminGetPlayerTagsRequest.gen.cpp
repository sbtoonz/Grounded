// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminGetPlayerTagsRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminGetPlayerTagsRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminGetPlayerTagsRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminGetPlayerTagsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminGetPlayerTagsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminGetPlayerTagsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminGetPlayerTagsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminGetPlayerTagsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminGetPlayerTagsRequest"), sizeof(FAdminGetPlayerTagsRequest), Get_Z_Construct_UScriptStruct_FAdminGetPlayerTagsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminGetPlayerTagsRequest>()
{
	return FAdminGetPlayerTagsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminGetPlayerTagsRequest(FAdminGetPlayerTagsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminGetPlayerTagsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetPlayerTagsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetPlayerTagsRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminGetPlayerTagsRequest>(FName(TEXT("AdminGetPlayerTagsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminGetPlayerTagsRequest;
	struct Z_Construct_UScriptStruct_FAdminGetPlayerTagsRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetPlayerTagsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminGetPlayerTagsRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminGetPlayerTagsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminGetPlayerTagsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetPlayerTagsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetPlayerTagsRequest" },
		{ "ModuleRelativePath", "Public/AdminGetPlayerTagsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminGetPlayerTagsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetPlayerTagsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetPlayerTagsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetPlayerTagsRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetPlayerTagsRequest_Statics::NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetPlayerTagsRequest" },
		{ "ModuleRelativePath", "Public/AdminGetPlayerTagsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminGetPlayerTagsRequest_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetPlayerTagsRequest, Namespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetPlayerTagsRequest_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetPlayerTagsRequest_Statics::NewProp_Namespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetPlayerTagsRequest_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetPlayerTagsRequest" },
		{ "ModuleRelativePath", "Public/AdminGetPlayerTagsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminGetPlayerTagsRequest_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetPlayerTagsRequest, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetPlayerTagsRequest_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetPlayerTagsRequest_Statics::NewProp_PlayFabId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminGetPlayerTagsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetPlayerTagsRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetPlayerTagsRequest_Statics::NewProp_Namespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetPlayerTagsRequest_Statics::NewProp_PlayFabId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminGetPlayerTagsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminGetPlayerTagsRequest",
		sizeof(FAdminGetPlayerTagsRequest),
		alignof(FAdminGetPlayerTagsRequest),
		Z_Construct_UScriptStruct_FAdminGetPlayerTagsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetPlayerTagsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetPlayerTagsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetPlayerTagsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminGetPlayerTagsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminGetPlayerTagsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminGetPlayerTagsRequest"), sizeof(FAdminGetPlayerTagsRequest), Get_Z_Construct_UScriptStruct_FAdminGetPlayerTagsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminGetPlayerTagsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminGetPlayerTagsRequest_Hash() { return 3180683248U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
