// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIScripting/Public/ConditionalLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConditionalLibrary() {}
// Cross Module References
	OEISCRIPTING_API UClass* Z_Construct_UClass_UConditionalLibrary_NoRegister();
	OEISCRIPTING_API UClass* Z_Construct_UClass_UConditionalLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_OEIScripting();
	OEISCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalConditionalReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	DEFINE_FUNCTION(UConditionalLibrary::execGetGlobalConditionalID)
	{
		P_GET_STRUCT_REF(FGlobalConditionalReference,Z_Param_Out_GlobalConditional);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=UConditionalLibrary::GetGlobalConditionalID(Z_Param_Out_GlobalConditional);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConditionalLibrary::execMakeGlobalConditionalReference)
	{
		P_GET_STRUCT(FGuid,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGlobalConditionalReference*)Z_Param__Result=UConditionalLibrary::MakeGlobalConditionalReference(Z_Param_ID);
		P_NATIVE_END;
	}
	void UConditionalLibrary::StaticRegisterNativesUConditionalLibrary()
	{
		UClass* Class = UConditionalLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGlobalConditionalID", &UConditionalLibrary::execGetGlobalConditionalID },
			{ "MakeGlobalConditionalReference", &UConditionalLibrary::execMakeGlobalConditionalReference },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConditionalLibrary_GetGlobalConditionalID_Statics
	{
		struct ConditionalLibrary_eventGetGlobalConditionalID_Parms
		{
			FGlobalConditionalReference GlobalConditional;
			FGuid ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalConditional_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalConditional;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionalLibrary_GetGlobalConditionalID_Statics::NewProp_GlobalConditional_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConditionalLibrary_GetGlobalConditionalID_Statics::NewProp_GlobalConditional = { "GlobalConditional", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionalLibrary_eventGetGlobalConditionalID_Parms, GlobalConditional), Z_Construct_UScriptStruct_FGlobalConditionalReference, METADATA_PARAMS(Z_Construct_UFunction_UConditionalLibrary_GetGlobalConditionalID_Statics::NewProp_GlobalConditional_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionalLibrary_GetGlobalConditionalID_Statics::NewProp_GlobalConditional_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConditionalLibrary_GetGlobalConditionalID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionalLibrary_eventGetGlobalConditionalID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConditionalLibrary_GetGlobalConditionalID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionalLibrary_GetGlobalConditionalID_Statics::NewProp_GlobalConditional,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionalLibrary_GetGlobalConditionalID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionalLibrary_GetGlobalConditionalID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConditionalLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConditionalLibrary_GetGlobalConditionalID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConditionalLibrary, nullptr, "GetGlobalConditionalID", nullptr, nullptr, sizeof(ConditionalLibrary_eventGetGlobalConditionalID_Parms), Z_Construct_UFunction_UConditionalLibrary_GetGlobalConditionalID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionalLibrary_GetGlobalConditionalID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConditionalLibrary_GetGlobalConditionalID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionalLibrary_GetGlobalConditionalID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConditionalLibrary_GetGlobalConditionalID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConditionalLibrary_GetGlobalConditionalID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConditionalLibrary_MakeGlobalConditionalReference_Statics
	{
		struct ConditionalLibrary_eventMakeGlobalConditionalReference_Parms
		{
			FGuid ID;
			FGlobalConditionalReference ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConditionalLibrary_MakeGlobalConditionalReference_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionalLibrary_eventMakeGlobalConditionalReference_Parms, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConditionalLibrary_MakeGlobalConditionalReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionalLibrary_eventMakeGlobalConditionalReference_Parms, ReturnValue), Z_Construct_UScriptStruct_FGlobalConditionalReference, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConditionalLibrary_MakeGlobalConditionalReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionalLibrary_MakeGlobalConditionalReference_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionalLibrary_MakeGlobalConditionalReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionalLibrary_MakeGlobalConditionalReference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConditionalLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConditionalLibrary_MakeGlobalConditionalReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConditionalLibrary, nullptr, "MakeGlobalConditionalReference", nullptr, nullptr, sizeof(ConditionalLibrary_eventMakeGlobalConditionalReference_Parms), Z_Construct_UFunction_UConditionalLibrary_MakeGlobalConditionalReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionalLibrary_MakeGlobalConditionalReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConditionalLibrary_MakeGlobalConditionalReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionalLibrary_MakeGlobalConditionalReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConditionalLibrary_MakeGlobalConditionalReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConditionalLibrary_MakeGlobalConditionalReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UConditionalLibrary_NoRegister()
	{
		return UConditionalLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UConditionalLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConditionalLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConditionalLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConditionalLibrary_GetGlobalConditionalID, "GetGlobalConditionalID" }, // 653082006
		{ &Z_Construct_UFunction_UConditionalLibrary_MakeGlobalConditionalReference, "MakeGlobalConditionalReference" }, // 1984377374
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConditionalLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ConditionalLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ConditionalLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConditionalLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConditionalLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConditionalLibrary_Statics::ClassParams = {
		&UConditionalLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UConditionalLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConditionalLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConditionalLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConditionalLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConditionalLibrary, 2144113386);
	template<> OEISCRIPTING_API UClass* StaticClass<UConditionalLibrary>()
	{
		return UConditionalLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConditionalLibrary(Z_Construct_UClass_UConditionalLibrary, &UConditionalLibrary::StaticClass, TEXT("/Script/OEIScripting"), TEXT("UConditionalLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConditionalLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
