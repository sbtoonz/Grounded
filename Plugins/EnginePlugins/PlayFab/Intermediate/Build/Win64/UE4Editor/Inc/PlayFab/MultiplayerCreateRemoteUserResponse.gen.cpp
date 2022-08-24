// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MultiplayerCreateRemoteUserResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerCreateRemoteUserResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerCreateRemoteUserResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiplayerCreateRemoteUserResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FMultiplayerCreateRemoteUserResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FMultiplayerCreateRemoteUserResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMultiplayerCreateRemoteUserResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerCreateRemoteUserResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("MultiplayerCreateRemoteUserResponse"), sizeof(FMultiplayerCreateRemoteUserResponse), Get_Z_Construct_UScriptStruct_FMultiplayerCreateRemoteUserResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMultiplayerCreateRemoteUserResponse>()
{
	return FMultiplayerCreateRemoteUserResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiplayerCreateRemoteUserResponse(FMultiplayerCreateRemoteUserResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MultiplayerCreateRemoteUserResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerCreateRemoteUserResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerCreateRemoteUserResponse()
	{
		UScriptStruct::DeferCppStructOps<FMultiplayerCreateRemoteUserResponse>(FName(TEXT("MultiplayerCreateRemoteUserResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerCreateRemoteUserResponse;
	struct Z_Construct_UScriptStruct_FMultiplayerCreateRemoteUserResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpirationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExpirationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Username;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateRemoteUserResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateRemoteUserResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerCreateRemoteUserResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerCreateRemoteUserResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateRemoteUserResponse_Statics::NewProp_ExpirationTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateRemoteUserResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateRemoteUserResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateRemoteUserResponse_Statics::NewProp_ExpirationTime = { "ExpirationTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateRemoteUserResponse, ExpirationTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateRemoteUserResponse_Statics::NewProp_ExpirationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateRemoteUserResponse_Statics::NewProp_ExpirationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateRemoteUserResponse_Statics::NewProp_Password_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateRemoteUserResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateRemoteUserResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateRemoteUserResponse_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateRemoteUserResponse, Password), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateRemoteUserResponse_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateRemoteUserResponse_Statics::NewProp_Password_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateRemoteUserResponse_Statics::NewProp_Username_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateRemoteUserResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateRemoteUserResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateRemoteUserResponse_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateRemoteUserResponse, Username), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateRemoteUserResponse_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateRemoteUserResponse_Statics::NewProp_Username_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayerCreateRemoteUserResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateRemoteUserResponse_Statics::NewProp_ExpirationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateRemoteUserResponse_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateRemoteUserResponse_Statics::NewProp_Username,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerCreateRemoteUserResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"MultiplayerCreateRemoteUserResponse",
		sizeof(FMultiplayerCreateRemoteUserResponse),
		alignof(FMultiplayerCreateRemoteUserResponse),
		Z_Construct_UScriptStruct_FMultiplayerCreateRemoteUserResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateRemoteUserResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateRemoteUserResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateRemoteUserResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerCreateRemoteUserResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiplayerCreateRemoteUserResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiplayerCreateRemoteUserResponse"), sizeof(FMultiplayerCreateRemoteUserResponse), Get_Z_Construct_UScriptStruct_FMultiplayerCreateRemoteUserResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiplayerCreateRemoteUserResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiplayerCreateRemoteUserResponse_Hash() { return 2490811609U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
