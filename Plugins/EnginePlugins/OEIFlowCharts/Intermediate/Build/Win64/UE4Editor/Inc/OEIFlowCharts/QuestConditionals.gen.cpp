// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/QuestConditionals.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestConditionals() {}
// Cross Module References
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UQuestConditionals_NoRegister();
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UQuestConditionals();
	OEISCRIPTING_API UClass* Z_Construct_UClass_UConditionalLibrary();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	DEFINE_FUNCTION(UQuestConditionals::execHasQuestFailed)
	{
		P_GET_STRUCT(FGuid,Z_Param_QuestID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestConditionals::HasQuestFailed(Z_Param_QuestID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestConditionals::execHasQuestStateFailed)
	{
		P_GET_STRUCT(FGuid,Z_Param_QuestID);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestConditionals::HasQuestStateFailed(Z_Param_QuestID,Z_Param_NodeId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestConditionals::execHasQuestStateFailedOrIsIrrelevant)
	{
		P_GET_STRUCT(FGuid,Z_Param_QuestID);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestConditionals::HasQuestStateFailedOrIsIrrelevant(Z_Param_QuestID,Z_Param_NodeId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestConditionals::execIsQuestActive)
	{
		P_GET_STRUCT(FGuid,Z_Param_QuestID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestConditionals::IsQuestActive(Z_Param_QuestID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestConditionals::execIsQuestAddendumTriggered)
	{
		P_GET_STRUCT(FGuid,Z_Param_QuestID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AddendumID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestConditionals::IsQuestAddendumTriggered(Z_Param_QuestID,Z_Param_AddendumID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestConditionals::execIsQuestComplete)
	{
		P_GET_STRUCT(FGuid,Z_Param_QuestID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestConditionals::IsQuestComplete(Z_Param_QuestID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestConditionals::execIsQuestEndStateTriggered)
	{
		P_GET_STRUCT(FGuid,Z_Param_QuestID);
		P_GET_PROPERTY(FIntProperty,Z_Param_EndStateID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestConditionals::IsQuestEndStateTriggered(Z_Param_QuestID,Z_Param_EndStateID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestConditionals::execIsQuestEventTriggered)
	{
		P_GET_STRUCT(FGuid,Z_Param_QuestID);
		P_GET_PROPERTY(FIntProperty,Z_Param_QuestEventID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestConditionals::IsQuestEventTriggered(Z_Param_QuestID,Z_Param_QuestEventID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestConditionals::execIsQuestMentioned)
	{
		P_GET_STRUCT(FGuid,Z_Param_QuestID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestConditionals::IsQuestMentioned(Z_Param_QuestID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestConditionals::execIsQuestStarted)
	{
		P_GET_STRUCT(FGuid,Z_Param_QuestID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestConditionals::IsQuestStarted(Z_Param_QuestID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestConditionals::execIsQuestStateActive)
	{
		P_GET_STRUCT(FGuid,Z_Param_QuestID);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestConditionals::IsQuestStateActive(Z_Param_QuestID,Z_Param_NodeId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestConditionals::execIsQuestStateIrrelevant)
	{
		P_GET_STRUCT(FGuid,Z_Param_QuestID);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestConditionals::IsQuestStateIrrelevant(Z_Param_QuestID,Z_Param_NodeId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestConditionals::execIsQuestStateVisited)
	{
		P_GET_STRUCT(FGuid,Z_Param_QuestID);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestConditionals::IsQuestStateVisited(Z_Param_QuestID,Z_Param_NodeId);
		P_NATIVE_END;
	}
	void UQuestConditionals::StaticRegisterNativesUQuestConditionals()
	{
		UClass* Class = UQuestConditionals::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasQuestFailed", &UQuestConditionals::execHasQuestFailed },
			{ "HasQuestStateFailed", &UQuestConditionals::execHasQuestStateFailed },
			{ "HasQuestStateFailedOrIsIrrelevant", &UQuestConditionals::execHasQuestStateFailedOrIsIrrelevant },
			{ "IsQuestActive", &UQuestConditionals::execIsQuestActive },
			{ "IsQuestAddendumTriggered", &UQuestConditionals::execIsQuestAddendumTriggered },
			{ "IsQuestComplete", &UQuestConditionals::execIsQuestComplete },
			{ "IsQuestEndStateTriggered", &UQuestConditionals::execIsQuestEndStateTriggered },
			{ "IsQuestEventTriggered", &UQuestConditionals::execIsQuestEventTriggered },
			{ "IsQuestMentioned", &UQuestConditionals::execIsQuestMentioned },
			{ "IsQuestStarted", &UQuestConditionals::execIsQuestStarted },
			{ "IsQuestStateActive", &UQuestConditionals::execIsQuestStateActive },
			{ "IsQuestStateIrrelevant", &UQuestConditionals::execIsQuestStateIrrelevant },
			{ "IsQuestStateVisited", &UQuestConditionals::execIsQuestStateVisited },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestConditionals_HasQuestFailed_Statics
	{
		struct QuestConditionals_eventHasQuestFailed_Parms
		{
			FGuid QuestID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestConditionals_HasQuestFailed_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionals_eventHasQuestFailed_Parms, QuestID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestConditionals_HasQuestFailed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestConditionals_eventHasQuestFailed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestConditionals_HasQuestFailed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestConditionals_eventHasQuestFailed_Parms), &Z_Construct_UFunction_UQuestConditionals_HasQuestFailed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestConditionals_HasQuestFailed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_HasQuestFailed_Statics::NewProp_QuestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_HasQuestFailed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestConditionals_HasQuestFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestConditionals.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestConditionals_HasQuestFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestConditionals, nullptr, "HasQuestFailed", nullptr, nullptr, sizeof(QuestConditionals_eventHasQuestFailed_Parms), Z_Construct_UFunction_UQuestConditionals_HasQuestFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionals_HasQuestFailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestConditionals_HasQuestFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionals_HasQuestFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestConditionals_HasQuestFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestConditionals_HasQuestFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailed_Statics
	{
		struct QuestConditionals_eventHasQuestStateFailed_Parms
		{
			FGuid QuestID;
			int32 NodeId;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailed_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionals_eventHasQuestStateFailed_Parms, QuestID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailed_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionals_eventHasQuestStateFailed_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestConditionals_eventHasQuestStateFailed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestConditionals_eventHasQuestStateFailed_Parms), &Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailed_Statics::NewProp_QuestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailed_Statics::NewProp_NodeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestConditionals.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestConditionals, nullptr, "HasQuestStateFailed", nullptr, nullptr, sizeof(QuestConditionals_eventHasQuestStateFailed_Parms), Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailedOrIsIrrelevant_Statics
	{
		struct QuestConditionals_eventHasQuestStateFailedOrIsIrrelevant_Parms
		{
			FGuid QuestID;
			int32 NodeId;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailedOrIsIrrelevant_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionals_eventHasQuestStateFailedOrIsIrrelevant_Parms, QuestID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailedOrIsIrrelevant_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionals_eventHasQuestStateFailedOrIsIrrelevant_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailedOrIsIrrelevant_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestConditionals_eventHasQuestStateFailedOrIsIrrelevant_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailedOrIsIrrelevant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestConditionals_eventHasQuestStateFailedOrIsIrrelevant_Parms), &Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailedOrIsIrrelevant_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailedOrIsIrrelevant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailedOrIsIrrelevant_Statics::NewProp_QuestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailedOrIsIrrelevant_Statics::NewProp_NodeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailedOrIsIrrelevant_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailedOrIsIrrelevant_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestConditionals.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailedOrIsIrrelevant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestConditionals, nullptr, "HasQuestStateFailedOrIsIrrelevant", nullptr, nullptr, sizeof(QuestConditionals_eventHasQuestStateFailedOrIsIrrelevant_Parms), Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailedOrIsIrrelevant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailedOrIsIrrelevant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailedOrIsIrrelevant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailedOrIsIrrelevant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailedOrIsIrrelevant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailedOrIsIrrelevant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestConditionals_IsQuestActive_Statics
	{
		struct QuestConditionals_eventIsQuestActive_Parms
		{
			FGuid QuestID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestConditionals_IsQuestActive_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionals_eventIsQuestActive_Parms, QuestID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestConditionals_IsQuestActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestConditionals_eventIsQuestActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestConditionals_IsQuestActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestConditionals_eventIsQuestActive_Parms), &Z_Construct_UFunction_UQuestConditionals_IsQuestActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestConditionals_IsQuestActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_IsQuestActive_Statics::NewProp_QuestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_IsQuestActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestConditionals_IsQuestActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestConditionals.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestConditionals_IsQuestActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestConditionals, nullptr, "IsQuestActive", nullptr, nullptr, sizeof(QuestConditionals_eventIsQuestActive_Parms), Z_Construct_UFunction_UQuestConditionals_IsQuestActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionals_IsQuestActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestConditionals_IsQuestActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionals_IsQuestActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestConditionals_IsQuestActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestConditionals_IsQuestActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestConditionals_IsQuestAddendumTriggered_Statics
	{
		struct QuestConditionals_eventIsQuestAddendumTriggered_Parms
		{
			FGuid QuestID;
			int32 AddendumID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddendumID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestConditionals_IsQuestAddendumTriggered_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionals_eventIsQuestAddendumTriggered_Parms, QuestID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestConditionals_IsQuestAddendumTriggered_Statics::NewProp_AddendumID = { "AddendumID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionals_eventIsQuestAddendumTriggered_Parms, AddendumID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestConditionals_IsQuestAddendumTriggered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestConditionals_eventIsQuestAddendumTriggered_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestConditionals_IsQuestAddendumTriggered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestConditionals_eventIsQuestAddendumTriggered_Parms), &Z_Construct_UFunction_UQuestConditionals_IsQuestAddendumTriggered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestConditionals_IsQuestAddendumTriggered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_IsQuestAddendumTriggered_Statics::NewProp_QuestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_IsQuestAddendumTriggered_Statics::NewProp_AddendumID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_IsQuestAddendumTriggered_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestConditionals_IsQuestAddendumTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestConditionals.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestConditionals_IsQuestAddendumTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestConditionals, nullptr, "IsQuestAddendumTriggered", nullptr, nullptr, sizeof(QuestConditionals_eventIsQuestAddendumTriggered_Parms), Z_Construct_UFunction_UQuestConditionals_IsQuestAddendumTriggered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionals_IsQuestAddendumTriggered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestConditionals_IsQuestAddendumTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionals_IsQuestAddendumTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestConditionals_IsQuestAddendumTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestConditionals_IsQuestAddendumTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestConditionals_IsQuestComplete_Statics
	{
		struct QuestConditionals_eventIsQuestComplete_Parms
		{
			FGuid QuestID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestConditionals_IsQuestComplete_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionals_eventIsQuestComplete_Parms, QuestID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestConditionals_IsQuestComplete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestConditionals_eventIsQuestComplete_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestConditionals_IsQuestComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestConditionals_eventIsQuestComplete_Parms), &Z_Construct_UFunction_UQuestConditionals_IsQuestComplete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestConditionals_IsQuestComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_IsQuestComplete_Statics::NewProp_QuestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_IsQuestComplete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestConditionals_IsQuestComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestConditionals.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestConditionals_IsQuestComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestConditionals, nullptr, "IsQuestComplete", nullptr, nullptr, sizeof(QuestConditionals_eventIsQuestComplete_Parms), Z_Construct_UFunction_UQuestConditionals_IsQuestComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionals_IsQuestComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestConditionals_IsQuestComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionals_IsQuestComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestConditionals_IsQuestComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestConditionals_IsQuestComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestConditionals_IsQuestEndStateTriggered_Statics
	{
		struct QuestConditionals_eventIsQuestEndStateTriggered_Parms
		{
			FGuid QuestID;
			int32 EndStateID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndStateID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestConditionals_IsQuestEndStateTriggered_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionals_eventIsQuestEndStateTriggered_Parms, QuestID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestConditionals_IsQuestEndStateTriggered_Statics::NewProp_EndStateID = { "EndStateID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionals_eventIsQuestEndStateTriggered_Parms, EndStateID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestConditionals_IsQuestEndStateTriggered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestConditionals_eventIsQuestEndStateTriggered_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestConditionals_IsQuestEndStateTriggered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestConditionals_eventIsQuestEndStateTriggered_Parms), &Z_Construct_UFunction_UQuestConditionals_IsQuestEndStateTriggered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestConditionals_IsQuestEndStateTriggered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_IsQuestEndStateTriggered_Statics::NewProp_QuestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_IsQuestEndStateTriggered_Statics::NewProp_EndStateID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_IsQuestEndStateTriggered_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestConditionals_IsQuestEndStateTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestConditionals.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestConditionals_IsQuestEndStateTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestConditionals, nullptr, "IsQuestEndStateTriggered", nullptr, nullptr, sizeof(QuestConditionals_eventIsQuestEndStateTriggered_Parms), Z_Construct_UFunction_UQuestConditionals_IsQuestEndStateTriggered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionals_IsQuestEndStateTriggered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestConditionals_IsQuestEndStateTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionals_IsQuestEndStateTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestConditionals_IsQuestEndStateTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestConditionals_IsQuestEndStateTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestConditionals_IsQuestEventTriggered_Statics
	{
		struct QuestConditionals_eventIsQuestEventTriggered_Parms
		{
			FGuid QuestID;
			int32 QuestEventID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QuestEventID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestConditionals_IsQuestEventTriggered_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionals_eventIsQuestEventTriggered_Parms, QuestID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestConditionals_IsQuestEventTriggered_Statics::NewProp_QuestEventID = { "QuestEventID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionals_eventIsQuestEventTriggered_Parms, QuestEventID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestConditionals_IsQuestEventTriggered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestConditionals_eventIsQuestEventTriggered_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestConditionals_IsQuestEventTriggered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestConditionals_eventIsQuestEventTriggered_Parms), &Z_Construct_UFunction_UQuestConditionals_IsQuestEventTriggered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestConditionals_IsQuestEventTriggered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_IsQuestEventTriggered_Statics::NewProp_QuestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_IsQuestEventTriggered_Statics::NewProp_QuestEventID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_IsQuestEventTriggered_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestConditionals_IsQuestEventTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestConditionals.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestConditionals_IsQuestEventTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestConditionals, nullptr, "IsQuestEventTriggered", nullptr, nullptr, sizeof(QuestConditionals_eventIsQuestEventTriggered_Parms), Z_Construct_UFunction_UQuestConditionals_IsQuestEventTriggered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionals_IsQuestEventTriggered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestConditionals_IsQuestEventTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionals_IsQuestEventTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestConditionals_IsQuestEventTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestConditionals_IsQuestEventTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestConditionals_IsQuestMentioned_Statics
	{
		struct QuestConditionals_eventIsQuestMentioned_Parms
		{
			FGuid QuestID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestConditionals_IsQuestMentioned_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionals_eventIsQuestMentioned_Parms, QuestID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestConditionals_IsQuestMentioned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestConditionals_eventIsQuestMentioned_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestConditionals_IsQuestMentioned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestConditionals_eventIsQuestMentioned_Parms), &Z_Construct_UFunction_UQuestConditionals_IsQuestMentioned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestConditionals_IsQuestMentioned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_IsQuestMentioned_Statics::NewProp_QuestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_IsQuestMentioned_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestConditionals_IsQuestMentioned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestConditionals.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestConditionals_IsQuestMentioned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestConditionals, nullptr, "IsQuestMentioned", nullptr, nullptr, sizeof(QuestConditionals_eventIsQuestMentioned_Parms), Z_Construct_UFunction_UQuestConditionals_IsQuestMentioned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionals_IsQuestMentioned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestConditionals_IsQuestMentioned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionals_IsQuestMentioned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestConditionals_IsQuestMentioned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestConditionals_IsQuestMentioned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestConditionals_IsQuestStarted_Statics
	{
		struct QuestConditionals_eventIsQuestStarted_Parms
		{
			FGuid QuestID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestConditionals_IsQuestStarted_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionals_eventIsQuestStarted_Parms, QuestID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestConditionals_IsQuestStarted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestConditionals_eventIsQuestStarted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestConditionals_IsQuestStarted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestConditionals_eventIsQuestStarted_Parms), &Z_Construct_UFunction_UQuestConditionals_IsQuestStarted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestConditionals_IsQuestStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_IsQuestStarted_Statics::NewProp_QuestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_IsQuestStarted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestConditionals_IsQuestStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestConditionals.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestConditionals_IsQuestStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestConditionals, nullptr, "IsQuestStarted", nullptr, nullptr, sizeof(QuestConditionals_eventIsQuestStarted_Parms), Z_Construct_UFunction_UQuestConditionals_IsQuestStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionals_IsQuestStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestConditionals_IsQuestStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionals_IsQuestStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestConditionals_IsQuestStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestConditionals_IsQuestStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestConditionals_IsQuestStateActive_Statics
	{
		struct QuestConditionals_eventIsQuestStateActive_Parms
		{
			FGuid QuestID;
			int32 NodeId;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestConditionals_IsQuestStateActive_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionals_eventIsQuestStateActive_Parms, QuestID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestConditionals_IsQuestStateActive_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionals_eventIsQuestStateActive_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestConditionals_IsQuestStateActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestConditionals_eventIsQuestStateActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestConditionals_IsQuestStateActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestConditionals_eventIsQuestStateActive_Parms), &Z_Construct_UFunction_UQuestConditionals_IsQuestStateActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestConditionals_IsQuestStateActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_IsQuestStateActive_Statics::NewProp_QuestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_IsQuestStateActive_Statics::NewProp_NodeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_IsQuestStateActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestConditionals_IsQuestStateActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestConditionals.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestConditionals_IsQuestStateActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestConditionals, nullptr, "IsQuestStateActive", nullptr, nullptr, sizeof(QuestConditionals_eventIsQuestStateActive_Parms), Z_Construct_UFunction_UQuestConditionals_IsQuestStateActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionals_IsQuestStateActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestConditionals_IsQuestStateActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionals_IsQuestStateActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestConditionals_IsQuestStateActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestConditionals_IsQuestStateActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestConditionals_IsQuestStateIrrelevant_Statics
	{
		struct QuestConditionals_eventIsQuestStateIrrelevant_Parms
		{
			FGuid QuestID;
			int32 NodeId;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestConditionals_IsQuestStateIrrelevant_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionals_eventIsQuestStateIrrelevant_Parms, QuestID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestConditionals_IsQuestStateIrrelevant_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionals_eventIsQuestStateIrrelevant_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestConditionals_IsQuestStateIrrelevant_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestConditionals_eventIsQuestStateIrrelevant_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestConditionals_IsQuestStateIrrelevant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestConditionals_eventIsQuestStateIrrelevant_Parms), &Z_Construct_UFunction_UQuestConditionals_IsQuestStateIrrelevant_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestConditionals_IsQuestStateIrrelevant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_IsQuestStateIrrelevant_Statics::NewProp_QuestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_IsQuestStateIrrelevant_Statics::NewProp_NodeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_IsQuestStateIrrelevant_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestConditionals_IsQuestStateIrrelevant_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestConditionals.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestConditionals_IsQuestStateIrrelevant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestConditionals, nullptr, "IsQuestStateIrrelevant", nullptr, nullptr, sizeof(QuestConditionals_eventIsQuestStateIrrelevant_Parms), Z_Construct_UFunction_UQuestConditionals_IsQuestStateIrrelevant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionals_IsQuestStateIrrelevant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestConditionals_IsQuestStateIrrelevant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionals_IsQuestStateIrrelevant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestConditionals_IsQuestStateIrrelevant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestConditionals_IsQuestStateIrrelevant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestConditionals_IsQuestStateVisited_Statics
	{
		struct QuestConditionals_eventIsQuestStateVisited_Parms
		{
			FGuid QuestID;
			int32 NodeId;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestConditionals_IsQuestStateVisited_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionals_eventIsQuestStateVisited_Parms, QuestID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestConditionals_IsQuestStateVisited_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionals_eventIsQuestStateVisited_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestConditionals_IsQuestStateVisited_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestConditionals_eventIsQuestStateVisited_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestConditionals_IsQuestStateVisited_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestConditionals_eventIsQuestStateVisited_Parms), &Z_Construct_UFunction_UQuestConditionals_IsQuestStateVisited_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestConditionals_IsQuestStateVisited_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_IsQuestStateVisited_Statics::NewProp_QuestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_IsQuestStateVisited_Statics::NewProp_NodeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionals_IsQuestStateVisited_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestConditionals_IsQuestStateVisited_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestConditionals.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestConditionals_IsQuestStateVisited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestConditionals, nullptr, "IsQuestStateVisited", nullptr, nullptr, sizeof(QuestConditionals_eventIsQuestStateVisited_Parms), Z_Construct_UFunction_UQuestConditionals_IsQuestStateVisited_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionals_IsQuestStateVisited_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestConditionals_IsQuestStateVisited_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionals_IsQuestStateVisited_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestConditionals_IsQuestStateVisited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestConditionals_IsQuestStateVisited_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuestConditionals_NoRegister()
	{
		return UQuestConditionals::StaticClass();
	}
	struct Z_Construct_UClass_UQuestConditionals_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestConditionals_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UConditionalLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestConditionals_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestConditionals_HasQuestFailed, "HasQuestFailed" }, // 2625772806
		{ &Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailed, "HasQuestStateFailed" }, // 2714175311
		{ &Z_Construct_UFunction_UQuestConditionals_HasQuestStateFailedOrIsIrrelevant, "HasQuestStateFailedOrIsIrrelevant" }, // 1301465705
		{ &Z_Construct_UFunction_UQuestConditionals_IsQuestActive, "IsQuestActive" }, // 786133581
		{ &Z_Construct_UFunction_UQuestConditionals_IsQuestAddendumTriggered, "IsQuestAddendumTriggered" }, // 2475506311
		{ &Z_Construct_UFunction_UQuestConditionals_IsQuestComplete, "IsQuestComplete" }, // 221114357
		{ &Z_Construct_UFunction_UQuestConditionals_IsQuestEndStateTriggered, "IsQuestEndStateTriggered" }, // 3251447952
		{ &Z_Construct_UFunction_UQuestConditionals_IsQuestEventTriggered, "IsQuestEventTriggered" }, // 1541976691
		{ &Z_Construct_UFunction_UQuestConditionals_IsQuestMentioned, "IsQuestMentioned" }, // 3417023459
		{ &Z_Construct_UFunction_UQuestConditionals_IsQuestStarted, "IsQuestStarted" }, // 2855232570
		{ &Z_Construct_UFunction_UQuestConditionals_IsQuestStateActive, "IsQuestStateActive" }, // 1880632610
		{ &Z_Construct_UFunction_UQuestConditionals_IsQuestStateIrrelevant, "IsQuestStateIrrelevant" }, // 1778154777
		{ &Z_Construct_UFunction_UQuestConditionals_IsQuestStateVisited, "IsQuestStateVisited" }, // 2578672661
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestConditionals_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "QuestConditionals.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/QuestConditionals.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestConditionals_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestConditionals>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestConditionals_Statics::ClassParams = {
		&UQuestConditionals::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UQuestConditionals_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestConditionals_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestConditionals()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestConditionals_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestConditionals, 3513031661);
	template<> OEIFLOWCHARTS_API UClass* StaticClass<UQuestConditionals>()
	{
		return UQuestConditionals::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestConditionals(Z_Construct_UClass_UQuestConditionals, &UQuestConditionals::StaticClass, TEXT("/Script/OEIFlowCharts"), TEXT("UQuestConditionals"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestConditionals);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
