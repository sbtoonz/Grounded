// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/PhotoModeHelperComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhotoModeHelperComponent() {}
// Cross Module References
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeHelperComponent_NoRegister();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeHelperComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	OEIPHOTOMODE_API UScriptStruct* Z_Construct_UScriptStruct_FPhotoModeHelperOptions();
	OEIPHOTOMODE_API UScriptStruct* Z_Construct_UScriptStruct_FPhotoModeHelpersState();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModePoseData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPhotoModeHelperComponent::execForceLOD)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ForcedLOD);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceLOD(Z_Param_ForcedLOD);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeHelperComponent::execOnPhotoModeExit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPhotoModeExit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeHelperComponent::execOnPhotoModePreEntered)
	{
		P_GET_OBJECT(APlayerController,Z_Param_InController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPhotoModePreEntered(Z_Param_InController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeHelperComponent::execOnPhotoModePrePause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPhotoModePrePause();
		P_NATIVE_END;
	}
	void UPhotoModeHelperComponent::StaticRegisterNativesUPhotoModeHelperComponent()
	{
		UClass* Class = UPhotoModeHelperComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ForceLOD", &UPhotoModeHelperComponent::execForceLOD },
			{ "OnPhotoModeExit", &UPhotoModeHelperComponent::execOnPhotoModeExit },
			{ "OnPhotoModePreEntered", &UPhotoModeHelperComponent::execOnPhotoModePreEntered },
			{ "OnPhotoModePrePause", &UPhotoModeHelperComponent::execOnPhotoModePrePause },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPhotoModeHelperComponent_ForceLOD_Statics
	{
		struct PhotoModeHelperComponent_eventForceLOD_Parms
		{
			int32 ForcedLOD;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ForcedLOD;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPhotoModeHelperComponent_ForceLOD_Statics::NewProp_ForcedLOD = { "ForcedLOD", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeHelperComponent_eventForceLOD_Parms, ForcedLOD), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeHelperComponent_ForceLOD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeHelperComponent_ForceLOD_Statics::NewProp_ForcedLOD,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeHelperComponent_ForceLOD_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeHelperComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeHelperComponent_ForceLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeHelperComponent, nullptr, "ForceLOD", nullptr, nullptr, sizeof(PhotoModeHelperComponent_eventForceLOD_Parms), Z_Construct_UFunction_UPhotoModeHelperComponent_ForceLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeHelperComponent_ForceLOD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeHelperComponent_ForceLOD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeHelperComponent_ForceLOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeHelperComponent_ForceLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeHelperComponent_ForceLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeHelperComponent_OnPhotoModeExit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeHelperComponent_OnPhotoModeExit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeHelperComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeHelperComponent_OnPhotoModeExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeHelperComponent, nullptr, "OnPhotoModeExit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeHelperComponent_OnPhotoModeExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeHelperComponent_OnPhotoModeExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeHelperComponent_OnPhotoModeExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeHelperComponent_OnPhotoModeExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeHelperComponent_OnPhotoModePreEntered_Statics
	{
		struct PhotoModeHelperComponent_eventOnPhotoModePreEntered_Parms
		{
			APlayerController* InController;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeHelperComponent_OnPhotoModePreEntered_Statics::NewProp_InController = { "InController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeHelperComponent_eventOnPhotoModePreEntered_Parms, InController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeHelperComponent_OnPhotoModePreEntered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeHelperComponent_OnPhotoModePreEntered_Statics::NewProp_InController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeHelperComponent_OnPhotoModePreEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeHelperComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeHelperComponent_OnPhotoModePreEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeHelperComponent, nullptr, "OnPhotoModePreEntered", nullptr, nullptr, sizeof(PhotoModeHelperComponent_eventOnPhotoModePreEntered_Parms), Z_Construct_UFunction_UPhotoModeHelperComponent_OnPhotoModePreEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeHelperComponent_OnPhotoModePreEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeHelperComponent_OnPhotoModePreEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeHelperComponent_OnPhotoModePreEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeHelperComponent_OnPhotoModePreEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeHelperComponent_OnPhotoModePreEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeHelperComponent_OnPhotoModePrePause_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeHelperComponent_OnPhotoModePrePause_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeHelperComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeHelperComponent_OnPhotoModePrePause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeHelperComponent, nullptr, "OnPhotoModePrePause", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeHelperComponent_OnPhotoModePrePause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeHelperComponent_OnPhotoModePrePause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeHelperComponent_OnPhotoModePrePause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeHelperComponent_OnPhotoModePrePause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPhotoModeHelperComponent_NoRegister()
	{
		return UPhotoModeHelperComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPhotoModeHelperComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Options;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhotoModePoseSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhotoModePoseSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhotoModeHelperComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIPhotoMode,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPhotoModeHelperComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhotoModeHelperComponent_ForceLOD, "ForceLOD" }, // 714327496
		{ &Z_Construct_UFunction_UPhotoModeHelperComponent_OnPhotoModeExit, "OnPhotoModeExit" }, // 3340655164
		{ &Z_Construct_UFunction_UPhotoModeHelperComponent_OnPhotoModePreEntered, "OnPhotoModePreEntered" }, // 1149641761
		{ &Z_Construct_UFunction_UPhotoModeHelperComponent_OnPhotoModePrePause, "OnPhotoModePrePause" }, // 473935663
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeHelperComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PhotoModeHelperComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PhotoModeHelperComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeHelperComponent_Statics::NewProp_Options_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeHelperComponent" },
		{ "ModuleRelativePath", "Public/PhotoModeHelperComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhotoModeHelperComponent_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeHelperComponent, Options), Z_Construct_UScriptStruct_FPhotoModeHelperOptions, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeHelperComponent_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeHelperComponent_Statics::NewProp_Options_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeHelperComponent_Statics::NewProp_State_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeHelperComponent" },
		{ "ModuleRelativePath", "Public/PhotoModeHelperComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhotoModeHelperComponent_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeHelperComponent, State), Z_Construct_UScriptStruct_FPhotoModeHelpersState, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeHelperComponent_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeHelperComponent_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeHelperComponent_Statics::NewProp_PhotoModePoseSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeHelperComponent" },
		{ "ModuleRelativePath", "Public/PhotoModeHelperComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhotoModeHelperComponent_Statics::NewProp_PhotoModePoseSet = { "PhotoModePoseSet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeHelperComponent, PhotoModePoseSet), Z_Construct_UClass_UPhotoModePoseData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeHelperComponent_Statics::NewProp_PhotoModePoseSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeHelperComponent_Statics::NewProp_PhotoModePoseSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhotoModeHelperComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeHelperComponent_Statics::NewProp_Options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeHelperComponent_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeHelperComponent_Statics::NewProp_PhotoModePoseSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhotoModeHelperComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhotoModeHelperComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhotoModeHelperComponent_Statics::ClassParams = {
		&UPhotoModeHelperComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPhotoModeHelperComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeHelperComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPhotoModeHelperComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeHelperComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhotoModeHelperComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhotoModeHelperComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhotoModeHelperComponent, 2972118962);
	template<> OEIPHOTOMODE_API UClass* StaticClass<UPhotoModeHelperComponent>()
	{
		return UPhotoModeHelperComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhotoModeHelperComponent(Z_Construct_UClass_UPhotoModeHelperComponent, &UPhotoModeHelperComponent::StaticClass, TEXT("/Script/OEIPhotoMode"), TEXT("UPhotoModeHelperComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhotoModeHelperComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
