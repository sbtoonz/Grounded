// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/GlobalVariableObjectiveNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalVariableObjectiveNode() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalVariableObjectiveNode();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FObjectiveNode();
	OEIGLOBALVARIABLES_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalVariableConditional();
// End Cross Module References

static_assert(std::is_polymorphic<FGlobalVariableObjectiveNode>() == std::is_polymorphic<FObjectiveNode>(), "USTRUCT FGlobalVariableObjectiveNode cannot be polymorphic unless super FObjectiveNode is polymorphic");

class UScriptStruct* FGlobalVariableObjectiveNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FGlobalVariableObjectiveNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGlobalVariableObjectiveNode, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("GlobalVariableObjectiveNode"), sizeof(FGlobalVariableObjectiveNode), Get_Z_Construct_UScriptStruct_FGlobalVariableObjectiveNode_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FGlobalVariableObjectiveNode>()
{
	return FGlobalVariableObjectiveNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGlobalVariableObjectiveNode(FGlobalVariableObjectiveNode::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("GlobalVariableObjectiveNode"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFGlobalVariableObjectiveNode
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFGlobalVariableObjectiveNode()
	{
		UScriptStruct::DeferCppStructOps<FGlobalVariableObjectiveNode>(FName(TEXT("GlobalVariableObjectiveNode")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFGlobalVariableObjectiveNode;
	struct Z_Construct_UScriptStruct_FGlobalVariableObjectiveNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conditional_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Conditional;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildFailedConditional_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChildFailedConditional;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalVariableObjectiveNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GlobalVariableObjectiveNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGlobalVariableObjectiveNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGlobalVariableObjectiveNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalVariableObjectiveNode_Statics::NewProp_Conditional_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GlobalVariableObjectiveNode" },
		{ "ModuleRelativePath", "Public/GlobalVariableObjectiveNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGlobalVariableObjectiveNode_Statics::NewProp_Conditional = { "Conditional", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGlobalVariableObjectiveNode, Conditional), Z_Construct_UScriptStruct_FGlobalVariableConditional, METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalVariableObjectiveNode_Statics::NewProp_Conditional_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalVariableObjectiveNode_Statics::NewProp_Conditional_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalVariableObjectiveNode_Statics::NewProp_ChildFailedConditional_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GlobalVariableObjectiveNode" },
		{ "ModuleRelativePath", "Public/GlobalVariableObjectiveNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGlobalVariableObjectiveNode_Statics::NewProp_ChildFailedConditional = { "ChildFailedConditional", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGlobalVariableObjectiveNode, ChildFailedConditional), Z_Construct_UScriptStruct_FGlobalVariableConditional, METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalVariableObjectiveNode_Statics::NewProp_ChildFailedConditional_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalVariableObjectiveNode_Statics::NewProp_ChildFailedConditional_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGlobalVariableObjectiveNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalVariableObjectiveNode_Statics::NewProp_Conditional,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalVariableObjectiveNode_Statics::NewProp_ChildFailedConditional,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGlobalVariableObjectiveNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FObjectiveNode,
		&NewStructOps,
		"GlobalVariableObjectiveNode",
		sizeof(FGlobalVariableObjectiveNode),
		alignof(FGlobalVariableObjectiveNode),
		Z_Construct_UScriptStruct_FGlobalVariableObjectiveNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalVariableObjectiveNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalVariableObjectiveNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalVariableObjectiveNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGlobalVariableObjectiveNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGlobalVariableObjectiveNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GlobalVariableObjectiveNode"), sizeof(FGlobalVariableObjectiveNode), Get_Z_Construct_UScriptStruct_FGlobalVariableObjectiveNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGlobalVariableObjectiveNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGlobalVariableObjectiveNode_Hash() { return 1462386500U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
