// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/GlobalQuestEventGlobalVariableNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalQuestEventGlobalVariableNode() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalQuestEventGlobalVariableNode();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalQuestEventNode();
	OEIGLOBALVARIABLES_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalVariableConditional();
// End Cross Module References

static_assert(std::is_polymorphic<FGlobalQuestEventGlobalVariableNode>() == std::is_polymorphic<FGlobalQuestEventNode>(), "USTRUCT FGlobalQuestEventGlobalVariableNode cannot be polymorphic unless super FGlobalQuestEventNode is polymorphic");

class UScriptStruct* FGlobalQuestEventGlobalVariableNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FGlobalQuestEventGlobalVariableNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGlobalQuestEventGlobalVariableNode, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("GlobalQuestEventGlobalVariableNode"), sizeof(FGlobalQuestEventGlobalVariableNode), Get_Z_Construct_UScriptStruct_FGlobalQuestEventGlobalVariableNode_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FGlobalQuestEventGlobalVariableNode>()
{
	return FGlobalQuestEventGlobalVariableNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGlobalQuestEventGlobalVariableNode(FGlobalQuestEventGlobalVariableNode::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("GlobalQuestEventGlobalVariableNode"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFGlobalQuestEventGlobalVariableNode
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFGlobalQuestEventGlobalVariableNode()
	{
		UScriptStruct::DeferCppStructOps<FGlobalQuestEventGlobalVariableNode>(FName(TEXT("GlobalQuestEventGlobalVariableNode")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFGlobalQuestEventGlobalVariableNode;
	struct Z_Construct_UScriptStruct_FGlobalQuestEventGlobalVariableNode_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalQuestEventGlobalVariableNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GlobalQuestEventGlobalVariableNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGlobalQuestEventGlobalVariableNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGlobalQuestEventGlobalVariableNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalQuestEventGlobalVariableNode_Statics::NewProp_Conditional_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GlobalQuestEventGlobalVariableNode" },
		{ "ModuleRelativePath", "Public/GlobalQuestEventGlobalVariableNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGlobalQuestEventGlobalVariableNode_Statics::NewProp_Conditional = { "Conditional", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGlobalQuestEventGlobalVariableNode, Conditional), Z_Construct_UScriptStruct_FGlobalVariableConditional, METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalQuestEventGlobalVariableNode_Statics::NewProp_Conditional_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalQuestEventGlobalVariableNode_Statics::NewProp_Conditional_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGlobalQuestEventGlobalVariableNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalQuestEventGlobalVariableNode_Statics::NewProp_Conditional,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGlobalQuestEventGlobalVariableNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FGlobalQuestEventNode,
		&NewStructOps,
		"GlobalQuestEventGlobalVariableNode",
		sizeof(FGlobalQuestEventGlobalVariableNode),
		alignof(FGlobalQuestEventGlobalVariableNode),
		Z_Construct_UScriptStruct_FGlobalQuestEventGlobalVariableNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalQuestEventGlobalVariableNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalQuestEventGlobalVariableNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalQuestEventGlobalVariableNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGlobalQuestEventGlobalVariableNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGlobalQuestEventGlobalVariableNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GlobalQuestEventGlobalVariableNode"), sizeof(FGlobalQuestEventGlobalVariableNode), Get_Z_Construct_UScriptStruct_FGlobalQuestEventGlobalVariableNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGlobalQuestEventGlobalVariableNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGlobalQuestEventGlobalVariableNode_Hash() { return 3716229956U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
