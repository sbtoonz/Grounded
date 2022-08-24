// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/DialogueLink.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueLink() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueLink();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FFlowChartLink();
	OEIFLOWCHARTS_API UEnum* Z_Construct_UEnum_OEIFlowCharts_EQuestionNodeDisplayType();
// End Cross Module References

static_assert(std::is_polymorphic<FDialogueLink>() == std::is_polymorphic<FFlowChartLink>(), "USTRUCT FDialogueLink cannot be polymorphic unless super FFlowChartLink is polymorphic");

class UScriptStruct* FDialogueLink::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FDialogueLink_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueLink, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("DialogueLink"), sizeof(FDialogueLink), Get_Z_Construct_UScriptStruct_FDialogueLink_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FDialogueLink>()
{
	return FDialogueLink::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDialogueLink(FDialogueLink::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("DialogueLink"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFDialogueLink
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFDialogueLink()
	{
		UScriptStruct::DeferCppStructOps<FDialogueLink>(FName(TEXT("DialogueLink")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFDialogueLink;
	struct Z_Construct_UScriptStruct_FDialogueLink_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RandomWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayQuestionNodeVO_MetaData[];
#endif
		static void NewProp_bPlayQuestionNodeVO_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayQuestionNodeVO;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QuestionNodeTextDisplay_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestionNodeTextDisplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_QuestionNodeTextDisplay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueLink_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DialogueLink.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogueLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueLink>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueLink_Statics::NewProp_RandomWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogueLink" },
		{ "ModuleRelativePath", "Public/DialogueLink.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDialogueLink_Statics::NewProp_RandomWeight = { "RandomWeight", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueLink, RandomWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueLink_Statics::NewProp_RandomWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLink_Statics::NewProp_RandomWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueLink_Statics::NewProp_bPlayQuestionNodeVO_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogueLink" },
		{ "ModuleRelativePath", "Public/DialogueLink.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDialogueLink_Statics::NewProp_bPlayQuestionNodeVO_SetBit(void* Obj)
	{
		((FDialogueLink*)Obj)->bPlayQuestionNodeVO = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDialogueLink_Statics::NewProp_bPlayQuestionNodeVO = { "bPlayQuestionNodeVO", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDialogueLink), &Z_Construct_UScriptStruct_FDialogueLink_Statics::NewProp_bPlayQuestionNodeVO_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueLink_Statics::NewProp_bPlayQuestionNodeVO_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLink_Statics::NewProp_bPlayQuestionNodeVO_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDialogueLink_Statics::NewProp_QuestionNodeTextDisplay_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueLink_Statics::NewProp_QuestionNodeTextDisplay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogueLink" },
		{ "ModuleRelativePath", "Public/DialogueLink.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDialogueLink_Statics::NewProp_QuestionNodeTextDisplay = { "QuestionNodeTextDisplay", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueLink, QuestionNodeTextDisplay), Z_Construct_UEnum_OEIFlowCharts_EQuestionNodeDisplayType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueLink_Statics::NewProp_QuestionNodeTextDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLink_Statics::NewProp_QuestionNodeTextDisplay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueLink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueLink_Statics::NewProp_RandomWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueLink_Statics::NewProp_bPlayQuestionNodeVO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueLink_Statics::NewProp_QuestionNodeTextDisplay_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueLink_Statics::NewProp_QuestionNodeTextDisplay,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FFlowChartLink,
		&NewStructOps,
		"DialogueLink",
		sizeof(FDialogueLink),
		alignof(FDialogueLink),
		Z_Construct_UScriptStruct_FDialogueLink_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLink_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueLink_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogueLink()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDialogueLink_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DialogueLink"), sizeof(FDialogueLink), Get_Z_Construct_UScriptStruct_FDialogueLink_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDialogueLink_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDialogueLink_Hash() { return 1263634980U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
