// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/ObjectiveBankNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectiveBankNode() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FObjectiveBankNode();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FBankNode();
// End Cross Module References

static_assert(std::is_polymorphic<FObjectiveBankNode>() == std::is_polymorphic<FBankNode>(), "USTRUCT FObjectiveBankNode cannot be polymorphic unless super FBankNode is polymorphic");

class UScriptStruct* FObjectiveBankNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FObjectiveBankNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectiveBankNode, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("ObjectiveBankNode"), sizeof(FObjectiveBankNode), Get_Z_Construct_UScriptStruct_FObjectiveBankNode_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FObjectiveBankNode>()
{
	return FObjectiveBankNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FObjectiveBankNode(FObjectiveBankNode::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("ObjectiveBankNode"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFObjectiveBankNode
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFObjectiveBankNode()
	{
		UScriptStruct::DeferCppStructOps<FObjectiveBankNode>(FName(TEXT("ObjectiveBankNode")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFObjectiveBankNode;
	struct Z_Construct_UScriptStruct_FObjectiveBankNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllObjectivesMustSucceed_MetaData[];
#endif
		static void NewProp_bAllObjectivesMustSucceed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllObjectivesMustSucceed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalObjectivesNeededToSucceed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalObjectivesNeededToSucceed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectiveBankNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ObjectiveBankNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjectiveBankNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectiveBankNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectiveBankNode_Statics::NewProp_bAllObjectivesMustSucceed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveBankNode" },
		{ "ModuleRelativePath", "Public/ObjectiveBankNode.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FObjectiveBankNode_Statics::NewProp_bAllObjectivesMustSucceed_SetBit(void* Obj)
	{
		((FObjectiveBankNode*)Obj)->bAllObjectivesMustSucceed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FObjectiveBankNode_Statics::NewProp_bAllObjectivesMustSucceed = { "bAllObjectivesMustSucceed", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FObjectiveBankNode), &Z_Construct_UScriptStruct_FObjectiveBankNode_Statics::NewProp_bAllObjectivesMustSucceed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectiveBankNode_Statics::NewProp_bAllObjectivesMustSucceed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectiveBankNode_Statics::NewProp_bAllObjectivesMustSucceed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectiveBankNode_Statics::NewProp_TotalObjectivesNeededToSucceed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveBankNode" },
		{ "ModuleRelativePath", "Public/ObjectiveBankNode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FObjectiveBankNode_Statics::NewProp_TotalObjectivesNeededToSucceed = { "TotalObjectivesNeededToSucceed", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectiveBankNode, TotalObjectivesNeededToSucceed), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectiveBankNode_Statics::NewProp_TotalObjectivesNeededToSucceed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectiveBankNode_Statics::NewProp_TotalObjectivesNeededToSucceed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectiveBankNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectiveBankNode_Statics::NewProp_bAllObjectivesMustSucceed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectiveBankNode_Statics::NewProp_TotalObjectivesNeededToSucceed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectiveBankNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FBankNode,
		&NewStructOps,
		"ObjectiveBankNode",
		sizeof(FObjectiveBankNode),
		alignof(FObjectiveBankNode),
		Z_Construct_UScriptStruct_FObjectiveBankNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectiveBankNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectiveBankNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectiveBankNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FObjectiveBankNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FObjectiveBankNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ObjectiveBankNode"), sizeof(FObjectiveBankNode), Get_Z_Construct_UScriptStruct_FObjectiveBankNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FObjectiveBankNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FObjectiveBankNode_Hash() { return 1246180321U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
