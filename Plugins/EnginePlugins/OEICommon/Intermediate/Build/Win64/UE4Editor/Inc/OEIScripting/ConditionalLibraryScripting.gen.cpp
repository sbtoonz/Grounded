// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIScripting/Public/ConditionalLibraryScripting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConditionalLibraryScripting() {}
// Cross Module References
	OEISCRIPTING_API UClass* Z_Construct_UClass_UConditionalLibraryScripting_NoRegister();
	OEISCRIPTING_API UClass* Z_Construct_UClass_UConditionalLibraryScripting();
	OEISCRIPTING_API UClass* Z_Construct_UClass_UConditionalLibrary();
	UPackage* Z_Construct_UPackage__Script_OEIScripting();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	DEFINE_FUNCTION(UConditionalLibraryScripting::execAlwaysFalse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConditionalLibraryScripting::AlwaysFalse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConditionalLibraryScripting::execAlwaysTrue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConditionalLibraryScripting::AlwaysTrue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConditionalLibraryScripting::execCallGlobalConditional)
	{
		P_GET_STRUCT(FGuid,Z_Param_GlobalScriptID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConditionalLibraryScripting::CallGlobalConditional(Z_Param_GlobalScriptID);
		P_NATIVE_END;
	}
	void UConditionalLibraryScripting::StaticRegisterNativesUConditionalLibraryScripting()
	{
		UClass* Class = UConditionalLibraryScripting::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AlwaysFalse", &UConditionalLibraryScripting::execAlwaysFalse },
			{ "AlwaysTrue", &UConditionalLibraryScripting::execAlwaysTrue },
			{ "CallGlobalConditional", &UConditionalLibraryScripting::execCallGlobalConditional },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConditionalLibraryScripting_AlwaysFalse_Statics
	{
		struct ConditionalLibraryScripting_eventAlwaysFalse_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UConditionalLibraryScripting_AlwaysFalse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConditionalLibraryScripting_eventAlwaysFalse_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConditionalLibraryScripting_AlwaysFalse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConditionalLibraryScripting_eventAlwaysFalse_Parms), &Z_Construct_UFunction_UConditionalLibraryScripting_AlwaysFalse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConditionalLibraryScripting_AlwaysFalse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionalLibraryScripting_AlwaysFalse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionalLibraryScripting_AlwaysFalse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConditionalLibraryScripting.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConditionalLibraryScripting_AlwaysFalse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConditionalLibraryScripting, nullptr, "AlwaysFalse", nullptr, nullptr, sizeof(ConditionalLibraryScripting_eventAlwaysFalse_Parms), Z_Construct_UFunction_UConditionalLibraryScripting_AlwaysFalse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionalLibraryScripting_AlwaysFalse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConditionalLibraryScripting_AlwaysFalse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionalLibraryScripting_AlwaysFalse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConditionalLibraryScripting_AlwaysFalse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConditionalLibraryScripting_AlwaysFalse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConditionalLibraryScripting_AlwaysTrue_Statics
	{
		struct ConditionalLibraryScripting_eventAlwaysTrue_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UConditionalLibraryScripting_AlwaysTrue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConditionalLibraryScripting_eventAlwaysTrue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConditionalLibraryScripting_AlwaysTrue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConditionalLibraryScripting_eventAlwaysTrue_Parms), &Z_Construct_UFunction_UConditionalLibraryScripting_AlwaysTrue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConditionalLibraryScripting_AlwaysTrue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionalLibraryScripting_AlwaysTrue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionalLibraryScripting_AlwaysTrue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConditionalLibraryScripting.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConditionalLibraryScripting_AlwaysTrue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConditionalLibraryScripting, nullptr, "AlwaysTrue", nullptr, nullptr, sizeof(ConditionalLibraryScripting_eventAlwaysTrue_Parms), Z_Construct_UFunction_UConditionalLibraryScripting_AlwaysTrue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionalLibraryScripting_AlwaysTrue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConditionalLibraryScripting_AlwaysTrue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionalLibraryScripting_AlwaysTrue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConditionalLibraryScripting_AlwaysTrue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConditionalLibraryScripting_AlwaysTrue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConditionalLibraryScripting_CallGlobalConditional_Statics
	{
		struct ConditionalLibraryScripting_eventCallGlobalConditional_Parms
		{
			FGuid GlobalScriptID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalScriptID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConditionalLibraryScripting_CallGlobalConditional_Statics::NewProp_GlobalScriptID = { "GlobalScriptID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionalLibraryScripting_eventCallGlobalConditional_Parms, GlobalScriptID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConditionalLibraryScripting_CallGlobalConditional_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConditionalLibraryScripting_eventCallGlobalConditional_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConditionalLibraryScripting_CallGlobalConditional_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConditionalLibraryScripting_eventCallGlobalConditional_Parms), &Z_Construct_UFunction_UConditionalLibraryScripting_CallGlobalConditional_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConditionalLibraryScripting_CallGlobalConditional_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionalLibraryScripting_CallGlobalConditional_Statics::NewProp_GlobalScriptID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionalLibraryScripting_CallGlobalConditional_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionalLibraryScripting_CallGlobalConditional_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConditionalLibraryScripting.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConditionalLibraryScripting_CallGlobalConditional_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConditionalLibraryScripting, nullptr, "CallGlobalConditional", nullptr, nullptr, sizeof(ConditionalLibraryScripting_eventCallGlobalConditional_Parms), Z_Construct_UFunction_UConditionalLibraryScripting_CallGlobalConditional_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionalLibraryScripting_CallGlobalConditional_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConditionalLibraryScripting_CallGlobalConditional_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionalLibraryScripting_CallGlobalConditional_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConditionalLibraryScripting_CallGlobalConditional()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConditionalLibraryScripting_CallGlobalConditional_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UConditionalLibraryScripting_NoRegister()
	{
		return UConditionalLibraryScripting::StaticClass();
	}
	struct Z_Construct_UClass_UConditionalLibraryScripting_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConditionalLibraryScripting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UConditionalLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConditionalLibraryScripting_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConditionalLibraryScripting_AlwaysFalse, "AlwaysFalse" }, // 4151262042
		{ &Z_Construct_UFunction_UConditionalLibraryScripting_AlwaysTrue, "AlwaysTrue" }, // 1192640252
		{ &Z_Construct_UFunction_UConditionalLibraryScripting_CallGlobalConditional, "CallGlobalConditional" }, // 2885564887
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConditionalLibraryScripting_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ConditionalLibraryScripting.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ConditionalLibraryScripting.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConditionalLibraryScripting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConditionalLibraryScripting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConditionalLibraryScripting_Statics::ClassParams = {
		&UConditionalLibraryScripting::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UConditionalLibraryScripting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConditionalLibraryScripting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConditionalLibraryScripting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConditionalLibraryScripting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConditionalLibraryScripting, 2493246952);
	template<> OEISCRIPTING_API UClass* StaticClass<UConditionalLibraryScripting>()
	{
		return UConditionalLibraryScripting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConditionalLibraryScripting(Z_Construct_UClass_UConditionalLibraryScripting, &UConditionalLibraryScripting::StaticClass, TEXT("/Script/OEIScripting"), TEXT("UConditionalLibraryScripting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConditionalLibraryScripting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
