// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/GroupsIsMemberResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroupsIsMemberResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsIsMemberResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FGroupsIsMemberResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsIsMemberResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FGroupsIsMemberResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsIsMemberResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsIsMemberResponse"), sizeof(FGroupsIsMemberResponse), Get_Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsIsMemberResponse>()
{
	return FGroupsIsMemberResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsIsMemberResponse(FGroupsIsMemberResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsIsMemberResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsIsMemberResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsIsMemberResponse()
	{
		UScriptStruct::DeferCppStructOps<FGroupsIsMemberResponse>(FName(TEXT("GroupsIsMemberResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsIsMemberResponse;
	struct Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsMember_MetaData[];
#endif
		static void NewProp_IsMember_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsMember;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroupsIsMemberResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsIsMemberResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::NewProp_IsMember_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GroupsIsMemberResponse" },
		{ "ModuleRelativePath", "Public/GroupsIsMemberResponse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::NewProp_IsMember_SetBit(void* Obj)
	{
		((FGroupsIsMemberResponse*)Obj)->IsMember = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::NewProp_IsMember = { "IsMember", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGroupsIsMemberResponse), &Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::NewProp_IsMember_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::NewProp_IsMember_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::NewProp_IsMember_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::NewProp_IsMember,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsIsMemberResponse",
		sizeof(FGroupsIsMemberResponse),
		alignof(FGroupsIsMemberResponse),
		Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsIsMemberResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsIsMemberResponse"), sizeof(FGroupsIsMemberResponse), Get_Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsIsMemberResponse_Hash() { return 2103438747U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
