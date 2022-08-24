// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/PhotoModeCheckBoxBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhotoModeCheckBoxBase() {}
// Cross Module References
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeCheckBoxBase_NoRegister();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeCheckBoxBase();
	UMG_API UClass* Z_Construct_UClass_UCheckBox();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
// End Cross Module References
	DEFINE_FUNCTION(UPhotoModeCheckBoxBase::execOnFocusChanged)
	{
		P_GET_UBOOL(Z_Param_HasFocus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFocusChanged(Z_Param_HasFocus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeCheckBoxBase::execSetBrushes)
	{
		P_GET_STRUCT(FSlateBrush,Z_Param_InCheckedImage);
		P_GET_STRUCT(FSlateBrush,Z_Param_InUncheckedImage);
		P_GET_STRUCT(FSlateBrush,Z_Param_InCheckedPressedImage);
		P_GET_STRUCT(FSlateBrush,Z_Param_InUncheckedPressedImage);
		P_GET_STRUCT(FSlateBrush,Z_Param_InHoveredFocusedCheckedImage);
		P_GET_STRUCT(FSlateBrush,Z_Param_InHoveredFocusedUncheckedImage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrushes(Z_Param_InCheckedImage,Z_Param_InUncheckedImage,Z_Param_InCheckedPressedImage,Z_Param_InUncheckedPressedImage,Z_Param_InHoveredFocusedCheckedImage,Z_Param_InHoveredFocusedUncheckedImage);
		P_NATIVE_END;
	}
	void UPhotoModeCheckBoxBase::StaticRegisterNativesUPhotoModeCheckBoxBase()
	{
		UClass* Class = UPhotoModeCheckBoxBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnFocusChanged", &UPhotoModeCheckBoxBase::execOnFocusChanged },
			{ "SetBrushes", &UPhotoModeCheckBoxBase::execSetBrushes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPhotoModeCheckBoxBase_OnFocusChanged_Statics
	{
		struct PhotoModeCheckBoxBase_eventOnFocusChanged_Parms
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
	void Z_Construct_UFunction_UPhotoModeCheckBoxBase_OnFocusChanged_Statics::NewProp_HasFocus_SetBit(void* Obj)
	{
		((PhotoModeCheckBoxBase_eventOnFocusChanged_Parms*)Obj)->HasFocus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhotoModeCheckBoxBase_OnFocusChanged_Statics::NewProp_HasFocus = { "HasFocus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhotoModeCheckBoxBase_eventOnFocusChanged_Parms), &Z_Construct_UFunction_UPhotoModeCheckBoxBase_OnFocusChanged_Statics::NewProp_HasFocus_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeCheckBoxBase_OnFocusChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeCheckBoxBase_OnFocusChanged_Statics::NewProp_HasFocus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeCheckBoxBase_OnFocusChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeCheckBoxBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeCheckBoxBase_OnFocusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeCheckBoxBase, nullptr, "OnFocusChanged", nullptr, nullptr, sizeof(PhotoModeCheckBoxBase_eventOnFocusChanged_Parms), Z_Construct_UFunction_UPhotoModeCheckBoxBase_OnFocusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeCheckBoxBase_OnFocusChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeCheckBoxBase_OnFocusChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeCheckBoxBase_OnFocusChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeCheckBoxBase_OnFocusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeCheckBoxBase_OnFocusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeCheckBoxBase_SetBrushes_Statics
	{
		struct PhotoModeCheckBoxBase_eventSetBrushes_Parms
		{
			FSlateBrush InCheckedImage;
			FSlateBrush InUncheckedImage;
			FSlateBrush InCheckedPressedImage;
			FSlateBrush InUncheckedPressedImage;
			FSlateBrush InHoveredFocusedCheckedImage;
			FSlateBrush InHoveredFocusedUncheckedImage;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InCheckedImage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InUncheckedImage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InCheckedPressedImage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InUncheckedPressedImage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InHoveredFocusedCheckedImage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InHoveredFocusedUncheckedImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhotoModeCheckBoxBase_SetBrushes_Statics::NewProp_InCheckedImage = { "InCheckedImage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeCheckBoxBase_eventSetBrushes_Parms, InCheckedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhotoModeCheckBoxBase_SetBrushes_Statics::NewProp_InUncheckedImage = { "InUncheckedImage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeCheckBoxBase_eventSetBrushes_Parms, InUncheckedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhotoModeCheckBoxBase_SetBrushes_Statics::NewProp_InCheckedPressedImage = { "InCheckedPressedImage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeCheckBoxBase_eventSetBrushes_Parms, InCheckedPressedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhotoModeCheckBoxBase_SetBrushes_Statics::NewProp_InUncheckedPressedImage = { "InUncheckedPressedImage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeCheckBoxBase_eventSetBrushes_Parms, InUncheckedPressedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhotoModeCheckBoxBase_SetBrushes_Statics::NewProp_InHoveredFocusedCheckedImage = { "InHoveredFocusedCheckedImage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeCheckBoxBase_eventSetBrushes_Parms, InHoveredFocusedCheckedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhotoModeCheckBoxBase_SetBrushes_Statics::NewProp_InHoveredFocusedUncheckedImage = { "InHoveredFocusedUncheckedImage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeCheckBoxBase_eventSetBrushes_Parms, InHoveredFocusedUncheckedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeCheckBoxBase_SetBrushes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeCheckBoxBase_SetBrushes_Statics::NewProp_InCheckedImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeCheckBoxBase_SetBrushes_Statics::NewProp_InUncheckedImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeCheckBoxBase_SetBrushes_Statics::NewProp_InCheckedPressedImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeCheckBoxBase_SetBrushes_Statics::NewProp_InUncheckedPressedImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeCheckBoxBase_SetBrushes_Statics::NewProp_InHoveredFocusedCheckedImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeCheckBoxBase_SetBrushes_Statics::NewProp_InHoveredFocusedUncheckedImage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeCheckBoxBase_SetBrushes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeCheckBoxBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeCheckBoxBase_SetBrushes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeCheckBoxBase, nullptr, "SetBrushes", nullptr, nullptr, sizeof(PhotoModeCheckBoxBase_eventSetBrushes_Parms), Z_Construct_UFunction_UPhotoModeCheckBoxBase_SetBrushes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeCheckBoxBase_SetBrushes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeCheckBoxBase_SetBrushes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeCheckBoxBase_SetBrushes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeCheckBoxBase_SetBrushes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeCheckBoxBase_SetBrushes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPhotoModeCheckBoxBase_NoRegister()
	{
		return UPhotoModeCheckBoxBase::StaticClass();
	}
	struct Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckedImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CheckedImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UncheckedImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UncheckedImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckedPressedImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CheckedPressedImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UncheckedPressedImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UncheckedPressedImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoveredFocusedCheckedImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoveredFocusedCheckedImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoveredFocusedUncheckedImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoveredFocusedUncheckedImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Focused_MetaData[];
#endif
		static void NewProp_Focused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Focused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCheckBox,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIPhotoMode,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhotoModeCheckBoxBase_OnFocusChanged, "OnFocusChanged" }, // 601213269
		{ &Z_Construct_UFunction_UPhotoModeCheckBoxBase_SetBrushes, "SetBrushes" }, // 3452501471
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PhotoModeCheckBoxBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PhotoModeCheckBoxBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_CheckedImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeCheckBoxBase" },
		{ "ModuleRelativePath", "Public/PhotoModeCheckBoxBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_CheckedImage = { "CheckedImage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeCheckBoxBase, CheckedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_CheckedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_CheckedImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_UncheckedImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeCheckBoxBase" },
		{ "ModuleRelativePath", "Public/PhotoModeCheckBoxBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_UncheckedImage = { "UncheckedImage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeCheckBoxBase, UncheckedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_UncheckedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_UncheckedImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_CheckedPressedImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeCheckBoxBase" },
		{ "ModuleRelativePath", "Public/PhotoModeCheckBoxBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_CheckedPressedImage = { "CheckedPressedImage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeCheckBoxBase, CheckedPressedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_CheckedPressedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_CheckedPressedImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_UncheckedPressedImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeCheckBoxBase" },
		{ "ModuleRelativePath", "Public/PhotoModeCheckBoxBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_UncheckedPressedImage = { "UncheckedPressedImage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeCheckBoxBase, UncheckedPressedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_UncheckedPressedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_UncheckedPressedImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_HoveredFocusedCheckedImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeCheckBoxBase" },
		{ "ModuleRelativePath", "Public/PhotoModeCheckBoxBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_HoveredFocusedCheckedImage = { "HoveredFocusedCheckedImage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeCheckBoxBase, HoveredFocusedCheckedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_HoveredFocusedCheckedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_HoveredFocusedCheckedImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_HoveredFocusedUncheckedImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeCheckBoxBase" },
		{ "ModuleRelativePath", "Public/PhotoModeCheckBoxBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_HoveredFocusedUncheckedImage = { "HoveredFocusedUncheckedImage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeCheckBoxBase, HoveredFocusedUncheckedImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_HoveredFocusedUncheckedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_HoveredFocusedUncheckedImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_Focused_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeCheckBoxBase" },
		{ "ModuleRelativePath", "Public/PhotoModeCheckBoxBase.h" },
	};
#endif
	void Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_Focused_SetBit(void* Obj)
	{
		((UPhotoModeCheckBoxBase*)Obj)->Focused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_Focused = { "Focused", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhotoModeCheckBoxBase), &Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_Focused_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_Focused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_Focused_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_CheckedImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_UncheckedImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_CheckedPressedImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_UncheckedPressedImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_HoveredFocusedCheckedImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_HoveredFocusedUncheckedImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::NewProp_Focused,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhotoModeCheckBoxBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::ClassParams = {
		&UPhotoModeCheckBoxBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhotoModeCheckBoxBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhotoModeCheckBoxBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhotoModeCheckBoxBase, 977100130);
	template<> OEIPHOTOMODE_API UClass* StaticClass<UPhotoModeCheckBoxBase>()
	{
		return UPhotoModeCheckBoxBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhotoModeCheckBoxBase(Z_Construct_UClass_UPhotoModeCheckBoxBase, &UPhotoModeCheckBoxBase::StaticClass, TEXT("/Script/OEIPhotoMode"), TEXT("UPhotoModeCheckBoxBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhotoModeCheckBoxBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
