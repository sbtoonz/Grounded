// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/ConversationBundle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConversationBundle() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FConversationBundle();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FFlowChartBundle();
	OEIFLOWCHARTS_API UEnum* Z_Construct_UEnum_OEIFlowCharts_EConversationType();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FSpeakerReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueLink();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FTalkNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerResponseNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FScriptNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FCinematicNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FTriggerConversationNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FResumeNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FCheckpointBranchNode();
	OEICOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FGuidSet();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References

static_assert(std::is_polymorphic<FConversationBundle>() == std::is_polymorphic<FFlowChartBundle>(), "USTRUCT FConversationBundle cannot be polymorphic unless super FFlowChartBundle is polymorphic");

class UScriptStruct* FConversationBundle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FConversationBundle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConversationBundle, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("ConversationBundle"), sizeof(FConversationBundle), Get_Z_Construct_UScriptStruct_FConversationBundle_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FConversationBundle>()
{
	return FConversationBundle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConversationBundle(FConversationBundle::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("ConversationBundle"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFConversationBundle
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFConversationBundle()
	{
		UScriptStruct::DeferCppStructOps<FConversationBundle>(FName(TEXT("ConversationBundle")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFConversationBundle;
	struct Z_Construct_UScriptStruct_FConversationBundle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConversationType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConversationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ConversationType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasCheckpoints_MetaData[];
#endif
		static void NewProp_bHasCheckpoints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasCheckpoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResumeNodeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResumeNodeID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpeakerReferences_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeakerReferences_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_SpeakerReferences;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequiredSpeakerIDs_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredSpeakerIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_RequiredSpeakerIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DialogueLinks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueLinks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DialogueLinks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TalkNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TalkNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TalkNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerResponseNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerResponseNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerResponseNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScriptNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScriptNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScriptNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CinematicNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CinematicNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CinematicNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TriggerConversationNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerConversationNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TriggerConversationNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResumeNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResumeNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResumeNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CheckpointBranchNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckpointBranchNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CheckpointBranchNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GenericVoicePrintLookup_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GenericVoicePrintLookup_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenericVoicePrintLookup_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_GenericVoicePrintLookup;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GenericSpeakerIDs_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenericSpeakerIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_GenericSpeakerIDs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConversationRuntimeDataPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConversationRuntimeDataPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationBundle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ConversationBundle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConversationBundle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConversationBundle>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_ConversationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_ConversationType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConversationBundle" },
		{ "ModuleRelativePath", "Public/ConversationBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_ConversationType = { "ConversationType", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConversationBundle, ConversationType), Z_Construct_UEnum_OEIFlowCharts_EConversationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_ConversationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_ConversationType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_bHasCheckpoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConversationBundle" },
		{ "ModuleRelativePath", "Public/ConversationBundle.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_bHasCheckpoints_SetBit(void* Obj)
	{
		((FConversationBundle*)Obj)->bHasCheckpoints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_bHasCheckpoints = { "bHasCheckpoints", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FConversationBundle), &Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_bHasCheckpoints_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_bHasCheckpoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_bHasCheckpoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_ResumeNodeID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConversationBundle" },
		{ "ModuleRelativePath", "Public/ConversationBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_ResumeNodeID = { "ResumeNodeID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConversationBundle, ResumeNodeID), METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_ResumeNodeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_ResumeNodeID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_SpeakerReferences_ElementProp = { "SpeakerReferences", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSpeakerReference, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_SpeakerReferences_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConversationBundle" },
		{ "ModuleRelativePath", "Public/ConversationBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_SpeakerReferences = { "SpeakerReferences", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConversationBundle, SpeakerReferences), METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_SpeakerReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_SpeakerReferences_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_RequiredSpeakerIDs_ElementProp = { "RequiredSpeakerIDs", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_RequiredSpeakerIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConversationBundle" },
		{ "ModuleRelativePath", "Public/ConversationBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_RequiredSpeakerIDs = { "RequiredSpeakerIDs", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConversationBundle, RequiredSpeakerIDs), METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_RequiredSpeakerIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_RequiredSpeakerIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_DialogueLinks_Inner = { "DialogueLinks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDialogueLink, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_DialogueLinks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConversationBundle" },
		{ "ModuleRelativePath", "Public/ConversationBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_DialogueLinks = { "DialogueLinks", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConversationBundle, DialogueLinks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_DialogueLinks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_DialogueLinks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_TalkNodes_Inner = { "TalkNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTalkNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_TalkNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConversationBundle" },
		{ "ModuleRelativePath", "Public/ConversationBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_TalkNodes = { "TalkNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConversationBundle, TalkNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_TalkNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_TalkNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_PlayerResponseNodes_Inner = { "PlayerResponseNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlayerResponseNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_PlayerResponseNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConversationBundle" },
		{ "ModuleRelativePath", "Public/ConversationBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_PlayerResponseNodes = { "PlayerResponseNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConversationBundle, PlayerResponseNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_PlayerResponseNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_PlayerResponseNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_ScriptNodes_Inner = { "ScriptNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FScriptNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_ScriptNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConversationBundle" },
		{ "ModuleRelativePath", "Public/ConversationBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_ScriptNodes = { "ScriptNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConversationBundle, ScriptNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_ScriptNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_ScriptNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_CinematicNodes_Inner = { "CinematicNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCinematicNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_CinematicNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConversationBundle" },
		{ "ModuleRelativePath", "Public/ConversationBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_CinematicNodes = { "CinematicNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConversationBundle, CinematicNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_CinematicNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_CinematicNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_TriggerConversationNodes_Inner = { "TriggerConversationNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTriggerConversationNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_TriggerConversationNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConversationBundle" },
		{ "ModuleRelativePath", "Public/ConversationBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_TriggerConversationNodes = { "TriggerConversationNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConversationBundle, TriggerConversationNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_TriggerConversationNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_TriggerConversationNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_ResumeNodes_Inner = { "ResumeNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FResumeNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_ResumeNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConversationBundle" },
		{ "ModuleRelativePath", "Public/ConversationBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_ResumeNodes = { "ResumeNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConversationBundle, ResumeNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_ResumeNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_ResumeNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_CheckpointBranchNodes_Inner = { "CheckpointBranchNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCheckpointBranchNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_CheckpointBranchNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConversationBundle" },
		{ "ModuleRelativePath", "Public/ConversationBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_CheckpointBranchNodes = { "CheckpointBranchNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConversationBundle, CheckpointBranchNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_CheckpointBranchNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_CheckpointBranchNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_GenericVoicePrintLookup_ValueProp = { "GenericVoicePrintLookup", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGuidSet, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_GenericVoicePrintLookup_Key_KeyProp = { "GenericVoicePrintLookup_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_GenericVoicePrintLookup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConversationBundle" },
		{ "ModuleRelativePath", "Public/ConversationBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_GenericVoicePrintLookup = { "GenericVoicePrintLookup", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConversationBundle, GenericVoicePrintLookup), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_GenericVoicePrintLookup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_GenericVoicePrintLookup_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_GenericSpeakerIDs_ElementProp = { "GenericSpeakerIDs", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_GenericSpeakerIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConversationBundle" },
		{ "ModuleRelativePath", "Public/ConversationBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_GenericSpeakerIDs = { "GenericSpeakerIDs", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConversationBundle, GenericSpeakerIDs), METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_GenericSpeakerIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_GenericSpeakerIDs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_ConversationRuntimeDataPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConversationBundle" },
		{ "ModuleRelativePath", "Public/ConversationBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_ConversationRuntimeDataPath = { "ConversationRuntimeDataPath", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConversationBundle, ConversationRuntimeDataPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_ConversationRuntimeDataPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_ConversationRuntimeDataPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConversationBundle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_ConversationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_ConversationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_bHasCheckpoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_ResumeNodeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_SpeakerReferences_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_SpeakerReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_RequiredSpeakerIDs_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_RequiredSpeakerIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_DialogueLinks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_DialogueLinks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_TalkNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_TalkNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_PlayerResponseNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_PlayerResponseNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_ScriptNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_ScriptNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_CinematicNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_CinematicNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_TriggerConversationNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_TriggerConversationNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_ResumeNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_ResumeNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_CheckpointBranchNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_CheckpointBranchNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_GenericVoicePrintLookup_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_GenericVoicePrintLookup_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_GenericVoicePrintLookup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_GenericSpeakerIDs_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_GenericSpeakerIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationBundle_Statics::NewProp_ConversationRuntimeDataPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConversationBundle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FFlowChartBundle,
		&NewStructOps,
		"ConversationBundle",
		sizeof(FConversationBundle),
		alignof(FConversationBundle),
		Z_Construct_UScriptStruct_FConversationBundle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationBundle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationBundle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationBundle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConversationBundle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConversationBundle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConversationBundle"), sizeof(FConversationBundle), Get_Z_Construct_UScriptStruct_FConversationBundle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConversationBundle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConversationBundle_Hash() { return 1318299202U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
