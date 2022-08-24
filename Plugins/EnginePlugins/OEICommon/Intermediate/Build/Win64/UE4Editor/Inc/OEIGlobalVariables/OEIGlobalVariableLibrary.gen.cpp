// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIGlobalVariables/Public/OEIGlobalVariableLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIGlobalVariableLibrary() {}
// Cross Module References
	OEIGLOBALVARIABLES_API UClass* Z_Construct_UClass_UOEIGlobalVariableLibrary_NoRegister();
	OEIGLOBALVARIABLES_API UClass* Z_Construct_UClass_UOEIGlobalVariableLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_OEIGlobalVariables();
	OEIGLOBALVARIABLES_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalVariableReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	DEFINE_FUNCTION(UOEIGlobalVariableLibrary::execGetGlobalVariableID)
	{
		P_GET_STRUCT_REF(FGlobalVariableReference,Z_Param_Out_Variable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=UOEIGlobalVariableLibrary::GetGlobalVariableID(Z_Param_Out_Variable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOEIGlobalVariableLibrary::execMakeGlobalVariableReference)
	{
		P_GET_STRUCT(FGuid,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGlobalVariableReference*)Z_Param__Result=UOEIGlobalVariableLibrary::MakeGlobalVariableReference(Z_Param_ID);
		P_NATIVE_END;
	}
	void UOEIGlobalVariableLibrary::StaticRegisterNativesUOEIGlobalVariableLibrary()
	{
		UClass* Class = UOEIGlobalVariableLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGlobalVariableID", &UOEIGlobalVariableLibrary::execGetGlobalVariableID },
			{ "MakeGlobalVariableReference", &UOEIGlobalVariableLibrary::execMakeGlobalVariableReference },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOEIGlobalVariableLibrary_GetGlobalVariableID_Statics
	{
		struct OEIGlobalVariableLibrary_eventGetGlobalVariableID_Parms
		{
			FGlobalVariableReference Variable;
			FGuid ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Variable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIGlobalVariableLibrary_GetGlobalVariableID_Statics::NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIGlobalVariableLibrary_GetGlobalVariableID_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIGlobalVariableLibrary_eventGetGlobalVariableID_Parms, Variable), Z_Construct_UScriptStruct_FGlobalVariableReference, METADATA_PARAMS(Z_Construct_UFunction_UOEIGlobalVariableLibrary_GetGlobalVariableID_Statics::NewProp_Variable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIGlobalVariableLibrary_GetGlobalVariableID_Statics::NewProp_Variable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIGlobalVariableLibrary_GetGlobalVariableID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIGlobalVariableLibrary_eventGetGlobalVariableID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIGlobalVariableLibrary_GetGlobalVariableID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIGlobalVariableLibrary_GetGlobalVariableID_Statics::NewProp_Variable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIGlobalVariableLibrary_GetGlobalVariableID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIGlobalVariableLibrary_GetGlobalVariableID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIGlobalVariableLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIGlobalVariableLibrary_GetGlobalVariableID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIGlobalVariableLibrary, nullptr, "GetGlobalVariableID", nullptr, nullptr, sizeof(OEIGlobalVariableLibrary_eventGetGlobalVariableID_Parms), Z_Construct_UFunction_UOEIGlobalVariableLibrary_GetGlobalVariableID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIGlobalVariableLibrary_GetGlobalVariableID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIGlobalVariableLibrary_GetGlobalVariableID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIGlobalVariableLibrary_GetGlobalVariableID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIGlobalVariableLibrary_GetGlobalVariableID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIGlobalVariableLibrary_GetGlobalVariableID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOEIGlobalVariableLibrary_MakeGlobalVariableReference_Statics
	{
		struct OEIGlobalVariableLibrary_eventMakeGlobalVariableReference_Parms
		{
			FGuid ID;
			FGlobalVariableReference ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIGlobalVariableLibrary_MakeGlobalVariableReference_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIGlobalVariableLibrary_eventMakeGlobalVariableReference_Parms, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOEIGlobalVariableLibrary_MakeGlobalVariableReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIGlobalVariableLibrary_eventMakeGlobalVariableReference_Parms, ReturnValue), Z_Construct_UScriptStruct_FGlobalVariableReference, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIGlobalVariableLibrary_MakeGlobalVariableReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIGlobalVariableLibrary_MakeGlobalVariableReference_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIGlobalVariableLibrary_MakeGlobalVariableReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIGlobalVariableLibrary_MakeGlobalVariableReference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIGlobalVariableLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIGlobalVariableLibrary_MakeGlobalVariableReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIGlobalVariableLibrary, nullptr, "MakeGlobalVariableReference", nullptr, nullptr, sizeof(OEIGlobalVariableLibrary_eventMakeGlobalVariableReference_Parms), Z_Construct_UFunction_UOEIGlobalVariableLibrary_MakeGlobalVariableReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIGlobalVariableLibrary_MakeGlobalVariableReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIGlobalVariableLibrary_MakeGlobalVariableReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIGlobalVariableLibrary_MakeGlobalVariableReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIGlobalVariableLibrary_MakeGlobalVariableReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIGlobalVariableLibrary_MakeGlobalVariableReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOEIGlobalVariableLibrary_NoRegister()
	{
		return UOEIGlobalVariableLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOEIGlobalVariableLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEIGlobalVariableLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIGlobalVariables,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOEIGlobalVariableLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOEIGlobalVariableLibrary_GetGlobalVariableID, "GetGlobalVariableID" }, // 4075138930
		{ &Z_Construct_UFunction_UOEIGlobalVariableLibrary_MakeGlobalVariableReference, "MakeGlobalVariableReference" }, // 4006475034
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIGlobalVariableLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEIGlobalVariableLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEIGlobalVariableLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEIGlobalVariableLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEIGlobalVariableLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEIGlobalVariableLibrary_Statics::ClassParams = {
		&UOEIGlobalVariableLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOEIGlobalVariableLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIGlobalVariableLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEIGlobalVariableLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEIGlobalVariableLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEIGlobalVariableLibrary, 2475475054);
	template<> OEIGLOBALVARIABLES_API UClass* StaticClass<UOEIGlobalVariableLibrary>()
	{
		return UOEIGlobalVariableLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEIGlobalVariableLibrary(Z_Construct_UClass_UOEIGlobalVariableLibrary, &UOEIGlobalVariableLibrary::StaticClass, TEXT("/Script/OEIGlobalVariables"), TEXT("UOEIGlobalVariableLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEIGlobalVariableLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
