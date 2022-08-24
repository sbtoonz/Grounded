// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEICommon/Public/OEIWorldRuntime.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIWorldRuntime() {}
// Cross Module References
	OEICOMMON_API UClass* Z_Construct_UClass_UOEIWorldRuntime_NoRegister();
	OEICOMMON_API UClass* Z_Construct_UClass_UOEIWorldRuntime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OEICommon();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	OEICOMMON_API UClass* Z_Construct_UClass_UOEIWorldRuntimeSubsystem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UOEIWorldRuntime::execGetOEIWorldRuntime)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOEIWorldRuntime**)Z_Param__Result=UOEIWorldRuntime::GetOEIWorldRuntime(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UOEIWorldRuntime::StaticRegisterNativesUOEIWorldRuntime()
	{
		UClass* Class = UOEIWorldRuntime::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOEIWorldRuntime", &UOEIWorldRuntime::execGetOEIWorldRuntime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOEIWorldRuntime_GetOEIWorldRuntime_Statics
	{
		struct OEIWorldRuntime_eventGetOEIWorldRuntime_Parms
		{
			const UObject* WorldContextObject;
			UOEIWorldRuntime* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIWorldRuntime_GetOEIWorldRuntime_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOEIWorldRuntime_GetOEIWorldRuntime_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIWorldRuntime_eventGetOEIWorldRuntime_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOEIWorldRuntime_GetOEIWorldRuntime_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIWorldRuntime_GetOEIWorldRuntime_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIWorldRuntime_GetOEIWorldRuntime_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOEIWorldRuntime_GetOEIWorldRuntime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OEIWorldRuntime_eventGetOEIWorldRuntime_Parms, ReturnValue), Z_Construct_UClass_UOEIWorldRuntime_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOEIWorldRuntime_GetOEIWorldRuntime_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIWorldRuntime_GetOEIWorldRuntime_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOEIWorldRuntime_GetOEIWorldRuntime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIWorldRuntime_GetOEIWorldRuntime_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOEIWorldRuntime_GetOEIWorldRuntime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOEIWorldRuntime_GetOEIWorldRuntime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOEIWorldRuntime_GetOEIWorldRuntime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOEIWorldRuntime, nullptr, "GetOEIWorldRuntime", nullptr, nullptr, sizeof(OEIWorldRuntime_eventGetOEIWorldRuntime_Parms), Z_Construct_UFunction_UOEIWorldRuntime_GetOEIWorldRuntime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIWorldRuntime_GetOEIWorldRuntime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOEIWorldRuntime_GetOEIWorldRuntime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOEIWorldRuntime_GetOEIWorldRuntime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOEIWorldRuntime_GetOEIWorldRuntime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOEIWorldRuntime_GetOEIWorldRuntime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOEIWorldRuntime_NoRegister()
	{
		return UOEIWorldRuntime::StaticClass();
	}
	struct Z_Construct_UClass_UOEIWorldRuntime_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Subsystems_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Subsystems_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subsystems_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Subsystems;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEIWorldRuntime_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OEICommon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOEIWorldRuntime_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOEIWorldRuntime_GetOEIWorldRuntime, "GetOEIWorldRuntime" }, // 2786762732
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIWorldRuntime_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEIWorldRuntime.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEIWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOEIWorldRuntime_Statics::NewProp_Subsystems_ValueProp = { "Subsystems", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UOEIWorldRuntimeSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOEIWorldRuntime_Statics::NewProp_Subsystems_Key_KeyProp = { "Subsystems_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIWorldRuntime_Statics::NewProp_Subsystems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIWorldRuntime" },
		{ "ModuleRelativePath", "Public/OEIWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOEIWorldRuntime_Statics::NewProp_Subsystems = { "Subsystems", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIWorldRuntime, Subsystems), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOEIWorldRuntime_Statics::NewProp_Subsystems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIWorldRuntime_Statics::NewProp_Subsystems_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOEIWorldRuntime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIWorldRuntime_Statics::NewProp_Subsystems_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIWorldRuntime_Statics::NewProp_Subsystems_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIWorldRuntime_Statics::NewProp_Subsystems,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEIWorldRuntime_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEIWorldRuntime>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEIWorldRuntime_Statics::ClassParams = {
		&UOEIWorldRuntime::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOEIWorldRuntime_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOEIWorldRuntime_Statics::PropPointers),
		0,
		0x003000AAu,
		METADATA_PARAMS(Z_Construct_UClass_UOEIWorldRuntime_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIWorldRuntime_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEIWorldRuntime()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEIWorldRuntime_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEIWorldRuntime, 1709937818);
	template<> OEICOMMON_API UClass* StaticClass<UOEIWorldRuntime>()
	{
		return UOEIWorldRuntime::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEIWorldRuntime(Z_Construct_UClass_UOEIWorldRuntime, &UOEIWorldRuntime::StaticClass, TEXT("/Script/OEICommon"), TEXT("UOEIWorldRuntime"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEIWorldRuntime);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
