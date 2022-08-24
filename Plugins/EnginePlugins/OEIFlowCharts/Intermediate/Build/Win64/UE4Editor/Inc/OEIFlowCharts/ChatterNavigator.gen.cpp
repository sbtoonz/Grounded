// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/ChatterNavigator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChatterNavigator() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FChatterNavigator();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FFlowChartNavigator();
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UChatterAsset_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FChatterNavigator>() == std::is_polymorphic<FFlowChartNavigator>(), "USTRUCT FChatterNavigator cannot be polymorphic unless super FFlowChartNavigator is polymorphic");

class UScriptStruct* FChatterNavigator::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FChatterNavigator_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChatterNavigator, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("ChatterNavigator"), sizeof(FChatterNavigator), Get_Z_Construct_UScriptStruct_FChatterNavigator_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FChatterNavigator>()
{
	return FChatterNavigator::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChatterNavigator(FChatterNavigator::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("ChatterNavigator"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFChatterNavigator
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFChatterNavigator()
	{
		UScriptStruct::DeferCppStructOps<FChatterNavigator>(FName(TEXT("ChatterNavigator")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFChatterNavigator;
	struct Z_Construct_UScriptStruct_FChatterNavigator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatterAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChatterAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatterNavigator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChatterNavigator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChatterNavigator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChatterNavigator>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatterNavigator_Statics::NewProp_ChatterAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatterNavigator" },
		{ "ModuleRelativePath", "Public/ChatterNavigator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FChatterNavigator_Statics::NewProp_ChatterAsset = { "ChatterAsset", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatterNavigator, ChatterAsset), Z_Construct_UClass_UChatterAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatterNavigator_Statics::NewProp_ChatterAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatterNavigator_Statics::NewProp_ChatterAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChatterNavigator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatterNavigator_Statics::NewProp_ChatterAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChatterNavigator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FFlowChartNavigator,
		&NewStructOps,
		"ChatterNavigator",
		sizeof(FChatterNavigator),
		alignof(FChatterNavigator),
		Z_Construct_UScriptStruct_FChatterNavigator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatterNavigator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChatterNavigator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatterNavigator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChatterNavigator()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChatterNavigator_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChatterNavigator"), sizeof(FChatterNavigator), Get_Z_Construct_UScriptStruct_FChatterNavigator_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChatterNavigator_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChatterNavigator_Hash() { return 840214778U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
