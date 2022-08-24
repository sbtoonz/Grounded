// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LoadingScreen/Public/LoadingScreenModuleHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadingScreenModuleHelper() {}
// Cross Module References
	LOADINGSCREEN_API UClass* Z_Construct_UClass_ULoadingScreenModuleHelper_NoRegister();
	LOADINGSCREEN_API UClass* Z_Construct_UClass_ULoadingScreenModuleHelper();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_LoadingScreen();
// End Cross Module References
	DEFINE_FUNCTION(ULoadingScreenModuleHelper::execStopLoadingScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		ULoadingScreenModuleHelper::StopLoadingScreen();
		P_NATIVE_END;
	}
	void ULoadingScreenModuleHelper::StaticRegisterNativesULoadingScreenModuleHelper()
	{
		UClass* Class = ULoadingScreenModuleHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StopLoadingScreen", &ULoadingScreenModuleHelper::execStopLoadingScreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULoadingScreenModuleHelper_StopLoadingScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadingScreenModuleHelper_StopLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadingScreenModuleHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadingScreenModuleHelper_StopLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadingScreenModuleHelper, nullptr, "StopLoadingScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadingScreenModuleHelper_StopLoadingScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadingScreenModuleHelper_StopLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadingScreenModuleHelper_StopLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadingScreenModuleHelper_StopLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULoadingScreenModuleHelper_NoRegister()
	{
		return ULoadingScreenModuleHelper::StaticClass();
	}
	struct Z_Construct_UClass_ULoadingScreenModuleHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadingScreenModuleHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LoadingScreen,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULoadingScreenModuleHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoadingScreenModuleHelper_StopLoadingScreen, "StopLoadingScreen" }, // 3127070227
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenModuleHelper_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LoadingScreenModuleHelper.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LoadingScreenModuleHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadingScreenModuleHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadingScreenModuleHelper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoadingScreenModuleHelper_Statics::ClassParams = {
		&ULoadingScreenModuleHelper::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULoadingScreenModuleHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenModuleHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoadingScreenModuleHelper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoadingScreenModuleHelper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoadingScreenModuleHelper, 876668665);
	template<> LOADINGSCREEN_API UClass* StaticClass<ULoadingScreenModuleHelper>()
	{
		return ULoadingScreenModuleHelper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoadingScreenModuleHelper(Z_Construct_UClass_ULoadingScreenModuleHelper, &ULoadingScreenModuleHelper::StaticClass, TEXT("/Script/LoadingScreen"), TEXT("ULoadingScreenModuleHelper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadingScreenModuleHelper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
