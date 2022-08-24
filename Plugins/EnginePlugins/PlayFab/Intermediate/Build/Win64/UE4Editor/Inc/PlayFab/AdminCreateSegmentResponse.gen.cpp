// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminCreateSegmentResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminCreateSegmentResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminCreateSegmentResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminCreateSegmentResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAdminCreateSegmentResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAdminCreateSegmentResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminCreateSegmentResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminCreateSegmentResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminCreateSegmentResponse"), sizeof(FAdminCreateSegmentResponse), Get_Z_Construct_UScriptStruct_FAdminCreateSegmentResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminCreateSegmentResponse>()
{
	return FAdminCreateSegmentResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminCreateSegmentResponse(FAdminCreateSegmentResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminCreateSegmentResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminCreateSegmentResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminCreateSegmentResponse()
	{
		UScriptStruct::DeferCppStructOps<FAdminCreateSegmentResponse>(FName(TEXT("AdminCreateSegmentResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminCreateSegmentResponse;
	struct Z_Construct_UScriptStruct_FAdminCreateSegmentResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SegmentId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminCreateSegmentResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminCreateSegmentResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminCreateSegmentResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminCreateSegmentResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminCreateSegmentResponse_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminCreateSegmentResponse" },
		{ "ModuleRelativePath", "Public/AdminCreateSegmentResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminCreateSegmentResponse_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminCreateSegmentResponse, ErrorMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminCreateSegmentResponse_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCreateSegmentResponse_Statics::NewProp_ErrorMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminCreateSegmentResponse_Statics::NewProp_SegmentId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminCreateSegmentResponse" },
		{ "ModuleRelativePath", "Public/AdminCreateSegmentResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminCreateSegmentResponse_Statics::NewProp_SegmentId = { "SegmentId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminCreateSegmentResponse, SegmentId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminCreateSegmentResponse_Statics::NewProp_SegmentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCreateSegmentResponse_Statics::NewProp_SegmentId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminCreateSegmentResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminCreateSegmentResponse_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminCreateSegmentResponse_Statics::NewProp_SegmentId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminCreateSegmentResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AdminCreateSegmentResponse",
		sizeof(FAdminCreateSegmentResponse),
		alignof(FAdminCreateSegmentResponse),
		Z_Construct_UScriptStruct_FAdminCreateSegmentResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCreateSegmentResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminCreateSegmentResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCreateSegmentResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminCreateSegmentResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminCreateSegmentResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminCreateSegmentResponse"), sizeof(FAdminCreateSegmentResponse), Get_Z_Construct_UScriptStruct_FAdminCreateSegmentResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminCreateSegmentResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminCreateSegmentResponse_Hash() { return 2979930188U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
