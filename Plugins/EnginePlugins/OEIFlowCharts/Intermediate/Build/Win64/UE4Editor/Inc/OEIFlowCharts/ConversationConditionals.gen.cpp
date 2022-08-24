// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/ConversationConditionals.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConversationConditionals() {}
// Cross Module References
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UConversationConditionals_NoRegister();
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UConversationConditionals();
	OEISCRIPTING_API UClass* Z_Construct_UClass_UConditionalLibrary();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	DEFINE_FUNCTION(UConversationConditionals::execHasConversationNodeBeenVisited)
	{
		P_GET_STRUCT(FGuid,Z_Param_ConversationId);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodeId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConversationConditionals::HasConversationNodeBeenVisited(Z_Param_ConversationId,Z_Param_NodeId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationConditionals::execIsInstanceDead)
	{
		P_GET_STRUCT(FGuid,Z_Param_Instance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConversationConditionals::IsInstanceDead(Z_Param_Instance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConversationConditionals::execIsSpeakerDead)
	{
		P_GET_STRUCT(FGuid,Z_Param_Speaker);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConversationConditionals::IsSpeakerDead(Z_Param_Speaker);
		P_NATIVE_END;
	}
	void UConversationConditionals::StaticRegisterNativesUConversationConditionals()
	{
		UClass* Class = UConversationConditionals::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasConversationNodeBeenVisited", &UConversationConditionals::execHasConversationNodeBeenVisited },
			{ "IsInstanceDead", &UConversationConditionals::execIsInstanceDead },
			{ "IsSpeakerDead", &UConversationConditionals::execIsSpeakerDead },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConversationConditionals_HasConversationNodeBeenVisited_Statics
	{
		struct ConversationConditionals_eventHasConversationNodeBeenVisited_Parms
		{
			FGuid ConversationId;
			int32 NodeId;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConversationId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationConditionals_HasConversationNodeBeenVisited_Statics::NewProp_ConversationId = { "ConversationId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConversationConditionals_eventHasConversationNodeBeenVisited_Parms, ConversationId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConversationConditionals_HasConversationNodeBeenVisited_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConversationConditionals_eventHasConversationNodeBeenVisited_Parms, NodeId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConversationConditionals_HasConversationNodeBeenVisited_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConversationConditionals_eventHasConversationNodeBeenVisited_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConversationConditionals_HasConversationNodeBeenVisited_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConversationConditionals_eventHasConversationNodeBeenVisited_Parms), &Z_Construct_UFunction_UConversationConditionals_HasConversationNodeBeenVisited_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationConditionals_HasConversationNodeBeenVisited_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationConditionals_HasConversationNodeBeenVisited_Statics::NewProp_ConversationId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationConditionals_HasConversationNodeBeenVisited_Statics::NewProp_NodeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationConditionals_HasConversationNodeBeenVisited_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationConditionals_HasConversationNodeBeenVisited_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConversationConditionals.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationConditionals_HasConversationNodeBeenVisited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationConditionals, nullptr, "HasConversationNodeBeenVisited", nullptr, nullptr, sizeof(ConversationConditionals_eventHasConversationNodeBeenVisited_Parms), Z_Construct_UFunction_UConversationConditionals_HasConversationNodeBeenVisited_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationConditionals_HasConversationNodeBeenVisited_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationConditionals_HasConversationNodeBeenVisited_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationConditionals_HasConversationNodeBeenVisited_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationConditionals_HasConversationNodeBeenVisited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConversationConditionals_HasConversationNodeBeenVisited_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationConditionals_IsInstanceDead_Statics
	{
		struct ConversationConditionals_eventIsInstanceDead_Parms
		{
			FGuid Instance;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Instance;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationConditionals_IsInstanceDead_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConversationConditionals_eventIsInstanceDead_Parms, Instance), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConversationConditionals_IsInstanceDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConversationConditionals_eventIsInstanceDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConversationConditionals_IsInstanceDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConversationConditionals_eventIsInstanceDead_Parms), &Z_Construct_UFunction_UConversationConditionals_IsInstanceDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationConditionals_IsInstanceDead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationConditionals_IsInstanceDead_Statics::NewProp_Instance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationConditionals_IsInstanceDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationConditionals_IsInstanceDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConversationConditionals.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationConditionals_IsInstanceDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationConditionals, nullptr, "IsInstanceDead", nullptr, nullptr, sizeof(ConversationConditionals_eventIsInstanceDead_Parms), Z_Construct_UFunction_UConversationConditionals_IsInstanceDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationConditionals_IsInstanceDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationConditionals_IsInstanceDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationConditionals_IsInstanceDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationConditionals_IsInstanceDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConversationConditionals_IsInstanceDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConversationConditionals_IsSpeakerDead_Statics
	{
		struct ConversationConditionals_eventIsSpeakerDead_Parms
		{
			FGuid Speaker;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Speaker;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConversationConditionals_IsSpeakerDead_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConversationConditionals_eventIsSpeakerDead_Parms, Speaker), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConversationConditionals_IsSpeakerDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConversationConditionals_eventIsSpeakerDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConversationConditionals_IsSpeakerDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConversationConditionals_eventIsSpeakerDead_Parms), &Z_Construct_UFunction_UConversationConditionals_IsSpeakerDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConversationConditionals_IsSpeakerDead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationConditionals_IsSpeakerDead_Statics::NewProp_Speaker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConversationConditionals_IsSpeakerDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConversationConditionals_IsSpeakerDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConversationConditionals.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConversationConditionals_IsSpeakerDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConversationConditionals, nullptr, "IsSpeakerDead", nullptr, nullptr, sizeof(ConversationConditionals_eventIsSpeakerDead_Parms), Z_Construct_UFunction_UConversationConditionals_IsSpeakerDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationConditionals_IsSpeakerDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConversationConditionals_IsSpeakerDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConversationConditionals_IsSpeakerDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConversationConditionals_IsSpeakerDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConversationConditionals_IsSpeakerDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UConversationConditionals_NoRegister()
	{
		return UConversationConditionals::StaticClass();
	}
	struct Z_Construct_UClass_UConversationConditionals_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConversationConditionals_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UConditionalLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConversationConditionals_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConversationConditionals_HasConversationNodeBeenVisited, "HasConversationNodeBeenVisited" }, // 2288779348
		{ &Z_Construct_UFunction_UConversationConditionals_IsInstanceDead, "IsInstanceDead" }, // 1924437097
		{ &Z_Construct_UFunction_UConversationConditionals_IsSpeakerDead, "IsSpeakerDead" }, // 2236043979
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationConditionals_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ConversationConditionals.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ConversationConditionals.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConversationConditionals_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConversationConditionals>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConversationConditionals_Statics::ClassParams = {
		&UConversationConditionals::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UConversationConditionals_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationConditionals_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConversationConditionals()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConversationConditionals_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConversationConditionals, 2837088566);
	template<> OEIFLOWCHARTS_API UClass* StaticClass<UConversationConditionals>()
	{
		return UConversationConditionals::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConversationConditionals(Z_Construct_UClass_UConversationConditionals, &UConversationConditionals::StaticClass, TEXT("/Script/OEIFlowCharts"), TEXT("UConversationConditionals"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConversationConditionals);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
