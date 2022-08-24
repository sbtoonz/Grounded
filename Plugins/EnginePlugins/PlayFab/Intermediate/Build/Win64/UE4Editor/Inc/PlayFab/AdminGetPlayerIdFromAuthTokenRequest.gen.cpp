// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminGetPlayerIdFromAuthTokenRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminGetPlayerIdFromAuthTokenRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminGetPlayerIdFromAuthTokenRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EAuthTokenType();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminGetPlayerIdFromAuthTokenRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminGetPlayerIdFromAuthTokenRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminGetPlayerIdFromAuthTokenRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminGetPlayerIdFromAuthTokenRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminGetPlayerIdFromAuthTokenRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminGetPlayerIdFromAuthTokenRequest"), sizeof(FAdminGetPlayerIdFromAuthTokenRequest), Get_Z_Construct_UScriptStruct_FAdminGetPlayerIdFromAuthTokenRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminGetPlayerIdFromAuthTokenRequest>()
{
	return FAdminGetPlayerIdFromAuthTokenRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminGetPlayerIdFromAuthTokenRequest(FAdminGetPlayerIdFromAuthTokenRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminGetPlayerIdFromAuthTokenRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetPlayerIdFromAuthTokenRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetPlayerIdFromAuthTokenRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminGetPlayerIdFromAuthTokenRequest>(FName(TEXT("AdminGetPlayerIdFromAuthTokenRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminGetPlayerIdFromAuthTokenRequest;
	struct Z_Construct_UScriptStruct_FAdminGetPlayerIdFromAuthTokenRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Token;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TokenType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TokenType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TokenType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetPlayerIdFromAuthTokenRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminGetPlayerIdFromAuthTokenRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminGetPlayerIdFromAuthTokenRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminGetPlayerIdFromAuthTokenRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetPlayerIdFromAuthTokenRequest_Statics::NewProp_Token_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetPlayerIdFromAuthTokenRequest" },
		{ "ModuleRelativePath", "Public/AdminGetPlayerIdFromAuthTokenRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminGetPlayerIdFromAuthTokenRequest_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetPlayerIdFromAuthTokenRequest, Token), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetPlayerIdFromAuthTokenRequest_Statics::NewProp_Token_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetPlayerIdFromAuthTokenRequest_Statics::NewProp_Token_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAdminGetPlayerIdFromAuthTokenRequest_Statics::NewProp_TokenType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetPlayerIdFromAuthTokenRequest_Statics::NewProp_TokenType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetPlayerIdFromAuthTokenRequest" },
		{ "ModuleRelativePath", "Public/AdminGetPlayerIdFromAuthTokenRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAdminGetPlayerIdFromAuthTokenRequest_Statics::NewProp_TokenType = { "TokenType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetPlayerIdFromAuthTokenRequest, TokenType), Z_Construct_UEnum_PlayFab_EAuthTokenType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetPlayerIdFromAuthTokenRequest_Statics::NewProp_TokenType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetPlayerIdFromAuthTokenRequest_Statics::NewProp_TokenType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminGetPlayerIdFromAuthTokenRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetPlayerIdFromAuthTokenRequest_Statics::NewProp_Token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetPlayerIdFromAuthTokenRequest_Statics::NewProp_TokenType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetPlayerIdFromAuthTokenRequest_Statics::NewProp_TokenType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminGetPlayerIdFromAuthTokenRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminGetPlayerIdFromAuthTokenRequest",
		sizeof(FAdminGetPlayerIdFromAuthTokenRequest),
		alignof(FAdminGetPlayerIdFromAuthTokenRequest),
		Z_Construct_UScriptStruct_FAdminGetPlayerIdFromAuthTokenRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetPlayerIdFromAuthTokenRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetPlayerIdFromAuthTokenRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetPlayerIdFromAuthTokenRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminGetPlayerIdFromAuthTokenRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminGetPlayerIdFromAuthTokenRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminGetPlayerIdFromAuthTokenRequest"), sizeof(FAdminGetPlayerIdFromAuthTokenRequest), Get_Z_Construct_UScriptStruct_FAdminGetPlayerIdFromAuthTokenRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminGetPlayerIdFromAuthTokenRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminGetPlayerIdFromAuthTokenRequest_Hash() { return 3261092659U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
