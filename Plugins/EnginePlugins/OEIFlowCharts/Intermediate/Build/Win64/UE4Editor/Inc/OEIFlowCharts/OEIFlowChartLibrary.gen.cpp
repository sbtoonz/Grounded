// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/OEIFlowChartLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIFlowChartLibrary() {}
// Cross Module References
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UOEIFlowChartLibrary_NoRegister();
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UOEIFlowChartLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FConversationReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FChatterEventReference();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FQuestReference();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FSpeakerReference();
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UConversationAsset_NoRegister();
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_USpeakerAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UOEIFlowChartLibrary::execExecuteOnUpdateScript)
	{
		P_GET_STRUCT_REF(FConversationReference,Z_Param_Out_Conversation);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_GET_STRUCT(FGuid,Z_Param_ScriptID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOEIFlowChartLibrary::ExecuteOnUpdateScript(Z_Param_Out_Conversation,Z_Param_NodeId,Z_Param_ScriptID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIFlowChartLibrary::execGetChatterEventID)
	{
		P_GET_STRUCT_REF(FChatterEventReference,Z_Param_Out_ChatterEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=UOEIFlowChartLibrary::GetChatterEventID(Z_Param_Out_ChatterEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIFlowChartLibrary::execGetConversationID)
	{
		P_GET_STRUCT_REF(FConversationReference,Z_Param_Out_Conversation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=UOEIFlowChartLibrary::GetConversationID(Z_Param_Out_Conversation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIFlowChartLibrary::execGetQuestID)
	{
		P_GET_STRUCT_REF(FQuestReference,Z_Param_Out_Quest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=UOEIFlowChartLibrary::GetQuestID(Z_Param_Out_Quest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIFlowChartLibrary::execGetSpeakerID)
	{
		P_GET_STRUCT_REF(FSpeakerReference,Z_Param_Out_Speaker);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=UOEIFlowChartLibrary::GetSpeakerID(Z_Param_Out_Speaker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIFlowChartLibrary::execMakeChatterEventReference)
	{
		P_GET_STRUCT(FGuid,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FChatterEventReference*)Z_Param__Result=UOEIFlowChartLibrary::MakeChatterEventReference(Z_Param_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIFlowChartLibrary::execMakeConversationReference)
	{
		P_GET_STRUCT(FGuid,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FConversationReference*)Z_Param__Result=UOEIFlowChartLibrary::MakeConversationReference(Z_Param_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIFlowChartLibrary::execMakeConversationReferenceWithAsset)
	{
		P_GET_OBJECT(UConversationAsset,Z_Param_Asset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FConversationReference*)Z_Param__Result=UOEIFlowChartLibrary::MakeConversationReferenceWithAsset(Z_Param_Asset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIFlowChartLibrary::execMakeQuestReference)
	{
		P_GET_STRUCT(FGuid,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuestReference*)Z_Param__Result=UOEIFlowChartLibrary::MakeQuestReference(Z_Param_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIFlowChartLibrary::execMakeSpeakerReference)
	{
		P_GET_STRUCT(FGuid,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSpeakerReference*)Z_Param__Result=UOEIFlowChartLibrary::MakeSpeakerReference(Z_Param_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIFlowChartLibrary::execMakeSpeakerReferenceWithAsset)
	{
		P_GET_OBJECT(USpeakerAsset,Z_Param_Asset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSpeakerReference*)Z_Param__Result=UOEIFlowChartLibrary::MakeSpeakerReferenceWithAsset(Z_Param_Asset);
		P_NATIVE_END;
	}
	void UOEIFlowChartLibrary::StaticRegisterNativesUOEIFlowChartLibrary()
	{
		UClass* Class = UOEIFlowChartLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteOnUpdateScript", &UOEIFlowChartLibrary::execExecuteOnUpdateScript },
			{ "GetChatterEventID", &UOEIFlowChartLibrary::execGetChatterEventID },
			{ "GetConversationID", &UOEIFlowChartLibrary::execGetConversationID },
			{ "GetQuestID", &UOEIFlowChartLibrary::execGetQuestID },
			{ "GetSpeakerID", &UOEIFlowChartLibrary::execGetSpeakerID },
			{ "MakeChatterEventReference", &UOEIFlowChartLibrary::execMakeChatterEventReference },
			{ "MakeConversationReference", &UOEIFlowChartLibrary::execMakeConversationReference },
			{ "MakeConversationReferenceWithAsset", &UOEIFlowChartLibrary::execMakeConversationReferenceWithAsset },
			{ "MakeQuestReference", &UOEIFlowChartLibrary::execMakeQuestReference },
			{ "MakeSpeakerReference", &UOEIFlowChartLibrary::execMakeSpeakerReference },
			{ "MakeSpeakerReferenceWithAsset", &UOEIFlowChartLibrary::execMakeSpeakerReferenceWithAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOEIFlowChartLibrary_ExecuteOnUpdateScript_Statics
	{
		struct OEIFlowChartLibrary_eventExecuteOnUpdateScript_Parms
		{
			FConversationReference Conversation;
			int32 NodeId;
			FGuid ScriptID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conversation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Conversation;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScriptID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIFlowChartLibrary_ExecuteOnUpdateScript_Statics::NewProp_Conversation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIFlowChartLibrary_ExecuteOnUpdateScript_Statics::NewProp_Conversation = { "Conversation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIFlowChartLibrary_eventExecuteOnUpdateScript_Parms, Conversation), Z_Construct_UScriptStruct_FConversationReference, METADATA_PARAMS(Z_Construct_UFunction_UOEIFlowChartLibrary_ExecuteOnUpdateScript_Statics::NewProp_Conversation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIFlowChartLibrary_ExecuteOnUpdateScript_Statics::NewProp_Conversation_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOEIFlowChartLibrary_ExecuteOnUpdateScript_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIFlowChartLibrary_eventExecuteOnUpdateScript_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIFlowChartLibrary_ExecuteOnUpdateScript_Statics::NewProp_ScriptID = { "ScriptID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIFlowChartLibrary_eventExecuteOnUpdateScript_Parms, ScriptID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIFlowChartLibrary_ExecuteOnUpdateScript_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIFlowChartLibrary_ExecuteOnUpdateScript_Statics::NewProp_Conversation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIFlowChartLibrary_ExecuteOnUpdateScript_Statics::NewProp_NodeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIFlowChartLibrary_ExecuteOnUpdateScript_Statics::NewProp_ScriptID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIFlowChartLibrary_ExecuteOnUpdateScript_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIFlowChartLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIFlowChartLibrary_ExecuteOnUpdateScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIFlowChartLibrary, nullptr, "ExecuteOnUpdateScript", nullptr, nullptr, sizeof(OEIFlowChartLibrary_eventExecuteOnUpdateScript_Parms), Z_Construct_UFunction_UOEIFlowChartLibrary_ExecuteOnUpdateScript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIFlowChartLibrary_ExecuteOnUpdateScript_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIFlowChartLibrary_ExecuteOnUpdateScript_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIFlowChartLibrary_ExecuteOnUpdateScript_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIFlowChartLibrary_ExecuteOnUpdateScript()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIFlowChartLibrary_ExecuteOnUpdateScript_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIFlowChartLibrary_GetChatterEventID_Statics
	{
		struct OEIFlowChartLibrary_eventGetChatterEventID_Parms
		{
			FChatterEventReference ChatterEvent;
			FGuid ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatterEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatterEvent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIFlowChartLibrary_GetChatterEventID_Statics::NewProp_ChatterEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIFlowChartLibrary_GetChatterEventID_Statics::NewProp_ChatterEvent = { "ChatterEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIFlowChartLibrary_eventGetChatterEventID_Parms, ChatterEvent), Z_Construct_UScriptStruct_FChatterEventReference, METADATA_PARAMS(Z_Construct_UFunction_UOEIFlowChartLibrary_GetChatterEventID_Statics::NewProp_ChatterEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIFlowChartLibrary_GetChatterEventID_Statics::NewProp_ChatterEvent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIFlowChartLibrary_GetChatterEventID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIFlowChartLibrary_eventGetChatterEventID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIFlowChartLibrary_GetChatterEventID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIFlowChartLibrary_GetChatterEventID_Statics::NewProp_ChatterEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIFlowChartLibrary_GetChatterEventID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIFlowChartLibrary_GetChatterEventID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIFlowChartLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIFlowChartLibrary_GetChatterEventID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIFlowChartLibrary, nullptr, "GetChatterEventID", nullptr, nullptr, sizeof(OEIFlowChartLibrary_eventGetChatterEventID_Parms), Z_Construct_UFunction_UOEIFlowChartLibrary_GetChatterEventID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIFlowChartLibrary_GetChatterEventID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIFlowChartLibrary_GetChatterEventID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIFlowChartLibrary_GetChatterEventID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIFlowChartLibrary_GetChatterEventID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIFlowChartLibrary_GetChatterEventID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIFlowChartLibrary_GetConversationID_Statics
	{
		struct OEIFlowChartLibrary_eventGetConversationID_Parms
		{
			FConversationReference Conversation;
			FGuid ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conversation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Conversation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIFlowChartLibrary_GetConversationID_Statics::NewProp_Conversation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIFlowChartLibrary_GetConversationID_Statics::NewProp_Conversation = { "Conversation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIFlowChartLibrary_eventGetConversationID_Parms, Conversation), Z_Construct_UScriptStruct_FConversationReference, METADATA_PARAMS(Z_Construct_UFunction_UOEIFlowChartLibrary_GetConversationID_Statics::NewProp_Conversation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIFlowChartLibrary_GetConversationID_Statics::NewProp_Conversation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIFlowChartLibrary_GetConversationID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIFlowChartLibrary_eventGetConversationID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIFlowChartLibrary_GetConversationID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIFlowChartLibrary_GetConversationID_Statics::NewProp_Conversation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIFlowChartLibrary_GetConversationID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIFlowChartLibrary_GetConversationID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIFlowChartLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIFlowChartLibrary_GetConversationID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIFlowChartLibrary, nullptr, "GetConversationID", nullptr, nullptr, sizeof(OEIFlowChartLibrary_eventGetConversationID_Parms), Z_Construct_UFunction_UOEIFlowChartLibrary_GetConversationID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIFlowChartLibrary_GetConversationID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIFlowChartLibrary_GetConversationID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIFlowChartLibrary_GetConversationID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIFlowChartLibrary_GetConversationID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIFlowChartLibrary_GetConversationID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIFlowChartLibrary_GetQuestID_Statics
	{
		struct OEIFlowChartLibrary_eventGetQuestID_Parms
		{
			FQuestReference Quest;
			FGuid ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Quest;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIFlowChartLibrary_GetQuestID_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIFlowChartLibrary_GetQuestID_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIFlowChartLibrary_eventGetQuestID_Parms, Quest), Z_Construct_UScriptStruct_FQuestReference, METADATA_PARAMS(Z_Construct_UFunction_UOEIFlowChartLibrary_GetQuestID_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIFlowChartLibrary_GetQuestID_Statics::NewProp_Quest_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIFlowChartLibrary_GetQuestID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIFlowChartLibrary_eventGetQuestID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIFlowChartLibrary_GetQuestID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIFlowChartLibrary_GetQuestID_Statics::NewProp_Quest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIFlowChartLibrary_GetQuestID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIFlowChartLibrary_GetQuestID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIFlowChartLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIFlowChartLibrary_GetQuestID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIFlowChartLibrary, nullptr, "GetQuestID", nullptr, nullptr, sizeof(OEIFlowChartLibrary_eventGetQuestID_Parms), Z_Construct_UFunction_UOEIFlowChartLibrary_GetQuestID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIFlowChartLibrary_GetQuestID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIFlowChartLibrary_GetQuestID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIFlowChartLibrary_GetQuestID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIFlowChartLibrary_GetQuestID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIFlowChartLibrary_GetQuestID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIFlowChartLibrary_GetSpeakerID_Statics
	{
		struct OEIFlowChartLibrary_eventGetSpeakerID_Parms
		{
			FSpeakerReference Speaker;
			FGuid ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Speaker;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIFlowChartLibrary_GetSpeakerID_Statics::NewProp_Speaker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIFlowChartLibrary_GetSpeakerID_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIFlowChartLibrary_eventGetSpeakerID_Parms, Speaker), Z_Construct_UScriptStruct_FSpeakerReference, METADATA_PARAMS(Z_Construct_UFunction_UOEIFlowChartLibrary_GetSpeakerID_Statics::NewProp_Speaker_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIFlowChartLibrary_GetSpeakerID_Statics::NewProp_Speaker_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIFlowChartLibrary_GetSpeakerID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIFlowChartLibrary_eventGetSpeakerID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIFlowChartLibrary_GetSpeakerID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIFlowChartLibrary_GetSpeakerID_Statics::NewProp_Speaker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIFlowChartLibrary_GetSpeakerID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIFlowChartLibrary_GetSpeakerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIFlowChartLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIFlowChartLibrary_GetSpeakerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIFlowChartLibrary, nullptr, "GetSpeakerID", nullptr, nullptr, sizeof(OEIFlowChartLibrary_eventGetSpeakerID_Parms), Z_Construct_UFunction_UOEIFlowChartLibrary_GetSpeakerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIFlowChartLibrary_GetSpeakerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIFlowChartLibrary_GetSpeakerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIFlowChartLibrary_GetSpeakerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIFlowChartLibrary_GetSpeakerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIFlowChartLibrary_GetSpeakerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIFlowChartLibrary_MakeChatterEventReference_Statics
	{
		struct OEIFlowChartLibrary_eventMakeChatterEventReference_Parms
		{
			FGuid ID;
			FChatterEventReference ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIFlowChartLibrary_MakeChatterEventReference_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIFlowChartLibrary_eventMakeChatterEventReference_Parms, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIFlowChartLibrary_MakeChatterEventReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIFlowChartLibrary_eventMakeChatterEventReference_Parms, ReturnValue), Z_Construct_UScriptStruct_FChatterEventReference, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIFlowChartLibrary_MakeChatterEventReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIFlowChartLibrary_MakeChatterEventReference_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIFlowChartLibrary_MakeChatterEventReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIFlowChartLibrary_MakeChatterEventReference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIFlowChartLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIFlowChartLibrary_MakeChatterEventReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIFlowChartLibrary, nullptr, "MakeChatterEventReference", nullptr, nullptr, sizeof(OEIFlowChartLibrary_eventMakeChatterEventReference_Parms), Z_Construct_UFunction_UOEIFlowChartLibrary_MakeChatterEventReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIFlowChartLibrary_MakeChatterEventReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIFlowChartLibrary_MakeChatterEventReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIFlowChartLibrary_MakeChatterEventReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIFlowChartLibrary_MakeChatterEventReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIFlowChartLibrary_MakeChatterEventReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIFlowChartLibrary_MakeConversationReference_Statics
	{
		struct OEIFlowChartLibrary_eventMakeConversationReference_Parms
		{
			FGuid ID;
			FConversationReference ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIFlowChartLibrary_MakeConversationReference_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIFlowChartLibrary_eventMakeConversationReference_Parms, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIFlowChartLibrary_MakeConversationReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIFlowChartLibrary_eventMakeConversationReference_Parms, ReturnValue), Z_Construct_UScriptStruct_FConversationReference, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIFlowChartLibrary_MakeConversationReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIFlowChartLibrary_MakeConversationReference_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIFlowChartLibrary_MakeConversationReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIFlowChartLibrary_MakeConversationReference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIFlowChartLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIFlowChartLibrary_MakeConversationReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIFlowChartLibrary, nullptr, "MakeConversationReference", nullptr, nullptr, sizeof(OEIFlowChartLibrary_eventMakeConversationReference_Parms), Z_Construct_UFunction_UOEIFlowChartLibrary_MakeConversationReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIFlowChartLibrary_MakeConversationReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIFlowChartLibrary_MakeConversationReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIFlowChartLibrary_MakeConversationReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIFlowChartLibrary_MakeConversationReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIFlowChartLibrary_MakeConversationReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIFlowChartLibrary_MakeConversationReferenceWithAsset_Statics
	{
		struct OEIFlowChartLibrary_eventMakeConversationReferenceWithAsset_Parms
		{
			UConversationAsset* Asset;
			FConversationReference ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOEIFlowChartLibrary_MakeConversationReferenceWithAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIFlowChartLibrary_eventMakeConversationReferenceWithAsset_Parms, Asset), Z_Construct_UClass_UConversationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIFlowChartLibrary_MakeConversationReferenceWithAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIFlowChartLibrary_eventMakeConversationReferenceWithAsset_Parms, ReturnValue), Z_Construct_UScriptStruct_FConversationReference, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIFlowChartLibrary_MakeConversationReferenceWithAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIFlowChartLibrary_MakeConversationReferenceWithAsset_Statics::NewProp_Asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIFlowChartLibrary_MakeConversationReferenceWithAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIFlowChartLibrary_MakeConversationReferenceWithAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIFlowChartLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIFlowChartLibrary_MakeConversationReferenceWithAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIFlowChartLibrary, nullptr, "MakeConversationReferenceWithAsset", nullptr, nullptr, sizeof(OEIFlowChartLibrary_eventMakeConversationReferenceWithAsset_Parms), Z_Construct_UFunction_UOEIFlowChartLibrary_MakeConversationReferenceWithAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIFlowChartLibrary_MakeConversationReferenceWithAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIFlowChartLibrary_MakeConversationReferenceWithAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIFlowChartLibrary_MakeConversationReferenceWithAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIFlowChartLibrary_MakeConversationReferenceWithAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIFlowChartLibrary_MakeConversationReferenceWithAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIFlowChartLibrary_MakeQuestReference_Statics
	{
		struct OEIFlowChartLibrary_eventMakeQuestReference_Parms
		{
			FGuid ID;
			FQuestReference ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIFlowChartLibrary_MakeQuestReference_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIFlowChartLibrary_eventMakeQuestReference_Parms, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIFlowChartLibrary_MakeQuestReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIFlowChartLibrary_eventMakeQuestReference_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuestReference, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIFlowChartLibrary_MakeQuestReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIFlowChartLibrary_MakeQuestReference_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIFlowChartLibrary_MakeQuestReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIFlowChartLibrary_MakeQuestReference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIFlowChartLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIFlowChartLibrary_MakeQuestReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIFlowChartLibrary, nullptr, "MakeQuestReference", nullptr, nullptr, sizeof(OEIFlowChartLibrary_eventMakeQuestReference_Parms), Z_Construct_UFunction_UOEIFlowChartLibrary_MakeQuestReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIFlowChartLibrary_MakeQuestReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIFlowChartLibrary_MakeQuestReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIFlowChartLibrary_MakeQuestReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIFlowChartLibrary_MakeQuestReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIFlowChartLibrary_MakeQuestReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIFlowChartLibrary_MakeSpeakerReference_Statics
	{
		struct OEIFlowChartLibrary_eventMakeSpeakerReference_Parms
		{
			FGuid ID;
			FSpeakerReference ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIFlowChartLibrary_MakeSpeakerReference_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIFlowChartLibrary_eventMakeSpeakerReference_Parms, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIFlowChartLibrary_MakeSpeakerReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIFlowChartLibrary_eventMakeSpeakerReference_Parms, ReturnValue), Z_Construct_UScriptStruct_FSpeakerReference, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIFlowChartLibrary_MakeSpeakerReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIFlowChartLibrary_MakeSpeakerReference_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIFlowChartLibrary_MakeSpeakerReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIFlowChartLibrary_MakeSpeakerReference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIFlowChartLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIFlowChartLibrary_MakeSpeakerReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIFlowChartLibrary, nullptr, "MakeSpeakerReference", nullptr, nullptr, sizeof(OEIFlowChartLibrary_eventMakeSpeakerReference_Parms), Z_Construct_UFunction_UOEIFlowChartLibrary_MakeSpeakerReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIFlowChartLibrary_MakeSpeakerReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIFlowChartLibrary_MakeSpeakerReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIFlowChartLibrary_MakeSpeakerReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIFlowChartLibrary_MakeSpeakerReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIFlowChartLibrary_MakeSpeakerReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIFlowChartLibrary_MakeSpeakerReferenceWithAsset_Statics
	{
		struct OEIFlowChartLibrary_eventMakeSpeakerReferenceWithAsset_Parms
		{
			USpeakerAsset* Asset;
			FSpeakerReference ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOEIFlowChartLibrary_MakeSpeakerReferenceWithAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIFlowChartLibrary_eventMakeSpeakerReferenceWithAsset_Parms, Asset), Z_Construct_UClass_USpeakerAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIFlowChartLibrary_MakeSpeakerReferenceWithAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIFlowChartLibrary_eventMakeSpeakerReferenceWithAsset_Parms, ReturnValue), Z_Construct_UScriptStruct_FSpeakerReference, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIFlowChartLibrary_MakeSpeakerReferenceWithAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIFlowChartLibrary_MakeSpeakerReferenceWithAsset_Statics::NewProp_Asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIFlowChartLibrary_MakeSpeakerReferenceWithAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIFlowChartLibrary_MakeSpeakerReferenceWithAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIFlowChartLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIFlowChartLibrary_MakeSpeakerReferenceWithAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIFlowChartLibrary, nullptr, "MakeSpeakerReferenceWithAsset", nullptr, nullptr, sizeof(OEIFlowChartLibrary_eventMakeSpeakerReferenceWithAsset_Parms), Z_Construct_UFunction_UOEIFlowChartLibrary_MakeSpeakerReferenceWithAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIFlowChartLibrary_MakeSpeakerReferenceWithAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIFlowChartLibrary_MakeSpeakerReferenceWithAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIFlowChartLibrary_MakeSpeakerReferenceWithAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIFlowChartLibrary_MakeSpeakerReferenceWithAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIFlowChartLibrary_MakeSpeakerReferenceWithAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOEIFlowChartLibrary_NoRegister()
	{
		return UOEIFlowChartLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOEIFlowChartLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEIFlowChartLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOEIFlowChartLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOEIFlowChartLibrary_ExecuteOnUpdateScript, "ExecuteOnUpdateScript" }, // 72531325
		{ &Z_Construct_UFunction_UOEIFlowChartLibrary_GetChatterEventID, "GetChatterEventID" }, // 2851844834
		{ &Z_Construct_UFunction_UOEIFlowChartLibrary_GetConversationID, "GetConversationID" }, // 47169541
		{ &Z_Construct_UFunction_UOEIFlowChartLibrary_GetQuestID, "GetQuestID" }, // 1352887991
		{ &Z_Construct_UFunction_UOEIFlowChartLibrary_GetSpeakerID, "GetSpeakerID" }, // 3338141251
		{ &Z_Construct_UFunction_UOEIFlowChartLibrary_MakeChatterEventReference, "MakeChatterEventReference" }, // 3166825685
		{ &Z_Construct_UFunction_UOEIFlowChartLibrary_MakeConversationReference, "MakeConversationReference" }, // 3646051975
		{ &Z_Construct_UFunction_UOEIFlowChartLibrary_MakeConversationReferenceWithAsset, "MakeConversationReferenceWithAsset" }, // 2471556642
		{ &Z_Construct_UFunction_UOEIFlowChartLibrary_MakeQuestReference, "MakeQuestReference" }, // 886313783
		{ &Z_Construct_UFunction_UOEIFlowChartLibrary_MakeSpeakerReference, "MakeSpeakerReference" }, // 3507973606
		{ &Z_Construct_UFunction_UOEIFlowChartLibrary_MakeSpeakerReferenceWithAsset, "MakeSpeakerReferenceWithAsset" }, // 3072951618
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIFlowChartLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEIFlowChartLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEIFlowChartLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEIFlowChartLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEIFlowChartLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEIFlowChartLibrary_Statics::ClassParams = {
		&UOEIFlowChartLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOEIFlowChartLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIFlowChartLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEIFlowChartLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEIFlowChartLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEIFlowChartLibrary, 1504078951);
	template<> OEIFLOWCHARTS_API UClass* StaticClass<UOEIFlowChartLibrary>()
	{
		return UOEIFlowChartLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEIFlowChartLibrary(Z_Construct_UClass_UOEIFlowChartLibrary, &UOEIFlowChartLibrary::StaticClass, TEXT("/Script/OEIFlowCharts"), TEXT("UOEIFlowChartLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEIFlowChartLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
