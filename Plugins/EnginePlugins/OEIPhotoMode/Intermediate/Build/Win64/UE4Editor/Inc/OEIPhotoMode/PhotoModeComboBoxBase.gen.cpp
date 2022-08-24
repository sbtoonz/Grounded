// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/PhotoModeComboBoxBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhotoModeComboBoxBase() {}
// Cross Module References
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeComboBoxBase_NoRegister();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeComboBoxBase();
	UMG_API UClass* Z_Construct_UClass_UComboBoxString();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
// End Cross Module References
	DEFINE_FUNCTION(UPhotoModeComboBoxBase::execOnFocusChanged)
	{
		P_GET_UBOOL(Z_Param_HasFocus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFocusChanged(Z_Param_HasFocus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComboBoxBase::execSetBrushes)
	{
		P_GET_STRUCT(FSlateBrush,Z_Param_InNormalImage);
		P_GET_STRUCT(FSlateBrush,Z_Param_InHoveredFocusedImage);
		P_GET_STRUCT(FSlateBrush,Z_Param_InPressedStyle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrushes(Z_Param_InNormalImage,Z_Param_InHoveredFocusedImage,Z_Param_InPressedStyle);
		P_NATIVE_END;
	}
	void UPhotoModeComboBoxBase::StaticRegisterNativesUPhotoModeComboBoxBase()
	{
		UClass* Class = UPhotoModeComboBoxBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnFocusChanged", &UPhotoModeComboBoxBase::execOnFocusChanged },
			{ "SetBrushes", &UPhotoModeComboBoxBase::execSetBrushes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPhotoModeComboBoxBase_OnFocusChanged_Statics
	{
		struct PhotoModeComboBoxBase_eventOnFocusChanged_Parms
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
	void Z_Construct_UFunction_UPhotoModeComboBoxBase_OnFocusChanged_Statics::NewProp_HasFocus_SetBit(void* Obj)
	{
		((PhotoModeComboBoxBase_eventOnFocusChanged_Parms*)Obj)->HasFocus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhotoModeComboBoxBase_OnFocusChanged_Statics::NewProp_HasFocus = { "HasFocus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhotoModeComboBoxBase_eventOnFocusChanged_Parms), &Z_Construct_UFunction_UPhotoModeComboBoxBase_OnFocusChanged_Statics::NewProp_HasFocus_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComboBoxBase_OnFocusChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComboBoxBase_OnFocusChanged_Statics::NewProp_HasFocus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComboBoxBase_OnFocusChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComboBoxBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComboBoxBase_OnFocusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComboBoxBase, nullptr, "OnFocusChanged", nullptr, nullptr, sizeof(PhotoModeComboBoxBase_eventOnFocusChanged_Parms), Z_Construct_UFunction_UPhotoModeComboBoxBase_OnFocusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComboBoxBase_OnFocusChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComboBoxBase_OnFocusChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComboBoxBase_OnFocusChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComboBoxBase_OnFocusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComboBoxBase_OnFocusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComboBoxBase_SetBrushes_Statics
	{
		struct PhotoModeComboBoxBase_eventSetBrushes_Parms
		{
			FSlateBrush InNormalImage;
			FSlateBrush InHoveredFocusedImage;
			FSlateBrush InPressedStyle;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InNormalImage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InHoveredFocusedImage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPressedStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhotoModeComboBoxBase_SetBrushes_Statics::NewProp_InNormalImage = { "InNormalImage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComboBoxBase_eventSetBrushes_Parms, InNormalImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhotoModeComboBoxBase_SetBrushes_Statics::NewProp_InHoveredFocusedImage = { "InHoveredFocusedImage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComboBoxBase_eventSetBrushes_Parms, InHoveredFocusedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhotoModeComboBoxBase_SetBrushes_Statics::NewProp_InPressedStyle = { "InPressedStyle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComboBoxBase_eventSetBrushes_Parms, InPressedStyle), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComboBoxBase_SetBrushes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComboBoxBase_SetBrushes_Statics::NewProp_InNormalImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComboBoxBase_SetBrushes_Statics::NewProp_InHoveredFocusedImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComboBoxBase_SetBrushes_Statics::NewProp_InPressedStyle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComboBoxBase_SetBrushes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComboBoxBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComboBoxBase_SetBrushes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComboBoxBase, nullptr, "SetBrushes", nullptr, nullptr, sizeof(PhotoModeComboBoxBase_eventSetBrushes_Parms), Z_Construct_UFunction_UPhotoModeComboBoxBase_SetBrushes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComboBoxBase_SetBrushes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComboBoxBase_SetBrushes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComboBoxBase_SetBrushes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComboBoxBase_SetBrushes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComboBoxBase_SetBrushes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPhotoModeComboBoxBase_NoRegister()
	{
		return UPhotoModeComboBoxBase::StaticClass();
	}
	struct Z_Construct_UClass_UPhotoModeComboBoxBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoveredFocusedStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoveredFocusedStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressedStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PressedStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Focused_MetaData[];
#endif
		static void NewProp_Focused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Focused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhotoModeComboBoxBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComboBoxString,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIPhotoMode,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPhotoModeComboBoxBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhotoModeComboBoxBase_OnFocusChanged, "OnFocusChanged" }, // 3080797731
		{ &Z_Construct_UFunction_UPhotoModeComboBoxBase_SetBrushes, "SetBrushes" }, // 677157203
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComboBoxBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PhotoModeComboBoxBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PhotoModeComboBoxBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComboBoxBase_Statics::NewProp_NormalStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeComboBoxBase" },
		{ "ModuleRelativePath", "Public/PhotoModeComboBoxBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhotoModeComboBoxBase_Statics::NewProp_NormalStyle = { "NormalStyle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeComboBoxBase, NormalStyle), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeComboBoxBase_Statics::NewProp_NormalStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComboBoxBase_Statics::NewProp_NormalStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComboBoxBase_Statics::NewProp_HoveredFocusedStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeComboBoxBase" },
		{ "ModuleRelativePath", "Public/PhotoModeComboBoxBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhotoModeComboBoxBase_Statics::NewProp_HoveredFocusedStyle = { "HoveredFocusedStyle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeComboBoxBase, HoveredFocusedStyle), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeComboBoxBase_Statics::NewProp_HoveredFocusedStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComboBoxBase_Statics::NewProp_HoveredFocusedStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComboBoxBase_Statics::NewProp_PressedStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeComboBoxBase" },
		{ "ModuleRelativePath", "Public/PhotoModeComboBoxBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhotoModeComboBoxBase_Statics::NewProp_PressedStyle = { "PressedStyle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeComboBoxBase, PressedStyle), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeComboBoxBase_Statics::NewProp_PressedStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComboBoxBase_Statics::NewProp_PressedStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComboBoxBase_Statics::NewProp_Focused_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeComboBoxBase" },
		{ "ModuleRelativePath", "Public/PhotoModeComboBoxBase.h" },
	};
#endif
	void Z_Construct_UClass_UPhotoModeComboBoxBase_Statics::NewProp_Focused_SetBit(void* Obj)
	{
		((UPhotoModeComboBoxBase*)Obj)->Focused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhotoModeComboBoxBase_Statics::NewProp_Focused = { "Focused", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhotoModeComboBoxBase), &Z_Construct_UClass_UPhotoModeComboBoxBase_Statics::NewProp_Focused_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeComboBoxBase_Statics::NewProp_Focused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComboBoxBase_Statics::NewProp_Focused_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhotoModeComboBoxBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComboBoxBase_Statics::NewProp_NormalStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComboBoxBase_Statics::NewProp_HoveredFocusedStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComboBoxBase_Statics::NewProp_PressedStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComboBoxBase_Statics::NewProp_Focused,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhotoModeComboBoxBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhotoModeComboBoxBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhotoModeComboBoxBase_Statics::ClassParams = {
		&UPhotoModeComboBoxBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPhotoModeComboBoxBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComboBoxBase_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhotoModeComboBoxBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComboBoxBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhotoModeComboBoxBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhotoModeComboBoxBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhotoModeComboBoxBase, 3986377833);
	template<> OEIPHOTOMODE_API UClass* StaticClass<UPhotoModeComboBoxBase>()
	{
		return UPhotoModeComboBoxBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhotoModeComboBoxBase(Z_Construct_UClass_UPhotoModeComboBoxBase, &UPhotoModeComboBoxBase::StaticClass, TEXT("/Script/OEIPhotoMode"), TEXT("UPhotoModeComboBoxBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhotoModeComboBoxBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
