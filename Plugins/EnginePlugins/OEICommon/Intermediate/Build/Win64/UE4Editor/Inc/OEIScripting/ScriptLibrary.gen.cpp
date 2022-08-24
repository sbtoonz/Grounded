// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIScripting/Public/ScriptLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScriptLibrary() {}
// Cross Module References
	OEISCRIPTING_API UClass* Z_Construct_UClass_UScriptLibrary_NoRegister();
	OEISCRIPTING_API UClass* Z_Construct_UClass_UScriptLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_OEIScripting();
	OEISCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalScriptReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	DEFINE_FUNCTION(UScriptLibrary::execGetGlobalScriptID)
	{
		P_GET_STRUCT_REF(FGlobalScriptReference,Z_Param_Out_GlobalScript);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=UScriptLibrary::GetGlobalScriptID(Z_Param_Out_GlobalScript);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptLibrary::execMakeGlobalScriptReference)
	{
		P_GET_STRUCT(FGuid,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGlobalScriptReference*)Z_Param__Result=UScriptLibrary::MakeGlobalScriptReference(Z_Param_ID);
		P_NATIVE_END;
	}
	void UScriptLibrary::StaticRegisterNativesUScriptLibrary()
	{
		UClass* Class = UScriptLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGlobalScriptID", &UScriptLibrary::execGetGlobalScriptID },
			{ "MakeGlobalScriptReference", &UScriptLibrary::execMakeGlobalScriptReference },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScriptLibrary_GetGlobalScriptID_Statics
	{
		struct ScriptLibrary_eventGetGlobalScriptID_Parms
		{
			FGlobalScriptReference GlobalScript;
			FGuid ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalScript_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalScript;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptLibrary_GetGlobalScriptID_Statics::NewProp_GlobalScript_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptLibrary_GetGlobalScriptID_Statics::NewProp_GlobalScript = { "GlobalScript", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScriptLibrary_eventGetGlobalScriptID_Parms, GlobalScript), Z_Construct_UScriptStruct_FGlobalScriptReference, METADATA_PARAMS(Z_Construct_UFunction_UScriptLibrary_GetGlobalScriptID_Statics::NewProp_GlobalScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptLibrary_GetGlobalScriptID_Statics::NewProp_GlobalScript_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptLibrary_GetGlobalScriptID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScriptLibrary_eventGetGlobalScriptID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptLibrary_GetGlobalScriptID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptLibrary_GetGlobalScriptID_Statics::NewProp_GlobalScript,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptLibrary_GetGlobalScriptID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptLibrary_GetGlobalScriptID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScriptLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptLibrary_GetGlobalScriptID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptLibrary, nullptr, "GetGlobalScriptID", nullptr, nullptr, sizeof(ScriptLibrary_eventGetGlobalScriptID_Parms), Z_Construct_UFunction_UScriptLibrary_GetGlobalScriptID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptLibrary_GetGlobalScriptID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptLibrary_GetGlobalScriptID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptLibrary_GetGlobalScriptID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptLibrary_GetGlobalScriptID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScriptLibrary_GetGlobalScriptID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptLibrary_MakeGlobalScriptReference_Statics
	{
		struct ScriptLibrary_eventMakeGlobalScriptReference_Parms
		{
			FGuid ID;
			FGlobalScriptReference ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptLibrary_MakeGlobalScriptReference_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScriptLibrary_eventMakeGlobalScriptReference_Parms, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptLibrary_MakeGlobalScriptReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScriptLibrary_eventMakeGlobalScriptReference_Parms, ReturnValue), Z_Construct_UScriptStruct_FGlobalScriptReference, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptLibrary_MakeGlobalScriptReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptLibrary_MakeGlobalScriptReference_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptLibrary_MakeGlobalScriptReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptLibrary_MakeGlobalScriptReference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScriptLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptLibrary_MakeGlobalScriptReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptLibrary, nullptr, "MakeGlobalScriptReference", nullptr, nullptr, sizeof(ScriptLibrary_eventMakeGlobalScriptReference_Parms), Z_Construct_UFunction_UScriptLibrary_MakeGlobalScriptReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptLibrary_MakeGlobalScriptReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptLibrary_MakeGlobalScriptReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptLibrary_MakeGlobalScriptReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptLibrary_MakeGlobalScriptReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScriptLibrary_MakeGlobalScriptReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UScriptLibrary_NoRegister()
	{
		return UScriptLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UScriptLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScriptLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScriptLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScriptLibrary_GetGlobalScriptID, "GetGlobalScriptID" }, // 3875795864
		{ &Z_Construct_UFunction_UScriptLibrary_MakeGlobalScriptReference, "MakeGlobalScriptReference" }, // 2213750341
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ScriptLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ScriptLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScriptLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScriptLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScriptLibrary_Statics::ClassParams = {
		&UScriptLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UScriptLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScriptLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScriptLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScriptLibrary, 2879610803);
	template<> OEISCRIPTING_API UClass* StaticClass<UScriptLibrary>()
	{
		return UScriptLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScriptLibrary(Z_Construct_UClass_UScriptLibrary, &UScriptLibrary::StaticClass, TEXT("/Script/OEIScripting"), TEXT("UScriptLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScriptLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
