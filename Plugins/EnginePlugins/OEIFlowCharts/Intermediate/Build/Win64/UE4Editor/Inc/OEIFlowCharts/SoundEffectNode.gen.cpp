// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/SoundEffectNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundEffectNode() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FSoundEffectNode();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueNode();
// End Cross Module References

static_assert(std::is_polymorphic<FSoundEffectNode>() == std::is_polymorphic<FDialogueNode>(), "USTRUCT FSoundEffectNode cannot be polymorphic unless super FDialogueNode is polymorphic");

class UScriptStruct* FSoundEffectNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FSoundEffectNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundEffectNode, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("SoundEffectNode"), sizeof(FSoundEffectNode), Get_Z_Construct_UScriptStruct_FSoundEffectNode_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FSoundEffectNode>()
{
	return FSoundEffectNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundEffectNode(FSoundEffectNode::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("SoundEffectNode"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFSoundEffectNode
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFSoundEffectNode()
	{
		UScriptStruct::DeferCppStructOps<FSoundEffectNode>(FName(TEXT("SoundEffectNode")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFSoundEffectNode;
	struct Z_Construct_UScriptStruct_FSoundEffectNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeOutDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundEffectNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SoundEffectNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundEffectNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundEffectNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundEffectNode_Statics::NewProp_AudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundEffectNode" },
		{ "ModuleRelativePath", "Public/SoundEffectNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSoundEffectNode_Statics::NewProp_AudioEvent = { "AudioEvent", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundEffectNode, AudioEvent), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundEffectNode_Statics::NewProp_AudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundEffectNode_Statics::NewProp_AudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundEffectNode_Statics::NewProp_FadeOutDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundEffectNode" },
		{ "ModuleRelativePath", "Public/SoundEffectNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundEffectNode_Statics::NewProp_FadeOutDuration = { "FadeOutDuration", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundEffectNode, FadeOutDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundEffectNode_Statics::NewProp_FadeOutDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundEffectNode_Statics::NewProp_FadeOutDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundEffectNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundEffectNode_Statics::NewProp_AudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundEffectNode_Statics::NewProp_FadeOutDuration,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundEffectNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FDialogueNode,
		&NewStructOps,
		"SoundEffectNode",
		sizeof(FSoundEffectNode),
		alignof(FSoundEffectNode),
		Z_Construct_UScriptStruct_FSoundEffectNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundEffectNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundEffectNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundEffectNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundEffectNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundEffectNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundEffectNode"), sizeof(FSoundEffectNode), Get_Z_Construct_UScriptStruct_FSoundEffectNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoundEffectNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundEffectNode_Hash() { return 1213877327U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
