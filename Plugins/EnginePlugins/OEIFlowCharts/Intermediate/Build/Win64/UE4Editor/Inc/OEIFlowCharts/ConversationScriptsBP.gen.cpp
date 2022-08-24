// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/ConversationScriptsBP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConversationScriptsBP() {}
// Cross Module References
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UConversationScriptsBP_NoRegister();
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UConversationScriptsBP();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	DEFINE_FUNCTION(UConversationScriptsBP::execClearConversationCheckpoint)
	{
		P_GET_STRUCT(FGuid,Z_Param_ConversationId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConversationScriptsBP::ClearConversationCheckpoint(Z_Param_ConversationId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationScriptsBP::execClearConversationNodeAsRead)
	{
		P_GET_STRUCT(FGuid,Z_Param_ConversationId);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConversationScriptsBP::ClearConversationNodeAsRead(Z_Param_ConversationId,Z_Param_NodeId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationScriptsBP::execMarkConversationNodeAsRead)
	{
		P_GET_STRUCT(FGuid,Z_Param_ConversationId);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConversationScriptsBP::MarkConversationNodeAsRead(Z_Param_ConversationId,Z_Param_NodeId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationScriptsBP::execSetConversationCheckpoint)
	{
		P_GET_STRUCT(FGuid,Z_Param_ConversationId);
		P_GET_PROPERTY(FIntProperty,Z_Param_CheckpointNodeID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConversationScriptsBP::SetConversationCheckpoint(Z_Param_ConversationId,Z_Param_CheckpointNodeID);
		P_NATIVE_END;
	}
	void UConversationScriptsBP::StaticRegisterNativesUConversationScriptsBP()
	{
		UClass* Class = UConversationScriptsBP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearConversationCheckpoint", &UConversationScriptsBP::execClearConversationCheckpoint },
			{ "ClearConversationNodeAsRead", &UConversationScriptsBP::execClearConversationNodeAsRead },
			{ "MarkConversationNodeAsRead", &UConversationScriptsBP::execMarkConversationNodeAsRead },
			{ "SetConversationCheckpoint", &UConversationScriptsBP::execSetConversationCheckpoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConversationScriptsBP_ClearConversationCheckpoint_Statics
	{
		struct ConversationScriptsBP_eventClearConversationCheckpoint_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationScriptsBP_ClearConversationCheckpoint_Statics::NewProp_ConversationId = { "ConversationId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConversationScriptsBP_eventClearConversationCheckpoint_Parms, ConversationId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationScriptsBP_ClearConversationCheckpoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationScriptsBP_ClearConversationCheckpoint_Statics::NewProp_ConversationId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationScriptsBP_ClearConversationCheckpoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConversationScriptsBP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationScriptsBP_ClearConversationCheckpoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationScriptsBP, nullptr, "ClearConversationCheckpoint", nullptr, nullptr, sizeof(ConversationScriptsBP_eventClearConversationCheckpoint_Parms), Z_Construct_UFunction_UConversationScriptsBP_ClearConversationCheckpoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationScriptsBP_ClearConversationCheckpoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationScriptsBP_ClearConversationCheckpoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationScriptsBP_ClearConversationCheckpoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationScriptsBP_ClearConversationCheckpoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConversationScriptsBP_ClearConversationCheckpoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationScriptsBP_ClearConversationNodeAsRead_Statics
	{
		struct ConversationScriptsBP_eventClearConversationNodeAsRead_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationScriptsBP_ClearConversationNodeAsRead_Statics::NewProp_ConversationId = { "ConversationId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConversationScriptsBP_eventClearConversationNodeAsRead_Parms, ConversationId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConversationScriptsBP_ClearConversationNodeAsRead_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConversationScriptsBP_eventClearConversationNodeAsRead_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationScriptsBP_ClearConversationNodeAsRead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationScriptsBP_ClearConversationNodeAsRead_Statics::NewProp_ConversationId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationScriptsBP_ClearConversationNodeAsRead_Statics::NewProp_NodeId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationScriptsBP_ClearConversationNodeAsRead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConversationScriptsBP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationScriptsBP_ClearConversationNodeAsRead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationScriptsBP, nullptr, "ClearConversationNodeAsRead", nullptr, nullptr, sizeof(ConversationScriptsBP_eventClearConversationNodeAsRead_Parms), Z_Construct_UFunction_UConversationScriptsBP_ClearConversationNodeAsRead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationScriptsBP_ClearConversationNodeAsRead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationScriptsBP_ClearConversationNodeAsRead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationScriptsBP_ClearConversationNodeAsRead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationScriptsBP_ClearConversationNodeAsRead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConversationScriptsBP_ClearConversationNodeAsRead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationScriptsBP_MarkConversationNodeAsRead_Statics
	{
		struct ConversationScriptsBP_eventMarkConversationNodeAsRead_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationScriptsBP_MarkConversationNodeAsRead_Statics::NewProp_ConversationId = { "ConversationId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConversationScriptsBP_eventMarkConversationNodeAsRead_Parms, ConversationId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConversationScriptsBP_MarkConversationNodeAsRead_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConversationScriptsBP_eventMarkConversationNodeAsRead_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationScriptsBP_MarkConversationNodeAsRead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationScriptsBP_MarkConversationNodeAsRead_Statics::NewProp_ConversationId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationScriptsBP_MarkConversationNodeAsRead_Statics::NewProp_NodeId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationScriptsBP_MarkConversationNodeAsRead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConversationScriptsBP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationScriptsBP_MarkConversationNodeAsRead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationScriptsBP, nullptr, "MarkConversationNodeAsRead", nullptr, nullptr, sizeof(ConversationScriptsBP_eventMarkConversationNodeAsRead_Parms), Z_Construct_UFunction_UConversationScriptsBP_MarkConversationNodeAsRead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationScriptsBP_MarkConversationNodeAsRead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationScriptsBP_MarkConversationNodeAsRead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationScriptsBP_MarkConversationNodeAsRead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationScriptsBP_MarkConversationNodeAsRead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConversationScriptsBP_MarkConversationNodeAsRead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationScriptsBP_SetConversationCheckpoint_Statics
	{
		struct ConversationScriptsBP_eventSetConversationCheckpoint_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationScriptsBP_SetConversationCheckpoint_Statics::NewProp_ConversationId = { "ConversationId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConversationScriptsBP_eventSetConversationCheckpoint_Parms, ConversationId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConversationScriptsBP_SetConversationCheckpoint_Statics::NewProp_CheckpointNodeID = { "CheckpointNodeID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConversationScriptsBP_eventSetConversationCheckpoint_Parms, CheckpointNodeID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationScriptsBP_SetConversationCheckpoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationScriptsBP_SetConversationCheckpoint_Statics::NewProp_ConversationId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationScriptsBP_SetConversationCheckpoint_Statics::NewProp_CheckpointNodeID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationScriptsBP_SetConversationCheckpoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConversationScriptsBP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationScriptsBP_SetConversationCheckpoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationScriptsBP, nullptr, "SetConversationCheckpoint", nullptr, nullptr, sizeof(ConversationScriptsBP_eventSetConversationCheckpoint_Parms), Z_Construct_UFunction_UConversationScriptsBP_SetConversationCheckpoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationScriptsBP_SetConversationCheckpoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationScriptsBP_SetConversationCheckpoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationScriptsBP_SetConversationCheckpoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationScriptsBP_SetConversationCheckpoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConversationScriptsBP_SetConversationCheckpoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UConversationScriptsBP_NoRegister()
	{
		return UConversationScriptsBP::StaticClass();
	}
	struct Z_Construct_UClass_UConversationScriptsBP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConversationScriptsBP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConversationScriptsBP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConversationScriptsBP_ClearConversationCheckpoint, "ClearConversationCheckpoint" }, // 3364535337
		{ &Z_Construct_UFunction_UConversationScriptsBP_ClearConversationNodeAsRead, "ClearConversationNodeAsRead" }, // 1595807747
		{ &Z_Construct_UFunction_UConversationScriptsBP_MarkConversationNodeAsRead, "MarkConversationNodeAsRead" }, // 3496375431
		{ &Z_Construct_UFunction_UConversationScriptsBP_SetConversationCheckpoint, "SetConversationCheckpoint" }, // 1277869213
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationScriptsBP_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ConversationScriptsBP.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ConversationScriptsBP.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConversationScriptsBP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConversationScriptsBP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConversationScriptsBP_Statics::ClassParams = {
		&UConversationScriptsBP::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConversationScriptsBP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationScriptsBP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConversationScriptsBP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConversationScriptsBP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConversationScriptsBP, 2348508508);
	template<> OEIFLOWCHARTS_API UClass* StaticClass<UConversationScriptsBP>()
	{
		return UConversationScriptsBP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConversationScriptsBP(Z_Construct_UClass_UConversationScriptsBP, &UConversationScriptsBP::StaticClass, TEXT("/Script/OEIFlowCharts"), TEXT("UConversationScriptsBP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConversationScriptsBP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
