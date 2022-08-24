// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/ObjectiveWaypoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectiveWaypoint() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FObjectiveWaypoint();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	OEICOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FGuidIntPair();
// End Cross Module References
class UScriptStruct* FObjectiveWaypoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FObjectiveWaypoint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectiveWaypoint, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("ObjectiveWaypoint"), sizeof(FObjectiveWaypoint), Get_Z_Construct_UScriptStruct_FObjectiveWaypoint_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FObjectiveWaypoint>()
{
	return FObjectiveWaypoint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FObjectiveWaypoint(FObjectiveWaypoint::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("ObjectiveWaypoint"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFObjectiveWaypoint
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFObjectiveWaypoint()
	{
		UScriptStruct::DeferCppStructOps<FObjectiveWaypoint>(FName(TEXT("ObjectiveWaypoint")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFObjectiveWaypoint;
	struct Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameObjectID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayOverrideID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DisplayOverrideID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverridesPreviousWaypoint_MetaData[];
#endif
		static void NewProp_bOverridesPreviousWaypoint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverridesPreviousWaypoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConditionalIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConditionalIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackedGlobalVariableIDs_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedGlobalVariableIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_TrackedGlobalVariableIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackedTalkNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedTalkNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackedTalkNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackedKillTargetIDs_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedKillTargetIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_TrackedKillTargetIDs;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrackedItemNames_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedItemNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_TrackedItemNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrackedFactionNames_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedFactionNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_TrackedFactionNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ObjectiveWaypoint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectiveWaypoint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_GameObjectID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveWaypoint" },
		{ "ModuleRelativePath", "Public/ObjectiveWaypoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_GameObjectID = { "GameObjectID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectiveWaypoint, GameObjectID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_GameObjectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_GameObjectID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_DisplayOverrideID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveWaypoint" },
		{ "ModuleRelativePath", "Public/ObjectiveWaypoint.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_DisplayOverrideID = { "DisplayOverrideID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectiveWaypoint, DisplayOverrideID), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_DisplayOverrideID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_DisplayOverrideID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_bOverridesPreviousWaypoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveWaypoint" },
		{ "ModuleRelativePath", "Public/ObjectiveWaypoint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_bOverridesPreviousWaypoint_SetBit(void* Obj)
	{
		((FObjectiveWaypoint*)Obj)->bOverridesPreviousWaypoint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_bOverridesPreviousWaypoint = { "bOverridesPreviousWaypoint", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FObjectiveWaypoint), &Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_bOverridesPreviousWaypoint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_bOverridesPreviousWaypoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_bOverridesPreviousWaypoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_ConditionalIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveWaypoint" },
		{ "ModuleRelativePath", "Public/ObjectiveWaypoint.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_ConditionalIndex = { "ConditionalIndex", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectiveWaypoint, ConditionalIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_ConditionalIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_ConditionalIndex_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedGlobalVariableIDs_ElementProp = { "TrackedGlobalVariableIDs", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedGlobalVariableIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveWaypoint" },
		{ "ModuleRelativePath", "Public/ObjectiveWaypoint.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedGlobalVariableIDs = { "TrackedGlobalVariableIDs", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectiveWaypoint, TrackedGlobalVariableIDs), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedGlobalVariableIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedGlobalVariableIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedTalkNodes_Inner = { "TrackedTalkNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuidIntPair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedTalkNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveWaypoint" },
		{ "ModuleRelativePath", "Public/ObjectiveWaypoint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedTalkNodes = { "TrackedTalkNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectiveWaypoint, TrackedTalkNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedTalkNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedTalkNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedKillTargetIDs_ElementProp = { "TrackedKillTargetIDs", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedKillTargetIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveWaypoint" },
		{ "ModuleRelativePath", "Public/ObjectiveWaypoint.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedKillTargetIDs = { "TrackedKillTargetIDs", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectiveWaypoint, TrackedKillTargetIDs), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedKillTargetIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedKillTargetIDs_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedItemNames_ElementProp = { "TrackedItemNames", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedItemNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveWaypoint" },
		{ "ModuleRelativePath", "Public/ObjectiveWaypoint.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedItemNames = { "TrackedItemNames", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectiveWaypoint, TrackedItemNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedItemNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedItemNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedFactionNames_ElementProp = { "TrackedFactionNames", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedFactionNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveWaypoint" },
		{ "ModuleRelativePath", "Public/ObjectiveWaypoint.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedFactionNames = { "TrackedFactionNames", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectiveWaypoint, TrackedFactionNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedFactionNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedFactionNames_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_GameObjectID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_DisplayOverrideID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_bOverridesPreviousWaypoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_ConditionalIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedGlobalVariableIDs_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedGlobalVariableIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedTalkNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedTalkNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedKillTargetIDs_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedKillTargetIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedItemNames_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedItemNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedFactionNames_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::NewProp_TrackedFactionNames,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		nullptr,
		&NewStructOps,
		"ObjectiveWaypoint",
		sizeof(FObjectiveWaypoint),
		alignof(FObjectiveWaypoint),
		Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FObjectiveWaypoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FObjectiveWaypoint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ObjectiveWaypoint"), sizeof(FObjectiveWaypoint), Get_Z_Construct_UScriptStruct_FObjectiveWaypoint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FObjectiveWaypoint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FObjectiveWaypoint_Hash() { return 2545412587U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
