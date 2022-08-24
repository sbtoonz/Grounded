// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminUpdatePolicyRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminUpdatePolicyRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminUpdatePolicyRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminUpdatePolicyRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminUpdatePolicyRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminUpdatePolicyRequest"), sizeof(FAdminUpdatePolicyRequest), Get_Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminUpdatePolicyRequest>()
{
	return FAdminUpdatePolicyRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminUpdatePolicyRequest(FAdminUpdatePolicyRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminUpdatePolicyRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminUpdatePolicyRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminUpdatePolicyRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminUpdatePolicyRequest>(FName(TEXT("AdminUpdatePolicyRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminUpdatePolicyRequest;
	struct Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverwritePolicy_MetaData[];
#endif
		static void NewProp_OverwritePolicy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OverwritePolicy;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminUpdatePolicyRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminUpdatePolicyRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Statics::NewProp_OverwritePolicy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminUpdatePolicyRequest" },
		{ "ModuleRelativePath", "Public/AdminUpdatePolicyRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Statics::NewProp_OverwritePolicy_SetBit(void* Obj)
	{
		((FAdminUpdatePolicyRequest*)Obj)->OverwritePolicy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Statics::NewProp_OverwritePolicy = { "OverwritePolicy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAdminUpdatePolicyRequest), &Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Statics::NewProp_OverwritePolicy_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Statics::NewProp_OverwritePolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Statics::NewProp_OverwritePolicy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Statics::NewProp_PolicyName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminUpdatePolicyRequest" },
		{ "ModuleRelativePath", "Public/AdminUpdatePolicyRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Statics::NewProp_PolicyName = { "PolicyName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminUpdatePolicyRequest, PolicyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Statics::NewProp_PolicyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Statics::NewProp_PolicyName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Statics::NewProp_Statements_Inner = { "Statements", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Statics::NewProp_Statements_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminUpdatePolicyRequest" },
		{ "ModuleRelativePath", "Public/AdminUpdatePolicyRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Statics::NewProp_Statements = { "Statements", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminUpdatePolicyRequest, Statements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Statics::NewProp_Statements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Statics::NewProp_Statements_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Statics::NewProp_OverwritePolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Statics::NewProp_PolicyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Statics::NewProp_Statements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Statics::NewProp_Statements,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminUpdatePolicyRequest",
		sizeof(FAdminUpdatePolicyRequest),
		alignof(FAdminUpdatePolicyRequest),
		Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminUpdatePolicyRequest"), sizeof(FAdminUpdatePolicyRequest), Get_Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminUpdatePolicyRequest_Hash() { return 1362459976U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
