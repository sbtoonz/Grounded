// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminGetCloudScriptRevisionRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminGetCloudScriptRevisionRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminGetCloudScriptRevisionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminGetCloudScriptRevisionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminGetCloudScriptRevisionRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminGetCloudScriptRevisionRequest"), sizeof(FAdminGetCloudScriptRevisionRequest), Get_Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminGetCloudScriptRevisionRequest>()
{
	return FAdminGetCloudScriptRevisionRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminGetCloudScriptRevisionRequest(FAdminGetCloudScriptRevisionRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminGetCloudScriptRevisionRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetCloudScriptRevisionRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetCloudScriptRevisionRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminGetCloudScriptRevisionRequest>(FName(TEXT("AdminGetCloudScriptRevisionRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminGetCloudScriptRevisionRequest;
	struct Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminGetCloudScriptRevisionRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminGetCloudScriptRevisionRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionRequest_Statics::NewProp_Revision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetCloudScriptRevisionRequest" },
		{ "ModuleRelativePath", "Public/AdminGetCloudScriptRevisionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionRequest_Statics::NewProp_Revision = { "Revision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetCloudScriptRevisionRequest, Revision), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionRequest_Statics::NewProp_Revision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionRequest_Statics::NewProp_Revision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionRequest_Statics::NewProp_Version_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetCloudScriptRevisionRequest" },
		{ "ModuleRelativePath", "Public/AdminGetCloudScriptRevisionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionRequest_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetCloudScriptRevisionRequest, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionRequest_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionRequest_Statics::NewProp_Version_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionRequest_Statics::NewProp_Revision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionRequest_Statics::NewProp_Version,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminGetCloudScriptRevisionRequest",
		sizeof(FAdminGetCloudScriptRevisionRequest),
		alignof(FAdminGetCloudScriptRevisionRequest),
		Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminGetCloudScriptRevisionRequest"), sizeof(FAdminGetCloudScriptRevisionRequest), Get_Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminGetCloudScriptRevisionRequest_Hash() { return 3501822U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif