// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerReportPlayerServerRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerReportPlayerServerRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerReportPlayerServerRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerReportPlayerServerRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerReportPlayerServerRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerReportPlayerServerRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerReportPlayerServerRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerReportPlayerServerRequest"), sizeof(FServerReportPlayerServerRequest), Get_Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerReportPlayerServerRequest>()
{
	return FServerReportPlayerServerRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerReportPlayerServerRequest(FServerReportPlayerServerRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerReportPlayerServerRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerReportPlayerServerRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerReportPlayerServerRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerReportPlayerServerRequest>(FName(TEXT("ServerReportPlayerServerRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerReportPlayerServerRequest;
	struct Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Comment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReporteeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReporteeId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReporterId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReporterId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerReportPlayerServerRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerReportPlayerServerRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Statics::NewProp_Comment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerReportPlayerServerRequest" },
		{ "ModuleRelativePath", "Public/ServerReportPlayerServerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerReportPlayerServerRequest, Comment), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Statics::NewProp_Comment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Statics::NewProp_Comment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerReportPlayerServerRequest" },
		{ "ModuleRelativePath", "Public/ServerReportPlayerServerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerReportPlayerServerRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Statics::NewProp_ReporteeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerReportPlayerServerRequest" },
		{ "ModuleRelativePath", "Public/ServerReportPlayerServerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Statics::NewProp_ReporteeId = { "ReporteeId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerReportPlayerServerRequest, ReporteeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Statics::NewProp_ReporteeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Statics::NewProp_ReporteeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Statics::NewProp_ReporterId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerReportPlayerServerRequest" },
		{ "ModuleRelativePath", "Public/ServerReportPlayerServerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Statics::NewProp_ReporterId = { "ReporterId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerReportPlayerServerRequest, ReporterId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Statics::NewProp_ReporterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Statics::NewProp_ReporterId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Statics::NewProp_Comment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Statics::NewProp_ReporteeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Statics::NewProp_ReporterId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerReportPlayerServerRequest",
		sizeof(FServerReportPlayerServerRequest),
		alignof(FServerReportPlayerServerRequest),
		Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerReportPlayerServerRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerReportPlayerServerRequest"), sizeof(FServerReportPlayerServerRequest), Get_Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerReportPlayerServerRequest_Hash() { return 495471587U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
