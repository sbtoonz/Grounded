// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminGetDataReportRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminGetDataReportRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminGetDataReportRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminGetDataReportRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminGetDataReportRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminGetDataReportRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminGetDataReportRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminGetDataReportRequest"), sizeof(FAdminGetDataReportRequest), Get_Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminGetDataReportRequest>()
{
	return FAdminGetDataReportRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminGetDataReportRequest(FAdminGetDataReportRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminGetDataReportRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetDataReportRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetDataReportRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminGetDataReportRequest>(FName(TEXT("AdminGetDataReportRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminGetDataReportRequest;
	struct Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Day_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Day;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Month_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Month;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReportName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReportName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Year_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Year;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminGetDataReportRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminGetDataReportRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Statics::NewProp_Day_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetDataReportRequest" },
		{ "ModuleRelativePath", "Public/AdminGetDataReportRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Statics::NewProp_Day = { "Day", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetDataReportRequest, Day), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Statics::NewProp_Day_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Statics::NewProp_Day_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Statics::NewProp_Month_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetDataReportRequest" },
		{ "ModuleRelativePath", "Public/AdminGetDataReportRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Statics::NewProp_Month = { "Month", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetDataReportRequest, Month), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Statics::NewProp_Month_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Statics::NewProp_Month_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Statics::NewProp_ReportName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetDataReportRequest" },
		{ "ModuleRelativePath", "Public/AdminGetDataReportRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Statics::NewProp_ReportName = { "ReportName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetDataReportRequest, ReportName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Statics::NewProp_ReportName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Statics::NewProp_ReportName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Statics::NewProp_Year_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetDataReportRequest" },
		{ "ModuleRelativePath", "Public/AdminGetDataReportRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Statics::NewProp_Year = { "Year", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetDataReportRequest, Year), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Statics::NewProp_Year_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Statics::NewProp_Year_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Statics::NewProp_Day,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Statics::NewProp_Month,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Statics::NewProp_ReportName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Statics::NewProp_Year,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminGetDataReportRequest",
		sizeof(FAdminGetDataReportRequest),
		alignof(FAdminGetDataReportRequest),
		Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminGetDataReportRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminGetDataReportRequest"), sizeof(FAdminGetDataReportRequest), Get_Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminGetDataReportRequest_Hash() { return 2772470782U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
