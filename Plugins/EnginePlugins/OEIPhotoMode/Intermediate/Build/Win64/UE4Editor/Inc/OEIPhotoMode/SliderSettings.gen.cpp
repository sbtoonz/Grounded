// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/SliderSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSliderSettings() {}
// Cross Module References
	OEIPHOTOMODE_API UScriptStruct* Z_Construct_UScriptStruct_FSliderSettings();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
	OEIPHOTOMODE_API UEnum* Z_Construct_UEnum_OEIPhotoMode_EPhotoModeValueFormat();
// End Cross Module References
class UScriptStruct* FSliderSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIPHOTOMODE_API uint32 Get_Z_Construct_UScriptStruct_FSliderSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSliderSettings, Z_Construct_UPackage__Script_OEIPhotoMode(), TEXT("SliderSettings"), sizeof(FSliderSettings), Get_Z_Construct_UScriptStruct_FSliderSettings_Hash());
	}
	return Singleton;
}
template<> OEIPHOTOMODE_API UScriptStruct* StaticStruct<FSliderSettings>()
{
	return FSliderSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSliderSettings(FSliderSettings::StaticStruct, TEXT("/Script/OEIPhotoMode"), TEXT("SliderSettings"), false, nullptr, nullptr);
static struct FScriptStruct_OEIPhotoMode_StaticRegisterNativesFSliderSettings
{
	FScriptStruct_OEIPhotoMode_StaticRegisterNativesFSliderSettings()
	{
		UScriptStruct::DeferCppStructOps<FSliderSettings>(FName(TEXT("SliderSettings")));
	}
} ScriptStruct_OEIPhotoMode_StaticRegisterNativesFSliderSettings;
	struct Z_Construct_UScriptStruct_FSliderSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StepSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ValueFormat_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ValueFormat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSliderSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SliderSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSliderSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSliderSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSliderSettings_Statics::NewProp_MinValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SliderSettings" },
		{ "ModuleRelativePath", "Public/SliderSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSliderSettings_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSliderSettings, MinValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSliderSettings_Statics::NewProp_MinValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliderSettings_Statics::NewProp_MinValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSliderSettings_Statics::NewProp_MaxValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SliderSettings" },
		{ "ModuleRelativePath", "Public/SliderSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSliderSettings_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSliderSettings, MaxValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSliderSettings_Statics::NewProp_MaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliderSettings_Statics::NewProp_MaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSliderSettings_Statics::NewProp_StepSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SliderSettings" },
		{ "ModuleRelativePath", "Public/SliderSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSliderSettings_Statics::NewProp_StepSize = { "StepSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSliderSettings, StepSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FSliderSettings_Statics::NewProp_StepSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliderSettings_Statics::NewProp_StepSize_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSliderSettings_Statics::NewProp_ValueFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSliderSettings_Statics::NewProp_ValueFormat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SliderSettings" },
		{ "ModuleRelativePath", "Public/SliderSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSliderSettings_Statics::NewProp_ValueFormat = { "ValueFormat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSliderSettings, ValueFormat), Z_Construct_UEnum_OEIPhotoMode_EPhotoModeValueFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FSliderSettings_Statics::NewProp_ValueFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliderSettings_Statics::NewProp_ValueFormat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSliderSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliderSettings_Statics::NewProp_MinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliderSettings_Statics::NewProp_MaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliderSettings_Statics::NewProp_StepSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliderSettings_Statics::NewProp_ValueFormat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliderSettings_Statics::NewProp_ValueFormat,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSliderSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIPhotoMode,
		nullptr,
		&NewStructOps,
		"SliderSettings",
		sizeof(FSliderSettings),
		alignof(FSliderSettings),
		Z_Construct_UScriptStruct_FSliderSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliderSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSliderSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliderSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSliderSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSliderSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIPhotoMode();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SliderSettings"), sizeof(FSliderSettings), Get_Z_Construct_UScriptStruct_FSliderSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSliderSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSliderSettings_Hash() { return 3684333514U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
