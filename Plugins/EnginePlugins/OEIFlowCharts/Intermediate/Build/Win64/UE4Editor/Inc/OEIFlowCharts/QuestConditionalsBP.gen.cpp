// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/QuestConditionalsBP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestConditionalsBP() {}
// Cross Module References
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UQuestConditionalsBP_NoRegister();
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UQuestConditionalsBP();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	OEICOMMON_API UEnum* Z_Construct_UEnum_OEICommon_EBoolResult();
// End Cross Module References
	DEFINE_FUNCTION(UQuestConditionalsBP::execHasQuestFailed)
	{
		P_GET_STRUCT(FGuid,Z_Param_QuestID);
		P_GET_ENUM_REF(EBoolResult,Z_Param_Out_OutResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestConditionalsBP::HasQuestFailed(Z_Param_QuestID,(EBoolResult&)(Z_Param_Out_OutResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestConditionalsBP::execHasQuestStateFailed)
	{
		P_GET_STRUCT(FGuid,Z_Param_QuestID);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_GET_ENUM_REF(EBoolResult,Z_Param_Out_OutResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestConditionalsBP::HasQuestStateFailed(Z_Param_QuestID,Z_Param_NodeId,(EBoolResult&)(Z_Param_Out_OutResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestConditionalsBP::execHasQuestStateFailedOrIsIrrelevant)
	{
		P_GET_STRUCT(FGuid,Z_Param_QuestID);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_GET_ENUM_REF(EBoolResult,Z_Param_Out_OutResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestConditionalsBP::HasQuestStateFailedOrIsIrrelevant(Z_Param_QuestID,Z_Param_NodeId,(EBoolResult&)(Z_Param_Out_OutResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestConditionalsBP::execIsQuestAddendumTriggered)
	{
		P_GET_STRUCT(FGuid,Z_Param_QuestID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AddendumID);
		P_GET_ENUM_REF(EBoolResult,Z_Param_Out_OutResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestConditionalsBP::IsQuestAddendumTriggered(Z_Param_QuestID,Z_Param_AddendumID,(EBoolResult&)(Z_Param_Out_OutResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestConditionalsBP::execIsQuestComplete)
	{
		P_GET_STRUCT(FGuid,Z_Param_QuestID);
		P_GET_ENUM_REF(EBoolResult,Z_Param_Out_OutResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestConditionalsBP::IsQuestComplete(Z_Param_QuestID,(EBoolResult&)(Z_Param_Out_OutResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestConditionalsBP::execIsQuestEndStateTriggered)
	{
		P_GET_STRUCT(FGuid,Z_Param_QuestID);
		P_GET_PROPERTY(FIntProperty,Z_Param_EndStateID);
		P_GET_ENUM_REF(EBoolResult,Z_Param_Out_OutResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestConditionalsBP::IsQuestEndStateTriggered(Z_Param_QuestID,Z_Param_EndStateID,(EBoolResult&)(Z_Param_Out_OutResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestConditionalsBP::execIsQuestMentioned)
	{
		P_GET_STRUCT(FGuid,Z_Param_QuestID);
		P_GET_ENUM_REF(EBoolResult,Z_Param_Out_OutResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestConditionalsBP::IsQuestMentioned(Z_Param_QuestID,(EBoolResult&)(Z_Param_Out_OutResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestConditionalsBP::execIsQuestStarted)
	{
		P_GET_STRUCT(FGuid,Z_Param_QuestID);
		P_GET_ENUM_REF(EBoolResult,Z_Param_Out_OutResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestConditionalsBP::IsQuestStarted(Z_Param_QuestID,(EBoolResult&)(Z_Param_Out_OutResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestConditionalsBP::execIsQuestStateActive)
	{
		P_GET_STRUCT(FGuid,Z_Param_QuestID);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_GET_ENUM_REF(EBoolResult,Z_Param_Out_OutResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestConditionalsBP::IsQuestStateActive(Z_Param_QuestID,Z_Param_NodeId,(EBoolResult&)(Z_Param_Out_OutResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestConditionalsBP::execIsQuestStateIrrelevant)
	{
		P_GET_STRUCT(FGuid,Z_Param_QuestID);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_GET_ENUM_REF(EBoolResult,Z_Param_Out_OutResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestConditionalsBP::IsQuestStateIrrelevant(Z_Param_QuestID,Z_Param_NodeId,(EBoolResult&)(Z_Param_Out_OutResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestConditionalsBP::execIsQuestStateVisited)
	{
		P_GET_STRUCT(FGuid,Z_Param_QuestID);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_GET_ENUM_REF(EBoolResult,Z_Param_Out_OutResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UQuestConditionalsBP::IsQuestStateVisited(Z_Param_QuestID,Z_Param_NodeId,(EBoolResult&)(Z_Param_Out_OutResult));
		P_NATIVE_END;
	}
	void UQuestConditionalsBP::StaticRegisterNativesUQuestConditionalsBP()
	{
		UClass* Class = UQuestConditionalsBP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasQuestFailed", &UQuestConditionalsBP::execHasQuestFailed },
			{ "HasQuestStateFailed", &UQuestConditionalsBP::execHasQuestStateFailed },
			{ "HasQuestStateFailedOrIsIrrelevant", &UQuestConditionalsBP::execHasQuestStateFailedOrIsIrrelevant },
			{ "IsQuestAddendumTriggered", &UQuestConditionalsBP::execIsQuestAddendumTriggered },
			{ "IsQuestComplete", &UQuestConditionalsBP::execIsQuestComplete },
			{ "IsQuestEndStateTriggered", &UQuestConditionalsBP::execIsQuestEndStateTriggered },
			{ "IsQuestMentioned", &UQuestConditionalsBP::execIsQuestMentioned },
			{ "IsQuestStarted", &UQuestConditionalsBP::execIsQuestStarted },
			{ "IsQuestStateActive", &UQuestConditionalsBP::execIsQuestStateActive },
			{ "IsQuestStateIrrelevant", &UQuestConditionalsBP::execIsQuestStateIrrelevant },
			{ "IsQuestStateVisited", &UQuestConditionalsBP::execIsQuestStateVisited },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestConditionalsBP_HasQuestFailed_Statics
	{
		struct QuestConditionalsBP_eventHasQuestFailed_Parms
		{
			FGuid QuestID;
			EBoolResult OutResult;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutResult;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_HasQuestFailed_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionalsBP_eventHasQuestFailed_Parms, QuestID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestConditionalsBP_HasQuestFailed_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_HasQuestFailed_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionalsBP_eventHasQuestFailed_Parms, OutResult), Z_Construct_UEnum_OEICommon_EBoolResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestConditionalsBP_HasQuestFailed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestConditionalsBP_eventHasQuestFailed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_HasQuestFailed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestConditionalsBP_eventHasQuestFailed_Parms), &Z_Construct_UFunction_UQuestConditionalsBP_HasQuestFailed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestConditionalsBP_HasQuestFailed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_HasQuestFailed_Statics::NewProp_QuestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_HasQuestFailed_Statics::NewProp_OutResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_HasQuestFailed_Statics::NewProp_OutResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_HasQuestFailed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestConditionalsBP_HasQuestFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestConditionalsBP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestConditionalsBP_HasQuestFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestConditionalsBP, nullptr, "HasQuestFailed", nullptr, nullptr, sizeof(QuestConditionalsBP_eventHasQuestFailed_Parms), Z_Construct_UFunction_UQuestConditionalsBP_HasQuestFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionalsBP_HasQuestFailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestConditionalsBP_HasQuestFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionalsBP_HasQuestFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestConditionalsBP_HasQuestFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestConditionalsBP_HasQuestFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailed_Statics
	{
		struct QuestConditionalsBP_eventHasQuestStateFailed_Parms
		{
			FGuid QuestID;
			int32 NodeId;
			EBoolResult OutResult;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutResult;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailed_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionalsBP_eventHasQuestStateFailed_Parms, QuestID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailed_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionalsBP_eventHasQuestStateFailed_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailed_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailed_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionalsBP_eventHasQuestStateFailed_Parms, OutResult), Z_Construct_UEnum_OEICommon_EBoolResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestConditionalsBP_eventHasQuestStateFailed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestConditionalsBP_eventHasQuestStateFailed_Parms), &Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailed_Statics::NewProp_QuestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailed_Statics::NewProp_NodeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailed_Statics::NewProp_OutResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailed_Statics::NewProp_OutResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestConditionalsBP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestConditionalsBP, nullptr, "HasQuestStateFailed", nullptr, nullptr, sizeof(QuestConditionalsBP_eventHasQuestStateFailed_Parms), Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailedOrIsIrrelevant_Statics
	{
		struct QuestConditionalsBP_eventHasQuestStateFailedOrIsIrrelevant_Parms
		{
			FGuid QuestID;
			int32 NodeId;
			EBoolResult OutResult;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutResult;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailedOrIsIrrelevant_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionalsBP_eventHasQuestStateFailedOrIsIrrelevant_Parms, QuestID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailedOrIsIrrelevant_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionalsBP_eventHasQuestStateFailedOrIsIrrelevant_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailedOrIsIrrelevant_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailedOrIsIrrelevant_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionalsBP_eventHasQuestStateFailedOrIsIrrelevant_Parms, OutResult), Z_Construct_UEnum_OEICommon_EBoolResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailedOrIsIrrelevant_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestConditionalsBP_eventHasQuestStateFailedOrIsIrrelevant_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailedOrIsIrrelevant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestConditionalsBP_eventHasQuestStateFailedOrIsIrrelevant_Parms), &Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailedOrIsIrrelevant_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailedOrIsIrrelevant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailedOrIsIrrelevant_Statics::NewProp_QuestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailedOrIsIrrelevant_Statics::NewProp_NodeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailedOrIsIrrelevant_Statics::NewProp_OutResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailedOrIsIrrelevant_Statics::NewProp_OutResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailedOrIsIrrelevant_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailedOrIsIrrelevant_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestConditionalsBP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailedOrIsIrrelevant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestConditionalsBP, nullptr, "HasQuestStateFailedOrIsIrrelevant", nullptr, nullptr, sizeof(QuestConditionalsBP_eventHasQuestStateFailedOrIsIrrelevant_Parms), Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailedOrIsIrrelevant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailedOrIsIrrelevant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailedOrIsIrrelevant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailedOrIsIrrelevant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailedOrIsIrrelevant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailedOrIsIrrelevant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestConditionalsBP_IsQuestAddendumTriggered_Statics
	{
		struct QuestConditionalsBP_eventIsQuestAddendumTriggered_Parms
		{
			FGuid QuestID;
			int32 AddendumID;
			EBoolResult OutResult;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddendumID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutResult;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestAddendumTriggered_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionalsBP_eventIsQuestAddendumTriggered_Parms, QuestID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestAddendumTriggered_Statics::NewProp_AddendumID = { "AddendumID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionalsBP_eventIsQuestAddendumTriggered_Parms, AddendumID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestAddendumTriggered_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestAddendumTriggered_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionalsBP_eventIsQuestAddendumTriggered_Parms, OutResult), Z_Construct_UEnum_OEICommon_EBoolResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestConditionalsBP_IsQuestAddendumTriggered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestConditionalsBP_eventIsQuestAddendumTriggered_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestAddendumTriggered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestConditionalsBP_eventIsQuestAddendumTriggered_Parms), &Z_Construct_UFunction_UQuestConditionalsBP_IsQuestAddendumTriggered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestConditionalsBP_IsQuestAddendumTriggered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestAddendumTriggered_Statics::NewProp_QuestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestAddendumTriggered_Statics::NewProp_AddendumID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestAddendumTriggered_Statics::NewProp_OutResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestAddendumTriggered_Statics::NewProp_OutResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestAddendumTriggered_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestConditionalsBP_IsQuestAddendumTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestConditionalsBP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestAddendumTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestConditionalsBP, nullptr, "IsQuestAddendumTriggered", nullptr, nullptr, sizeof(QuestConditionalsBP_eventIsQuestAddendumTriggered_Parms), Z_Construct_UFunction_UQuestConditionalsBP_IsQuestAddendumTriggered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionalsBP_IsQuestAddendumTriggered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestConditionalsBP_IsQuestAddendumTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionalsBP_IsQuestAddendumTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestConditionalsBP_IsQuestAddendumTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestConditionalsBP_IsQuestAddendumTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestConditionalsBP_IsQuestComplete_Statics
	{
		struct QuestConditionalsBP_eventIsQuestComplete_Parms
		{
			FGuid QuestID;
			EBoolResult OutResult;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutResult;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestComplete_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionalsBP_eventIsQuestComplete_Parms, QuestID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestComplete_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestComplete_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionalsBP_eventIsQuestComplete_Parms, OutResult), Z_Construct_UEnum_OEICommon_EBoolResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestConditionalsBP_IsQuestComplete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestConditionalsBP_eventIsQuestComplete_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestConditionalsBP_eventIsQuestComplete_Parms), &Z_Construct_UFunction_UQuestConditionalsBP_IsQuestComplete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestConditionalsBP_IsQuestComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestComplete_Statics::NewProp_QuestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestComplete_Statics::NewProp_OutResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestComplete_Statics::NewProp_OutResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestComplete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestConditionalsBP_IsQuestComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestConditionalsBP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestConditionalsBP, nullptr, "IsQuestComplete", nullptr, nullptr, sizeof(QuestConditionalsBP_eventIsQuestComplete_Parms), Z_Construct_UFunction_UQuestConditionalsBP_IsQuestComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionalsBP_IsQuestComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestConditionalsBP_IsQuestComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionalsBP_IsQuestComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestConditionalsBP_IsQuestComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestConditionalsBP_IsQuestComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestConditionalsBP_IsQuestEndStateTriggered_Statics
	{
		struct QuestConditionalsBP_eventIsQuestEndStateTriggered_Parms
		{
			FGuid QuestID;
			int32 EndStateID;
			EBoolResult OutResult;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndStateID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutResult;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestEndStateTriggered_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionalsBP_eventIsQuestEndStateTriggered_Parms, QuestID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestEndStateTriggered_Statics::NewProp_EndStateID = { "EndStateID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionalsBP_eventIsQuestEndStateTriggered_Parms, EndStateID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestEndStateTriggered_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestEndStateTriggered_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionalsBP_eventIsQuestEndStateTriggered_Parms, OutResult), Z_Construct_UEnum_OEICommon_EBoolResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestConditionalsBP_IsQuestEndStateTriggered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestConditionalsBP_eventIsQuestEndStateTriggered_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestEndStateTriggered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestConditionalsBP_eventIsQuestEndStateTriggered_Parms), &Z_Construct_UFunction_UQuestConditionalsBP_IsQuestEndStateTriggered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestConditionalsBP_IsQuestEndStateTriggered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestEndStateTriggered_Statics::NewProp_QuestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestEndStateTriggered_Statics::NewProp_EndStateID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestEndStateTriggered_Statics::NewProp_OutResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestEndStateTriggered_Statics::NewProp_OutResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestEndStateTriggered_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestConditionalsBP_IsQuestEndStateTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestConditionalsBP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestEndStateTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestConditionalsBP, nullptr, "IsQuestEndStateTriggered", nullptr, nullptr, sizeof(QuestConditionalsBP_eventIsQuestEndStateTriggered_Parms), Z_Construct_UFunction_UQuestConditionalsBP_IsQuestEndStateTriggered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionalsBP_IsQuestEndStateTriggered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestConditionalsBP_IsQuestEndStateTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionalsBP_IsQuestEndStateTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestConditionalsBP_IsQuestEndStateTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestConditionalsBP_IsQuestEndStateTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestConditionalsBP_IsQuestMentioned_Statics
	{
		struct QuestConditionalsBP_eventIsQuestMentioned_Parms
		{
			FGuid QuestID;
			EBoolResult OutResult;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutResult;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestMentioned_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionalsBP_eventIsQuestMentioned_Parms, QuestID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestMentioned_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestMentioned_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionalsBP_eventIsQuestMentioned_Parms, OutResult), Z_Construct_UEnum_OEICommon_EBoolResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestConditionalsBP_IsQuestMentioned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestConditionalsBP_eventIsQuestMentioned_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestMentioned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestConditionalsBP_eventIsQuestMentioned_Parms), &Z_Construct_UFunction_UQuestConditionalsBP_IsQuestMentioned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestConditionalsBP_IsQuestMentioned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestMentioned_Statics::NewProp_QuestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestMentioned_Statics::NewProp_OutResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestMentioned_Statics::NewProp_OutResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestMentioned_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestConditionalsBP_IsQuestMentioned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestConditionalsBP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestMentioned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestConditionalsBP, nullptr, "IsQuestMentioned", nullptr, nullptr, sizeof(QuestConditionalsBP_eventIsQuestMentioned_Parms), Z_Construct_UFunction_UQuestConditionalsBP_IsQuestMentioned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionalsBP_IsQuestMentioned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestConditionalsBP_IsQuestMentioned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionalsBP_IsQuestMentioned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestConditionalsBP_IsQuestMentioned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestConditionalsBP_IsQuestMentioned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStarted_Statics
	{
		struct QuestConditionalsBP_eventIsQuestStarted_Parms
		{
			FGuid QuestID;
			EBoolResult OutResult;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutResult;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStarted_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionalsBP_eventIsQuestStarted_Parms, QuestID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStarted_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStarted_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionalsBP_eventIsQuestStarted_Parms, OutResult), Z_Construct_UEnum_OEICommon_EBoolResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStarted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestConditionalsBP_eventIsQuestStarted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStarted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestConditionalsBP_eventIsQuestStarted_Parms), &Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStarted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStarted_Statics::NewProp_QuestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStarted_Statics::NewProp_OutResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStarted_Statics::NewProp_OutResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStarted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestConditionalsBP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestConditionalsBP, nullptr, "IsQuestStarted", nullptr, nullptr, sizeof(QuestConditionalsBP_eventIsQuestStarted_Parms), Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateActive_Statics
	{
		struct QuestConditionalsBP_eventIsQuestStateActive_Parms
		{
			FGuid QuestID;
			int32 NodeId;
			EBoolResult OutResult;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutResult;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateActive_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionalsBP_eventIsQuestStateActive_Parms, QuestID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateActive_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionalsBP_eventIsQuestStateActive_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateActive_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateActive_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionalsBP_eventIsQuestStateActive_Parms, OutResult), Z_Construct_UEnum_OEICommon_EBoolResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestConditionalsBP_eventIsQuestStateActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestConditionalsBP_eventIsQuestStateActive_Parms), &Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateActive_Statics::NewProp_QuestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateActive_Statics::NewProp_NodeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateActive_Statics::NewProp_OutResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateActive_Statics::NewProp_OutResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestConditionalsBP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestConditionalsBP, nullptr, "IsQuestStateActive", nullptr, nullptr, sizeof(QuestConditionalsBP_eventIsQuestStateActive_Parms), Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateIrrelevant_Statics
	{
		struct QuestConditionalsBP_eventIsQuestStateIrrelevant_Parms
		{
			FGuid QuestID;
			int32 NodeId;
			EBoolResult OutResult;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutResult;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateIrrelevant_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionalsBP_eventIsQuestStateIrrelevant_Parms, QuestID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateIrrelevant_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionalsBP_eventIsQuestStateIrrelevant_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateIrrelevant_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateIrrelevant_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionalsBP_eventIsQuestStateIrrelevant_Parms, OutResult), Z_Construct_UEnum_OEICommon_EBoolResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateIrrelevant_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestConditionalsBP_eventIsQuestStateIrrelevant_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateIrrelevant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestConditionalsBP_eventIsQuestStateIrrelevant_Parms), &Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateIrrelevant_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateIrrelevant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateIrrelevant_Statics::NewProp_QuestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateIrrelevant_Statics::NewProp_NodeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateIrrelevant_Statics::NewProp_OutResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateIrrelevant_Statics::NewProp_OutResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateIrrelevant_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateIrrelevant_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestConditionalsBP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateIrrelevant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestConditionalsBP, nullptr, "IsQuestStateIrrelevant", nullptr, nullptr, sizeof(QuestConditionalsBP_eventIsQuestStateIrrelevant_Parms), Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateIrrelevant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateIrrelevant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateIrrelevant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateIrrelevant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateIrrelevant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateIrrelevant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateVisited_Statics
	{
		struct QuestConditionalsBP_eventIsQuestStateVisited_Parms
		{
			FGuid QuestID;
			int32 NodeId;
			EBoolResult OutResult;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutResult;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateVisited_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionalsBP_eventIsQuestStateVisited_Parms, QuestID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateVisited_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionalsBP_eventIsQuestStateVisited_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateVisited_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateVisited_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestConditionalsBP_eventIsQuestStateVisited_Parms, OutResult), Z_Construct_UEnum_OEICommon_EBoolResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateVisited_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestConditionalsBP_eventIsQuestStateVisited_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateVisited_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestConditionalsBP_eventIsQuestStateVisited_Parms), &Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateVisited_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateVisited_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateVisited_Statics::NewProp_QuestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateVisited_Statics::NewProp_NodeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateVisited_Statics::NewProp_OutResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateVisited_Statics::NewProp_OutResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateVisited_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateVisited_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestConditionalsBP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateVisited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestConditionalsBP, nullptr, "IsQuestStateVisited", nullptr, nullptr, sizeof(QuestConditionalsBP_eventIsQuestStateVisited_Parms), Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateVisited_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateVisited_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateVisited_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateVisited_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateVisited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateVisited_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuestConditionalsBP_NoRegister()
	{
		return UQuestConditionalsBP::StaticClass();
	}
	struct Z_Construct_UClass_UQuestConditionalsBP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestConditionalsBP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestConditionalsBP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestConditionalsBP_HasQuestFailed, "HasQuestFailed" }, // 4261793107
		{ &Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailed, "HasQuestStateFailed" }, // 3669212480
		{ &Z_Construct_UFunction_UQuestConditionalsBP_HasQuestStateFailedOrIsIrrelevant, "HasQuestStateFailedOrIsIrrelevant" }, // 30864414
		{ &Z_Construct_UFunction_UQuestConditionalsBP_IsQuestAddendumTriggered, "IsQuestAddendumTriggered" }, // 81367921
		{ &Z_Construct_UFunction_UQuestConditionalsBP_IsQuestComplete, "IsQuestComplete" }, // 941864818
		{ &Z_Construct_UFunction_UQuestConditionalsBP_IsQuestEndStateTriggered, "IsQuestEndStateTriggered" }, // 4065812607
		{ &Z_Construct_UFunction_UQuestConditionalsBP_IsQuestMentioned, "IsQuestMentioned" }, // 2634335020
		{ &Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStarted, "IsQuestStarted" }, // 1265961771
		{ &Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateActive, "IsQuestStateActive" }, // 471760795
		{ &Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateIrrelevant, "IsQuestStateIrrelevant" }, // 4065695258
		{ &Z_Construct_UFunction_UQuestConditionalsBP_IsQuestStateVisited, "IsQuestStateVisited" }, // 2568476739
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestConditionalsBP_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "QuestConditionalsBP.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/QuestConditionalsBP.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestConditionalsBP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestConditionalsBP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestConditionalsBP_Statics::ClassParams = {
		&UQuestConditionalsBP::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UQuestConditionalsBP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestConditionalsBP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestConditionalsBP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestConditionalsBP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestConditionalsBP, 3663058549);
	template<> OEIFLOWCHARTS_API UClass* StaticClass<UQuestConditionalsBP>()
	{
		return UQuestConditionalsBP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestConditionalsBP(Z_Construct_UClass_UQuestConditionalsBP, &UQuestConditionalsBP::StaticClass, TEXT("/Script/OEIFlowCharts"), TEXT("UQuestConditionalsBP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestConditionalsBP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
