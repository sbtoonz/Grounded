// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/ResultFailedNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResultFailedNode() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FResultFailedNode();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FResultNode();
// End Cross Module References

static_assert(std::is_polymorphic<FResultFailedNode>() == std::is_polymorphic<FResultNode>(), "USTRUCT FResultFailedNode cannot be polymorphic unless super FResultNode is polymorphic");

class UScriptStruct* FResultFailedNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FResultFailedNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FResultFailedNode, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("ResultFailedNode"), sizeof(FResultFailedNode), Get_Z_Construct_UScriptStruct_FResultFailedNode_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FResultFailedNode>()
{
	return FResultFailedNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FResultFailedNode(FResultFailedNode::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("ResultFailedNode"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFResultFailedNode
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFResultFailedNode()
	{
		UScriptStruct::DeferCppStructOps<FResultFailedNode>(FName(TEXT("ResultFailedNode")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFResultFailedNode;
	struct Z_Construct_UScriptStruct_FResultFailedNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsIrrelevant_MetaData[];
#endif
		static void NewProp_bIsIrrelevant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsIrrelevant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResultFailedNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ResultFailedNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FResultFailedNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResultFailedNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResultFailedNode_Statics::NewProp_bIsIrrelevant_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ResultFailedNode" },
		{ "ModuleRelativePath", "Public/ResultFailedNode.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FResultFailedNode_Statics::NewProp_bIsIrrelevant_SetBit(void* Obj)
	{
		((FResultFailedNode*)Obj)->bIsIrrelevant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FResultFailedNode_Statics::NewProp_bIsIrrelevant = { "bIsIrrelevant", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FResultFailedNode), &Z_Construct_UScriptStruct_FResultFailedNode_Statics::NewProp_bIsIrrelevant_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FResultFailedNode_Statics::NewProp_bIsIrrelevant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResultFailedNode_Statics::NewProp_bIsIrrelevant_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResultFailedNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResultFailedNode_Statics::NewProp_bIsIrrelevant,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResultFailedNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FResultNode,
		&NewStructOps,
		"ResultFailedNode",
		sizeof(FResultFailedNode),
		alignof(FResultFailedNode),
		Z_Construct_UScriptStruct_FResultFailedNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResultFailedNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FResultFailedNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResultFailedNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FResultFailedNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FResultFailedNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ResultFailedNode"), sizeof(FResultFailedNode), Get_Z_Construct_UScriptStruct_FResultFailedNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FResultFailedNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FResultFailedNode_Hash() { return 3455786155U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
