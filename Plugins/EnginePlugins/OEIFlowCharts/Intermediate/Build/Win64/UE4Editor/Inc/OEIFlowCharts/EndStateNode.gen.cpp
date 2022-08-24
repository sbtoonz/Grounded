// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/EndStateNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndStateNode() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FEndStateNode();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FFlowChartNode();
// End Cross Module References

static_assert(std::is_polymorphic<FEndStateNode>() == std::is_polymorphic<FFlowChartNode>(), "USTRUCT FEndStateNode cannot be polymorphic unless super FFlowChartNode is polymorphic");

class UScriptStruct* FEndStateNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FEndStateNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEndStateNode, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("EndStateNode"), sizeof(FEndStateNode), Get_Z_Construct_UScriptStruct_FEndStateNode_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FEndStateNode>()
{
	return FEndStateNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEndStateNode(FEndStateNode::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("EndStateNode"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFEndStateNode
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFEndStateNode()
	{
		UScriptStruct::DeferCppStructOps<FEndStateNode>(FName(TEXT("EndStateNode")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFEndStateNode;
	struct Z_Construct_UScriptStruct_FEndStateNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWillFailQuest_MetaData[];
#endif
		static void NewProp_bWillFailQuest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWillFailQuest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndStateID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndStateID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEndStateNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EndStateNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEndStateNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEndStateNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEndStateNode_Statics::NewProp_bWillFailQuest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EndStateNode" },
		{ "ModuleRelativePath", "Public/EndStateNode.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEndStateNode_Statics::NewProp_bWillFailQuest_SetBit(void* Obj)
	{
		((FEndStateNode*)Obj)->bWillFailQuest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEndStateNode_Statics::NewProp_bWillFailQuest = { "bWillFailQuest", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEndStateNode), &Z_Construct_UScriptStruct_FEndStateNode_Statics::NewProp_bWillFailQuest_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEndStateNode_Statics::NewProp_bWillFailQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEndStateNode_Statics::NewProp_bWillFailQuest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEndStateNode_Statics::NewProp_EndStateID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EndStateNode" },
		{ "ModuleRelativePath", "Public/EndStateNode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEndStateNode_Statics::NewProp_EndStateID = { "EndStateID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEndStateNode, EndStateID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEndStateNode_Statics::NewProp_EndStateID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEndStateNode_Statics::NewProp_EndStateID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEndStateNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEndStateNode_Statics::NewProp_bWillFailQuest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEndStateNode_Statics::NewProp_EndStateID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEndStateNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FFlowChartNode,
		&NewStructOps,
		"EndStateNode",
		sizeof(FEndStateNode),
		alignof(FEndStateNode),
		Z_Construct_UScriptStruct_FEndStateNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEndStateNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEndStateNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEndStateNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEndStateNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEndStateNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EndStateNode"), sizeof(FEndStateNode), Get_Z_Construct_UScriptStruct_FEndStateNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEndStateNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEndStateNode_Hash() { return 1891128476U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
