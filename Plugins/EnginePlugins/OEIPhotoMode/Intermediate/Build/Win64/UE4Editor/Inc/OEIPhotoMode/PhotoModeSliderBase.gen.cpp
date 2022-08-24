// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/PhotoModeSliderBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhotoModeSliderBase() {}
// Cross Module References
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeSliderBase_NoRegister();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeSliderBase();
	UMG_API UClass* Z_Construct_UClass_USlider();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(UPhotoModeSliderBase::execHandleValueChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleValueChanged(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSliderBase::execOnCaptureBegin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCaptureBegin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSliderBase::execOnCaptureEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCaptureEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSliderBase::execOnFocusChanged)
	{
		P_GET_UBOOL(Z_Param_HasFocus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFocusChanged(Z_Param_HasFocus);
		P_NATIVE_END;
	}
	void UPhotoModeSliderBase::StaticRegisterNativesUPhotoModeSliderBase()
	{
		UClass* Class = UPhotoModeSliderBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleValueChanged", &UPhotoModeSliderBase::execHandleValueChanged },
			{ "OnCaptureBegin", &UPhotoModeSliderBase::execOnCaptureBegin },
			{ "OnCaptureEnd", &UPhotoModeSliderBase::execOnCaptureEnd },
			{ "OnFocusChanged", &UPhotoModeSliderBase::execOnFocusChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPhotoModeSliderBase_HandleValueChanged_Statics
	{
		struct PhotoModeSliderBase_eventHandleValueChanged_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhotoModeSliderBase_HandleValueChanged_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSliderBase_eventHandleValueChanged_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSliderBase_HandleValueChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSliderBase_HandleValueChanged_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSliderBase_HandleValueChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSliderBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSliderBase_HandleValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSliderBase, nullptr, "HandleValueChanged", nullptr, nullptr, sizeof(PhotoModeSliderBase_eventHandleValueChanged_Parms), Z_Construct_UFunction_UPhotoModeSliderBase_HandleValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSliderBase_HandleValueChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSliderBase_HandleValueChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSliderBase_HandleValueChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSliderBase_HandleValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSliderBase_HandleValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSliderBase_OnCaptureBegin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSliderBase_OnCaptureBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSliderBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSliderBase_OnCaptureBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSliderBase, nullptr, "OnCaptureBegin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSliderBase_OnCaptureBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSliderBase_OnCaptureBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSliderBase_OnCaptureBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSliderBase_OnCaptureBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSliderBase_OnCaptureEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSliderBase_OnCaptureEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSliderBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSliderBase_OnCaptureEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSliderBase, nullptr, "OnCaptureEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSliderBase_OnCaptureEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSliderBase_OnCaptureEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSliderBase_OnCaptureEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSliderBase_OnCaptureEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSliderBase_OnFocusChanged_Statics
	{
		struct PhotoModeSliderBase_eventOnFocusChanged_Parms
		{
			bool HasFocus;
		};
		static void NewProp_HasFocus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasFocus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhotoModeSliderBase_OnFocusChanged_Statics::NewProp_HasFocus_SetBit(void* Obj)
	{
		((PhotoModeSliderBase_eventOnFocusChanged_Parms*)Obj)->HasFocus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhotoModeSliderBase_OnFocusChanged_Statics::NewProp_HasFocus = { "HasFocus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhotoModeSliderBase_eventOnFocusChanged_Parms), &Z_Construct_UFunction_UPhotoModeSliderBase_OnFocusChanged_Statics::NewProp_HasFocus_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSliderBase_OnFocusChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSliderBase_OnFocusChanged_Statics::NewProp_HasFocus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSliderBase_OnFocusChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSliderBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSliderBase_OnFocusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSliderBase, nullptr, "OnFocusChanged", nullptr, nullptr, sizeof(PhotoModeSliderBase_eventOnFocusChanged_Parms), Z_Construct_UFunction_UPhotoModeSliderBase_OnFocusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSliderBase_OnFocusChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSliderBase_OnFocusChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSliderBase_OnFocusChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSliderBase_OnFocusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSliderBase_OnFocusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPhotoModeSliderBase_NoRegister()
	{
		return UPhotoModeSliderBase::StaticClass();
	}
	struct Z_Construct_UClass_UPhotoModeSliderBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSliderColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultSliderColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBarColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultBarColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapturedSliderColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapturedSliderColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapturedBarColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapturedBarColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusReceivedSliderColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FocusReceivedSliderColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusReceivedBarColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FocusReceivedBarColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisabledSliderColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisabledSliderColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisabledBarColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisabledBarColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Focused_MetaData[];
#endif
		static void NewProp_Focused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Focused;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreviousValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhotoModeSliderBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlider,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIPhotoMode,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPhotoModeSliderBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhotoModeSliderBase_HandleValueChanged, "HandleValueChanged" }, // 2186764940
		{ &Z_Construct_UFunction_UPhotoModeSliderBase_OnCaptureBegin, "OnCaptureBegin" }, // 550673102
		{ &Z_Construct_UFunction_UPhotoModeSliderBase_OnCaptureEnd, "OnCaptureEnd" }, // 325926867
		{ &Z_Construct_UFunction_UPhotoModeSliderBase_OnFocusChanged, "OnFocusChanged" }, // 2771645877
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSliderBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PhotoModeSliderBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PhotoModeSliderBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_DefaultSliderColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSliderBase" },
		{ "ModuleRelativePath", "Public/PhotoModeSliderBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_DefaultSliderColor = { "DefaultSliderColor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSliderBase, DefaultSliderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_DefaultSliderColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_DefaultSliderColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_DefaultBarColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSliderBase" },
		{ "ModuleRelativePath", "Public/PhotoModeSliderBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_DefaultBarColor = { "DefaultBarColor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSliderBase, DefaultBarColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_DefaultBarColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_DefaultBarColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_CapturedSliderColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSliderBase" },
		{ "ModuleRelativePath", "Public/PhotoModeSliderBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_CapturedSliderColor = { "CapturedSliderColor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSliderBase, CapturedSliderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_CapturedSliderColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_CapturedSliderColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_CapturedBarColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSliderBase" },
		{ "ModuleRelativePath", "Public/PhotoModeSliderBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_CapturedBarColor = { "CapturedBarColor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSliderBase, CapturedBarColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_CapturedBarColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_CapturedBarColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_FocusReceivedSliderColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSliderBase" },
		{ "ModuleRelativePath", "Public/PhotoModeSliderBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_FocusReceivedSliderColor = { "FocusReceivedSliderColor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSliderBase, FocusReceivedSliderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_FocusReceivedSliderColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_FocusReceivedSliderColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_FocusReceivedBarColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSliderBase" },
		{ "ModuleRelativePath", "Public/PhotoModeSliderBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_FocusReceivedBarColor = { "FocusReceivedBarColor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSliderBase, FocusReceivedBarColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_FocusReceivedBarColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_FocusReceivedBarColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_DisabledSliderColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSliderBase" },
		{ "ModuleRelativePath", "Public/PhotoModeSliderBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_DisabledSliderColor = { "DisabledSliderColor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSliderBase, DisabledSliderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_DisabledSliderColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_DisabledSliderColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_DisabledBarColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSliderBase" },
		{ "ModuleRelativePath", "Public/PhotoModeSliderBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_DisabledBarColor = { "DisabledBarColor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSliderBase, DisabledBarColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_DisabledBarColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_DisabledBarColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_Focused_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSliderBase" },
		{ "ModuleRelativePath", "Public/PhotoModeSliderBase.h" },
	};
#endif
	void Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_Focused_SetBit(void* Obj)
	{
		((UPhotoModeSliderBase*)Obj)->Focused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_Focused = { "Focused", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhotoModeSliderBase), &Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_Focused_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_Focused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_Focused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_PreviousValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSliderBase" },
		{ "ModuleRelativePath", "Public/PhotoModeSliderBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_PreviousValue = { "PreviousValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSliderBase, PreviousValue), METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_PreviousValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_PreviousValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhotoModeSliderBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_DefaultSliderColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_DefaultBarColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_CapturedSliderColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_CapturedBarColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_FocusReceivedSliderColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_FocusReceivedBarColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_DisabledSliderColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_DisabledBarColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_Focused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSliderBase_Statics::NewProp_PreviousValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhotoModeSliderBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhotoModeSliderBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhotoModeSliderBase_Statics::ClassParams = {
		&UPhotoModeSliderBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPhotoModeSliderBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSliderBase_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSliderBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSliderBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhotoModeSliderBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhotoModeSliderBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhotoModeSliderBase, 3364349017);
	template<> OEIPHOTOMODE_API UClass* StaticClass<UPhotoModeSliderBase>()
	{
		return UPhotoModeSliderBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhotoModeSliderBase(Z_Construct_UClass_UPhotoModeSliderBase, &UPhotoModeSliderBase::StaticClass, TEXT("/Script/OEIPhotoMode"), TEXT("UPhotoModeSliderBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhotoModeSliderBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
