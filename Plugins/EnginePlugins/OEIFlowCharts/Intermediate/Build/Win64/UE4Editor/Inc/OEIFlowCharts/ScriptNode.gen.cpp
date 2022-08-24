// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/ScriptNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScriptNode() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FScriptNode();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueNode();
// End Cross Module References

static_assert(std::is_polymorphic<FScriptNode>() == std::is_polymorphic<FDialogueNode>(), "USTRUCT FScriptNode cannot be polymorphic unless super FDialogueNode is polymorphic");

class UScriptStruct* FScriptNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FScriptNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FScriptNode, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("ScriptNode"), sizeof(FScriptNode), Get_Z_Construct_UScriptStruct_FScriptNode_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FScriptNode>()
{
	return FScriptNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FScriptNode(FScriptNode::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("ScriptNode"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFScriptNode
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFScriptNode()
	{
		UScriptStruct::DeferCppStructOps<FScriptNode>(FName(TEXT("ScriptNode")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFScriptNode;
	struct Z_Construct_UScriptStruct_FScriptNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequiresValidChildNode_MetaData[];
#endif
		static void NewProp_bRequiresValidChildNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequiresValidChildNode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ScriptNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScriptNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScriptNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptNode_Statics::NewProp_bRequiresValidChildNode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ScriptNode" },
		{ "ModuleRelativePath", "Public/ScriptNode.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FScriptNode_Statics::NewProp_bRequiresValidChildNode_SetBit(void* Obj)
	{
		((FScriptNode*)Obj)->bRequiresValidChildNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FScriptNode_Statics::NewProp_bRequiresValidChildNode = { "bRequiresValidChildNode", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FScriptNode), &Z_Construct_UScriptStruct_FScriptNode_Statics::NewProp_bRequiresValidChildNode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptNode_Statics::NewProp_bRequiresValidChildNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptNode_Statics::NewProp_bRequiresValidChildNode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScriptNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptNode_Statics::NewProp_bRequiresValidChildNode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScriptNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FDialogueNode,
		&NewStructOps,
		"ScriptNode",
		sizeof(FScriptNode),
		alignof(FScriptNode),
		Z_Construct_UScriptStruct_FScriptNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScriptNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScriptNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScriptNode"), sizeof(FScriptNode), Get_Z_Construct_UScriptStruct_FScriptNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FScriptNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScriptNode_Hash() { return 1119475691U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
