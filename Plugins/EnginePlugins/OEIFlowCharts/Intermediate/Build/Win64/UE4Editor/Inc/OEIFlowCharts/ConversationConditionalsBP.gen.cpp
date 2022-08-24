// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/ConversationConditionalsBP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConversationConditionalsBP() {}
// Cross Module References
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UConversationConditionalsBP_NoRegister();
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UConversationConditionalsBP();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	OEICOMMON_API UEnum* Z_Construct_UEnum_OEICommon_EBoolResult();
// End Cross Module References
	DEFINE_FUNCTION(UConversationConditionalsBP::execHasConversationNodeBeenVisited)
	{
		P_GET_STRUCT(FGuid,Z_Param_ConversationId);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_GET_ENUM_REF(EBoolResult,Z_Param_Out_OutResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConversationConditionalsBP::HasConversationNodeBeenVisited(Z_Param_ConversationId,Z_Param_NodeId,(EBoolResult&)(Z_Param_Out_OutResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationConditionalsBP::execIsInstanceDead)
	{
		P_GET_STRUCT(FGuid,Z_Param_Instance);
		P_GET_ENUM_REF(EBoolResult,Z_Param_Out_OutResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConversationConditionalsBP::IsInstanceDead(Z_Param_Instance,(EBoolResult&)(Z_Param_Out_OutResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationConditionalsBP::execIsSpeakerDead)
	{
		P_GET_STRUCT(FGuid,Z_Param_Speaker);
		P_GET_ENUM_REF(EBoolResult,Z_Param_Out_OutResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConversationConditionalsBP::IsSpeakerDead(Z_Param_Speaker,(EBoolResult&)(Z_Param_Out_OutResult));
		P_NATIVE_END;
	}
	void UConversationConditionalsBP::StaticRegisterNativesUConversationConditionalsBP()
	{
		UClass* Class = UConversationConditionalsBP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasConversationNodeBeenVisited", &UConversationConditionalsBP::execHasConversationNodeBeenVisited },
			{ "IsInstanceDead", &UConversationConditionalsBP::execIsInstanceDead },
			{ "IsSpeakerDead", &UConversationConditionalsBP::execIsSpeakerDead },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConversationConditionalsBP_HasConversationNodeBeenVisited_Statics
	{
		struct ConversationConditionalsBP_eventHasConversationNodeBeenVisited_Parms
		{
			FGuid ConversationId;
			int32 NodeId;
			EBoolResult OutResult;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConversationId;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationConditionalsBP_HasConversationNodeBeenVisited_Statics::NewProp_ConversationId = { "ConversationId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConversationConditionalsBP_eventHasConversationNodeBeenVisited_Parms, ConversationId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConversationConditionalsBP_HasConversationNodeBeenVisited_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConversationConditionalsBP_eventHasConversationNodeBeenVisited_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConversationConditionalsBP_HasConversationNodeBeenVisited_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UConversationConditionalsBP_HasConversationNodeBeenVisited_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConversationConditionalsBP_eventHasConversationNodeBeenVisited_Parms, OutResult), Z_Construct_UEnum_OEICommon_EBoolResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConversationConditionalsBP_HasConversationNodeBeenVisited_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConversationConditionalsBP_eventHasConversationNodeBeenVisited_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConversationConditionalsBP_HasConversationNodeBeenVisited_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConversationConditionalsBP_eventHasConversationNodeBeenVisited_Parms), &Z_Construct_UFunction_UConversationConditionalsBP_HasConversationNodeBeenVisited_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationConditionalsBP_HasConversationNodeBeenVisited_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationConditionalsBP_HasConversationNodeBeenVisited_Statics::NewProp_ConversationId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationConditionalsBP_HasConversationNodeBeenVisited_Statics::NewProp_NodeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationConditionalsBP_HasConversationNodeBeenVisited_Statics::NewProp_OutResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationConditionalsBP_HasConversationNodeBeenVisited_Statics::NewProp_OutResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationConditionalsBP_HasConversationNodeBeenVisited_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationConditionalsBP_HasConversationNodeBeenVisited_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConversationConditionalsBP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationConditionalsBP_HasConversationNodeBeenVisited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationConditionalsBP, nullptr, "HasConversationNodeBeenVisited", nullptr, nullptr, sizeof(ConversationConditionalsBP_eventHasConversationNodeBeenVisited_Parms), Z_Construct_UFunction_UConversationConditionalsBP_HasConversationNodeBeenVisited_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationConditionalsBP_HasConversationNodeBeenVisited_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationConditionalsBP_HasConversationNodeBeenVisited_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationConditionalsBP_HasConversationNodeBeenVisited_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationConditionalsBP_HasConversationNodeBeenVisited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConversationConditionalsBP_HasConversationNodeBeenVisited_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationConditionalsBP_IsInstanceDead_Statics
	{
		struct ConversationConditionalsBP_eventIsInstanceDead_Parms
		{
			FGuid Instance;
			EBoolResult OutResult;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Instance;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationConditionalsBP_IsInstanceDead_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConversationConditionalsBP_eventIsInstanceDead_Parms, Instance), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConversationConditionalsBP_IsInstanceDead_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UConversationConditionalsBP_IsInstanceDead_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConversationConditionalsBP_eventIsInstanceDead_Parms, OutResult), Z_Construct_UEnum_OEICommon_EBoolResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConversationConditionalsBP_IsInstanceDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConversationConditionalsBP_eventIsInstanceDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConversationConditionalsBP_IsInstanceDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConversationConditionalsBP_eventIsInstanceDead_Parms), &Z_Construct_UFunction_UConversationConditionalsBP_IsInstanceDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationConditionalsBP_IsInstanceDead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationConditionalsBP_IsInstanceDead_Statics::NewProp_Instance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationConditionalsBP_IsInstanceDead_Statics::NewProp_OutResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationConditionalsBP_IsInstanceDead_Statics::NewProp_OutResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationConditionalsBP_IsInstanceDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationConditionalsBP_IsInstanceDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConversationConditionalsBP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationConditionalsBP_IsInstanceDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationConditionalsBP, nullptr, "IsInstanceDead", nullptr, nullptr, sizeof(ConversationConditionalsBP_eventIsInstanceDead_Parms), Z_Construct_UFunction_UConversationConditionalsBP_IsInstanceDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationConditionalsBP_IsInstanceDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationConditionalsBP_IsInstanceDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationConditionalsBP_IsInstanceDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationConditionalsBP_IsInstanceDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConversationConditionalsBP_IsInstanceDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationConditionalsBP_IsSpeakerDead_Statics
	{
		struct ConversationConditionalsBP_eventIsSpeakerDead_Parms
		{
			FGuid Speaker;
			EBoolResult OutResult;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Speaker;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationConditionalsBP_IsSpeakerDead_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConversationConditionalsBP_eventIsSpeakerDead_Parms, Speaker), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConversationConditionalsBP_IsSpeakerDead_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UConversationConditionalsBP_IsSpeakerDead_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConversationConditionalsBP_eventIsSpeakerDead_Parms, OutResult), Z_Construct_UEnum_OEICommon_EBoolResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConversationConditionalsBP_IsSpeakerDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConversationConditionalsBP_eventIsSpeakerDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConversationConditionalsBP_IsSpeakerDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConversationConditionalsBP_eventIsSpeakerDead_Parms), &Z_Construct_UFunction_UConversationConditionalsBP_IsSpeakerDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationConditionalsBP_IsSpeakerDead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationConditionalsBP_IsSpeakerDead_Statics::NewProp_Speaker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationConditionalsBP_IsSpeakerDead_Statics::NewProp_OutResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationConditionalsBP_IsSpeakerDead_Statics::NewProp_OutResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationConditionalsBP_IsSpeakerDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationConditionalsBP_IsSpeakerDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConversationConditionalsBP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationConditionalsBP_IsSpeakerDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationConditionalsBP, nullptr, "IsSpeakerDead", nullptr, nullptr, sizeof(ConversationConditionalsBP_eventIsSpeakerDead_Parms), Z_Construct_UFunction_UConversationConditionalsBP_IsSpeakerDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationConditionalsBP_IsSpeakerDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationConditionalsBP_IsSpeakerDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationConditionalsBP_IsSpeakerDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationConditionalsBP_IsSpeakerDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConversationConditionalsBP_IsSpeakerDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UConversationConditionalsBP_NoRegister()
	{
		return UConversationConditionalsBP::StaticClass();
	}
	struct Z_Construct_UClass_UConversationConditionalsBP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConversationConditionalsBP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConversationConditionalsBP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConversationConditionalsBP_HasConversationNodeBeenVisited, "HasConversationNodeBeenVisited" }, // 1446720793
		{ &Z_Construct_UFunction_UConversationConditionalsBP_IsInstanceDead, "IsInstanceDead" }, // 3511748621
		{ &Z_Construct_UFunction_UConversationConditionalsBP_IsSpeakerDead, "IsSpeakerDead" }, // 3373737701
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationConditionalsBP_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ConversationConditionalsBP.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ConversationConditionalsBP.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConversationConditionalsBP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConversationConditionalsBP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConversationConditionalsBP_Statics::ClassParams = {
		&UConversationConditionalsBP::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UConversationConditionalsBP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationConditionalsBP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConversationConditionalsBP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConversationConditionalsBP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConversationConditionalsBP, 1816720844);
	template<> OEIFLOWCHARTS_API UClass* StaticClass<UConversationConditionalsBP>()
	{
		return UConversationConditionalsBP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConversationConditionalsBP(Z_Construct_UClass_UConversationConditionalsBP, &UConversationConditionalsBP::StaticClass, TEXT("/Script/OEIFlowCharts"), TEXT("UConversationConditionalsBP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConversationConditionalsBP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
