// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/FlowChartNavigator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowChartNavigator() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FFlowChartNavigator();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
// End Cross Module References
class UScriptStruct* FFlowChartNavigator::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FFlowChartNavigator_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowChartNavigator, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("FlowChartNavigator"), sizeof(FFlowChartNavigator), Get_Z_Construct_UScriptStruct_FFlowChartNavigator_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FFlowChartNavigator>()
{
	return FFlowChartNavigator::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFlowChartNavigator(FFlowChartNavigator::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("FlowChartNavigator"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFFlowChartNavigator
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFFlowChartNavigator()
	{
		UScriptStruct::DeferCppStructOps<FFlowChartNavigator>(FName(TEXT("FlowChartNavigator")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFFlowChartNavigator;
	struct Z_Construct_UScriptStruct_FFlowChartNavigator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowChartNavigator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FlowChartNavigator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlowChartNavigator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowChartNavigator>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowChartNavigator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		nullptr,
		&NewStructOps,
		"FlowChartNavigator",
		sizeof(FFlowChartNavigator),
		alignof(FFlowChartNavigator),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowChartNavigator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowChartNavigator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlowChartNavigator()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFlowChartNavigator_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FlowChartNavigator"), sizeof(FFlowChartNavigator), Get_Z_Construct_UScriptStruct_FFlowChartNavigator_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFlowChartNavigator_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFlowChartNavigator_Hash() { return 3461008574U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
