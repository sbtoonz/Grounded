// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientGetAccountInfoRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientGetAccountInfoRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientGetAccountInfoRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientGetAccountInfoRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientGetAccountInfoRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientGetAccountInfoRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientGetAccountInfoRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientGetAccountInfoRequest"), sizeof(FClientGetAccountInfoRequest), Get_Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientGetAccountInfoRequest>()
{
	return FClientGetAccountInfoRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientGetAccountInfoRequest(FClientGetAccountInfoRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientGetAccountInfoRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientGetAccountInfoRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientGetAccountInfoRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientGetAccountInfoRequest>(FName(TEXT("ClientGetAccountInfoRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientGetAccountInfoRequest;
	struct Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Email;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TitleDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Username;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientGetAccountInfoRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientGetAccountInfoRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Statics::NewProp_Email_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetAccountInfoRequest" },
		{ "ModuleRelativePath", "Public/ClientGetAccountInfoRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetAccountInfoRequest, Email), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Statics::NewProp_Email_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetAccountInfoRequest" },
		{ "ModuleRelativePath", "Public/ClientGetAccountInfoRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetAccountInfoRequest, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Statics::NewProp_PlayFabId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Statics::NewProp_TitleDisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetAccountInfoRequest" },
		{ "ModuleRelativePath", "Public/ClientGetAccountInfoRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Statics::NewProp_TitleDisplayName = { "TitleDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetAccountInfoRequest, TitleDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Statics::NewProp_TitleDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Statics::NewProp_TitleDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Statics::NewProp_Username_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetAccountInfoRequest" },
		{ "ModuleRelativePath", "Public/ClientGetAccountInfoRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetAccountInfoRequest, Username), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Statics::NewProp_Username_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Statics::NewProp_Email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Statics::NewProp_PlayFabId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Statics::NewProp_TitleDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Statics::NewProp_Username,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientGetAccountInfoRequest",
		sizeof(FClientGetAccountInfoRequest),
		alignof(FClientGetAccountInfoRequest),
		Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientGetAccountInfoRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientGetAccountInfoRequest"), sizeof(FClientGetAccountInfoRequest), Get_Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientGetAccountInfoRequest_Hash() { return 1036735762U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
