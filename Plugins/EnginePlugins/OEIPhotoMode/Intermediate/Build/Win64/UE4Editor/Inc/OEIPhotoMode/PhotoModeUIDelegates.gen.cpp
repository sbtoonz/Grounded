// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/PhotoModeUIDelegates.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhotoModeUIDelegates() {}
// Cross Module References
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeUIDelegates_NoRegister();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeUIDelegates();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESelectInfo();
// End Cross Module References
	DEFINE_FUNCTION(UPhotoModeUIDelegates::execOnCameraSpeedChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCameraSpeedChanged(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeUIDelegates::execOnCameraTiltSliderChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCameraTiltSliderChanged(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeUIDelegates::execOnCharacterYawOffsetChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCharacterYawOffsetChanged(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeUIDelegates::execOnColorGradingIntensityValueChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnColorGradingIntensityValueChanged(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeUIDelegates::execOnColorGradingProfileIntensityChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnColorGradingProfileIntensityChanged(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeUIDelegates::execOnColorGradingProfileSelectionChanged)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
		P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnColorGradingProfileSelectionChanged(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeUIDelegates::execOnDOFFocusDistanceChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDOFFocusDistanceChanged(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeUIDelegates::execOnDOFFstopChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDOFFstopChanged(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeUIDelegates::execOnFilmGrainSliderChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFilmGrainSliderChanged(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeUIDelegates::execOnFogViewDistanceChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFogViewDistanceChanged(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeUIDelegates::execOnFOVValueChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFOVValueChanged(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeUIDelegates::execOnHideCharacterChanged)
	{
		P_GET_UBOOL(Z_Param_bChecked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHideCharacterChanged(Z_Param_bChecked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeUIDelegates::execOnLUTSelectionChanged)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
		P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLUTSelectionChanged(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeUIDelegates::execOnPoseBlendValueChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPoseBlendValueChanged(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeUIDelegates::execOnPoseSelectionChanged)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
		P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPoseSelectionChanged(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeUIDelegates::execOnSceneFringeSliderChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSceneFringeSliderChanged(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeUIDelegates::execOnTonemapperGammaChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTonemapperGammaChanged(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeUIDelegates::execOnVignetteValueChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVignetteValueChanged(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeUIDelegates::execSetCharacterVisibility)
	{
		P_GET_UBOOL(Z_Param_Visible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCharacterVisibility(Z_Param_Visible);
		P_NATIVE_END;
	}
	void UPhotoModeUIDelegates::StaticRegisterNativesUPhotoModeUIDelegates()
	{
		UClass* Class = UPhotoModeUIDelegates::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCameraSpeedChanged", &UPhotoModeUIDelegates::execOnCameraSpeedChanged },
			{ "OnCameraTiltSliderChanged", &UPhotoModeUIDelegates::execOnCameraTiltSliderChanged },
			{ "OnCharacterYawOffsetChanged", &UPhotoModeUIDelegates::execOnCharacterYawOffsetChanged },
			{ "OnColorGradingIntensityValueChanged", &UPhotoModeUIDelegates::execOnColorGradingIntensityValueChanged },
			{ "OnColorGradingProfileIntensityChanged", &UPhotoModeUIDelegates::execOnColorGradingProfileIntensityChanged },
			{ "OnColorGradingProfileSelectionChanged", &UPhotoModeUIDelegates::execOnColorGradingProfileSelectionChanged },
			{ "OnDOFFocusDistanceChanged", &UPhotoModeUIDelegates::execOnDOFFocusDistanceChanged },
			{ "OnDOFFstopChanged", &UPhotoModeUIDelegates::execOnDOFFstopChanged },
			{ "OnFilmGrainSliderChanged", &UPhotoModeUIDelegates::execOnFilmGrainSliderChanged },
			{ "OnFogViewDistanceChanged", &UPhotoModeUIDelegates::execOnFogViewDistanceChanged },
			{ "OnFOVValueChanged", &UPhotoModeUIDelegates::execOnFOVValueChanged },
			{ "OnHideCharacterChanged", &UPhotoModeUIDelegates::execOnHideCharacterChanged },
			{ "OnLUTSelectionChanged", &UPhotoModeUIDelegates::execOnLUTSelectionChanged },
			{ "OnPoseBlendValueChanged", &UPhotoModeUIDelegates::execOnPoseBlendValueChanged },
			{ "OnPoseSelectionChanged", &UPhotoModeUIDelegates::execOnPoseSelectionChanged },
			{ "OnSceneFringeSliderChanged", &UPhotoModeUIDelegates::execOnSceneFringeSliderChanged },
			{ "OnTonemapperGammaChanged", &UPhotoModeUIDelegates::execOnTonemapperGammaChanged },
			{ "OnVignetteValueChanged", &UPhotoModeUIDelegates::execOnVignetteValueChanged },
			{ "SetCharacterVisibility", &UPhotoModeUIDelegates::execSetCharacterVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPhotoModeUIDelegates_OnCameraSpeedChanged_Statics
	{
		struct PhotoModeUIDelegates_eventOnCameraSpeedChanged_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnCameraSpeedChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeUIDelegates_eventOnCameraSpeedChanged_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeUIDelegates_OnCameraSpeedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeUIDelegates_OnCameraSpeedChanged_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeUIDelegates_OnCameraSpeedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeUIDelegates.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnCameraSpeedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeUIDelegates, nullptr, "OnCameraSpeedChanged", nullptr, nullptr, sizeof(PhotoModeUIDelegates_eventOnCameraSpeedChanged_Parms), Z_Construct_UFunction_UPhotoModeUIDelegates_OnCameraSpeedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnCameraSpeedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeUIDelegates_OnCameraSpeedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnCameraSpeedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeUIDelegates_OnCameraSpeedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeUIDelegates_OnCameraSpeedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeUIDelegates_OnCameraTiltSliderChanged_Statics
	{
		struct PhotoModeUIDelegates_eventOnCameraTiltSliderChanged_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnCameraTiltSliderChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeUIDelegates_eventOnCameraTiltSliderChanged_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeUIDelegates_OnCameraTiltSliderChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeUIDelegates_OnCameraTiltSliderChanged_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeUIDelegates_OnCameraTiltSliderChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeUIDelegates.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnCameraTiltSliderChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeUIDelegates, nullptr, "OnCameraTiltSliderChanged", nullptr, nullptr, sizeof(PhotoModeUIDelegates_eventOnCameraTiltSliderChanged_Parms), Z_Construct_UFunction_UPhotoModeUIDelegates_OnCameraTiltSliderChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnCameraTiltSliderChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeUIDelegates_OnCameraTiltSliderChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnCameraTiltSliderChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeUIDelegates_OnCameraTiltSliderChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeUIDelegates_OnCameraTiltSliderChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeUIDelegates_OnCharacterYawOffsetChanged_Statics
	{
		struct PhotoModeUIDelegates_eventOnCharacterYawOffsetChanged_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnCharacterYawOffsetChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeUIDelegates_eventOnCharacterYawOffsetChanged_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeUIDelegates_OnCharacterYawOffsetChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeUIDelegates_OnCharacterYawOffsetChanged_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeUIDelegates_OnCharacterYawOffsetChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeUIDelegates.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnCharacterYawOffsetChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeUIDelegates, nullptr, "OnCharacterYawOffsetChanged", nullptr, nullptr, sizeof(PhotoModeUIDelegates_eventOnCharacterYawOffsetChanged_Parms), Z_Construct_UFunction_UPhotoModeUIDelegates_OnCharacterYawOffsetChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnCharacterYawOffsetChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeUIDelegates_OnCharacterYawOffsetChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnCharacterYawOffsetChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeUIDelegates_OnCharacterYawOffsetChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeUIDelegates_OnCharacterYawOffsetChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingIntensityValueChanged_Statics
	{
		struct PhotoModeUIDelegates_eventOnColorGradingIntensityValueChanged_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingIntensityValueChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeUIDelegates_eventOnColorGradingIntensityValueChanged_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingIntensityValueChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingIntensityValueChanged_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingIntensityValueChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeUIDelegates.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingIntensityValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeUIDelegates, nullptr, "OnColorGradingIntensityValueChanged", nullptr, nullptr, sizeof(PhotoModeUIDelegates_eventOnColorGradingIntensityValueChanged_Parms), Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingIntensityValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingIntensityValueChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingIntensityValueChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingIntensityValueChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingIntensityValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingIntensityValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingProfileIntensityChanged_Statics
	{
		struct PhotoModeUIDelegates_eventOnColorGradingProfileIntensityChanged_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingProfileIntensityChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeUIDelegates_eventOnColorGradingProfileIntensityChanged_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingProfileIntensityChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingProfileIntensityChanged_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingProfileIntensityChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeUIDelegates.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingProfileIntensityChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeUIDelegates, nullptr, "OnColorGradingProfileIntensityChanged", nullptr, nullptr, sizeof(PhotoModeUIDelegates_eventOnColorGradingProfileIntensityChanged_Parms), Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingProfileIntensityChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingProfileIntensityChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingProfileIntensityChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingProfileIntensityChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingProfileIntensityChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingProfileIntensityChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingProfileSelectionChanged_Statics
	{
		struct PhotoModeUIDelegates_eventOnColorGradingProfileSelectionChanged_Parms
		{
			FString SelectedItem;
			TEnumAsByte<ESelectInfo::Type> SelectionType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingProfileSelectionChanged_Statics::NewProp_SelectedItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingProfileSelectionChanged_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeUIDelegates_eventOnColorGradingProfileSelectionChanged_Parms, SelectedItem), METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingProfileSelectionChanged_Statics::NewProp_SelectedItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingProfileSelectionChanged_Statics::NewProp_SelectedItem_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingProfileSelectionChanged_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeUIDelegates_eventOnColorGradingProfileSelectionChanged_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingProfileSelectionChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingProfileSelectionChanged_Statics::NewProp_SelectedItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingProfileSelectionChanged_Statics::NewProp_SelectionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingProfileSelectionChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeUIDelegates.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingProfileSelectionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeUIDelegates, nullptr, "OnColorGradingProfileSelectionChanged", nullptr, nullptr, sizeof(PhotoModeUIDelegates_eventOnColorGradingProfileSelectionChanged_Parms), Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingProfileSelectionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingProfileSelectionChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingProfileSelectionChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingProfileSelectionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingProfileSelectionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingProfileSelectionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeUIDelegates_OnDOFFocusDistanceChanged_Statics
	{
		struct PhotoModeUIDelegates_eventOnDOFFocusDistanceChanged_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnDOFFocusDistanceChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeUIDelegates_eventOnDOFFocusDistanceChanged_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeUIDelegates_OnDOFFocusDistanceChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeUIDelegates_OnDOFFocusDistanceChanged_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeUIDelegates_OnDOFFocusDistanceChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeUIDelegates.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnDOFFocusDistanceChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeUIDelegates, nullptr, "OnDOFFocusDistanceChanged", nullptr, nullptr, sizeof(PhotoModeUIDelegates_eventOnDOFFocusDistanceChanged_Parms), Z_Construct_UFunction_UPhotoModeUIDelegates_OnDOFFocusDistanceChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnDOFFocusDistanceChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeUIDelegates_OnDOFFocusDistanceChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnDOFFocusDistanceChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeUIDelegates_OnDOFFocusDistanceChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeUIDelegates_OnDOFFocusDistanceChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeUIDelegates_OnDOFFstopChanged_Statics
	{
		struct PhotoModeUIDelegates_eventOnDOFFstopChanged_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnDOFFstopChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeUIDelegates_eventOnDOFFstopChanged_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeUIDelegates_OnDOFFstopChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeUIDelegates_OnDOFFstopChanged_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeUIDelegates_OnDOFFstopChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeUIDelegates.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnDOFFstopChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeUIDelegates, nullptr, "OnDOFFstopChanged", nullptr, nullptr, sizeof(PhotoModeUIDelegates_eventOnDOFFstopChanged_Parms), Z_Construct_UFunction_UPhotoModeUIDelegates_OnDOFFstopChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnDOFFstopChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeUIDelegates_OnDOFFstopChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnDOFFstopChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeUIDelegates_OnDOFFstopChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeUIDelegates_OnDOFFstopChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeUIDelegates_OnFilmGrainSliderChanged_Statics
	{
		struct PhotoModeUIDelegates_eventOnFilmGrainSliderChanged_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnFilmGrainSliderChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeUIDelegates_eventOnFilmGrainSliderChanged_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeUIDelegates_OnFilmGrainSliderChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeUIDelegates_OnFilmGrainSliderChanged_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeUIDelegates_OnFilmGrainSliderChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeUIDelegates.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnFilmGrainSliderChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeUIDelegates, nullptr, "OnFilmGrainSliderChanged", nullptr, nullptr, sizeof(PhotoModeUIDelegates_eventOnFilmGrainSliderChanged_Parms), Z_Construct_UFunction_UPhotoModeUIDelegates_OnFilmGrainSliderChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnFilmGrainSliderChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeUIDelegates_OnFilmGrainSliderChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnFilmGrainSliderChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeUIDelegates_OnFilmGrainSliderChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeUIDelegates_OnFilmGrainSliderChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeUIDelegates_OnFogViewDistanceChanged_Statics
	{
		struct PhotoModeUIDelegates_eventOnFogViewDistanceChanged_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnFogViewDistanceChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeUIDelegates_eventOnFogViewDistanceChanged_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeUIDelegates_OnFogViewDistanceChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeUIDelegates_OnFogViewDistanceChanged_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeUIDelegates_OnFogViewDistanceChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeUIDelegates.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnFogViewDistanceChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeUIDelegates, nullptr, "OnFogViewDistanceChanged", nullptr, nullptr, sizeof(PhotoModeUIDelegates_eventOnFogViewDistanceChanged_Parms), Z_Construct_UFunction_UPhotoModeUIDelegates_OnFogViewDistanceChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnFogViewDistanceChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeUIDelegates_OnFogViewDistanceChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnFogViewDistanceChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeUIDelegates_OnFogViewDistanceChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeUIDelegates_OnFogViewDistanceChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeUIDelegates_OnFOVValueChanged_Statics
	{
		struct PhotoModeUIDelegates_eventOnFOVValueChanged_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnFOVValueChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeUIDelegates_eventOnFOVValueChanged_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeUIDelegates_OnFOVValueChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeUIDelegates_OnFOVValueChanged_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeUIDelegates_OnFOVValueChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeUIDelegates.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnFOVValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeUIDelegates, nullptr, "OnFOVValueChanged", nullptr, nullptr, sizeof(PhotoModeUIDelegates_eventOnFOVValueChanged_Parms), Z_Construct_UFunction_UPhotoModeUIDelegates_OnFOVValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnFOVValueChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeUIDelegates_OnFOVValueChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnFOVValueChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeUIDelegates_OnFOVValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeUIDelegates_OnFOVValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeUIDelegates_OnHideCharacterChanged_Statics
	{
		struct PhotoModeUIDelegates_eventOnHideCharacterChanged_Parms
		{
			bool bChecked;
		};
		static void NewProp_bChecked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChecked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhotoModeUIDelegates_OnHideCharacterChanged_Statics::NewProp_bChecked_SetBit(void* Obj)
	{
		((PhotoModeUIDelegates_eventOnHideCharacterChanged_Parms*)Obj)->bChecked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnHideCharacterChanged_Statics::NewProp_bChecked = { "bChecked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhotoModeUIDelegates_eventOnHideCharacterChanged_Parms), &Z_Construct_UFunction_UPhotoModeUIDelegates_OnHideCharacterChanged_Statics::NewProp_bChecked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeUIDelegates_OnHideCharacterChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeUIDelegates_OnHideCharacterChanged_Statics::NewProp_bChecked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeUIDelegates_OnHideCharacterChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeUIDelegates.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnHideCharacterChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeUIDelegates, nullptr, "OnHideCharacterChanged", nullptr, nullptr, sizeof(PhotoModeUIDelegates_eventOnHideCharacterChanged_Parms), Z_Construct_UFunction_UPhotoModeUIDelegates_OnHideCharacterChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnHideCharacterChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeUIDelegates_OnHideCharacterChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnHideCharacterChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeUIDelegates_OnHideCharacterChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeUIDelegates_OnHideCharacterChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeUIDelegates_OnLUTSelectionChanged_Statics
	{
		struct PhotoModeUIDelegates_eventOnLUTSelectionChanged_Parms
		{
			FString SelectedItem;
			TEnumAsByte<ESelectInfo::Type> SelectionType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeUIDelegates_OnLUTSelectionChanged_Statics::NewProp_SelectedItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnLUTSelectionChanged_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeUIDelegates_eventOnLUTSelectionChanged_Parms, SelectedItem), METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeUIDelegates_OnLUTSelectionChanged_Statics::NewProp_SelectedItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnLUTSelectionChanged_Statics::NewProp_SelectedItem_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnLUTSelectionChanged_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeUIDelegates_eventOnLUTSelectionChanged_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeUIDelegates_OnLUTSelectionChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeUIDelegates_OnLUTSelectionChanged_Statics::NewProp_SelectedItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeUIDelegates_OnLUTSelectionChanged_Statics::NewProp_SelectionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeUIDelegates_OnLUTSelectionChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeUIDelegates.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnLUTSelectionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeUIDelegates, nullptr, "OnLUTSelectionChanged", nullptr, nullptr, sizeof(PhotoModeUIDelegates_eventOnLUTSelectionChanged_Parms), Z_Construct_UFunction_UPhotoModeUIDelegates_OnLUTSelectionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnLUTSelectionChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeUIDelegates_OnLUTSelectionChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnLUTSelectionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeUIDelegates_OnLUTSelectionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeUIDelegates_OnLUTSelectionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeUIDelegates_OnPoseBlendValueChanged_Statics
	{
		struct PhotoModeUIDelegates_eventOnPoseBlendValueChanged_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnPoseBlendValueChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeUIDelegates_eventOnPoseBlendValueChanged_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeUIDelegates_OnPoseBlendValueChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeUIDelegates_OnPoseBlendValueChanged_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeUIDelegates_OnPoseBlendValueChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeUIDelegates.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnPoseBlendValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeUIDelegates, nullptr, "OnPoseBlendValueChanged", nullptr, nullptr, sizeof(PhotoModeUIDelegates_eventOnPoseBlendValueChanged_Parms), Z_Construct_UFunction_UPhotoModeUIDelegates_OnPoseBlendValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnPoseBlendValueChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeUIDelegates_OnPoseBlendValueChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnPoseBlendValueChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeUIDelegates_OnPoseBlendValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeUIDelegates_OnPoseBlendValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeUIDelegates_OnPoseSelectionChanged_Statics
	{
		struct PhotoModeUIDelegates_eventOnPoseSelectionChanged_Parms
		{
			FString SelectedItem;
			TEnumAsByte<ESelectInfo::Type> SelectionType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeUIDelegates_OnPoseSelectionChanged_Statics::NewProp_SelectedItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnPoseSelectionChanged_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeUIDelegates_eventOnPoseSelectionChanged_Parms, SelectedItem), METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeUIDelegates_OnPoseSelectionChanged_Statics::NewProp_SelectedItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnPoseSelectionChanged_Statics::NewProp_SelectedItem_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnPoseSelectionChanged_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeUIDelegates_eventOnPoseSelectionChanged_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeUIDelegates_OnPoseSelectionChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeUIDelegates_OnPoseSelectionChanged_Statics::NewProp_SelectedItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeUIDelegates_OnPoseSelectionChanged_Statics::NewProp_SelectionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeUIDelegates_OnPoseSelectionChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeUIDelegates.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnPoseSelectionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeUIDelegates, nullptr, "OnPoseSelectionChanged", nullptr, nullptr, sizeof(PhotoModeUIDelegates_eventOnPoseSelectionChanged_Parms), Z_Construct_UFunction_UPhotoModeUIDelegates_OnPoseSelectionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnPoseSelectionChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeUIDelegates_OnPoseSelectionChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnPoseSelectionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeUIDelegates_OnPoseSelectionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeUIDelegates_OnPoseSelectionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeUIDelegates_OnSceneFringeSliderChanged_Statics
	{
		struct PhotoModeUIDelegates_eventOnSceneFringeSliderChanged_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnSceneFringeSliderChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeUIDelegates_eventOnSceneFringeSliderChanged_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeUIDelegates_OnSceneFringeSliderChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeUIDelegates_OnSceneFringeSliderChanged_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeUIDelegates_OnSceneFringeSliderChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeUIDelegates.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnSceneFringeSliderChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeUIDelegates, nullptr, "OnSceneFringeSliderChanged", nullptr, nullptr, sizeof(PhotoModeUIDelegates_eventOnSceneFringeSliderChanged_Parms), Z_Construct_UFunction_UPhotoModeUIDelegates_OnSceneFringeSliderChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnSceneFringeSliderChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeUIDelegates_OnSceneFringeSliderChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnSceneFringeSliderChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeUIDelegates_OnSceneFringeSliderChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeUIDelegates_OnSceneFringeSliderChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeUIDelegates_OnTonemapperGammaChanged_Statics
	{
		struct PhotoModeUIDelegates_eventOnTonemapperGammaChanged_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnTonemapperGammaChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeUIDelegates_eventOnTonemapperGammaChanged_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeUIDelegates_OnTonemapperGammaChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeUIDelegates_OnTonemapperGammaChanged_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeUIDelegates_OnTonemapperGammaChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeUIDelegates.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnTonemapperGammaChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeUIDelegates, nullptr, "OnTonemapperGammaChanged", nullptr, nullptr, sizeof(PhotoModeUIDelegates_eventOnTonemapperGammaChanged_Parms), Z_Construct_UFunction_UPhotoModeUIDelegates_OnTonemapperGammaChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnTonemapperGammaChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeUIDelegates_OnTonemapperGammaChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnTonemapperGammaChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeUIDelegates_OnTonemapperGammaChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeUIDelegates_OnTonemapperGammaChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeUIDelegates_OnVignetteValueChanged_Statics
	{
		struct PhotoModeUIDelegates_eventOnVignetteValueChanged_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnVignetteValueChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeUIDelegates_eventOnVignetteValueChanged_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeUIDelegates_OnVignetteValueChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeUIDelegates_OnVignetteValueChanged_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeUIDelegates_OnVignetteValueChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeUIDelegates.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeUIDelegates_OnVignetteValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeUIDelegates, nullptr, "OnVignetteValueChanged", nullptr, nullptr, sizeof(PhotoModeUIDelegates_eventOnVignetteValueChanged_Parms), Z_Construct_UFunction_UPhotoModeUIDelegates_OnVignetteValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnVignetteValueChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeUIDelegates_OnVignetteValueChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_OnVignetteValueChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeUIDelegates_OnVignetteValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeUIDelegates_OnVignetteValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeUIDelegates_SetCharacterVisibility_Statics
	{
		struct PhotoModeUIDelegates_eventSetCharacterVisibility_Parms
		{
			bool Visible;
		};
		static void NewProp_Visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Visible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhotoModeUIDelegates_SetCharacterVisibility_Statics::NewProp_Visible_SetBit(void* Obj)
	{
		((PhotoModeUIDelegates_eventSetCharacterVisibility_Parms*)Obj)->Visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhotoModeUIDelegates_SetCharacterVisibility_Statics::NewProp_Visible = { "Visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhotoModeUIDelegates_eventSetCharacterVisibility_Parms), &Z_Construct_UFunction_UPhotoModeUIDelegates_SetCharacterVisibility_Statics::NewProp_Visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeUIDelegates_SetCharacterVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeUIDelegates_SetCharacterVisibility_Statics::NewProp_Visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeUIDelegates_SetCharacterVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeUIDelegates.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeUIDelegates_SetCharacterVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeUIDelegates, nullptr, "SetCharacterVisibility", nullptr, nullptr, sizeof(PhotoModeUIDelegates_eventSetCharacterVisibility_Parms), Z_Construct_UFunction_UPhotoModeUIDelegates_SetCharacterVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_SetCharacterVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeUIDelegates_SetCharacterVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeUIDelegates_SetCharacterVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeUIDelegates_SetCharacterVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeUIDelegates_SetCharacterVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPhotoModeUIDelegates_NoRegister()
	{
		return UPhotoModeUIDelegates::StaticClass();
	}
	struct Z_Construct_UClass_UPhotoModeUIDelegates_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhotoModeUIDelegates_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIPhotoMode,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPhotoModeUIDelegates_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhotoModeUIDelegates_OnCameraSpeedChanged, "OnCameraSpeedChanged" }, // 3448461547
		{ &Z_Construct_UFunction_UPhotoModeUIDelegates_OnCameraTiltSliderChanged, "OnCameraTiltSliderChanged" }, // 3409221757
		{ &Z_Construct_UFunction_UPhotoModeUIDelegates_OnCharacterYawOffsetChanged, "OnCharacterYawOffsetChanged" }, // 3042033279
		{ &Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingIntensityValueChanged, "OnColorGradingIntensityValueChanged" }, // 3004992575
		{ &Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingProfileIntensityChanged, "OnColorGradingProfileIntensityChanged" }, // 2403509378
		{ &Z_Construct_UFunction_UPhotoModeUIDelegates_OnColorGradingProfileSelectionChanged, "OnColorGradingProfileSelectionChanged" }, // 196655324
		{ &Z_Construct_UFunction_UPhotoModeUIDelegates_OnDOFFocusDistanceChanged, "OnDOFFocusDistanceChanged" }, // 3767454879
		{ &Z_Construct_UFunction_UPhotoModeUIDelegates_OnDOFFstopChanged, "OnDOFFstopChanged" }, // 1176817937
		{ &Z_Construct_UFunction_UPhotoModeUIDelegates_OnFilmGrainSliderChanged, "OnFilmGrainSliderChanged" }, // 3362402704
		{ &Z_Construct_UFunction_UPhotoModeUIDelegates_OnFogViewDistanceChanged, "OnFogViewDistanceChanged" }, // 869668119
		{ &Z_Construct_UFunction_UPhotoModeUIDelegates_OnFOVValueChanged, "OnFOVValueChanged" }, // 1564264416
		{ &Z_Construct_UFunction_UPhotoModeUIDelegates_OnHideCharacterChanged, "OnHideCharacterChanged" }, // 1680381905
		{ &Z_Construct_UFunction_UPhotoModeUIDelegates_OnLUTSelectionChanged, "OnLUTSelectionChanged" }, // 997427887
		{ &Z_Construct_UFunction_UPhotoModeUIDelegates_OnPoseBlendValueChanged, "OnPoseBlendValueChanged" }, // 4177055092
		{ &Z_Construct_UFunction_UPhotoModeUIDelegates_OnPoseSelectionChanged, "OnPoseSelectionChanged" }, // 2303429465
		{ &Z_Construct_UFunction_UPhotoModeUIDelegates_OnSceneFringeSliderChanged, "OnSceneFringeSliderChanged" }, // 4075104469
		{ &Z_Construct_UFunction_UPhotoModeUIDelegates_OnTonemapperGammaChanged, "OnTonemapperGammaChanged" }, // 3359882348
		{ &Z_Construct_UFunction_UPhotoModeUIDelegates_OnVignetteValueChanged, "OnVignetteValueChanged" }, // 837207053
		{ &Z_Construct_UFunction_UPhotoModeUIDelegates_SetCharacterVisibility, "SetCharacterVisibility" }, // 1125851554
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeUIDelegates_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PhotoModeUIDelegates.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PhotoModeUIDelegates.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhotoModeUIDelegates_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhotoModeUIDelegates>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhotoModeUIDelegates_Statics::ClassParams = {
		&UPhotoModeUIDelegates::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPhotoModeUIDelegates_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeUIDelegates_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhotoModeUIDelegates()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhotoModeUIDelegates_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhotoModeUIDelegates, 337924348);
	template<> OEIPHOTOMODE_API UClass* StaticClass<UPhotoModeUIDelegates>()
	{
		return UPhotoModeUIDelegates::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhotoModeUIDelegates(Z_Construct_UClass_UPhotoModeUIDelegates, &UPhotoModeUIDelegates::StaticClass, TEXT("/Script/OEIPhotoMode"), TEXT("UPhotoModeUIDelegates"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhotoModeUIDelegates);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
