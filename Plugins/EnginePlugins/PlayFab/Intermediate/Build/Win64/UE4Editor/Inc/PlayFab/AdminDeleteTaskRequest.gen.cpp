// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminDeleteTaskRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminDeleteTaskRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminDeleteTaskRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminDeleteTaskRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminDeleteTaskRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminDeleteTaskRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminDeleteTaskRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminDeleteTaskRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminDeleteTaskRequest"), sizeof(FAdminDeleteTaskRequest), Get_Z_Construct_UScriptStruct_FAdminDeleteTaskRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminDeleteTaskRequest>()
{
	return FAdminDeleteTaskRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminDeleteTaskRequest(FAdminDeleteTaskRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminDeleteTaskRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminDeleteTaskRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminDeleteTaskRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminDeleteTaskRequest>(FName(TEXT("AdminDeleteTaskRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminDeleteTaskRequest;
	struct Z_Construct_UScriptStruct_FAdminDeleteTaskRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Identifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminDeleteTaskRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminDeleteTaskRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminDeleteTaskRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminDeleteTaskRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminDeleteTaskRequest_Statics::NewProp_Identifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminDeleteTaskRequest" },
		{ "ModuleRelativePath", "Public/AdminDeleteTaskRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminDeleteTaskRequest_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminDeleteTaskRequest, Identifier), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminDeleteTaskRequest_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminDeleteTaskRequest_Statics::NewProp_Identifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminDeleteTaskRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminDeleteTaskRequest_Statics::NewProp_Identifier,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminDeleteTaskRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminDeleteTaskRequest",
		sizeof(FAdminDeleteTaskRequest),
		alignof(FAdminDeleteTaskRequest),
		Z_Construct_UScriptStruct_FAdminDeleteTaskRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminDeleteTaskRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminDeleteTaskRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminDeleteTaskRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminDeleteTaskRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminDeleteTaskRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminDeleteTaskRequest"), sizeof(FAdminDeleteTaskRequest), Get_Z_Construct_UScriptStruct_FAdminDeleteTaskRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminDeleteTaskRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminDeleteTaskRequest_Hash() { return 2493430593U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
