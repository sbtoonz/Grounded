// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MultiplayerCreateTitleMultiplayerServersQuotaChangeRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("MultiplayerCreateTitleMultiplayerServersQuotaChangeRequest"), sizeof(FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest), Get_Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest>()
{
	return FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest(FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MultiplayerCreateTitleMultiplayerServersQuotaChangeRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest()
	{
		UScriptStruct::DeferCppStructOps<FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest>(FName(TEXT("MultiplayerCreateTitleMultiplayerServersQuotaChangeRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest;
	struct Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangeDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChangeDescription;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Changes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Changes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Changes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContactEmail_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContactEmail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Notes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Notes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartDate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateTitleMultiplayerServersQuotaChangeRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_ChangeDescription_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateTitleMultiplayerServersQuotaChangeRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateTitleMultiplayerServersQuotaChangeRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_ChangeDescription = { "ChangeDescription", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest, ChangeDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_ChangeDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_ChangeDescription_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_Changes_Inner = { "Changes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_Changes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateTitleMultiplayerServersQuotaChangeRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateTitleMultiplayerServersQuotaChangeRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_Changes = { "Changes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest, Changes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_Changes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_Changes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_ContactEmail_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateTitleMultiplayerServersQuotaChangeRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateTitleMultiplayerServersQuotaChangeRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_ContactEmail = { "ContactEmail", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest, ContactEmail), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_ContactEmail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_ContactEmail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateTitleMultiplayerServersQuotaChangeRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateTitleMultiplayerServersQuotaChangeRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_Notes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateTitleMultiplayerServersQuotaChangeRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateTitleMultiplayerServersQuotaChangeRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_Notes = { "Notes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest, Notes), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_Notes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_Notes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_StartDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateTitleMultiplayerServersQuotaChangeRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateTitleMultiplayerServersQuotaChangeRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_StartDate = { "StartDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest, StartDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_StartDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_StartDate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_ChangeDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_Changes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_Changes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_ContactEmail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_Notes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_StartDate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"MultiplayerCreateTitleMultiplayerServersQuotaChangeRequest",
		sizeof(FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest),
		alignof(FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest),
		Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiplayerCreateTitleMultiplayerServersQuotaChangeRequest"), sizeof(FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest), Get_Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest_Hash() { return 3053810421U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
