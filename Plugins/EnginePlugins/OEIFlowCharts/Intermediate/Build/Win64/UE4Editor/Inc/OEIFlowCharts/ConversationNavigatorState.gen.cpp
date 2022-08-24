// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/ConversationNavigatorState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConversationNavigatorState() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FConversationNavigatorState();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FConversationReference();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FConversationNavigatorState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FConversationNavigatorState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConversationNavigatorState, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("ConversationNavigatorState"), sizeof(FConversationNavigatorState), Get_Z_Construct_UScriptStruct_FConversationNavigatorState_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FConversationNavigatorState>()
{
	return FConversationNavigatorState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConversationNavigatorState(FConversationNavigatorState::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("ConversationNavigatorState"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFConversationNavigatorState
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFConversationNavigatorState()
	{
		UScriptStruct::DeferCppStructOps<FConversationNavigatorState>(FName(TEXT("ConversationNavigatorState")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFConversationNavigatorState;
	struct Z_Construct_UScriptStruct_FConversationNavigatorState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigatorID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavigatorID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conversation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Conversation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentNodeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentNodeID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpeakerAssignments_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpeakerAssignments_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeakerAssignments_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SpeakerAssignments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayNode_MetaData[];
#endif
		static void NewProp_bDisplayNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanContinue_MetaData[];
#endif
		static void NewProp_bCanContinue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanContinue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowContinue_MetaData[];
#endif
		static void NewProp_bAllowContinue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowContinue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ConversationNavigatorState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConversationNavigatorState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_NavigatorID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConversationNavigatorState" },
		{ "ModuleRelativePath", "Public/ConversationNavigatorState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_NavigatorID = { "NavigatorID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConversationNavigatorState, NavigatorID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_NavigatorID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_NavigatorID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_Conversation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConversationNavigatorState" },
		{ "ModuleRelativePath", "Public/ConversationNavigatorState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_Conversation = { "Conversation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConversationNavigatorState, Conversation), Z_Construct_UScriptStruct_FConversationReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_Conversation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_Conversation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_CurrentNodeID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConversationNavigatorState" },
		{ "ModuleRelativePath", "Public/ConversationNavigatorState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_CurrentNodeID = { "CurrentNodeID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConversationNavigatorState, CurrentNodeID), METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_CurrentNodeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_CurrentNodeID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_PlayerPawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConversationNavigatorState" },
		{ "ModuleRelativePath", "Public/ConversationNavigatorState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_PlayerPawn = { "PlayerPawn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConversationNavigatorState, PlayerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_PlayerPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_PlayerPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_PlayerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConversationNavigatorState" },
		{ "ModuleRelativePath", "Public/ConversationNavigatorState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConversationNavigatorState, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_PlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_PlayerState_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_SpeakerAssignments_ValueProp = { "SpeakerAssignments", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_SpeakerAssignments_Key_KeyProp = { "SpeakerAssignments_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_SpeakerAssignments_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConversationNavigatorState" },
		{ "ModuleRelativePath", "Public/ConversationNavigatorState.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_SpeakerAssignments = { "SpeakerAssignments", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConversationNavigatorState, SpeakerAssignments), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_SpeakerAssignments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_SpeakerAssignments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_bDisplayNode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConversationNavigatorState" },
		{ "ModuleRelativePath", "Public/ConversationNavigatorState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_bDisplayNode_SetBit(void* Obj)
	{
		((FConversationNavigatorState*)Obj)->bDisplayNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_bDisplayNode = { "bDisplayNode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FConversationNavigatorState), &Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_bDisplayNode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_bDisplayNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_bDisplayNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_bCanContinue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConversationNavigatorState" },
		{ "ModuleRelativePath", "Public/ConversationNavigatorState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_bCanContinue_SetBit(void* Obj)
	{
		((FConversationNavigatorState*)Obj)->bCanContinue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_bCanContinue = { "bCanContinue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FConversationNavigatorState), &Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_bCanContinue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_bCanContinue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_bCanContinue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_bAllowContinue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConversationNavigatorState" },
		{ "ModuleRelativePath", "Public/ConversationNavigatorState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_bAllowContinue_SetBit(void* Obj)
	{
		((FConversationNavigatorState*)Obj)->bAllowContinue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_bAllowContinue = { "bAllowContinue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FConversationNavigatorState), &Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_bAllowContinue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_bAllowContinue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_bAllowContinue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_NavigatorID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_Conversation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_CurrentNodeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_PlayerPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_PlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_SpeakerAssignments_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_SpeakerAssignments_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_SpeakerAssignments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_bDisplayNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_bCanContinue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::NewProp_bAllowContinue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		nullptr,
		&NewStructOps,
		"ConversationNavigatorState",
		sizeof(FConversationNavigatorState),
		alignof(FConversationNavigatorState),
		Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConversationNavigatorState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConversationNavigatorState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConversationNavigatorState"), sizeof(FConversationNavigatorState), Get_Z_Construct_UScriptStruct_FConversationNavigatorState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConversationNavigatorState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConversationNavigatorState_Hash() { return 2368758822U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
