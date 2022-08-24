// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/ChatterLink.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChatterLink() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FChatterLink();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FFlowChartLink();
// End Cross Module References

static_assert(std::is_polymorphic<FChatterLink>() == std::is_polymorphic<FFlowChartLink>(), "USTRUCT FChatterLink cannot be polymorphic unless super FFlowChartLink is polymorphic");

class UScriptStruct* FChatterLink::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FChatterLink_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChatterLink, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("ChatterLink"), sizeof(FChatterLink), Get_Z_Construct_UScriptStruct_FChatterLink_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FChatterLink>()
{
	return FChatterLink::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChatterLink(FChatterLink::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("ChatterLink"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFChatterLink
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFChatterLink()
	{
		UScriptStruct::DeferCppStructOps<FChatterLink>(FName(TEXT("ChatterLink")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFChatterLink;
	struct Z_Construct_UScriptStruct_FChatterLink_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RandomWeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatterLink_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChatterLink.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChatterLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChatterLink>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatterLink_Statics::NewProp_RandomWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatterLink" },
		{ "ModuleRelativePath", "Public/ChatterLink.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChatterLink_Statics::NewProp_RandomWeight = { "RandomWeight", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatterLink, RandomWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FChatterLink_Statics::NewProp_RandomWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatterLink_Statics::NewProp_RandomWeight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChatterLink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatterLink_Statics::NewProp_RandomWeight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChatterLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FFlowChartLink,
		&NewStructOps,
		"ChatterLink",
		sizeof(FChatterLink),
		alignof(FChatterLink),
		Z_Construct_UScriptStruct_FChatterLink_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatterLink_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChatterLink_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatterLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChatterLink()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChatterLink_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChatterLink"), sizeof(FChatterLink), Get_Z_Construct_UScriptStruct_FChatterLink_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChatterLink_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChatterLink_Hash() { return 1406263434U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
