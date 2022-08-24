// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/FlowChartLink.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowChartLink() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FFlowChartLink();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
// End Cross Module References
class UScriptStruct* FFlowChartLink::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FFlowChartLink_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowChartLink, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("FlowChartLink"), sizeof(FFlowChartLink), Get_Z_Construct_UScriptStruct_FFlowChartLink_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FFlowChartLink>()
{
	return FFlowChartLink::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFlowChartLink(FFlowChartLink::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("FlowChartLink"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFFlowChartLink
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFFlowChartLink()
	{
		UScriptStruct::DeferCppStructOps<FFlowChartLink>(FName(TEXT("FlowChartLink")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFFlowChartLink;
	struct Z_Construct_UScriptStruct_FFlowChartLink_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromNodeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FromNodeID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToNodeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ToNodeID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConditionalIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConditionalIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowChartLink_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FlowChartLink.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlowChartLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowChartLink>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowChartLink_Statics::NewProp_FromNodeID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlowChartLink" },
		{ "ModuleRelativePath", "Public/FlowChartLink.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFlowChartLink_Statics::NewProp_FromNodeID = { "FromNodeID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowChartLink, FromNodeID), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowChartLink_Statics::NewProp_FromNodeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowChartLink_Statics::NewProp_FromNodeID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowChartLink_Statics::NewProp_ToNodeID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlowChartLink" },
		{ "ModuleRelativePath", "Public/FlowChartLink.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFlowChartLink_Statics::NewProp_ToNodeID = { "ToNodeID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowChartLink, ToNodeID), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowChartLink_Statics::NewProp_ToNodeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowChartLink_Statics::NewProp_ToNodeID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowChartLink_Statics::NewProp_ConditionalIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FlowChartLink" },
		{ "ModuleRelativePath", "Public/FlowChartLink.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFlowChartLink_Statics::NewProp_ConditionalIndex = { "ConditionalIndex", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowChartLink, ConditionalIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowChartLink_Statics::NewProp_ConditionalIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowChartLink_Statics::NewProp_ConditionalIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlowChartLink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowChartLink_Statics::NewProp_FromNodeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowChartLink_Statics::NewProp_ToNodeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowChartLink_Statics::NewProp_ConditionalIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowChartLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		nullptr,
		&NewStructOps,
		"FlowChartLink",
		sizeof(FFlowChartLink),
		alignof(FFlowChartLink),
		Z_Construct_UScriptStruct_FFlowChartLink_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowChartLink_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowChartLink_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowChartLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlowChartLink()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFlowChartLink_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FlowChartLink"), sizeof(FFlowChartLink), Get_Z_Construct_UScriptStruct_FFlowChartLink_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFlowChartLink_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFlowChartLink_Hash() { return 2572413128U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
