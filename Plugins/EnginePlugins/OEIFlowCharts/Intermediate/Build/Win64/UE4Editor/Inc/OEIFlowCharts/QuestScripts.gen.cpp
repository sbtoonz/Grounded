// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/QuestScripts.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestScripts() {}
// Cross Module References
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UQuestScripts_NoRegister();
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UQuestScripts();
	OEISCRIPTING_API UClass* Z_Construct_UClass_UScriptLibrary();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	DEFINE_FUNCTION(UQuestScripts::execDebugAdvanceQuest)
	{
		P_GET_STRUCT(FGuid,Z_Param_QuestID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuestScripts::DebugAdvanceQuest(Z_Param_QuestID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestScripts::execMentionQuest)
	{
		P_GET_STRUCT(FGuid,Z_Param_QuestID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuestScripts::MentionQuest(Z_Param_QuestID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestScripts::execSetObjectiveAlternateDescription)
	{
		P_GET_STRUCT(FGuid,Z_Param_QuestID);
		P_GET_PROPERTY(FIntProperty,Z_Param_ObjectiveID);
		P_GET_PROPERTY(FIntProperty,Z_Param_ObjectiveDescriptionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuestScripts::SetObjectiveAlternateDescription(Z_Param_QuestID,Z_Param_ObjectiveID,Z_Param_ObjectiveDescriptionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestScripts::execSetQuestAlternateDescription)
	{
		P_GET_STRUCT(FGuid,Z_Param_QuestID);
		P_GET_PROPERTY(FIntProperty,Z_Param_QuestDescriptionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuestScripts::SetQuestAlternateDescription(Z_Param_QuestID,Z_Param_QuestDescriptionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestScripts::execStartQuest)
	{
		P_GET_STRUCT(FGuid,Z_Param_QuestID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuestScripts::StartQuest(Z_Param_QuestID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestScripts::execStartQuestWithAlternateDescription)
	{
		P_GET_STRUCT(FGuid,Z_Param_QuestID);
		P_GET_PROPERTY(FIntProperty,Z_Param_QuestDescriptionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuestScripts::StartQuestWithAlternateDescription(Z_Param_QuestID,Z_Param_QuestDescriptionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestScripts::execTriggerQuestAddendum)
	{
		P_GET_STRUCT(FGuid,Z_Param_QuestID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AddendumID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuestScripts::TriggerQuestAddendum(Z_Param_QuestID,Z_Param_AddendumID);
		P_NATIVE_END;
	}
	void UQuestScripts::StaticRegisterNativesUQuestScripts()
	{
		UClass* Class = UQuestScripts::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DebugAdvanceQuest", &UQuestScripts::execDebugAdvanceQuest },
			{ "MentionQuest", &UQuestScripts::execMentionQuest },
			{ "SetObjectiveAlternateDescription", &UQuestScripts::execSetObjectiveAlternateDescription },
			{ "SetQuestAlternateDescription", &UQuestScripts::execSetQuestAlternateDescription },
			{ "StartQuest", &UQuestScripts::execStartQuest },
			{ "StartQuestWithAlternateDescription", &UQuestScripts::execStartQuestWithAlternateDescription },
			{ "TriggerQuestAddendum", &UQuestScripts::execTriggerQuestAddendum },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestScripts_DebugAdvanceQuest_Statics
	{
		struct QuestScripts_eventDebugAdvanceQuest_Parms
		{
			FGuid QuestID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestScripts_DebugAdvanceQuest_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestScripts_eventDebugAdvanceQuest_Parms, QuestID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestScripts_DebugAdvanceQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestScripts_DebugAdvanceQuest_Statics::NewProp_QuestID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestScripts_DebugAdvanceQuest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestScripts.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestScripts_DebugAdvanceQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestScripts, nullptr, "DebugAdvanceQuest", nullptr, nullptr, sizeof(QuestScripts_eventDebugAdvanceQuest_Parms), Z_Construct_UFunction_UQuestScripts_DebugAdvanceQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestScripts_DebugAdvanceQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestScripts_DebugAdvanceQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestScripts_DebugAdvanceQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestScripts_DebugAdvanceQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestScripts_DebugAdvanceQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestScripts_MentionQuest_Statics
	{
		struct QuestScripts_eventMentionQuest_Parms
		{
			FGuid QuestID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestScripts_MentionQuest_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestScripts_eventMentionQuest_Parms, QuestID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestScripts_MentionQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestScripts_MentionQuest_Statics::NewProp_QuestID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestScripts_MentionQuest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestScripts.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestScripts_MentionQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestScripts, nullptr, "MentionQuest", nullptr, nullptr, sizeof(QuestScripts_eventMentionQuest_Parms), Z_Construct_UFunction_UQuestScripts_MentionQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestScripts_MentionQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestScripts_MentionQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestScripts_MentionQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestScripts_MentionQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestScripts_MentionQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestScripts_SetObjectiveAlternateDescription_Statics
	{
		struct QuestScripts_eventSetObjectiveAlternateDescription_Parms
		{
			FGuid QuestID;
			int32 ObjectiveID;
			int32 ObjectiveDescriptionID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ObjectiveID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ObjectiveDescriptionID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestScripts_SetObjectiveAlternateDescription_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestScripts_eventSetObjectiveAlternateDescription_Parms, QuestID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestScripts_SetObjectiveAlternateDescription_Statics::NewProp_ObjectiveID = { "ObjectiveID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestScripts_eventSetObjectiveAlternateDescription_Parms, ObjectiveID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestScripts_SetObjectiveAlternateDescription_Statics::NewProp_ObjectiveDescriptionID = { "ObjectiveDescriptionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestScripts_eventSetObjectiveAlternateDescription_Parms, ObjectiveDescriptionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestScripts_SetObjectiveAlternateDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestScripts_SetObjectiveAlternateDescription_Statics::NewProp_QuestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestScripts_SetObjectiveAlternateDescription_Statics::NewProp_ObjectiveID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestScripts_SetObjectiveAlternateDescription_Statics::NewProp_ObjectiveDescriptionID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestScripts_SetObjectiveAlternateDescription_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestScripts.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestScripts_SetObjectiveAlternateDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestScripts, nullptr, "SetObjectiveAlternateDescription", nullptr, nullptr, sizeof(QuestScripts_eventSetObjectiveAlternateDescription_Parms), Z_Construct_UFunction_UQuestScripts_SetObjectiveAlternateDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestScripts_SetObjectiveAlternateDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestScripts_SetObjectiveAlternateDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestScripts_SetObjectiveAlternateDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestScripts_SetObjectiveAlternateDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestScripts_SetObjectiveAlternateDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestScripts_SetQuestAlternateDescription_Statics
	{
		struct QuestScripts_eventSetQuestAlternateDescription_Parms
		{
			FGuid QuestID;
			int32 QuestDescriptionID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QuestDescriptionID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestScripts_SetQuestAlternateDescription_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestScripts_eventSetQuestAlternateDescription_Parms, QuestID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestScripts_SetQuestAlternateDescription_Statics::NewProp_QuestDescriptionID = { "QuestDescriptionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestScripts_eventSetQuestAlternateDescription_Parms, QuestDescriptionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestScripts_SetQuestAlternateDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestScripts_SetQuestAlternateDescription_Statics::NewProp_QuestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestScripts_SetQuestAlternateDescription_Statics::NewProp_QuestDescriptionID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestScripts_SetQuestAlternateDescription_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestScripts.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestScripts_SetQuestAlternateDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestScripts, nullptr, "SetQuestAlternateDescription", nullptr, nullptr, sizeof(QuestScripts_eventSetQuestAlternateDescription_Parms), Z_Construct_UFunction_UQuestScripts_SetQuestAlternateDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestScripts_SetQuestAlternateDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestScripts_SetQuestAlternateDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestScripts_SetQuestAlternateDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestScripts_SetQuestAlternateDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestScripts_SetQuestAlternateDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestScripts_StartQuest_Statics
	{
		struct QuestScripts_eventStartQuest_Parms
		{
			FGuid QuestID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestScripts_StartQuest_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestScripts_eventStartQuest_Parms, QuestID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestScripts_StartQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestScripts_StartQuest_Statics::NewProp_QuestID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestScripts_StartQuest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestScripts.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestScripts_StartQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestScripts, nullptr, "StartQuest", nullptr, nullptr, sizeof(QuestScripts_eventStartQuest_Parms), Z_Construct_UFunction_UQuestScripts_StartQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestScripts_StartQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestScripts_StartQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestScripts_StartQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestScripts_StartQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestScripts_StartQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestScripts_StartQuestWithAlternateDescription_Statics
	{
		struct QuestScripts_eventStartQuestWithAlternateDescription_Parms
		{
			FGuid QuestID;
			int32 QuestDescriptionID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QuestDescriptionID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestScripts_StartQuestWithAlternateDescription_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestScripts_eventStartQuestWithAlternateDescription_Parms, QuestID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestScripts_StartQuestWithAlternateDescription_Statics::NewProp_QuestDescriptionID = { "QuestDescriptionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestScripts_eventStartQuestWithAlternateDescription_Parms, QuestDescriptionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestScripts_StartQuestWithAlternateDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestScripts_StartQuestWithAlternateDescription_Statics::NewProp_QuestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestScripts_StartQuestWithAlternateDescription_Statics::NewProp_QuestDescriptionID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestScripts_StartQuestWithAlternateDescription_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestScripts.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestScripts_StartQuestWithAlternateDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestScripts, nullptr, "StartQuestWithAlternateDescription", nullptr, nullptr, sizeof(QuestScripts_eventStartQuestWithAlternateDescription_Parms), Z_Construct_UFunction_UQuestScripts_StartQuestWithAlternateDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestScripts_StartQuestWithAlternateDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestScripts_StartQuestWithAlternateDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestScripts_StartQuestWithAlternateDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestScripts_StartQuestWithAlternateDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestScripts_StartQuestWithAlternateDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestScripts_TriggerQuestAddendum_Statics
	{
		struct QuestScripts_eventTriggerQuestAddendum_Parms
		{
			FGuid QuestID;
			int32 AddendumID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddendumID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestScripts_TriggerQuestAddendum_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestScripts_eventTriggerQuestAddendum_Parms, QuestID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestScripts_TriggerQuestAddendum_Statics::NewProp_AddendumID = { "AddendumID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestScripts_eventTriggerQuestAddendum_Parms, AddendumID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestScripts_TriggerQuestAddendum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestScripts_TriggerQuestAddendum_Statics::NewProp_QuestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestScripts_TriggerQuestAddendum_Statics::NewProp_AddendumID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestScripts_TriggerQuestAddendum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestScripts.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestScripts_TriggerQuestAddendum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestScripts, nullptr, "TriggerQuestAddendum", nullptr, nullptr, sizeof(QuestScripts_eventTriggerQuestAddendum_Parms), Z_Construct_UFunction_UQuestScripts_TriggerQuestAddendum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestScripts_TriggerQuestAddendum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestScripts_TriggerQuestAddendum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestScripts_TriggerQuestAddendum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestScripts_TriggerQuestAddendum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestScripts_TriggerQuestAddendum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuestScripts_NoRegister()
	{
		return UQuestScripts::StaticClass();
	}
	struct Z_Construct_UClass_UQuestScripts_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestScripts_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScriptLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestScripts_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestScripts_DebugAdvanceQuest, "DebugAdvanceQuest" }, // 1070832433
		{ &Z_Construct_UFunction_UQuestScripts_MentionQuest, "MentionQuest" }, // 3703622780
		{ &Z_Construct_UFunction_UQuestScripts_SetObjectiveAlternateDescription, "SetObjectiveAlternateDescription" }, // 1419091372
		{ &Z_Construct_UFunction_UQuestScripts_SetQuestAlternateDescription, "SetQuestAlternateDescription" }, // 2232180769
		{ &Z_Construct_UFunction_UQuestScripts_StartQuest, "StartQuest" }, // 1400460902
		{ &Z_Construct_UFunction_UQuestScripts_StartQuestWithAlternateDescription, "StartQuestWithAlternateDescription" }, // 2606995042
		{ &Z_Construct_UFunction_UQuestScripts_TriggerQuestAddendum, "TriggerQuestAddendum" }, // 86450461
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestScripts_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "QuestScripts.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/QuestScripts.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestScripts_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestScripts>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestScripts_Statics::ClassParams = {
		&UQuestScripts::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestScripts_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestScripts_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestScripts()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestScripts_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestScripts, 1242838193);
	template<> OEIFLOWCHARTS_API UClass* StaticClass<UQuestScripts>()
	{
		return UQuestScripts::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestScripts(Z_Construct_UClass_UQuestScripts, &UQuestScripts::StaticClass, TEXT("/Script/OEIFlowCharts"), TEXT("UQuestScripts"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestScripts);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
