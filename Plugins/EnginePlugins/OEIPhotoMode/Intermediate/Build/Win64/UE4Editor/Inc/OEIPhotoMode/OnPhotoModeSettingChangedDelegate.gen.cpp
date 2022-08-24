// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/OnPhotoModeSettingChangedDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnPhotoModeSettingChangedDelegate() {}
// Cross Module References
	OEIPHOTOMODE_API UFunction* Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoModeSettingChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeSettingWidget_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoModeSettingChanged__DelegateSignature_Statics
	{
		struct _Script_OEIPhotoMode_eventOnPhotoModeSettingChanged_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoModeSettingChanged__DelegateSignature_Statics::NewProp_ChangedSetting_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoModeSettingChanged__DelegateSignature_Statics::NewProp_ChangedSetting = { "ChangedSetting", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OEIPhotoMode_eventOnPhotoModeSettingChanged_Parms, ChangedSetting), Z_Construct_UClass_UPhotoModeSettingWidget_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoModeSettingChanged__DelegateSignature_Statics::NewProp_ChangedSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoModeSettingChanged__DelegateSignature_Statics::NewProp_ChangedSetting_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoModeSettingChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoModeSettingChanged__DelegateSignature_Statics::NewProp_ChangedSetting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoModeSettingChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnPhotoModeSettingChangedDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoModeSettingChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OEIPhotoMode, nullptr, "OnPhotoModeSettingChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_OEIPhotoMode_eventOnPhotoModeSettingChanged_Parms), Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoModeSettingChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoModeSettingChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoModeSettingChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoModeSettingChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoModeSettingChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OEIPhotoMode_OnPhotoModeSettingChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
