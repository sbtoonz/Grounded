// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/CooldownSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCooldownSet() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FCooldownSet();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FCooldownEvent();
// End Cross Module References
class UScriptStruct* FCooldownSet::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FCooldownSet_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCooldownSet, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("CooldownSet"), sizeof(FCooldownSet), Get_Z_Construct_UScriptStruct_FCooldownSet_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FCooldownSet>()
{
	return FCooldownSet::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCooldownSet(FCooldownSet::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("CooldownSet"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFCooldownSet
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFCooldownSet()
	{
		UScriptStruct::DeferCppStructOps<FCooldownSet>(FName(TEXT("CooldownSet")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFCooldownSet;
	struct Z_Construct_UScriptStruct_FCooldownSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSimultaneousVOInSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSimultaneousVOInSet;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CooldownEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CooldownEvents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCooldownSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CooldownSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCooldownSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCooldownSet>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCooldownSet_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CooldownSet" },
		{ "ModuleRelativePath", "Public/CooldownSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCooldownSet_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCooldownSet, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FCooldownSet_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCooldownSet_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCooldownSet_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CooldownSet" },
		{ "ModuleRelativePath", "Public/CooldownSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCooldownSet_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCooldownSet, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCooldownSet_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCooldownSet_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCooldownSet_Statics::NewProp_MaxSimultaneousVOInSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CooldownSet" },
		{ "ModuleRelativePath", "Public/CooldownSet.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCooldownSet_Statics::NewProp_MaxSimultaneousVOInSet = { "MaxSimultaneousVOInSet", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCooldownSet, MaxSimultaneousVOInSet), METADATA_PARAMS(Z_Construct_UScriptStruct_FCooldownSet_Statics::NewProp_MaxSimultaneousVOInSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCooldownSet_Statics::NewProp_MaxSimultaneousVOInSet_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCooldownSet_Statics::NewProp_CooldownEvents_Inner = { "CooldownEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCooldownEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCooldownSet_Statics::NewProp_CooldownEvents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CooldownSet" },
		{ "ModuleRelativePath", "Public/CooldownSet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCooldownSet_Statics::NewProp_CooldownEvents = { "CooldownEvents", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCooldownSet, CooldownEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCooldownSet_Statics::NewProp_CooldownEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCooldownSet_Statics::NewProp_CooldownEvents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCooldownSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCooldownSet_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCooldownSet_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCooldownSet_Statics::NewProp_MaxSimultaneousVOInSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCooldownSet_Statics::NewProp_CooldownEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCooldownSet_Statics::NewProp_CooldownEvents,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCooldownSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		nullptr,
		&NewStructOps,
		"CooldownSet",
		sizeof(FCooldownSet),
		alignof(FCooldownSet),
		Z_Construct_UScriptStruct_FCooldownSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCooldownSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCooldownSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCooldownSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCooldownSet()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCooldownSet_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CooldownSet"), sizeof(FCooldownSet), Get_Z_Construct_UScriptStruct_FCooldownSet_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCooldownSet_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCooldownSet_Hash() { return 3458861939U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
