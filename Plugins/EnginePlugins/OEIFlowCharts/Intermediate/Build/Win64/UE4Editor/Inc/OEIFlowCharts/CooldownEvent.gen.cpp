// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/CooldownEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCooldownEvent() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FCooldownEvent();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FCooldownEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FCooldownEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCooldownEvent, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("CooldownEvent"), sizeof(FCooldownEvent), Get_Z_Construct_UScriptStruct_FCooldownEvent_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FCooldownEvent>()
{
	return FCooldownEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCooldownEvent(FCooldownEvent::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("CooldownEvent"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFCooldownEvent
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFCooldownEvent()
	{
		UScriptStruct::DeferCppStructOps<FCooldownEvent>(FName(TEXT("CooldownEvent")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFCooldownEvent;
	struct Z_Construct_UScriptStruct_FCooldownEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatterEventID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatterEventID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameStartCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GameStartCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSimultaneousVO_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSimultaneousVO;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayIfOffScreen_MetaData[];
#endif
		static void NewProp_bPlayIfOffScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayIfOffScreen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCooldownEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CooldownEvent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCooldownEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCooldownEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCooldownEvent_Statics::NewProp_ChatterEventID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CooldownEvent" },
		{ "ModuleRelativePath", "Public/CooldownEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCooldownEvent_Statics::NewProp_ChatterEventID = { "ChatterEventID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCooldownEvent, ChatterEventID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FCooldownEvent_Statics::NewProp_ChatterEventID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCooldownEvent_Statics::NewProp_ChatterEventID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCooldownEvent_Statics::NewProp_Cooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CooldownEvent" },
		{ "ModuleRelativePath", "Public/CooldownEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCooldownEvent_Statics::NewProp_Cooldown = { "Cooldown", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCooldownEvent, Cooldown), METADATA_PARAMS(Z_Construct_UScriptStruct_FCooldownEvent_Statics::NewProp_Cooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCooldownEvent_Statics::NewProp_Cooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCooldownEvent_Statics::NewProp_GameStartCooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CooldownEvent" },
		{ "ModuleRelativePath", "Public/CooldownEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCooldownEvent_Statics::NewProp_GameStartCooldown = { "GameStartCooldown", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCooldownEvent, GameStartCooldown), METADATA_PARAMS(Z_Construct_UScriptStruct_FCooldownEvent_Statics::NewProp_GameStartCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCooldownEvent_Statics::NewProp_GameStartCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCooldownEvent_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CooldownEvent" },
		{ "ModuleRelativePath", "Public/CooldownEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCooldownEvent_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCooldownEvent, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FCooldownEvent_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCooldownEvent_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCooldownEvent_Statics::NewProp_MaxSimultaneousVO_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CooldownEvent" },
		{ "ModuleRelativePath", "Public/CooldownEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCooldownEvent_Statics::NewProp_MaxSimultaneousVO = { "MaxSimultaneousVO", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCooldownEvent, MaxSimultaneousVO), METADATA_PARAMS(Z_Construct_UScriptStruct_FCooldownEvent_Statics::NewProp_MaxSimultaneousVO_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCooldownEvent_Statics::NewProp_MaxSimultaneousVO_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCooldownEvent_Statics::NewProp_bPlayIfOffScreen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CooldownEvent" },
		{ "ModuleRelativePath", "Public/CooldownEvent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCooldownEvent_Statics::NewProp_bPlayIfOffScreen_SetBit(void* Obj)
	{
		((FCooldownEvent*)Obj)->bPlayIfOffScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCooldownEvent_Statics::NewProp_bPlayIfOffScreen = { "bPlayIfOffScreen", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCooldownEvent), &Z_Construct_UScriptStruct_FCooldownEvent_Statics::NewProp_bPlayIfOffScreen_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCooldownEvent_Statics::NewProp_bPlayIfOffScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCooldownEvent_Statics::NewProp_bPlayIfOffScreen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCooldownEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCooldownEvent_Statics::NewProp_ChatterEventID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCooldownEvent_Statics::NewProp_Cooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCooldownEvent_Statics::NewProp_GameStartCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCooldownEvent_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCooldownEvent_Statics::NewProp_MaxSimultaneousVO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCooldownEvent_Statics::NewProp_bPlayIfOffScreen,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCooldownEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		nullptr,
		&NewStructOps,
		"CooldownEvent",
		sizeof(FCooldownEvent),
		alignof(FCooldownEvent),
		Z_Construct_UScriptStruct_FCooldownEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCooldownEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCooldownEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCooldownEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCooldownEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCooldownEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CooldownEvent"), sizeof(FCooldownEvent), Get_Z_Construct_UScriptStruct_FCooldownEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCooldownEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCooldownEvent_Hash() { return 786469272U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
