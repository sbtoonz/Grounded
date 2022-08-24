// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminUpdatePolicyResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminUpdatePolicyResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminUpdatePolicyResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminUpdatePolicyResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAdminUpdatePolicyResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAdminUpdatePolicyResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminUpdatePolicyResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminUpdatePolicyResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminUpdatePolicyResponse"), sizeof(FAdminUpdatePolicyResponse), Get_Z_Construct_UScriptStruct_FAdminUpdatePolicyResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminUpdatePolicyResponse>()
{
	return FAdminUpdatePolicyResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminUpdatePolicyResponse(FAdminUpdatePolicyResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminUpdatePolicyResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminUpdatePolicyResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminUpdatePolicyResponse()
	{
		UScriptStruct::DeferCppStructOps<FAdminUpdatePolicyResponse>(FName(TEXT("AdminUpdatePolicyResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminUpdatePolicyResponse;
	struct Z_Construct_UScriptStruct_FAdminUpdatePolicyResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolicyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PolicyName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Statements_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Statements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Statements;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdatePolicyResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminUpdatePolicyResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminUpdatePolicyResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminUpdatePolicyResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdatePolicyResponse_Statics::NewProp_PolicyName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminUpdatePolicyResponse" },
		{ "ModuleRelativePath", "Public/AdminUpdatePolicyResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminUpdatePolicyResponse_Statics::NewProp_PolicyName = { "PolicyName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminUpdatePolicyResponse, PolicyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdatePolicyResponse_Statics::NewProp_PolicyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdatePolicyResponse_Statics::NewProp_PolicyName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminUpdatePolicyResponse_Statics::NewProp_Statements_Inner = { "Statements", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdatePolicyResponse_Statics::NewProp_Statements_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminUpdatePolicyResponse" },
		{ "ModuleRelativePath", "Public/AdminUpdatePolicyResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAdminUpdatePolicyResponse_Statics::NewProp_Statements = { "Statements", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminUpdatePolicyResponse, Statements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdatePolicyResponse_Statics::NewProp_Statements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdatePolicyResponse_Statics::NewProp_Statements_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminUpdatePolicyResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminUpdatePolicyResponse_Statics::NewProp_PolicyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminUpdatePolicyResponse_Statics::NewProp_Statements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminUpdatePolicyResponse_Statics::NewProp_Statements,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminUpdatePolicyResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AdminUpdatePolicyResponse",
		sizeof(FAdminUpdatePolicyResponse),
		alignof(FAdminUpdatePolicyResponse),
		Z_Construct_UScriptStruct_FAdminUpdatePolicyResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdatePolicyResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdatePolicyResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdatePolicyResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminUpdatePolicyResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminUpdatePolicyResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminUpdatePolicyResponse"), sizeof(FAdminUpdatePolicyResponse), Get_Z_Construct_UScriptStruct_FAdminUpdatePolicyResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminUpdatePolicyResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminUpdatePolicyResponse_Hash() { return 1827766421U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
