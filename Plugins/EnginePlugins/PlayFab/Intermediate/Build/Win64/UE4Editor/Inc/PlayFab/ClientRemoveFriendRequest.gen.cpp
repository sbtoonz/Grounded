// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientRemoveFriendRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientRemoveFriendRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientRemoveFriendRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientRemoveFriendRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientRemoveFriendRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientRemoveFriendRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientRemoveFriendRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientRemoveFriendRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientRemoveFriendRequest"), sizeof(FClientRemoveFriendRequest), Get_Z_Construct_UScriptStruct_FClientRemoveFriendRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientRemoveFriendRequest>()
{
	return FClientRemoveFriendRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientRemoveFriendRequest(FClientRemoveFriendRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientRemoveFriendRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientRemoveFriendRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientRemoveFriendRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientRemoveFriendRequest>(FName(TEXT("ClientRemoveFriendRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientRemoveFriendRequest;
	struct Z_Construct_UScriptStruct_FClientRemoveFriendRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendPlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendPlayFabId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientRemoveFriendRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientRemoveFriendRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientRemoveFriendRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientRemoveFriendRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientRemoveFriendRequest_Statics::NewProp_FriendPlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientRemoveFriendRequest" },
		{ "ModuleRelativePath", "Public/ClientRemoveFriendRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientRemoveFriendRequest_Statics::NewProp_FriendPlayFabId = { "FriendPlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientRemoveFriendRequest, FriendPlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientRemoveFriendRequest_Statics::NewProp_FriendPlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRemoveFriendRequest_Statics::NewProp_FriendPlayFabId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientRemoveFriendRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientRemoveFriendRequest_Statics::NewProp_FriendPlayFabId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientRemoveFriendRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientRemoveFriendRequest",
		sizeof(FClientRemoveFriendRequest),
		alignof(FClientRemoveFriendRequest),
		Z_Construct_UScriptStruct_FClientRemoveFriendRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRemoveFriendRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientRemoveFriendRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRemoveFriendRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientRemoveFriendRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientRemoveFriendRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientRemoveFriendRequest"), sizeof(FClientRemoveFriendRequest), Get_Z_Construct_UScriptStruct_FClientRemoveFriendRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientRemoveFriendRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientRemoveFriendRequest_Hash() { return 1375170194U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
