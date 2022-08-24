// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIGlobalVariables/Public/GlobalVariableConditionals.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalVariableConditionals() {}
// Cross Module References
	OEIGLOBALVARIABLES_API UClass* Z_Construct_UClass_UGlobalVariableConditionals_NoRegister();
	OEIGLOBALVARIABLES_API UClass* Z_Construct_UClass_UGlobalVariableConditionals();
	OEISCRIPTING_API UClass* Z_Construct_UClass_UConditionalLibrary();
	UPackage* Z_Construct_UPackage__Script_OEIGlobalVariables();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	OEICOMMON_API UEnum* Z_Construct_UEnum_OEICommon_EComparisonOperator();
// End Cross Module References
	DEFINE_FUNCTION(UGlobalVariableConditionals::execCompareGlobals)
	{
		P_GET_STRUCT(FGuid,Z_Param_Variable1);
		P_GET_ENUM(EComparisonOperator,Z_Param_Operator);
		P_GET_STRUCT(FGuid,Z_Param_Variable2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGlobalVariableConditionals::CompareGlobals(Z_Param_Variable1,EComparisonOperator(Z_Param_Operator),Z_Param_Variable2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlobalVariableConditionals::execIsGlobalValue)
	{
		P_GET_STRUCT(FGuid,Z_Param_Variable);
		P_GET_ENUM(EComparisonOperator,Z_Param_Operator);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGlobalVariableConditionals::IsGlobalValue(Z_Param_Variable,EComparisonOperator(Z_Param_Operator),Z_Param_Value);
		P_NATIVE_END;
	}
	void UGlobalVariableConditionals::StaticRegisterNativesUGlobalVariableConditionals()
	{
		UClass* Class = UGlobalVariableConditionals::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CompareGlobals", &UGlobalVariableConditionals::execCompareGlobals },
			{ "IsGlobalValue", &UGlobalVariableConditionals::execIsGlobalValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGlobalVariableConditionals_CompareGlobals_Statics
	{
		struct GlobalVariableConditionals_eventCompareGlobals_Parms
		{
			FGuid Variable1;
			EComparisonOperator Operator;
			FGuid Variable2;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Variable1;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Operator_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Operator;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Variable2;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlobalVariableConditionals_CompareGlobals_Statics::NewProp_Variable1 = { "Variable1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GlobalVariableConditionals_eventCompareGlobals_Parms, Variable1), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGlobalVariableConditionals_CompareGlobals_Statics::NewProp_Operator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGlobalVariableConditionals_CompareGlobals_Statics::NewProp_Operator = { "Operator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GlobalVariableConditionals_eventCompareGlobals_Parms, Operator), Z_Construct_UEnum_OEICommon_EComparisonOperator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlobalVariableConditionals_CompareGlobals_Statics::NewProp_Variable2 = { "Variable2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GlobalVariableConditionals_eventCompareGlobals_Parms, Variable2), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGlobalVariableConditionals_CompareGlobals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GlobalVariableConditionals_eventCompareGlobals_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGlobalVariableConditionals_CompareGlobals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GlobalVariableConditionals_eventCompareGlobals_Parms), &Z_Construct_UFunction_UGlobalVariableConditionals_CompareGlobals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGlobalVariableConditionals_CompareGlobals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalVariableConditionals_CompareGlobals_Statics::NewProp_Variable1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalVariableConditionals_CompareGlobals_Statics::NewProp_Operator_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalVariableConditionals_CompareGlobals_Statics::NewProp_Operator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalVariableConditionals_CompareGlobals_Statics::NewProp_Variable2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalVariableConditionals_CompareGlobals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlobalVariableConditionals_CompareGlobals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GlobalVariableConditionals.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlobalVariableConditionals_CompareGlobals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlobalVariableConditionals, nullptr, "CompareGlobals", nullptr, nullptr, sizeof(GlobalVariableConditionals_eventCompareGlobals_Parms), Z_Construct_UFunction_UGlobalVariableConditionals_CompareGlobals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalVariableConditionals_CompareGlobals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlobalVariableConditionals_CompareGlobals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalVariableConditionals_CompareGlobals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlobalVariableConditionals_CompareGlobals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGlobalVariableConditionals_CompareGlobals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlobalVariableConditionals_IsGlobalValue_Statics
	{
		struct GlobalVariableConditionals_eventIsGlobalValue_Parms
		{
			FGuid Variable;
			EComparisonOperator Operator;
			int32 Value;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Variable;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Operator_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Operator;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlobalVariableConditionals_IsGlobalValue_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GlobalVariableConditionals_eventIsGlobalValue_Parms, Variable), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGlobalVariableConditionals_IsGlobalValue_Statics::NewProp_Operator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGlobalVariableConditionals_IsGlobalValue_Statics::NewProp_Operator = { "Operator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GlobalVariableConditionals_eventIsGlobalValue_Parms, Operator), Z_Construct_UEnum_OEICommon_EComparisonOperator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGlobalVariableConditionals_IsGlobalValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GlobalVariableConditionals_eventIsGlobalValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGlobalVariableConditionals_IsGlobalValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GlobalVariableConditionals_eventIsGlobalValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGlobalVariableConditionals_IsGlobalValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GlobalVariableConditionals_eventIsGlobalValue_Parms), &Z_Construct_UFunction_UGlobalVariableConditionals_IsGlobalValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGlobalVariableConditionals_IsGlobalValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalVariableConditionals_IsGlobalValue_Statics::NewProp_Variable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalVariableConditionals_IsGlobalValue_Statics::NewProp_Operator_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalVariableConditionals_IsGlobalValue_Statics::NewProp_Operator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalVariableConditionals_IsGlobalValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalVariableConditionals_IsGlobalValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlobalVariableConditionals_IsGlobalValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GlobalVariableConditionals.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlobalVariableConditionals_IsGlobalValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlobalVariableConditionals, nullptr, "IsGlobalValue", nullptr, nullptr, sizeof(GlobalVariableConditionals_eventIsGlobalValue_Parms), Z_Construct_UFunction_UGlobalVariableConditionals_IsGlobalValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalVariableConditionals_IsGlobalValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlobalVariableConditionals_IsGlobalValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalVariableConditionals_IsGlobalValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlobalVariableConditionals_IsGlobalValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGlobalVariableConditionals_IsGlobalValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGlobalVariableConditionals_NoRegister()
	{
		return UGlobalVariableConditionals::StaticClass();
	}
	struct Z_Construct_UClass_UGlobalVariableConditionals_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGlobalVariableConditionals_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UConditionalLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIGlobalVariables,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGlobalVariableConditionals_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGlobalVariableConditionals_CompareGlobals, "CompareGlobals" }, // 384415913
		{ &Z_Construct_UFunction_UGlobalVariableConditionals_IsGlobalValue, "IsGlobalValue" }, // 390276254
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlobalVariableConditionals_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GlobalVariableConditionals.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GlobalVariableConditionals.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGlobalVariableConditionals_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGlobalVariableConditionals>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGlobalVariableConditionals_Statics::ClassParams = {
		&UGlobalVariableConditionals::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGlobalVariableConditionals_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalVariableConditionals_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGlobalVariableConditionals()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGlobalVariableConditionals_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGlobalVariableConditionals, 4143314674);
	template<> OEIGLOBALVARIABLES_API UClass* StaticClass<UGlobalVariableConditionals>()
	{
		return UGlobalVariableConditionals::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGlobalVariableConditionals(Z_Construct_UClass_UGlobalVariableConditionals, &UGlobalVariableConditionals::StaticClass, TEXT("/Script/OEIGlobalVariables"), TEXT("UGlobalVariableConditionals"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGlobalVariableConditionals);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
