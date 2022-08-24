// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminGetMatchmakerGameInfoRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminGetMatchmakerGameInfoRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminGetMatchmakerGameInfoRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminGetMatchmakerGameInfoRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminGetMatchmakerGameInfoRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminGetMatchmakerGameInfoRequest"), sizeof(FAdminGetMatchmakerGameInfoRequest), Get_Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminGetMatchmakerGameInfoRequest>()
{
	return FAdminGetMatchmakerGameInfoRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminGetMatchmakerGameInfoRequest(FAdminGetMatchmakerGameInfoRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminGetMatchmakerGameInfoRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetMatchmakerGameInfoRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetMatchmakerGameInfoRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminGetMatchmakerGameInfoRequest>(FName(TEXT("AdminGetMatchmakerGameInfoRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminGetMatchmakerGameInfoRequest;
	struct Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LobbyId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminGetMatchmakerGameInfoRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminGetMatchmakerGameInfoRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoRequest_Statics::NewProp_LobbyId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetMatchmakerGameInfoRequest" },
		{ "ModuleRelativePath", "Public/AdminGetMatchmakerGameInfoRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoRequest_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetMatchmakerGameInfoRequest, LobbyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoRequest_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoRequest_Statics::NewProp_LobbyId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoRequest_Statics::NewProp_LobbyId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminGetMatchmakerGameInfoRequest",
		sizeof(FAdminGetMatchmakerGameInfoRequest),
		alignof(FAdminGetMatchmakerGameInfoRequest),
		Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminGetMatchmakerGameInfoRequest"), sizeof(FAdminGetMatchmakerGameInfoRequest), Get_Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminGetMatchmakerGameInfoRequest_Hash() { return 607968019U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
