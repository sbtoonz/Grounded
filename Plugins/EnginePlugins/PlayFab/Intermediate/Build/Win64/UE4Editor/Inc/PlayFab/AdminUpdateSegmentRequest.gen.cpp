// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminUpdateSegmentRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminUpdateSegmentRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminUpdateSegmentRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminUpdateSegmentRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminUpdateSegmentRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminUpdateSegmentRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminUpdateSegmentRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminUpdateSegmentRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminUpdateSegmentRequest"), sizeof(FAdminUpdateSegmentRequest), Get_Z_Construct_UScriptStruct_FAdminUpdateSegmentRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminUpdateSegmentRequest>()
{
	return FAdminUpdateSegmentRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminUpdateSegmentRequest(FAdminUpdateSegmentRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminUpdateSegmentRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminUpdateSegmentRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminUpdateSegmentRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminUpdateSegmentRequest>(FName(TEXT("AdminUpdateSegmentRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminUpdateSegmentRequest;
	struct Z_Construct_UScriptStruct_FAdminUpdateSegmentRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SegmentModel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdateSegmentRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminUpdateSegmentRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminUpdateSegmentRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminUpdateSegmentRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdateSegmentRequest_Statics::NewProp_SegmentModel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminUpdateSegmentRequest" },
		{ "ModuleRelativePath", "Public/AdminUpdateSegmentRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminUpdateSegmentRequest_Statics::NewProp_SegmentModel = { "SegmentModel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminUpdateSegmentRequest, SegmentModel), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdateSegmentRequest_Statics::NewProp_SegmentModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdateSegmentRequest_Statics::NewProp_SegmentModel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminUpdateSegmentRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminUpdateSegmentRequest_Statics::NewProp_SegmentModel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminUpdateSegmentRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminUpdateSegmentRequest",
		sizeof(FAdminUpdateSegmentRequest),
		alignof(FAdminUpdateSegmentRequest),
		Z_Construct_UScriptStruct_FAdminUpdateSegmentRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdateSegmentRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdateSegmentRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdateSegmentRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminUpdateSegmentRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminUpdateSegmentRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminUpdateSegmentRequest"), sizeof(FAdminUpdateSegmentRequest), Get_Z_Construct_UScriptStruct_FAdminUpdateSegmentRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminUpdateSegmentRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminUpdateSegmentRequest_Hash() { return 715003619U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
