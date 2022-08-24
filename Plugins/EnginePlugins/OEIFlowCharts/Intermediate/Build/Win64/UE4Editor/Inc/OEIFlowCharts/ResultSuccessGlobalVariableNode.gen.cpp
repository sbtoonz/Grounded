// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/ResultSuccessGlobalVariableNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResultSuccessGlobalVariableNode() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FResultSuccessGlobalVariableNode();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FResultSuccessNode();
	OEIGLOBALVARIABLES_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalVariableConditional();
// End Cross Module References

static_assert(std::is_polymorphic<FResultSuccessGlobalVariableNode>() == std::is_polymorphic<FResultSuccessNode>(), "USTRUCT FResultSuccessGlobalVariableNode cannot be polymorphic unless super FResultSuccessNode is polymorphic");

class UScriptStruct* FResultSuccessGlobalVariableNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FResultSuccessGlobalVariableNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FResultSuccessGlobalVariableNode, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("ResultSuccessGlobalVariableNode"), sizeof(FResultSuccessGlobalVariableNode), Get_Z_Construct_UScriptStruct_FResultSuccessGlobalVariableNode_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FResultSuccessGlobalVariableNode>()
{
	return FResultSuccessGlobalVariableNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FResultSuccessGlobalVariableNode(FResultSuccessGlobalVariableNode::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("ResultSuccessGlobalVariableNode"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFResultSuccessGlobalVariableNode
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFResultSuccessGlobalVariableNode()
	{
		UScriptStruct::DeferCppStructOps<FResultSuccessGlobalVariableNode>(FName(TEXT("ResultSuccessGlobalVariableNode")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFResultSuccessGlobalVariableNode;
	struct Z_Construct_UScriptStruct_FResultSuccessGlobalVariableNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conditional_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Conditional;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResultSuccessGlobalVariableNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ResultSuccessGlobalVariableNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FResultSuccessGlobalVariableNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResultSuccessGlobalVariableNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResultSuccessGlobalVariableNode_Statics::NewProp_Conditional_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ResultSuccessGlobalVariableNode" },
		{ "ModuleRelativePath", "Public/ResultSuccessGlobalVariableNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FResultSuccessGlobalVariableNode_Statics::NewProp_Conditional = { "Conditional", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResultSuccessGlobalVariableNode, Conditional), Z_Construct_UScriptStruct_FGlobalVariableConditional, METADATA_PARAMS(Z_Construct_UScriptStruct_FResultSuccessGlobalVariableNode_Statics::NewProp_Conditional_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResultSuccessGlobalVariableNode_Statics::NewProp_Conditional_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResultSuccessGlobalVariableNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResultSuccessGlobalVariableNode_Statics::NewProp_Conditional,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResultSuccessGlobalVariableNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FResultSuccessNode,
		&NewStructOps,
		"ResultSuccessGlobalVariableNode",
		sizeof(FResultSuccessGlobalVariableNode),
		alignof(FResultSuccessGlobalVariableNode),
		Z_Construct_UScriptStruct_FResultSuccessGlobalVariableNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResultSuccessGlobalVariableNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FResultSuccessGlobalVariableNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResultSuccessGlobalVariableNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FResultSuccessGlobalVariableNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FResultSuccessGlobalVariableNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ResultSuccessGlobalVariableNode"), sizeof(FResultSuccessGlobalVariableNode), Get_Z_Construct_UScriptStruct_FResultSuccessGlobalVariableNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FResultSuccessGlobalVariableNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FResultSuccessGlobalVariableNode_Hash() { return 3735806544U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
