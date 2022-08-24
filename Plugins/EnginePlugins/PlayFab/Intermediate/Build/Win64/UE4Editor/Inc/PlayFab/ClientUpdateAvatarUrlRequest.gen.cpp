// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientUpdateAvatarUrlRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientUpdateAvatarUrlRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientUpdateAvatarUrlRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientUpdateAvatarUrlRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientUpdateAvatarUrlRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientUpdateAvatarUrlRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientUpdateAvatarUrlRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientUpdateAvatarUrlRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientUpdateAvatarUrlRequest"), sizeof(FClientUpdateAvatarUrlRequest), Get_Z_Construct_UScriptStruct_FClientUpdateAvatarUrlRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientUpdateAvatarUrlRequest>()
{
	return FClientUpdateAvatarUrlRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientUpdateAvatarUrlRequest(FClientUpdateAvatarUrlRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientUpdateAvatarUrlRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientUpdateAvatarUrlRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientUpdateAvatarUrlRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientUpdateAvatarUrlRequest>(FName(TEXT("ClientUpdateAvatarUrlRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientUpdateAvatarUrlRequest;
	struct Z_Construct_UScriptStruct_FClientUpdateAvatarUrlRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImageUrl;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientUpdateAvatarUrlRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientUpdateAvatarUrlRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientUpdateAvatarUrlRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientUpdateAvatarUrlRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientUpdateAvatarUrlRequest_Statics::NewProp_ImageUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientUpdateAvatarUrlRequest" },
		{ "ModuleRelativePath", "Public/ClientUpdateAvatarUrlRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientUpdateAvatarUrlRequest_Statics::NewProp_ImageUrl = { "ImageUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientUpdateAvatarUrlRequest, ImageUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientUpdateAvatarUrlRequest_Statics::NewProp_ImageUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientUpdateAvatarUrlRequest_Statics::NewProp_ImageUrl_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientUpdateAvatarUrlRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientUpdateAvatarUrlRequest_Statics::NewProp_ImageUrl,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientUpdateAvatarUrlRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientUpdateAvatarUrlRequest",
		sizeof(FClientUpdateAvatarUrlRequest),
		alignof(FClientUpdateAvatarUrlRequest),
		Z_Construct_UScriptStruct_FClientUpdateAvatarUrlRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientUpdateAvatarUrlRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientUpdateAvatarUrlRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientUpdateAvatarUrlRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientUpdateAvatarUrlRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientUpdateAvatarUrlRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientUpdateAvatarUrlRequest"), sizeof(FClientUpdateAvatarUrlRequest), Get_Z_Construct_UScriptStruct_FClientUpdateAvatarUrlRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientUpdateAvatarUrlRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientUpdateAvatarUrlRequest_Hash() { return 2675983448U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
