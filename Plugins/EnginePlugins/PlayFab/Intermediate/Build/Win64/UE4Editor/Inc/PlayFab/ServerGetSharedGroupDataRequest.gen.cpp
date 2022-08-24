// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerGetSharedGroupDataRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerGetSharedGroupDataRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FServerGetSharedGroupDataRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerGetSharedGroupDataRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerGetSharedGroupDataRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerGetSharedGroupDataRequest"), sizeof(FServerGetSharedGroupDataRequest), Get_Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerGetSharedGroupDataRequest>()
{
	return FServerGetSharedGroupDataRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerGetSharedGroupDataRequest(FServerGetSharedGroupDataRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerGetSharedGroupDataRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerGetSharedGroupDataRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerGetSharedGroupDataRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerGetSharedGroupDataRequest>(FName(TEXT("ServerGetSharedGroupDataRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerGetSharedGroupDataRequest;
	struct Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetMembers_MetaData[];
#endif
		static void NewProp_GetMembers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_GetMembers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Keys;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedGroupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SharedGroupId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerGetSharedGroupDataRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerGetSharedGroupDataRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest_Statics::NewProp_GetMembers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetSharedGroupDataRequest" },
		{ "ModuleRelativePath", "Public/ServerGetSharedGroupDataRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest_Statics::NewProp_GetMembers_SetBit(void* Obj)
	{
		((FServerGetSharedGroupDataRequest*)Obj)->GetMembers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest_Statics::NewProp_GetMembers = { "GetMembers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FServerGetSharedGroupDataRequest), &Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest_Statics::NewProp_GetMembers_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest_Statics::NewProp_GetMembers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest_Statics::NewProp_GetMembers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest_Statics::NewProp_Keys_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetSharedGroupDataRequest" },
		{ "ModuleRelativePath", "Public/ServerGetSharedGroupDataRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetSharedGroupDataRequest, Keys), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest_Statics::NewProp_Keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest_Statics::NewProp_Keys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest_Statics::NewProp_SharedGroupId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetSharedGroupDataRequest" },
		{ "ModuleRelativePath", "Public/ServerGetSharedGroupDataRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest_Statics::NewProp_SharedGroupId = { "SharedGroupId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetSharedGroupDataRequest, SharedGroupId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest_Statics::NewProp_SharedGroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest_Statics::NewProp_SharedGroupId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest_Statics::NewProp_GetMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest_Statics::NewProp_Keys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest_Statics::NewProp_SharedGroupId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerGetSharedGroupDataRequest",
		sizeof(FServerGetSharedGroupDataRequest),
		alignof(FServerGetSharedGroupDataRequest),
		Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerGetSharedGroupDataRequest"), sizeof(FServerGetSharedGroupDataRequest), Get_Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerGetSharedGroupDataRequest_Hash() { return 1031560234U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
