// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/PhotoModeSettingWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhotoModeSettingWidget() {}
// Cross Module References
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeSettingWidget_NoRegister();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeSettingWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESelectInfo();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ECheckBoxState();
	OEITEXT_API UScriptStruct* Z_Construct_UScriptStruct_FLocString();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeTextBlock_NoRegister();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeSliderBase_NoRegister();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeCheckBoxBase_NoRegister();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeComboBoxBase_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	OEIPHOTOMODE_API UEnum* Z_Construct_UEnum_OEIPhotoMode_EPhotoModeSetting();
	OEIPHOTOMODE_API UEnum* Z_Construct_UEnum_OEIPhotoMode_EPhotoModeValueFormat();
// End Cross Module References
	DEFINE_FUNCTION(UPhotoModeSettingWidget::execGetSelectedIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSelectedIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSettingWidget::execGetValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSettingWidget::execIsChecked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsChecked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSettingWidget::execIsInputHovered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInputHovered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSettingWidget::execOnPhotoModeSettingChanged)
	{
		P_GET_OBJECT(UPhotoModeSettingWidget,Z_Param_ChangedSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPhotoModeSettingChanged(Z_Param_ChangedSetting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSettingWidget::execOnSettingChangedCheckBox)
	{
		P_GET_UBOOL(Z_Param_bChecked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSettingChangedCheckBox(Z_Param_bChecked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSettingWidget::execOnSettingChangedComboBox)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
		P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSettingChangedComboBox(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSettingWidget::execOnSettingChangedSlider)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSettingChangedSlider(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSettingWidget::execOnSliderValueChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSliderValueChanged(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSettingWidget::execRefreshSetting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshSetting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSettingWidget::execRestorePrePhotoModeState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestorePrePhotoModeState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSettingWidget::execSetChecked)
	{
		P_GET_ENUM(ECheckBoxState,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChecked(ECheckBoxState(Z_Param_State));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSettingWidget::execSetComboBoxOptions)
	{
		P_GET_TARRAY_REF(FLocString,Z_Param_Out_InOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetComboBoxOptions(Z_Param_Out_InOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSettingWidget::execSetEnabledState)
	{
		P_GET_UBOOL(Z_Param_Enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabledState(Z_Param_Enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSettingWidget::execSetEquipmentVisibility)
	{
		P_GET_UBOOL(Z_Param_Visible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEquipmentVisibility(Z_Param_Visible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSettingWidget::execSetEquipmentVisibilityForActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_UBOOL(Z_Param_Visible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEquipmentVisibilityForActor(Z_Param_Actor,Z_Param_Visible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSettingWidget::execSetSelectedIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectedIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSettingWidget::execSetValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValue(Z_Param_Value);
		P_NATIVE_END;
	}
	static FName NAME_UPhotoModeSettingWidget_OnEnabledChanged = FName(TEXT("OnEnabledChanged"));
	void UPhotoModeSettingWidget::OnEnabledChanged(bool Enabled)
	{
		PhotoModeSettingWidget_eventOnEnabledChanged_Parms Parms;
		Parms.Enabled=Enabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeSettingWidget_OnEnabledChanged),&Parms);
	}
	static FName NAME_UPhotoModeSettingWidget_OnFocusedHoveredChanged = FName(TEXT("OnFocusedHoveredChanged"));
	void UPhotoModeSettingWidget::OnFocusedHoveredChanged(bool FocusedOrHovered)
	{
		PhotoModeSettingWidget_eventOnFocusedHoveredChanged_Parms Parms;
		Parms.FocusedOrHovered=FocusedOrHovered ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeSettingWidget_OnFocusedHoveredChanged),&Parms);
	}
	void UPhotoModeSettingWidget::StaticRegisterNativesUPhotoModeSettingWidget()
	{
		UClass* Class = UPhotoModeSettingWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSelectedIndex", &UPhotoModeSettingWidget::execGetSelectedIndex },
			{ "GetValue", &UPhotoModeSettingWidget::execGetValue },
			{ "IsChecked", &UPhotoModeSettingWidget::execIsChecked },
			{ "IsInputHovered", &UPhotoModeSettingWidget::execIsInputHovered },
			{ "OnPhotoModeSettingChanged", &UPhotoModeSettingWidget::execOnPhotoModeSettingChanged },
			{ "OnSettingChangedCheckBox", &UPhotoModeSettingWidget::execOnSettingChangedCheckBox },
			{ "OnSettingChangedComboBox", &UPhotoModeSettingWidget::execOnSettingChangedComboBox },
			{ "OnSettingChangedSlider", &UPhotoModeSettingWidget::execOnSettingChangedSlider },
			{ "OnSliderValueChanged", &UPhotoModeSettingWidget::execOnSliderValueChanged },
			{ "RefreshSetting", &UPhotoModeSettingWidget::execRefreshSetting },
			{ "RestorePrePhotoModeState", &UPhotoModeSettingWidget::execRestorePrePhotoModeState },
			{ "SetChecked", &UPhotoModeSettingWidget::execSetChecked },
			{ "SetComboBoxOptions", &UPhotoModeSettingWidget::execSetComboBoxOptions },
			{ "SetEnabledState", &UPhotoModeSettingWidget::execSetEnabledState },
			{ "SetEquipmentVisibility", &UPhotoModeSettingWidget::execSetEquipmentVisibility },
			{ "SetEquipmentVisibilityForActor", &UPhotoModeSettingWidget::execSetEquipmentVisibilityForActor },
			{ "SetSelectedIndex", &UPhotoModeSettingWidget::execSetSelectedIndex },
			{ "SetValue", &UPhotoModeSettingWidget::execSetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPhotoModeSettingWidget_GetSelectedIndex_Statics
	{
		struct PhotoModeSettingWidget_eventGetSelectedIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPhotoModeSettingWidget_GetSelectedIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSettingWidget_eventGetSelectedIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSettingWidget_GetSelectedIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingWidget_GetSelectedIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingWidget_GetSelectedIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingWidget_GetSelectedIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingWidget, nullptr, "GetSelectedIndex", nullptr, nullptr, sizeof(PhotoModeSettingWidget_eventGetSelectedIndex_Parms), Z_Construct_UFunction_UPhotoModeSettingWidget_GetSelectedIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_GetSelectedIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingWidget_GetSelectedIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_GetSelectedIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingWidget_GetSelectedIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingWidget_GetSelectedIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingWidget_GetValue_Statics
	{
		struct PhotoModeSettingWidget_eventGetValue_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhotoModeSettingWidget_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSettingWidget_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSettingWidget_GetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingWidget_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingWidget_GetValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingWidget_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingWidget, nullptr, "GetValue", nullptr, nullptr, sizeof(PhotoModeSettingWidget_eventGetValue_Parms), Z_Construct_UFunction_UPhotoModeSettingWidget_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingWidget_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingWidget_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingWidget_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingWidget_IsChecked_Statics
	{
		struct PhotoModeSettingWidget_eventIsChecked_Parms
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
	void Z_Construct_UFunction_UPhotoModeSettingWidget_IsChecked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhotoModeSettingWidget_eventIsChecked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhotoModeSettingWidget_IsChecked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhotoModeSettingWidget_eventIsChecked_Parms), &Z_Construct_UFunction_UPhotoModeSettingWidget_IsChecked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSettingWidget_IsChecked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingWidget_IsChecked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingWidget_IsChecked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingWidget_IsChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingWidget, nullptr, "IsChecked", nullptr, nullptr, sizeof(PhotoModeSettingWidget_eventIsChecked_Parms), Z_Construct_UFunction_UPhotoModeSettingWidget_IsChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_IsChecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingWidget_IsChecked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_IsChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingWidget_IsChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingWidget_IsChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingWidget_IsInputHovered_Statics
	{
		struct PhotoModeSettingWidget_eventIsInputHovered_Parms
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
	void Z_Construct_UFunction_UPhotoModeSettingWidget_IsInputHovered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhotoModeSettingWidget_eventIsInputHovered_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhotoModeSettingWidget_IsInputHovered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhotoModeSettingWidget_eventIsInputHovered_Parms), &Z_Construct_UFunction_UPhotoModeSettingWidget_IsInputHovered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSettingWidget_IsInputHovered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingWidget_IsInputHovered_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingWidget_IsInputHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingWidget_IsInputHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingWidget, nullptr, "IsInputHovered", nullptr, nullptr, sizeof(PhotoModeSettingWidget_eventIsInputHovered_Parms), Z_Construct_UFunction_UPhotoModeSettingWidget_IsInputHovered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_IsInputHovered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingWidget_IsInputHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_IsInputHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingWidget_IsInputHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingWidget_IsInputHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingWidget_OnEnabledChanged_Statics
	{
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhotoModeSettingWidget_OnEnabledChanged_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((PhotoModeSettingWidget_eventOnEnabledChanged_Parms*)Obj)->Enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhotoModeSettingWidget_OnEnabledChanged_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhotoModeSettingWidget_eventOnEnabledChanged_Parms), &Z_Construct_UFunction_UPhotoModeSettingWidget_OnEnabledChanged_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSettingWidget_OnEnabledChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingWidget_OnEnabledChanged_Statics::NewProp_Enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingWidget_OnEnabledChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingWidget_OnEnabledChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingWidget, nullptr, "OnEnabledChanged", nullptr, nullptr, sizeof(PhotoModeSettingWidget_eventOnEnabledChanged_Parms), Z_Construct_UFunction_UPhotoModeSettingWidget_OnEnabledChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_OnEnabledChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingWidget_OnEnabledChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_OnEnabledChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingWidget_OnEnabledChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingWidget_OnEnabledChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingWidget_OnFocusedHoveredChanged_Statics
	{
		static void NewProp_FocusedOrHovered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FocusedOrHovered;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhotoModeSettingWidget_OnFocusedHoveredChanged_Statics::NewProp_FocusedOrHovered_SetBit(void* Obj)
	{
		((PhotoModeSettingWidget_eventOnFocusedHoveredChanged_Parms*)Obj)->FocusedOrHovered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhotoModeSettingWidget_OnFocusedHoveredChanged_Statics::NewProp_FocusedOrHovered = { "FocusedOrHovered", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhotoModeSettingWidget_eventOnFocusedHoveredChanged_Parms), &Z_Construct_UFunction_UPhotoModeSettingWidget_OnFocusedHoveredChanged_Statics::NewProp_FocusedOrHovered_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSettingWidget_OnFocusedHoveredChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingWidget_OnFocusedHoveredChanged_Statics::NewProp_FocusedOrHovered,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingWidget_OnFocusedHoveredChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingWidget_OnFocusedHoveredChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingWidget, nullptr, "OnFocusedHoveredChanged", nullptr, nullptr, sizeof(PhotoModeSettingWidget_eventOnFocusedHoveredChanged_Parms), Z_Construct_UFunction_UPhotoModeSettingWidget_OnFocusedHoveredChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_OnFocusedHoveredChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingWidget_OnFocusedHoveredChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_OnFocusedHoveredChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingWidget_OnFocusedHoveredChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingWidget_OnFocusedHoveredChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingWidget_OnPhotoModeSettingChanged_Statics
	{
		struct PhotoModeSettingWidget_eventOnPhotoModeSettingChanged_Parms
		{
			UPhotoModeSettingWidget* ChangedSetting;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangedSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChangedSetting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingWidget_OnPhotoModeSettingChanged_Statics::NewProp_ChangedSetting_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSettingWidget_OnPhotoModeSettingChanged_Statics::NewProp_ChangedSetting = { "ChangedSetting", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSettingWidget_eventOnPhotoModeSettingChanged_Parms, ChangedSetting), Z_Construct_UClass_UPhotoModeSettingWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingWidget_OnPhotoModeSettingChanged_Statics::NewProp_ChangedSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_OnPhotoModeSettingChanged_Statics::NewProp_ChangedSetting_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSettingWidget_OnPhotoModeSettingChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingWidget_OnPhotoModeSettingChanged_Statics::NewProp_ChangedSetting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingWidget_OnPhotoModeSettingChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingWidget_OnPhotoModeSettingChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingWidget, nullptr, "OnPhotoModeSettingChanged", nullptr, nullptr, sizeof(PhotoModeSettingWidget_eventOnPhotoModeSettingChanged_Parms), Z_Construct_UFunction_UPhotoModeSettingWidget_OnPhotoModeSettingChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_OnPhotoModeSettingChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingWidget_OnPhotoModeSettingChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_OnPhotoModeSettingChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingWidget_OnPhotoModeSettingChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingWidget_OnPhotoModeSettingChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedCheckBox_Statics
	{
		struct PhotoModeSettingWidget_eventOnSettingChangedCheckBox_Parms
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
	void Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedCheckBox_Statics::NewProp_bChecked_SetBit(void* Obj)
	{
		((PhotoModeSettingWidget_eventOnSettingChangedCheckBox_Parms*)Obj)->bChecked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedCheckBox_Statics::NewProp_bChecked = { "bChecked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhotoModeSettingWidget_eventOnSettingChangedCheckBox_Parms), &Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedCheckBox_Statics::NewProp_bChecked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedCheckBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedCheckBox_Statics::NewProp_bChecked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedCheckBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedCheckBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingWidget, nullptr, "OnSettingChangedCheckBox", nullptr, nullptr, sizeof(PhotoModeSettingWidget_eventOnSettingChangedCheckBox_Parms), Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedCheckBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedCheckBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedCheckBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedCheckBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedCheckBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedCheckBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedComboBox_Statics
	{
		struct PhotoModeSettingWidget_eventOnSettingChangedComboBox_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedComboBox_Statics::NewProp_SelectedItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedComboBox_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSettingWidget_eventOnSettingChangedComboBox_Parms, SelectedItem), METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedComboBox_Statics::NewProp_SelectedItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedComboBox_Statics::NewProp_SelectedItem_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedComboBox_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSettingWidget_eventOnSettingChangedComboBox_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedComboBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedComboBox_Statics::NewProp_SelectedItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedComboBox_Statics::NewProp_SelectionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedComboBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedComboBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingWidget, nullptr, "OnSettingChangedComboBox", nullptr, nullptr, sizeof(PhotoModeSettingWidget_eventOnSettingChangedComboBox_Parms), Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedComboBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedComboBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedComboBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedComboBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedComboBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedComboBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedSlider_Statics
	{
		struct PhotoModeSettingWidget_eventOnSettingChangedSlider_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedSlider_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSettingWidget_eventOnSettingChangedSlider_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedSlider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedSlider_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedSlider_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedSlider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingWidget, nullptr, "OnSettingChangedSlider", nullptr, nullptr, sizeof(PhotoModeSettingWidget_eventOnSettingChangedSlider_Parms), Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedSlider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedSlider_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedSlider_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedSlider_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedSlider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedSlider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingWidget_OnSliderValueChanged_Statics
	{
		struct PhotoModeSettingWidget_eventOnSliderValueChanged_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhotoModeSettingWidget_OnSliderValueChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSettingWidget_eventOnSliderValueChanged_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSettingWidget_OnSliderValueChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingWidget_OnSliderValueChanged_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingWidget_OnSliderValueChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingWidget_OnSliderValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingWidget, nullptr, "OnSliderValueChanged", nullptr, nullptr, sizeof(PhotoModeSettingWidget_eventOnSliderValueChanged_Parms), Z_Construct_UFunction_UPhotoModeSettingWidget_OnSliderValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_OnSliderValueChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingWidget_OnSliderValueChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_OnSliderValueChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingWidget_OnSliderValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingWidget_OnSliderValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingWidget_RefreshSetting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingWidget_RefreshSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingWidget_RefreshSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingWidget, nullptr, "RefreshSetting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingWidget_RefreshSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_RefreshSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingWidget_RefreshSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingWidget_RefreshSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingWidget_RestorePrePhotoModeState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingWidget_RestorePrePhotoModeState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingWidget_RestorePrePhotoModeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingWidget, nullptr, "RestorePrePhotoModeState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingWidget_RestorePrePhotoModeState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_RestorePrePhotoModeState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingWidget_RestorePrePhotoModeState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingWidget_RestorePrePhotoModeState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingWidget_SetChecked_Statics
	{
		struct PhotoModeSettingWidget_eventSetChecked_Parms
		{
			ECheckBoxState State;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhotoModeSettingWidget_SetChecked_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPhotoModeSettingWidget_SetChecked_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSettingWidget_eventSetChecked_Parms, State), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSettingWidget_SetChecked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingWidget_SetChecked_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingWidget_SetChecked_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingWidget_SetChecked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingWidget_SetChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingWidget, nullptr, "SetChecked", nullptr, nullptr, sizeof(PhotoModeSettingWidget_eventSetChecked_Parms), Z_Construct_UFunction_UPhotoModeSettingWidget_SetChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_SetChecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingWidget_SetChecked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_SetChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingWidget_SetChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingWidget_SetChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingWidget_SetComboBoxOptions_Statics
	{
		struct PhotoModeSettingWidget_eventSetComboBoxOptions_Parms
		{
			TArray<FLocString> InOptions;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InOptions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhotoModeSettingWidget_SetComboBoxOptions_Statics::NewProp_InOptions_Inner = { "InOptions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLocString, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingWidget_SetComboBoxOptions_Statics::NewProp_InOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPhotoModeSettingWidget_SetComboBoxOptions_Statics::NewProp_InOptions = { "InOptions", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSettingWidget_eventSetComboBoxOptions_Parms, InOptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingWidget_SetComboBoxOptions_Statics::NewProp_InOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_SetComboBoxOptions_Statics::NewProp_InOptions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSettingWidget_SetComboBoxOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingWidget_SetComboBoxOptions_Statics::NewProp_InOptions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingWidget_SetComboBoxOptions_Statics::NewProp_InOptions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingWidget_SetComboBoxOptions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingWidget_SetComboBoxOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingWidget, nullptr, "SetComboBoxOptions", nullptr, nullptr, sizeof(PhotoModeSettingWidget_eventSetComboBoxOptions_Parms), Z_Construct_UFunction_UPhotoModeSettingWidget_SetComboBoxOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_SetComboBoxOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingWidget_SetComboBoxOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_SetComboBoxOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingWidget_SetComboBoxOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingWidget_SetComboBoxOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingWidget_SetEnabledState_Statics
	{
		struct PhotoModeSettingWidget_eventSetEnabledState_Parms
		{
			bool Enabled;
		};
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhotoModeSettingWidget_SetEnabledState_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((PhotoModeSettingWidget_eventSetEnabledState_Parms*)Obj)->Enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhotoModeSettingWidget_SetEnabledState_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhotoModeSettingWidget_eventSetEnabledState_Parms), &Z_Construct_UFunction_UPhotoModeSettingWidget_SetEnabledState_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSettingWidget_SetEnabledState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingWidget_SetEnabledState_Statics::NewProp_Enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingWidget_SetEnabledState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingWidget_SetEnabledState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingWidget, nullptr, "SetEnabledState", nullptr, nullptr, sizeof(PhotoModeSettingWidget_eventSetEnabledState_Parms), Z_Construct_UFunction_UPhotoModeSettingWidget_SetEnabledState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_SetEnabledState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingWidget_SetEnabledState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_SetEnabledState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingWidget_SetEnabledState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingWidget_SetEnabledState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingWidget_SetEquipmentVisibility_Statics
	{
		struct PhotoModeSettingWidget_eventSetEquipmentVisibility_Parms
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
	void Z_Construct_UFunction_UPhotoModeSettingWidget_SetEquipmentVisibility_Statics::NewProp_Visible_SetBit(void* Obj)
	{
		((PhotoModeSettingWidget_eventSetEquipmentVisibility_Parms*)Obj)->Visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhotoModeSettingWidget_SetEquipmentVisibility_Statics::NewProp_Visible = { "Visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhotoModeSettingWidget_eventSetEquipmentVisibility_Parms), &Z_Construct_UFunction_UPhotoModeSettingWidget_SetEquipmentVisibility_Statics::NewProp_Visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSettingWidget_SetEquipmentVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingWidget_SetEquipmentVisibility_Statics::NewProp_Visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingWidget_SetEquipmentVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingWidget_SetEquipmentVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingWidget, nullptr, "SetEquipmentVisibility", nullptr, nullptr, sizeof(PhotoModeSettingWidget_eventSetEquipmentVisibility_Parms), Z_Construct_UFunction_UPhotoModeSettingWidget_SetEquipmentVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_SetEquipmentVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingWidget_SetEquipmentVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_SetEquipmentVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingWidget_SetEquipmentVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingWidget_SetEquipmentVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingWidget_SetEquipmentVisibilityForActor_Statics
	{
		struct PhotoModeSettingWidget_eventSetEquipmentVisibilityForActor_Parms
		{
			AActor* Actor;
			bool Visible;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_Visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Visible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSettingWidget_SetEquipmentVisibilityForActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSettingWidget_eventSetEquipmentVisibilityForActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPhotoModeSettingWidget_SetEquipmentVisibilityForActor_Statics::NewProp_Visible_SetBit(void* Obj)
	{
		((PhotoModeSettingWidget_eventSetEquipmentVisibilityForActor_Parms*)Obj)->Visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhotoModeSettingWidget_SetEquipmentVisibilityForActor_Statics::NewProp_Visible = { "Visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhotoModeSettingWidget_eventSetEquipmentVisibilityForActor_Parms), &Z_Construct_UFunction_UPhotoModeSettingWidget_SetEquipmentVisibilityForActor_Statics::NewProp_Visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSettingWidget_SetEquipmentVisibilityForActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingWidget_SetEquipmentVisibilityForActor_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingWidget_SetEquipmentVisibilityForActor_Statics::NewProp_Visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingWidget_SetEquipmentVisibilityForActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingWidget_SetEquipmentVisibilityForActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingWidget, nullptr, "SetEquipmentVisibilityForActor", nullptr, nullptr, sizeof(PhotoModeSettingWidget_eventSetEquipmentVisibilityForActor_Parms), Z_Construct_UFunction_UPhotoModeSettingWidget_SetEquipmentVisibilityForActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_SetEquipmentVisibilityForActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingWidget_SetEquipmentVisibilityForActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_SetEquipmentVisibilityForActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingWidget_SetEquipmentVisibilityForActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingWidget_SetEquipmentVisibilityForActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingWidget_SetSelectedIndex_Statics
	{
		struct PhotoModeSettingWidget_eventSetSelectedIndex_Parms
		{
			int32 Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPhotoModeSettingWidget_SetSelectedIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSettingWidget_eventSetSelectedIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSettingWidget_SetSelectedIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingWidget_SetSelectedIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingWidget_SetSelectedIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingWidget_SetSelectedIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingWidget, nullptr, "SetSelectedIndex", nullptr, nullptr, sizeof(PhotoModeSettingWidget_eventSetSelectedIndex_Parms), Z_Construct_UFunction_UPhotoModeSettingWidget_SetSelectedIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_SetSelectedIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingWidget_SetSelectedIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_SetSelectedIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingWidget_SetSelectedIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingWidget_SetSelectedIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingWidget_SetValue_Statics
	{
		struct PhotoModeSettingWidget_eventSetValue_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhotoModeSettingWidget_SetValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSettingWidget_eventSetValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSettingWidget_SetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingWidget_SetValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingWidget_SetValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingWidget_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingWidget, nullptr, "SetValue", nullptr, nullptr, sizeof(PhotoModeSettingWidget_eventSetValue_Parms), Z_Construct_UFunction_UPhotoModeSettingWidget_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_SetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingWidget_SetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingWidget_SetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingWidget_SetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingWidget_SetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPhotoModeSettingWidget_NoRegister()
	{
		return UPhotoModeSettingWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPhotoModeSettingWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Overlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Overlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_container_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_container;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingTitleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SettingTitleText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Slider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CheckBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComboBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComboBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ValueText;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControlledSetting_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlledSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ControlledSetting;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ValueFormat_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ValueFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumIntegralDigits_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumIntegralDigits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumFractionalDigits_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumFractionalDigits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssociatedTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AssociatedTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrePhotoModeShowHideState_MetaData[];
#endif
		static void NewProp_PrePhotoModeShowHideState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PrePhotoModeShowHideState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhotoModeSettingWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIPhotoMode,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPhotoModeSettingWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhotoModeSettingWidget_GetSelectedIndex, "GetSelectedIndex" }, // 3407927353
		{ &Z_Construct_UFunction_UPhotoModeSettingWidget_GetValue, "GetValue" }, // 976476028
		{ &Z_Construct_UFunction_UPhotoModeSettingWidget_IsChecked, "IsChecked" }, // 3928590313
		{ &Z_Construct_UFunction_UPhotoModeSettingWidget_IsInputHovered, "IsInputHovered" }, // 2219759141
		{ &Z_Construct_UFunction_UPhotoModeSettingWidget_OnEnabledChanged, "OnEnabledChanged" }, // 2449652204
		{ &Z_Construct_UFunction_UPhotoModeSettingWidget_OnFocusedHoveredChanged, "OnFocusedHoveredChanged" }, // 3396415393
		{ &Z_Construct_UFunction_UPhotoModeSettingWidget_OnPhotoModeSettingChanged, "OnPhotoModeSettingChanged" }, // 1896743553
		{ &Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedCheckBox, "OnSettingChangedCheckBox" }, // 3415430946
		{ &Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedComboBox, "OnSettingChangedComboBox" }, // 2517791285
		{ &Z_Construct_UFunction_UPhotoModeSettingWidget_OnSettingChangedSlider, "OnSettingChangedSlider" }, // 3621968880
		{ &Z_Construct_UFunction_UPhotoModeSettingWidget_OnSliderValueChanged, "OnSliderValueChanged" }, // 2514643573
		{ &Z_Construct_UFunction_UPhotoModeSettingWidget_RefreshSetting, "RefreshSetting" }, // 1394387725
		{ &Z_Construct_UFunction_UPhotoModeSettingWidget_RestorePrePhotoModeState, "RestorePrePhotoModeState" }, // 2418408061
		{ &Z_Construct_UFunction_UPhotoModeSettingWidget_SetChecked, "SetChecked" }, // 1524331479
		{ &Z_Construct_UFunction_UPhotoModeSettingWidget_SetComboBoxOptions, "SetComboBoxOptions" }, // 577755637
		{ &Z_Construct_UFunction_UPhotoModeSettingWidget_SetEnabledState, "SetEnabledState" }, // 2506659530
		{ &Z_Construct_UFunction_UPhotoModeSettingWidget_SetEquipmentVisibility, "SetEquipmentVisibility" }, // 805343356
		{ &Z_Construct_UFunction_UPhotoModeSettingWidget_SetEquipmentVisibilityForActor, "SetEquipmentVisibilityForActor" }, // 3201206407
		{ &Z_Construct_UFunction_UPhotoModeSettingWidget_SetSelectedIndex, "SetSelectedIndex" }, // 1332173059
		{ &Z_Construct_UFunction_UPhotoModeSettingWidget_SetValue, "SetValue" }, // 2445864954
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSettingWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PhotoModeSettingWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_Overlay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSettingWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_Overlay = { "Overlay", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSettingWidget, Overlay), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_Overlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_Overlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_container_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSettingWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_container = { "container", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSettingWidget, container), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_container_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_container_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_SettingTitleText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSettingWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_SettingTitleText = { "SettingTitleText", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSettingWidget, SettingTitleText), Z_Construct_UClass_UPhotoModeTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_SettingTitleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_SettingTitleText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_Slider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSettingWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_Slider = { "Slider", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSettingWidget, Slider), Z_Construct_UClass_UPhotoModeSliderBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_Slider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_Slider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_CheckBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSettingWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_CheckBox = { "CheckBox", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSettingWidget, CheckBox), Z_Construct_UClass_UPhotoModeCheckBoxBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_CheckBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_CheckBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_ComboBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSettingWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_ComboBox = { "ComboBox", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSettingWidget, ComboBox), Z_Construct_UClass_UPhotoModeComboBoxBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_ComboBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_ComboBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_ValueText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSettingWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_ValueText = { "ValueText", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSettingWidget, ValueText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_ValueText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_ValueText_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_ControlledSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_ControlledSetting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSettingWidget" },
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_ControlledSetting = { "ControlledSetting", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSettingWidget, ControlledSetting), Z_Construct_UEnum_OEIPhotoMode_EPhotoModeSetting, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_ControlledSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_ControlledSetting_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_ValueFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_ValueFormat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSettingWidget" },
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_ValueFormat = { "ValueFormat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSettingWidget, ValueFormat), Z_Construct_UEnum_OEIPhotoMode_EPhotoModeValueFormat, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_ValueFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_ValueFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_MaximumIntegralDigits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSettingWidget" },
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_MaximumIntegralDigits = { "MaximumIntegralDigits", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSettingWidget, MaximumIntegralDigits), METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_MaximumIntegralDigits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_MaximumIntegralDigits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_MaximumFractionalDigits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSettingWidget" },
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_MaximumFractionalDigits = { "MaximumFractionalDigits", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSettingWidget, MaximumFractionalDigits), METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_MaximumFractionalDigits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_MaximumFractionalDigits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_AssociatedTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSettingWidget" },
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_AssociatedTag = { "AssociatedTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSettingWidget, AssociatedTag), METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_AssociatedTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_AssociatedTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_PrePhotoModeShowHideState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSettingWidget" },
		{ "ModuleRelativePath", "Public/PhotoModeSettingWidget.h" },
	};
#endif
	void Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_PrePhotoModeShowHideState_SetBit(void* Obj)
	{
		((UPhotoModeSettingWidget*)Obj)->PrePhotoModeShowHideState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_PrePhotoModeShowHideState = { "PrePhotoModeShowHideState", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhotoModeSettingWidget), &Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_PrePhotoModeShowHideState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_PrePhotoModeShowHideState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_PrePhotoModeShowHideState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhotoModeSettingWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_Overlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_container,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_SettingTitleText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_Slider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_CheckBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_ComboBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_ValueText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_ControlledSetting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_ControlledSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_ValueFormat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_ValueFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_MaximumIntegralDigits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_MaximumFractionalDigits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_AssociatedTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSettingWidget_Statics::NewProp_PrePhotoModeShowHideState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhotoModeSettingWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhotoModeSettingWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhotoModeSettingWidget_Statics::ClassParams = {
		&UPhotoModeSettingWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPhotoModeSettingWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSettingWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSettingWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSettingWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhotoModeSettingWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhotoModeSettingWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhotoModeSettingWidget, 3730447587);
	template<> OEIPHOTOMODE_API UClass* StaticClass<UPhotoModeSettingWidget>()
	{
		return UPhotoModeSettingWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhotoModeSettingWidget(Z_Construct_UClass_UPhotoModeSettingWidget, &UPhotoModeSettingWidget::StaticClass, TEXT("/Script/OEIPhotoMode"), TEXT("UPhotoModeSettingWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhotoModeSettingWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
