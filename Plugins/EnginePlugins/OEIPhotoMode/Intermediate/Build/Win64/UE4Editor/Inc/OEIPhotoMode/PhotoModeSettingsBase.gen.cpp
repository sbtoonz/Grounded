// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/PhotoModeSettingsBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhotoModeSettingsBase() {}
// Cross Module References
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeSettingsBase_NoRegister();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeSettingsBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeSettingsGroupBase_NoRegister();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeSettingWidget_NoRegister();
	OEIPHOTOMODE_API UEnum* Z_Construct_UEnum_OEIPhotoMode_EPhotoModeSetting();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeSettingsInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPhotoModeSettingsBase::execGetCurrentSettingsGroup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPhotoModeSettingsGroupBase**)Z_Param__Result=P_THIS->GetCurrentSettingsGroup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSettingsBase::execGetFocusedSetting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPhotoModeSettingWidget**)Z_Param__Result=P_THIS->GetFocusedSetting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSettingsBase::execGetHoveredSetting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPhotoModeSettingWidget**)Z_Param__Result=P_THIS->GetHoveredSetting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSettingsBase::execGetSettingWidget)
	{
		P_GET_ENUM(EPhotoModeSetting,Z_Param_Setting);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPhotoModeSettingWidget**)Z_Param__Result=P_THIS->GetSettingWidget(EPhotoModeSetting(Z_Param_Setting));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSettingsBase::execGetSettingWidgetWithTag)
	{
		P_GET_ENUM(EPhotoModeSetting,Z_Param_Setting);
		P_GET_PROPERTY(FNameProperty,Z_Param_InAssociatedTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPhotoModeSettingWidget**)Z_Param__Result=P_THIS->GetSettingWidgetWithTag(EPhotoModeSetting(Z_Param_Setting),Z_Param_InAssociatedTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSettingsBase::execGoToGroupByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GoToGroupByIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSettingsBase::execGoToNextGroup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GoToNextGroup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSettingsBase::execGoToPreviousGroup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GoToPreviousGroup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSettingsBase::execRefreshAllSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshAllSettings();
		P_NATIVE_END;
	}
	void UPhotoModeSettingsBase::StaticRegisterNativesUPhotoModeSettingsBase()
	{
		UClass* Class = UPhotoModeSettingsBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentSettingsGroup", &UPhotoModeSettingsBase::execGetCurrentSettingsGroup },
			{ "GetFocusedSetting", &UPhotoModeSettingsBase::execGetFocusedSetting },
			{ "GetHoveredSetting", &UPhotoModeSettingsBase::execGetHoveredSetting },
			{ "GetSettingWidget", &UPhotoModeSettingsBase::execGetSettingWidget },
			{ "GetSettingWidgetWithTag", &UPhotoModeSettingsBase::execGetSettingWidgetWithTag },
			{ "GoToGroupByIndex", &UPhotoModeSettingsBase::execGoToGroupByIndex },
			{ "GoToNextGroup", &UPhotoModeSettingsBase::execGoToNextGroup },
			{ "GoToPreviousGroup", &UPhotoModeSettingsBase::execGoToPreviousGroup },
			{ "RefreshAllSettings", &UPhotoModeSettingsBase::execRefreshAllSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPhotoModeSettingsBase_GetCurrentSettingsGroup_Statics
	{
		struct PhotoModeSettingsBase_eventGetCurrentSettingsGroup_Parms
		{
			UPhotoModeSettingsGroupBase* ReturnValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingsBase_GetCurrentSettingsGroup_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSettingsBase_GetCurrentSettingsGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSettingsBase_eventGetCurrentSettingsGroup_Parms, ReturnValue), Z_Construct_UClass_UPhotoModeSettingsGroupBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingsBase_GetCurrentSettingsGroup_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsBase_GetCurrentSettingsGroup_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSettingsBase_GetCurrentSettingsGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingsBase_GetCurrentSettingsGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingsBase_GetCurrentSettingsGroup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingsBase_GetCurrentSettingsGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingsBase, nullptr, "GetCurrentSettingsGroup", nullptr, nullptr, sizeof(PhotoModeSettingsBase_eventGetCurrentSettingsGroup_Parms), Z_Construct_UFunction_UPhotoModeSettingsBase_GetCurrentSettingsGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsBase_GetCurrentSettingsGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingsBase_GetCurrentSettingsGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsBase_GetCurrentSettingsGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingsBase_GetCurrentSettingsGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingsBase_GetCurrentSettingsGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingsBase_GetFocusedSetting_Statics
	{
		struct PhotoModeSettingsBase_eventGetFocusedSetting_Parms
		{
			UPhotoModeSettingWidget* ReturnValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingsBase_GetFocusedSetting_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSettingsBase_GetFocusedSetting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSettingsBase_eventGetFocusedSetting_Parms, ReturnValue), Z_Construct_UClass_UPhotoModeSettingWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingsBase_GetFocusedSetting_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsBase_GetFocusedSetting_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSettingsBase_GetFocusedSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingsBase_GetFocusedSetting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingsBase_GetFocusedSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingsBase_GetFocusedSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingsBase, nullptr, "GetFocusedSetting", nullptr, nullptr, sizeof(PhotoModeSettingsBase_eventGetFocusedSetting_Parms), Z_Construct_UFunction_UPhotoModeSettingsBase_GetFocusedSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsBase_GetFocusedSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingsBase_GetFocusedSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsBase_GetFocusedSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingsBase_GetFocusedSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingsBase_GetFocusedSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingsBase_GetHoveredSetting_Statics
	{
		struct PhotoModeSettingsBase_eventGetHoveredSetting_Parms
		{
			UPhotoModeSettingWidget* ReturnValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingsBase_GetHoveredSetting_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSettingsBase_GetHoveredSetting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSettingsBase_eventGetHoveredSetting_Parms, ReturnValue), Z_Construct_UClass_UPhotoModeSettingWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingsBase_GetHoveredSetting_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsBase_GetHoveredSetting_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSettingsBase_GetHoveredSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingsBase_GetHoveredSetting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingsBase_GetHoveredSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingsBase_GetHoveredSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingsBase, nullptr, "GetHoveredSetting", nullptr, nullptr, sizeof(PhotoModeSettingsBase_eventGetHoveredSetting_Parms), Z_Construct_UFunction_UPhotoModeSettingsBase_GetHoveredSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsBase_GetHoveredSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingsBase_GetHoveredSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsBase_GetHoveredSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingsBase_GetHoveredSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingsBase_GetHoveredSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidget_Statics
	{
		struct PhotoModeSettingsBase_eventGetSettingWidget_Parms
		{
			EPhotoModeSetting Setting;
			UPhotoModeSettingWidget* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Setting_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Setting;
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidget_Statics::NewProp_Setting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidget_Statics::NewProp_Setting = { "Setting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSettingsBase_eventGetSettingWidget_Parms, Setting), Z_Construct_UEnum_OEIPhotoMode_EPhotoModeSetting, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSettingsBase_eventGetSettingWidget_Parms, ReturnValue), Z_Construct_UClass_UPhotoModeSettingWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidget_Statics::NewProp_Setting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidget_Statics::NewProp_Setting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingsBase, nullptr, "GetSettingWidget", nullptr, nullptr, sizeof(PhotoModeSettingsBase_eventGetSettingWidget_Parms), Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidgetWithTag_Statics
	{
		struct PhotoModeSettingsBase_eventGetSettingWidgetWithTag_Parms
		{
			EPhotoModeSetting Setting;
			FName InAssociatedTag;
			UPhotoModeSettingWidget* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Setting_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Setting;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InAssociatedTag;
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidgetWithTag_Statics::NewProp_Setting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidgetWithTag_Statics::NewProp_Setting = { "Setting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSettingsBase_eventGetSettingWidgetWithTag_Parms, Setting), Z_Construct_UEnum_OEIPhotoMode_EPhotoModeSetting, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidgetWithTag_Statics::NewProp_InAssociatedTag = { "InAssociatedTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSettingsBase_eventGetSettingWidgetWithTag_Parms, InAssociatedTag), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidgetWithTag_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidgetWithTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSettingsBase_eventGetSettingWidgetWithTag_Parms, ReturnValue), Z_Construct_UClass_UPhotoModeSettingWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidgetWithTag_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidgetWithTag_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidgetWithTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidgetWithTag_Statics::NewProp_Setting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidgetWithTag_Statics::NewProp_Setting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidgetWithTag_Statics::NewProp_InAssociatedTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidgetWithTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidgetWithTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidgetWithTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingsBase, nullptr, "GetSettingWidgetWithTag", nullptr, nullptr, sizeof(PhotoModeSettingsBase_eventGetSettingWidgetWithTag_Parms), Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidgetWithTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidgetWithTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidgetWithTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidgetWithTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidgetWithTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidgetWithTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingsBase_GoToGroupByIndex_Statics
	{
		struct PhotoModeSettingsBase_eventGoToGroupByIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPhotoModeSettingsBase_GoToGroupByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSettingsBase_eventGoToGroupByIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSettingsBase_GoToGroupByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingsBase_GoToGroupByIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingsBase_GoToGroupByIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingsBase_GoToGroupByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingsBase, nullptr, "GoToGroupByIndex", nullptr, nullptr, sizeof(PhotoModeSettingsBase_eventGoToGroupByIndex_Parms), Z_Construct_UFunction_UPhotoModeSettingsBase_GoToGroupByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsBase_GoToGroupByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingsBase_GoToGroupByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsBase_GoToGroupByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingsBase_GoToGroupByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingsBase_GoToGroupByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingsBase_GoToNextGroup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingsBase_GoToNextGroup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingsBase_GoToNextGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingsBase, nullptr, "GoToNextGroup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingsBase_GoToNextGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsBase_GoToNextGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingsBase_GoToNextGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingsBase_GoToNextGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingsBase_GoToPreviousGroup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingsBase_GoToPreviousGroup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingsBase_GoToPreviousGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingsBase, nullptr, "GoToPreviousGroup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingsBase_GoToPreviousGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsBase_GoToPreviousGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingsBase_GoToPreviousGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingsBase_GoToPreviousGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingsBase_RefreshAllSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingsBase_RefreshAllSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingsBase_RefreshAllSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingsBase, nullptr, "RefreshAllSettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingsBase_RefreshAllSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsBase_RefreshAllSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingsBase_RefreshAllSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingsBase_RefreshAllSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPhotoModeSettingsBase_NoRegister()
	{
		return UPhotoModeSettingsBase::StaticClass();
	}
	struct Z_Construct_UClass_UPhotoModeSettingsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsGroupSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SettingsGroupSwitcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseDownInWidget_MetaData[];
#endif
		static void NewProp_MouseDownInWidget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MouseDownInWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhotoModeSettingsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIPhotoMode,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPhotoModeSettingsBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhotoModeSettingsBase_GetCurrentSettingsGroup, "GetCurrentSettingsGroup" }, // 267249780
		{ &Z_Construct_UFunction_UPhotoModeSettingsBase_GetFocusedSetting, "GetFocusedSetting" }, // 2369239562
		{ &Z_Construct_UFunction_UPhotoModeSettingsBase_GetHoveredSetting, "GetHoveredSetting" }, // 734418610
		{ &Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidget, "GetSettingWidget" }, // 4198087922
		{ &Z_Construct_UFunction_UPhotoModeSettingsBase_GetSettingWidgetWithTag, "GetSettingWidgetWithTag" }, // 600979080
		{ &Z_Construct_UFunction_UPhotoModeSettingsBase_GoToGroupByIndex, "GoToGroupByIndex" }, // 2054269532
		{ &Z_Construct_UFunction_UPhotoModeSettingsBase_GoToNextGroup, "GoToNextGroup" }, // 2394265067
		{ &Z_Construct_UFunction_UPhotoModeSettingsBase_GoToPreviousGroup, "GoToPreviousGroup" }, // 673295883
		{ &Z_Construct_UFunction_UPhotoModeSettingsBase_RefreshAllSettings, "RefreshAllSettings" }, // 3420219925
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSettingsBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PhotoModeSettingsBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PhotoModeSettingsBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSettingsBase_Statics::NewProp_TitleText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSettingsBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PhotoModeSettingsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhotoModeSettingsBase_Statics::NewProp_TitleText = { "TitleText", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSettingsBase, TitleText), Z_Construct_UClass_UPhotoModeTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSettingsBase_Statics::NewProp_TitleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSettingsBase_Statics::NewProp_TitleText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSettingsBase_Statics::NewProp_SettingsGroupSwitcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSettingsBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PhotoModeSettingsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhotoModeSettingsBase_Statics::NewProp_SettingsGroupSwitcher = { "SettingsGroupSwitcher", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSettingsBase, SettingsGroupSwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSettingsBase_Statics::NewProp_SettingsGroupSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSettingsBase_Statics::NewProp_SettingsGroupSwitcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSettingsBase_Statics::NewProp_MouseDownInWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSettingsBase" },
		{ "ModuleRelativePath", "Public/PhotoModeSettingsBase.h" },
	};
#endif
	void Z_Construct_UClass_UPhotoModeSettingsBase_Statics::NewProp_MouseDownInWidget_SetBit(void* Obj)
	{
		((UPhotoModeSettingsBase*)Obj)->MouseDownInWidget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhotoModeSettingsBase_Statics::NewProp_MouseDownInWidget = { "MouseDownInWidget", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhotoModeSettingsBase), &Z_Construct_UClass_UPhotoModeSettingsBase_Statics::NewProp_MouseDownInWidget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSettingsBase_Statics::NewProp_MouseDownInWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSettingsBase_Statics::NewProp_MouseDownInWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhotoModeSettingsBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSettingsBase_Statics::NewProp_TitleText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSettingsBase_Statics::NewProp_SettingsGroupSwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSettingsBase_Statics::NewProp_MouseDownInWidget,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPhotoModeSettingsBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPhotoModeSettingsInterface_NoRegister, (int32)VTABLE_OFFSET(UPhotoModeSettingsBase, IPhotoModeSettingsInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhotoModeSettingsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhotoModeSettingsBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhotoModeSettingsBase_Statics::ClassParams = {
		&UPhotoModeSettingsBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPhotoModeSettingsBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSettingsBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSettingsBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSettingsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhotoModeSettingsBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhotoModeSettingsBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhotoModeSettingsBase, 1792834410);
	template<> OEIPHOTOMODE_API UClass* StaticClass<UPhotoModeSettingsBase>()
	{
		return UPhotoModeSettingsBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhotoModeSettingsBase(Z_Construct_UClass_UPhotoModeSettingsBase, &UPhotoModeSettingsBase::StaticClass, TEXT("/Script/OEIPhotoMode"), TEXT("UPhotoModeSettingsBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhotoModeSettingsBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
