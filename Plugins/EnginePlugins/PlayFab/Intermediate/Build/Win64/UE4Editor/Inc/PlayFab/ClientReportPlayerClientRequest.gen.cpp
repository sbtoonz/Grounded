// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientReportPlayerClientRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientReportPlayerClientRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientReportPlayerClientRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientReportPlayerClientRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientReportPlayerClientRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientReportPlayerClientRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientReportPlayerClientRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientReportPlayerClientRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientReportPlayerClientRequest"), sizeof(FClientReportPlayerClientRequest), Get_Z_Construct_UScriptStruct_FClientReportPlayerClientRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientReportPlayerClientRequest>()
{
	return FClientReportPlayerClientRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientReportPlayerClientRequest(FClientReportPlayerClientRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientReportPlayerClientRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientReportPlayerClientRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientReportPlayerClientRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientReportPlayerClientRequest>(FName(TEXT("ClientReportPlayerClientRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientReportPlayerClientRequest;
	struct Z_Construct_UScriptStruct_FClientReportPlayerClientRequest_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientReportPlayerClientRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientReportPlayerClientRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientReportPlayerClientRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientReportPlayerClientRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientReportPlayerClientRequest_Statics::NewProp_Comment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientReportPlayerClientRequest" },
		{ "ModuleRelativePath", "Public/ClientReportPlayerClientRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientReportPlayerClientRequest_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientReportPlayerClientRequest, Comment), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientReportPlayerClientRequest_Statics::NewProp_Comment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientReportPlayerClientRequest_Statics::NewProp_Comment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientReportPlayerClientRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientReportPlayerClientRequest" },
		{ "ModuleRelativePath", "Public/ClientReportPlayerClientRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientReportPlayerClientRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientReportPlayerClientRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientReportPlayerClientRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientReportPlayerClientRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientReportPlayerClientRequest_Statics::NewProp_ReporteeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientReportPlayerClientRequest" },
		{ "ModuleRelativePath", "Public/ClientReportPlayerClientRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientReportPlayerClientRequest_Statics::NewProp_ReporteeId = { "ReporteeId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientReportPlayerClientRequest, ReporteeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientReportPlayerClientRequest_Statics::NewProp_ReporteeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientReportPlayerClientRequest_Statics::NewProp_ReporteeId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientReportPlayerClientRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientReportPlayerClientRequest_Statics::NewProp_Comment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientReportPlayerClientRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientReportPlayerClientRequest_Statics::NewProp_ReporteeId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientReportPlayerClientRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientReportPlayerClientRequest",
		sizeof(FClientReportPlayerClientRequest),
		alignof(FClientReportPlayerClientRequest),
		Z_Construct_UScriptStruct_FClientReportPlayerClientRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientReportPlayerClientRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientReportPlayerClientRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientReportPlayerClientRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientReportPlayerClientRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientReportPlayerClientRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientReportPlayerClientRequest"), sizeof(FClientReportPlayerClientRequest), Get_Z_Construct_UScriptStruct_FClientReportPlayerClientRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientReportPlayerClientRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientReportPlayerClientRequest_Hash() { return 443522975U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
