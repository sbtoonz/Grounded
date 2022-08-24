// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminAddServerBuildRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminAddServerBuildRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminAddServerBuildRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminAddServerBuildRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminAddServerBuildRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminAddServerBuildRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminAddServerBuildRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminAddServerBuildRequest"), sizeof(FAdminAddServerBuildRequest), Get_Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminAddServerBuildRequest>()
{
	return FAdminAddServerBuildRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminAddServerBuildRequest(FAdminAddServerBuildRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminAddServerBuildRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminAddServerBuildRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminAddServerBuildRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminAddServerBuildRequest>(FName(TEXT("AdminAddServerBuildRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminAddServerBuildRequest;
	struct Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveRegions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActiveRegions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommandLineTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CommandLineTemplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Comment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutablePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExecutablePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxGamesPerHost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxGamesPerHost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinFreeGameSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinFreeGameSlots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminAddServerBuildRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminAddServerBuildRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_ActiveRegions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminAddServerBuildRequest" },
		{ "ModuleRelativePath", "Public/AdminAddServerBuildRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_ActiveRegions = { "ActiveRegions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminAddServerBuildRequest, ActiveRegions), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_ActiveRegions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_ActiveRegions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_BuildId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminAddServerBuildRequest" },
		{ "ModuleRelativePath", "Public/AdminAddServerBuildRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_BuildId = { "BuildId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminAddServerBuildRequest, BuildId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_BuildId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_BuildId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_CommandLineTemplate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminAddServerBuildRequest" },
		{ "ModuleRelativePath", "Public/AdminAddServerBuildRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_CommandLineTemplate = { "CommandLineTemplate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminAddServerBuildRequest, CommandLineTemplate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_CommandLineTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_CommandLineTemplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_Comment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminAddServerBuildRequest" },
		{ "ModuleRelativePath", "Public/AdminAddServerBuildRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminAddServerBuildRequest, Comment), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_Comment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_Comment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminAddServerBuildRequest" },
		{ "ModuleRelativePath", "Public/AdminAddServerBuildRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminAddServerBuildRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_ExecutablePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminAddServerBuildRequest" },
		{ "ModuleRelativePath", "Public/AdminAddServerBuildRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_ExecutablePath = { "ExecutablePath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminAddServerBuildRequest, ExecutablePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_ExecutablePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_ExecutablePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_MaxGamesPerHost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminAddServerBuildRequest" },
		{ "ModuleRelativePath", "Public/AdminAddServerBuildRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_MaxGamesPerHost = { "MaxGamesPerHost", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminAddServerBuildRequest, MaxGamesPerHost), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_MaxGamesPerHost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_MaxGamesPerHost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_MinFreeGameSlots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminAddServerBuildRequest" },
		{ "ModuleRelativePath", "Public/AdminAddServerBuildRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_MinFreeGameSlots = { "MinFreeGameSlots", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminAddServerBuildRequest, MinFreeGameSlots), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_MinFreeGameSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_MinFreeGameSlots_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_ActiveRegions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_BuildId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_CommandLineTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_Comment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_ExecutablePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_MaxGamesPerHost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::NewProp_MinFreeGameSlots,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminAddServerBuildRequest",
		sizeof(FAdminAddServerBuildRequest),
		alignof(FAdminAddServerBuildRequest),
		Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminAddServerBuildRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminAddServerBuildRequest"), sizeof(FAdminAddServerBuildRequest), Get_Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminAddServerBuildRequest_Hash() { return 2613903430U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
