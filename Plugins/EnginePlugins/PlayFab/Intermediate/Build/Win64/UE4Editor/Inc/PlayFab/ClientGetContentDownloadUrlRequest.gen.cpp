// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientGetContentDownloadUrlRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientGetContentDownloadUrlRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientGetContentDownloadUrlRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientGetContentDownloadUrlRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientGetContentDownloadUrlRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientGetContentDownloadUrlRequest"), sizeof(FClientGetContentDownloadUrlRequest), Get_Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientGetContentDownloadUrlRequest>()
{
	return FClientGetContentDownloadUrlRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientGetContentDownloadUrlRequest(FClientGetContentDownloadUrlRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientGetContentDownloadUrlRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientGetContentDownloadUrlRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientGetContentDownloadUrlRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientGetContentDownloadUrlRequest>(FName(TEXT("ClientGetContentDownloadUrlRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientGetContentDownloadUrlRequest;
	struct Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HttpMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HttpMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThruCDN_MetaData[];
#endif
		static void NewProp_ThruCDN_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ThruCDN;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientGetContentDownloadUrlRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientGetContentDownloadUrlRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest_Statics::NewProp_HttpMethod_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetContentDownloadUrlRequest" },
		{ "ModuleRelativePath", "Public/ClientGetContentDownloadUrlRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest_Statics::NewProp_HttpMethod = { "HttpMethod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetContentDownloadUrlRequest, HttpMethod), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest_Statics::NewProp_HttpMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest_Statics::NewProp_HttpMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest_Statics::NewProp_Key_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetContentDownloadUrlRequest" },
		{ "ModuleRelativePath", "Public/ClientGetContentDownloadUrlRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetContentDownloadUrlRequest, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest_Statics::NewProp_ThruCDN_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetContentDownloadUrlRequest" },
		{ "ModuleRelativePath", "Public/ClientGetContentDownloadUrlRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest_Statics::NewProp_ThruCDN_SetBit(void* Obj)
	{
		((FClientGetContentDownloadUrlRequest*)Obj)->ThruCDN = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest_Statics::NewProp_ThruCDN = { "ThruCDN", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FClientGetContentDownloadUrlRequest), &Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest_Statics::NewProp_ThruCDN_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest_Statics::NewProp_ThruCDN_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest_Statics::NewProp_ThruCDN_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest_Statics::NewProp_HttpMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest_Statics::NewProp_ThruCDN,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientGetContentDownloadUrlRequest",
		sizeof(FClientGetContentDownloadUrlRequest),
		alignof(FClientGetContentDownloadUrlRequest),
		Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientGetContentDownloadUrlRequest"), sizeof(FClientGetContentDownloadUrlRequest), Get_Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientGetContentDownloadUrlRequest_Hash() { return 1080373369U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
