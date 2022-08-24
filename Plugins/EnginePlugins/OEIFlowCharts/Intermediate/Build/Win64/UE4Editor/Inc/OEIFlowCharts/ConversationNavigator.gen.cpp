// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/ConversationNavigator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConversationNavigator() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FConversationNavigator();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FFlowChartNavigator();
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UConversationAsset_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FConversationNavigator>() == std::is_polymorphic<FFlowChartNavigator>(), "USTRUCT FConversationNavigator cannot be polymorphic unless super FFlowChartNavigator is polymorphic");

class UScriptStruct* FConversationNavigator::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FConversationNavigator_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConversationNavigator, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("ConversationNavigator"), sizeof(FConversationNavigator), Get_Z_Construct_UScriptStruct_FConversationNavigator_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FConversationNavigator>()
{
	return FConversationNavigator::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConversationNavigator(FConversationNavigator::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("ConversationNavigator"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFConversationNavigator
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFConversationNavigator()
	{
		UScriptStruct::DeferCppStructOps<FConversationNavigator>(FName(TEXT("ConversationNavigator")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFConversationNavigator;
	struct Z_Construct_UScriptStruct_FConversationNavigator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConversationAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConversationAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationNavigator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ConversationNavigator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConversationNavigator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConversationNavigator>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationNavigator_Statics::NewProp_ConversationAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConversationNavigator" },
		{ "ModuleRelativePath", "Public/ConversationNavigator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FConversationNavigator_Statics::NewProp_ConversationAsset = { "ConversationAsset", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConversationNavigator, ConversationAsset), Z_Construct_UClass_UConversationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationNavigator_Statics::NewProp_ConversationAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationNavigator_Statics::NewProp_ConversationAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConversationNavigator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConversationNavigator_Statics::NewProp_ConversationAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConversationNavigator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FFlowChartNavigator,
		&NewStructOps,
		"ConversationNavigator",
		sizeof(FConversationNavigator),
		alignof(FConversationNavigator),
		Z_Construct_UScriptStruct_FConversationNavigator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationNavigator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationNavigator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationNavigator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConversationNavigator()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConversationNavigator_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConversationNavigator"), sizeof(FConversationNavigator), Get_Z_Construct_UScriptStruct_FConversationNavigator_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConversationNavigator_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConversationNavigator_Hash() { return 2530488282U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
