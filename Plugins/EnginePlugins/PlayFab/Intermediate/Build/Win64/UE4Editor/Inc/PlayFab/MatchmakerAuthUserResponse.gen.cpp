// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MatchmakerAuthUserResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchmakerAuthUserResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FMatchmakerAuthUserResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FMatchmakerAuthUserResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FMatchmakerAuthUserResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("MatchmakerAuthUserResponse"), sizeof(FMatchmakerAuthUserResponse), Get_Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMatchmakerAuthUserResponse>()
{
	return FMatchmakerAuthUserResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchmakerAuthUserResponse(FMatchmakerAuthUserResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MatchmakerAuthUserResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerAuthUserResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerAuthUserResponse()
	{
		UScriptStruct::DeferCppStructOps<FMatchmakerAuthUserResponse>(FName(TEXT("MatchmakerAuthUserResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerAuthUserResponse;
	struct Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Authorized_MetaData[];
#endif
		static void NewProp_Authorized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Authorized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MatchmakerAuthUserResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerAuthUserResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_Authorized_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchmakerAuthUserResponse" },
		{ "ModuleRelativePath", "Public/MatchmakerAuthUserResponse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_Authorized_SetBit(void* Obj)
	{
		((FMatchmakerAuthUserResponse*)Obj)->Authorized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_Authorized = { "Authorized", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMatchmakerAuthUserResponse), &Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_Authorized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_Authorized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_Authorized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchmakerAuthUserResponse" },
		{ "ModuleRelativePath", "Public/MatchmakerAuthUserResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerAuthUserResponse, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_PlayFabId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_Authorized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::NewProp_PlayFabId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"MatchmakerAuthUserResponse",
		sizeof(FMatchmakerAuthUserResponse),
		alignof(FMatchmakerAuthUserResponse),
		Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchmakerAuthUserResponse"), sizeof(FMatchmakerAuthUserResponse), Get_Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchmakerAuthUserResponse_Hash() { return 685690964U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
