// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/PhotoModeSettingsGroupBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhotoModeSettingsGroupBase() {}
// Cross Module References
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeSettingsGroupBase_NoRegister();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeSettingsGroupBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeSettingWidget_NoRegister();
	OEIPHOTOMODE_API UEnum* Z_Construct_UEnum_OEIPhotoMode_EPhotoModeSetting();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	OEIPHOTOMODE_API UEnum* Z_Construct_UEnum_OEIPhotoMode_EPhotoSettingsGroup();
	OEITEXT_API UScriptStruct* Z_Construct_UScriptStruct_FLocString();
// End Cross Module References
	DEFINE_FUNCTION(UPhotoModeSettingsGroupBase::execGetFirstSetting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPhotoModeSettingWidget**)Z_Param__Result=P_THIS->GetFirstSetting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSettingsGroupBase::execGetFocusedSetting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPhotoModeSettingWidget**)Z_Param__Result=P_THIS->GetFocusedSetting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSettingsGroupBase::execGetHoveredSetting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPhotoModeSettingWidget**)Z_Param__Result=P_THIS->GetHoveredSetting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSettingsGroupBase::execGetSetting)
	{
		P_GET_ENUM(EPhotoModeSetting,Z_Param_Setting);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPhotoModeSettingWidget**)Z_Param__Result=P_THIS->GetSetting(EPhotoModeSetting(Z_Param_Setting));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSettingsGroupBase::execGetSettingWidgetWithTag)
	{
		P_GET_ENUM(EPhotoModeSetting,Z_Param_Setting);
		P_GET_PROPERTY(FNameProperty,Z_Param_InAssociatedTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPhotoModeSettingWidget**)Z_Param__Result=P_THIS->GetSettingWidgetWithTag(EPhotoModeSetting(Z_Param_Setting),Z_Param_InAssociatedTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSettingsGroupBase::execHasSetting)
	{
		P_GET_ENUM(EPhotoModeSetting,Z_Param_Setting);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasSetting(EPhotoModeSetting(Z_Param_Setting));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSettingsGroupBase::execIsHDRActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHDRActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeSettingsGroupBase::execRefreshAllSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshAllSettings();
		P_NATIVE_END;
	}
	void UPhotoModeSettingsGroupBase::StaticRegisterNativesUPhotoModeSettingsGroupBase()
	{
		UClass* Class = UPhotoModeSettingsGroupBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFirstSetting", &UPhotoModeSettingsGroupBase::execGetFirstSetting },
			{ "GetFocusedSetting", &UPhotoModeSettingsGroupBase::execGetFocusedSetting },
			{ "GetHoveredSetting", &UPhotoModeSettingsGroupBase::execGetHoveredSetting },
			{ "GetSetting", &UPhotoModeSettingsGroupBase::execGetSetting },
			{ "GetSettingWidgetWithTag", &UPhotoModeSettingsGroupBase::execGetSettingWidgetWithTag },
			{ "HasSetting", &UPhotoModeSettingsGroupBase::execHasSetting },
			{ "IsHDRActive", &UPhotoModeSettingsGroupBase::execIsHDRActive },
			{ "RefreshAllSettings", &UPhotoModeSettingsGroupBase::execRefreshAllSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetFirstSetting_Statics
	{
		struct PhotoModeSettingsGroupBase_eventGetFirstSetting_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetFirstSetting_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetFirstSetting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSettingsGroupBase_eventGetFirstSetting_Parms, ReturnValue), Z_Construct_UClass_UPhotoModeSettingWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetFirstSetting_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetFirstSetting_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetFirstSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetFirstSetting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetFirstSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingsGroupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetFirstSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingsGroupBase, nullptr, "GetFirstSetting", nullptr, nullptr, sizeof(PhotoModeSettingsGroupBase_eventGetFirstSetting_Parms), Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetFirstSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetFirstSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetFirstSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetFirstSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetFirstSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetFirstSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetFocusedSetting_Statics
	{
		struct PhotoModeSettingsGroupBase_eventGetFocusedSetting_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetFocusedSetting_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetFocusedSetting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSettingsGroupBase_eventGetFocusedSetting_Parms, ReturnValue), Z_Construct_UClass_UPhotoModeSettingWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetFocusedSetting_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetFocusedSetting_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetFocusedSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetFocusedSetting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetFocusedSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingsGroupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetFocusedSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingsGroupBase, nullptr, "GetFocusedSetting", nullptr, nullptr, sizeof(PhotoModeSettingsGroupBase_eventGetFocusedSetting_Parms), Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetFocusedSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetFocusedSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetFocusedSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetFocusedSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetFocusedSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetFocusedSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetHoveredSetting_Statics
	{
		struct PhotoModeSettingsGroupBase_eventGetHoveredSetting_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetHoveredSetting_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetHoveredSetting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSettingsGroupBase_eventGetHoveredSetting_Parms, ReturnValue), Z_Construct_UClass_UPhotoModeSettingWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetHoveredSetting_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetHoveredSetting_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetHoveredSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetHoveredSetting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetHoveredSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingsGroupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetHoveredSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingsGroupBase, nullptr, "GetHoveredSetting", nullptr, nullptr, sizeof(PhotoModeSettingsGroupBase_eventGetHoveredSetting_Parms), Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetHoveredSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetHoveredSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetHoveredSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetHoveredSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetHoveredSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetHoveredSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSetting_Statics
	{
		struct PhotoModeSettingsGroupBase_eventGetSetting_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSetting_Statics::NewProp_Setting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSetting_Statics::NewProp_Setting = { "Setting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSettingsGroupBase_eventGetSetting_Parms, Setting), Z_Construct_UEnum_OEIPhotoMode_EPhotoModeSetting, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSetting_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSetting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSettingsGroupBase_eventGetSetting_Parms, ReturnValue), Z_Construct_UClass_UPhotoModeSettingWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSetting_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSetting_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSetting_Statics::NewProp_Setting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSetting_Statics::NewProp_Setting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSetting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingsGroupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingsGroupBase, nullptr, "GetSetting", nullptr, nullptr, sizeof(PhotoModeSettingsGroupBase_eventGetSetting_Parms), Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSettingWidgetWithTag_Statics
	{
		struct PhotoModeSettingsGroupBase_eventGetSettingWidgetWithTag_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSettingWidgetWithTag_Statics::NewProp_Setting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSettingWidgetWithTag_Statics::NewProp_Setting = { "Setting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSettingsGroupBase_eventGetSettingWidgetWithTag_Parms, Setting), Z_Construct_UEnum_OEIPhotoMode_EPhotoModeSetting, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSettingWidgetWithTag_Statics::NewProp_InAssociatedTag = { "InAssociatedTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSettingsGroupBase_eventGetSettingWidgetWithTag_Parms, InAssociatedTag), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSettingWidgetWithTag_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSettingWidgetWithTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSettingsGroupBase_eventGetSettingWidgetWithTag_Parms, ReturnValue), Z_Construct_UClass_UPhotoModeSettingWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSettingWidgetWithTag_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSettingWidgetWithTag_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSettingWidgetWithTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSettingWidgetWithTag_Statics::NewProp_Setting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSettingWidgetWithTag_Statics::NewProp_Setting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSettingWidgetWithTag_Statics::NewProp_InAssociatedTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSettingWidgetWithTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSettingWidgetWithTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingsGroupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSettingWidgetWithTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingsGroupBase, nullptr, "GetSettingWidgetWithTag", nullptr, nullptr, sizeof(PhotoModeSettingsGroupBase_eventGetSettingWidgetWithTag_Parms), Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSettingWidgetWithTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSettingWidgetWithTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSettingWidgetWithTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSettingWidgetWithTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSettingWidgetWithTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSettingWidgetWithTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingsGroupBase_HasSetting_Statics
	{
		struct PhotoModeSettingsGroupBase_eventHasSetting_Parms
		{
			EPhotoModeSetting Setting;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Setting_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Setting;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhotoModeSettingsGroupBase_HasSetting_Statics::NewProp_Setting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPhotoModeSettingsGroupBase_HasSetting_Statics::NewProp_Setting = { "Setting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeSettingsGroupBase_eventHasSetting_Parms, Setting), Z_Construct_UEnum_OEIPhotoMode_EPhotoModeSetting, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPhotoModeSettingsGroupBase_HasSetting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhotoModeSettingsGroupBase_eventHasSetting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhotoModeSettingsGroupBase_HasSetting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhotoModeSettingsGroupBase_eventHasSetting_Parms), &Z_Construct_UFunction_UPhotoModeSettingsGroupBase_HasSetting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSettingsGroupBase_HasSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingsGroupBase_HasSetting_Statics::NewProp_Setting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingsGroupBase_HasSetting_Statics::NewProp_Setting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingsGroupBase_HasSetting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingsGroupBase_HasSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingsGroupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingsGroupBase_HasSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingsGroupBase, nullptr, "HasSetting", nullptr, nullptr, sizeof(PhotoModeSettingsGroupBase_eventHasSetting_Parms), Z_Construct_UFunction_UPhotoModeSettingsGroupBase_HasSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsGroupBase_HasSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingsGroupBase_HasSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsGroupBase_HasSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingsGroupBase_HasSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingsGroupBase_HasSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingsGroupBase_IsHDRActive_Statics
	{
		struct PhotoModeSettingsGroupBase_eventIsHDRActive_Parms
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
	void Z_Construct_UFunction_UPhotoModeSettingsGroupBase_IsHDRActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhotoModeSettingsGroupBase_eventIsHDRActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhotoModeSettingsGroupBase_IsHDRActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhotoModeSettingsGroupBase_eventIsHDRActive_Parms), &Z_Construct_UFunction_UPhotoModeSettingsGroupBase_IsHDRActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeSettingsGroupBase_IsHDRActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeSettingsGroupBase_IsHDRActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingsGroupBase_IsHDRActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingsGroupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingsGroupBase_IsHDRActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingsGroupBase, nullptr, "IsHDRActive", nullptr, nullptr, sizeof(PhotoModeSettingsGroupBase_eventIsHDRActive_Parms), Z_Construct_UFunction_UPhotoModeSettingsGroupBase_IsHDRActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsGroupBase_IsHDRActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingsGroupBase_IsHDRActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsGroupBase_IsHDRActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingsGroupBase_IsHDRActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingsGroupBase_IsHDRActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeSettingsGroupBase_RefreshAllSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeSettingsGroupBase_RefreshAllSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeSettingsGroupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeSettingsGroupBase_RefreshAllSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeSettingsGroupBase, nullptr, "RefreshAllSettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeSettingsGroupBase_RefreshAllSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeSettingsGroupBase_RefreshAllSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeSettingsGroupBase_RefreshAllSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeSettingsGroupBase_RefreshAllSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPhotoModeSettingsGroupBase_NoRegister()
	{
		return UPhotoModeSettingsGroupBase::StaticClass();
	}
	struct Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_container_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_container;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SettingsBox;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SettingGroup_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SettingGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingGroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SettingGroupName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIPhotoMode,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetFirstSetting, "GetFirstSetting" }, // 3576844250
		{ &Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetFocusedSetting, "GetFocusedSetting" }, // 2102495641
		{ &Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetHoveredSetting, "GetHoveredSetting" }, // 2395256128
		{ &Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSetting, "GetSetting" }, // 3316153907
		{ &Z_Construct_UFunction_UPhotoModeSettingsGroupBase_GetSettingWidgetWithTag, "GetSettingWidgetWithTag" }, // 1557043897
		{ &Z_Construct_UFunction_UPhotoModeSettingsGroupBase_HasSetting, "HasSetting" }, // 2524752984
		{ &Z_Construct_UFunction_UPhotoModeSettingsGroupBase_IsHDRActive, "IsHDRActive" }, // 103257764
		{ &Z_Construct_UFunction_UPhotoModeSettingsGroupBase_RefreshAllSettings, "RefreshAllSettings" }, // 1883533736
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PhotoModeSettingsGroupBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PhotoModeSettingsGroupBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics::NewProp_container_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSettingsGroupBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PhotoModeSettingsGroupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics::NewProp_container = { "container", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSettingsGroupBase, container), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics::NewProp_container_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics::NewProp_container_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics::NewProp_SettingsBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSettingsGroupBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PhotoModeSettingsGroupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics::NewProp_SettingsBox = { "SettingsBox", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSettingsGroupBase, SettingsBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics::NewProp_SettingsBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics::NewProp_SettingsBox_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics::NewProp_SettingGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics::NewProp_SettingGroup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSettingsGroupBase" },
		{ "ModuleRelativePath", "Public/PhotoModeSettingsGroupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics::NewProp_SettingGroup = { "SettingGroup", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSettingsGroupBase, SettingGroup), Z_Construct_UEnum_OEIPhotoMode_EPhotoSettingsGroup, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics::NewProp_SettingGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics::NewProp_SettingGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics::NewProp_SettingGroupName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSettingsGroupBase" },
		{ "ModuleRelativePath", "Public/PhotoModeSettingsGroupBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics::NewProp_SettingGroupName = { "SettingGroupName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSettingsGroupBase, SettingGroupName), Z_Construct_UScriptStruct_FLocString, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics::NewProp_SettingGroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics::NewProp_SettingGroupName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics::NewProp_container,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics::NewProp_SettingsBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics::NewProp_SettingGroup_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics::NewProp_SettingGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics::NewProp_SettingGroupName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhotoModeSettingsGroupBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics::ClassParams = {
		&UPhotoModeSettingsGroupBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhotoModeSettingsGroupBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhotoModeSettingsGroupBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhotoModeSettingsGroupBase, 2599772054);
	template<> OEIPHOTOMODE_API UClass* StaticClass<UPhotoModeSettingsGroupBase>()
	{
		return UPhotoModeSettingsGroupBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhotoModeSettingsGroupBase(Z_Construct_UClass_UPhotoModeSettingsGroupBase, &UPhotoModeSettingsGroupBase::StaticClass, TEXT("/Script/OEIPhotoMode"), TEXT("UPhotoModeSettingsGroupBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhotoModeSettingsGroupBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
