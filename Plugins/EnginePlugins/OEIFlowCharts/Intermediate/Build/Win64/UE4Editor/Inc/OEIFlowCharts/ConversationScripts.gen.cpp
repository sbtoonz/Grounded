// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/ConversationScripts.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConversationScripts() {}
// Cross Module References
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UConversationScripts_NoRegister();
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UConversationScripts();
	OEISCRIPTING_API UClass* Z_Construct_UClass_UScriptLibrary();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	DEFINE_FUNCTION(UConversationScripts::execClearConversationCheckpoint)
	{
		P_GET_STRUCT(FGuid,Z_Param_ConversationId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConversationScripts::ClearConversationCheckpoint(Z_Param_ConversationId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationScripts::execClearConversationNodeAsRead)
	{
		P_GET_STRUCT(FGuid,Z_Param_ConversationId);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConversationScripts::ClearConversationNodeAsRead(Z_Param_ConversationId,Z_Param_NodeId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationScripts::execMarkConversationNodeAsRead)
	{
		P_GET_STRUCT(FGuid,Z_Param_ConversationId);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConversationScripts::MarkConversationNodeAsRead(Z_Param_ConversationId,Z_Param_NodeId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationScripts::execSetConversationCheckpoint)
	{
		P_GET_STRUCT(FGuid,Z_Param_ConversationId);
		P_GET_PROPERTY(FIntProperty,Z_Param_CheckpointNodeID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConversationScripts::SetConversationCheckpoint(Z_Param_ConversationId,Z_Param_CheckpointNodeID);
		P_NATIVE_END;
	}
	void UConversationScripts::StaticRegisterNativesUConversationScripts()
	{
		UClass* Class = UConversationScripts::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearConversationCheckpoint", &UConversationScripts::execClearConversationCheckpoint },
			{ "ClearConversationNodeAsRead", &UConversationScripts::execClearConversationNodeAsRead },
			{ "MarkConversationNodeAsRead", &UConversationScripts::execMarkConversationNodeAsRead },
			{ "SetConversationCheckpoint", &UConversationScripts::execSetConversationCheckpoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConversationScripts_ClearConversationCheckpoint_Statics
	{
		struct ConversationScripts_eventClearConversationCheckpoint_Parms
		{
			FGuid ConversationId;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConversationId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationScripts_ClearConversationCheckpoint_Statics::NewProp_ConversationId = { "ConversationId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConversationScripts_eventClearConversationCheckpoint_Parms, ConversationId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationScripts_ClearConversationCheckpoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationScripts_ClearConversationCheckpoint_Statics::NewProp_ConversationId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationScripts_ClearConversationCheckpoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConversationScripts.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationScripts_ClearConversationCheckpoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationScripts, nullptr, "ClearConversationCheckpoint", nullptr, nullptr, sizeof(ConversationScripts_eventClearConversationCheckpoint_Parms), Z_Construct_UFunction_UConversationScripts_ClearConversationCheckpoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationScripts_ClearConversationCheckpoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationScripts_ClearConversationCheckpoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationScripts_ClearConversationCheckpoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationScripts_ClearConversationCheckpoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConversationScripts_ClearConversationCheckpoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationScripts_ClearConversationNodeAsRead_Statics
	{
		struct ConversationScripts_eventClearConversationNodeAsRead_Parms
		{
			FGuid ConversationId;
			int32 NodeId;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConversationId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationScripts_ClearConversationNodeAsRead_Statics::NewProp_ConversationId = { "ConversationId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConversationScripts_eventClearConversationNodeAsRead_Parms, ConversationId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConversationScripts_ClearConversationNodeAsRead_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConversationScripts_eventClearConversationNodeAsRead_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationScripts_ClearConversationNodeAsRead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationScripts_ClearConversationNodeAsRead_Statics::NewProp_ConversationId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationScripts_ClearConversationNodeAsRead_Statics::NewProp_NodeId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationScripts_ClearConversationNodeAsRead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConversationScripts.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationScripts_ClearConversationNodeAsRead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationScripts, nullptr, "ClearConversationNodeAsRead", nullptr, nullptr, sizeof(ConversationScripts_eventClearConversationNodeAsRead_Parms), Z_Construct_UFunction_UConversationScripts_ClearConversationNodeAsRead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationScripts_ClearConversationNodeAsRead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationScripts_ClearConversationNodeAsRead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationScripts_ClearConversationNodeAsRead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationScripts_ClearConversationNodeAsRead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConversationScripts_ClearConversationNodeAsRead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationScripts_MarkConversationNodeAsRead_Statics
	{
		struct ConversationScripts_eventMarkConversationNodeAsRead_Parms
		{
			FGuid ConversationId;
			int32 NodeId;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConversationId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationScripts_MarkConversationNodeAsRead_Statics::NewProp_ConversationId = { "ConversationId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConversationScripts_eventMarkConversationNodeAsRead_Parms, ConversationId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConversationScripts_MarkConversationNodeAsRead_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConversationScripts_eventMarkConversationNodeAsRead_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationScripts_MarkConversationNodeAsRead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationScripts_MarkConversationNodeAsRead_Statics::NewProp_ConversationId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationScripts_MarkConversationNodeAsRead_Statics::NewProp_NodeId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationScripts_MarkConversationNodeAsRead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConversationScripts.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationScripts_MarkConversationNodeAsRead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationScripts, nullptr, "MarkConversationNodeAsRead", nullptr, nullptr, sizeof(ConversationScripts_eventMarkConversationNodeAsRead_Parms), Z_Construct_UFunction_UConversationScripts_MarkConversationNodeAsRead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationScripts_MarkConversationNodeAsRead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationScripts_MarkConversationNodeAsRead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationScripts_MarkConversationNodeAsRead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationScripts_MarkConversationNodeAsRead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConversationScripts_MarkConversationNodeAsRead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationScripts_SetConversationCheckpoint_Statics
	{
		struct ConversationScripts_eventSetConversationCheckpoint_Parms
		{
			FGuid ConversationId;
			int32 CheckpointNodeID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConversationId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CheckpointNodeID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationScripts_SetConversationCheckpoint_Statics::NewProp_ConversationId = { "ConversationId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConversationScripts_eventSetConversationCheckpoint_Parms, ConversationId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConversationScripts_SetConversationCheckpoint_Statics::NewProp_CheckpointNodeID = { "CheckpointNodeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConversationScripts_eventSetConversationCheckpoint_Parms, CheckpointNodeID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationScripts_SetConversationCheckpoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationScripts_SetConversationCheckpoint_Statics::NewProp_ConversationId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationScripts_SetConversationCheckpoint_Statics::NewProp_CheckpointNodeID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationScripts_SetConversationCheckpoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConversationScripts.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationScripts_SetConversationCheckpoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationScripts, nullptr, "SetConversationCheckpoint", nullptr, nullptr, sizeof(ConversationScripts_eventSetConversationCheckpoint_Parms), Z_Construct_UFunction_UConversationScripts_SetConversationCheckpoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationScripts_SetConversationCheckpoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationScripts_SetConversationCheckpoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationScripts_SetConversationCheckpoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationScripts_SetConversationCheckpoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConversationScripts_SetConversationCheckpoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UConversationScripts_NoRegister()
	{
		return UConversationScripts::StaticClass();
	}
	struct Z_Construct_UClass_UConversationScripts_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConversationScripts_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScriptLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConversationScripts_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConversationScripts_ClearConversationCheckpoint, "ClearConversationCheckpoint" }, // 2878015503
		{ &Z_Construct_UFunction_UConversationScripts_ClearConversationNodeAsRead, "ClearConversationNodeAsRead" }, // 1239405200
		{ &Z_Construct_UFunction_UConversationScripts_MarkConversationNodeAsRead, "MarkConversationNodeAsRead" }, // 1691784334
		{ &Z_Construct_UFunction_UConversationScripts_SetConversationCheckpoint, "SetConversationCheckpoint" }, // 3830537641
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationScripts_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ConversationScripts.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ConversationScripts.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConversationScripts_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConversationScripts>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConversationScripts_Statics::ClassParams = {
		&UConversationScripts::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UConversationScripts_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationScripts_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConversationScripts()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConversationScripts_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConversationScripts, 4097451323);
	template<> OEIFLOWCHARTS_API UClass* StaticClass<UConversationScripts>()
	{
		return UConversationScripts::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConversationScripts(Z_Construct_UClass_UConversationScripts, &UConversationScripts::StaticClass, TEXT("/Script/OEIFlowCharts"), TEXT("UConversationScripts"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConversationScripts);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
