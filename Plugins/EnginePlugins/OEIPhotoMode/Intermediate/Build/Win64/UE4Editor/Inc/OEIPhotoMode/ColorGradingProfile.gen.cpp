// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/ColorGradingProfile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColorGradingProfile() {}
// Cross Module References
	OEIPHOTOMODE_API UScriptStruct* Z_Construct_UScriptStruct_FColorGradingProfile();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
	OEITEXT_API UScriptStruct* Z_Construct_UScriptStruct_FLocString();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
// End Cross Module References
class UScriptStruct* FColorGradingProfile::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIPHOTOMODE_API uint32 Get_Z_Construct_UScriptStruct_FColorGradingProfile_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FColorGradingProfile, Z_Construct_UPackage__Script_OEIPhotoMode(), TEXT("ColorGradingProfile"), sizeof(FColorGradingProfile), Get_Z_Construct_UScriptStruct_FColorGradingProfile_Hash());
	}
	return Singleton;
}
template<> OEIPHOTOMODE_API UScriptStruct* StaticStruct<FColorGradingProfile>()
{
	return FColorGradingProfile::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FColorGradingProfile(FColorGradingProfile::StaticStruct, TEXT("/Script/OEIPhotoMode"), TEXT("ColorGradingProfile"), false, nullptr, nullptr);
static struct FScriptStruct_OEIPhotoMode_StaticRegisterNativesFColorGradingProfile
{
	FScriptStruct_OEIPhotoMode_StaticRegisterNativesFColorGradingProfile()
	{
		UScriptStruct::DeferCppStructOps<FColorGradingProfile>(FName(TEXT("ColorGradingProfile")));
	}
} ScriptStruct_OEIPhotoMode_StaticRegisterNativesFColorGradingProfile;
	struct Z_Construct_UScriptStruct_FColorGradingProfile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_WhiteTemp_MetaData[];
#endif
		static void NewProp_bOverride_WhiteTemp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_WhiteTemp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_WhiteTint_MetaData[];
#endif
		static void NewProp_bOverride_WhiteTint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_WhiteTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorSaturation_MetaData[];
#endif
		static void NewProp_bOverride_ColorSaturation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorSaturation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorContrast_MetaData[];
#endif
		static void NewProp_bOverride_ColorContrast_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorContrast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGamma_MetaData[];
#endif
		static void NewProp_bOverride_ColorGamma_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGamma;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGain_MetaData[];
#endif
		static void NewProp_bOverride_ColorGain_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorOffset_MetaData[];
#endif
		static void NewProp_bOverride_ColorOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorSaturationShadows_MetaData[];
#endif
		static void NewProp_bOverride_ColorSaturationShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorSaturationShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorContrastShadows_MetaData[];
#endif
		static void NewProp_bOverride_ColorContrastShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorContrastShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGammaShadows_MetaData[];
#endif
		static void NewProp_bOverride_ColorGammaShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGammaShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGainShadows_MetaData[];
#endif
		static void NewProp_bOverride_ColorGainShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGainShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorOffsetShadows_MetaData[];
#endif
		static void NewProp_bOverride_ColorOffsetShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorOffsetShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorSaturationMidtones_MetaData[];
#endif
		static void NewProp_bOverride_ColorSaturationMidtones_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorSaturationMidtones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorContrastMidtones_MetaData[];
#endif
		static void NewProp_bOverride_ColorContrastMidtones_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorContrastMidtones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGammaMidtones_MetaData[];
#endif
		static void NewProp_bOverride_ColorGammaMidtones_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGammaMidtones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGainMidtones_MetaData[];
#endif
		static void NewProp_bOverride_ColorGainMidtones_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGainMidtones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorOffsetMidtones_MetaData[];
#endif
		static void NewProp_bOverride_ColorOffsetMidtones_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorOffsetMidtones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorSaturationHighlights_MetaData[];
#endif
		static void NewProp_bOverride_ColorSaturationHighlights_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorSaturationHighlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorContrastHighlights_MetaData[];
#endif
		static void NewProp_bOverride_ColorContrastHighlights_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorContrastHighlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGammaHighlights_MetaData[];
#endif
		static void NewProp_bOverride_ColorGammaHighlights_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGammaHighlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGainHighlights_MetaData[];
#endif
		static void NewProp_bOverride_ColorGainHighlights_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGainHighlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorOffsetHighlights_MetaData[];
#endif
		static void NewProp_bOverride_ColorOffsetHighlights_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorOffsetHighlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorCorrectionShadowsMax_MetaData[];
#endif
		static void NewProp_bOverride_ColorCorrectionShadowsMax_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorCorrectionShadowsMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorCorrectionHighlightsMin_MetaData[];
#endif
		static void NewProp_bOverride_ColorCorrectionHighlightsMin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorCorrectionHighlightsMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BlueCorrection_MetaData[];
#endif
		static void NewProp_bOverride_BlueCorrection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BlueCorrection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ExpandGamut_MetaData[];
#endif
		static void NewProp_bOverride_ExpandGamut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ExpandGamut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProfileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGradingLUT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ColorGradingLUT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WhiteTemp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WhiteTemp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WhiteTint_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WhiteTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorSaturation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorSaturation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorContrast_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorContrast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGamma_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorGamma;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGain_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorGain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorSaturationShadows_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorSaturationShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorContrastShadows_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorContrastShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGammaShadows_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorGammaShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGainShadows_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorGainShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorOffsetShadows_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorOffsetShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorSaturationMidtones_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorSaturationMidtones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorContrastMidtones_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorContrastMidtones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGammaMidtones_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorGammaMidtones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGainMidtones_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorGainMidtones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorOffsetMidtones_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorOffsetMidtones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorSaturationHighlights_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorSaturationHighlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorContrastHighlights_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorContrastHighlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGammaHighlights_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorGammaHighlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGainHighlights_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorGainHighlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorOffsetHighlights_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorOffsetHighlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorCorrectionHighlightsMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ColorCorrectionHighlightsMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorCorrectionShadowsMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ColorCorrectionShadowsMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueCorrection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlueCorrection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpandGamut_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExpandGamut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FColorGradingProfile>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_WhiteTemp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_WhiteTemp_SetBit(void* Obj)
	{
		((FColorGradingProfile*)Obj)->bOverride_WhiteTemp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_WhiteTemp = { "bOverride_WhiteTemp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FColorGradingProfile), &Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_WhiteTemp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_WhiteTemp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_WhiteTemp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_WhiteTint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_WhiteTint_SetBit(void* Obj)
	{
		((FColorGradingProfile*)Obj)->bOverride_WhiteTint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_WhiteTint = { "bOverride_WhiteTint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FColorGradingProfile), &Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_WhiteTint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_WhiteTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_WhiteTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorSaturation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorSaturation_SetBit(void* Obj)
	{
		((FColorGradingProfile*)Obj)->bOverride_ColorSaturation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorSaturation = { "bOverride_ColorSaturation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FColorGradingProfile), &Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorSaturation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorSaturation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorSaturation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorContrast_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorContrast_SetBit(void* Obj)
	{
		((FColorGradingProfile*)Obj)->bOverride_ColorContrast = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorContrast = { "bOverride_ColorContrast", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FColorGradingProfile), &Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorContrast_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorContrast_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorContrast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGamma_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGamma_SetBit(void* Obj)
	{
		((FColorGradingProfile*)Obj)->bOverride_ColorGamma = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGamma = { "bOverride_ColorGamma", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FColorGradingProfile), &Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGamma_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGamma_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGain_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGain_SetBit(void* Obj)
	{
		((FColorGradingProfile*)Obj)->bOverride_ColorGain = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGain = { "bOverride_ColorGain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FColorGradingProfile), &Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGain_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorOffset_SetBit(void* Obj)
	{
		((FColorGradingProfile*)Obj)->bOverride_ColorOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorOffset = { "bOverride_ColorOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FColorGradingProfile), &Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorOffset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorSaturationShadows_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorSaturationShadows_SetBit(void* Obj)
	{
		((FColorGradingProfile*)Obj)->bOverride_ColorSaturationShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorSaturationShadows = { "bOverride_ColorSaturationShadows", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FColorGradingProfile), &Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorSaturationShadows_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorSaturationShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorSaturationShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorContrastShadows_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorContrastShadows_SetBit(void* Obj)
	{
		((FColorGradingProfile*)Obj)->bOverride_ColorContrastShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorContrastShadows = { "bOverride_ColorContrastShadows", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FColorGradingProfile), &Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorContrastShadows_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorContrastShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorContrastShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGammaShadows_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGammaShadows_SetBit(void* Obj)
	{
		((FColorGradingProfile*)Obj)->bOverride_ColorGammaShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGammaShadows = { "bOverride_ColorGammaShadows", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FColorGradingProfile), &Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGammaShadows_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGammaShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGammaShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGainShadows_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGainShadows_SetBit(void* Obj)
	{
		((FColorGradingProfile*)Obj)->bOverride_ColorGainShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGainShadows = { "bOverride_ColorGainShadows", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FColorGradingProfile), &Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGainShadows_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGainShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGainShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorOffsetShadows_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorOffsetShadows_SetBit(void* Obj)
	{
		((FColorGradingProfile*)Obj)->bOverride_ColorOffsetShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorOffsetShadows = { "bOverride_ColorOffsetShadows", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FColorGradingProfile), &Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorOffsetShadows_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorOffsetShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorOffsetShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorSaturationMidtones_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorSaturationMidtones_SetBit(void* Obj)
	{
		((FColorGradingProfile*)Obj)->bOverride_ColorSaturationMidtones = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorSaturationMidtones = { "bOverride_ColorSaturationMidtones", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FColorGradingProfile), &Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorSaturationMidtones_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorSaturationMidtones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorSaturationMidtones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorContrastMidtones_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorContrastMidtones_SetBit(void* Obj)
	{
		((FColorGradingProfile*)Obj)->bOverride_ColorContrastMidtones = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorContrastMidtones = { "bOverride_ColorContrastMidtones", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FColorGradingProfile), &Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorContrastMidtones_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorContrastMidtones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorContrastMidtones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGammaMidtones_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGammaMidtones_SetBit(void* Obj)
	{
		((FColorGradingProfile*)Obj)->bOverride_ColorGammaMidtones = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGammaMidtones = { "bOverride_ColorGammaMidtones", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FColorGradingProfile), &Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGammaMidtones_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGammaMidtones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGammaMidtones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGainMidtones_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGainMidtones_SetBit(void* Obj)
	{
		((FColorGradingProfile*)Obj)->bOverride_ColorGainMidtones = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGainMidtones = { "bOverride_ColorGainMidtones", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FColorGradingProfile), &Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGainMidtones_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGainMidtones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGainMidtones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorOffsetMidtones_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorOffsetMidtones_SetBit(void* Obj)
	{
		((FColorGradingProfile*)Obj)->bOverride_ColorOffsetMidtones = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorOffsetMidtones = { "bOverride_ColorOffsetMidtones", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FColorGradingProfile), &Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorOffsetMidtones_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorOffsetMidtones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorOffsetMidtones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorSaturationHighlights_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorSaturationHighlights_SetBit(void* Obj)
	{
		((FColorGradingProfile*)Obj)->bOverride_ColorSaturationHighlights = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorSaturationHighlights = { "bOverride_ColorSaturationHighlights", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FColorGradingProfile), &Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorSaturationHighlights_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorSaturationHighlights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorSaturationHighlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorContrastHighlights_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorContrastHighlights_SetBit(void* Obj)
	{
		((FColorGradingProfile*)Obj)->bOverride_ColorContrastHighlights = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorContrastHighlights = { "bOverride_ColorContrastHighlights", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FColorGradingProfile), &Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorContrastHighlights_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorContrastHighlights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorContrastHighlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGammaHighlights_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGammaHighlights_SetBit(void* Obj)
	{
		((FColorGradingProfile*)Obj)->bOverride_ColorGammaHighlights = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGammaHighlights = { "bOverride_ColorGammaHighlights", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FColorGradingProfile), &Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGammaHighlights_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGammaHighlights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGammaHighlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGainHighlights_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGainHighlights_SetBit(void* Obj)
	{
		((FColorGradingProfile*)Obj)->bOverride_ColorGainHighlights = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGainHighlights = { "bOverride_ColorGainHighlights", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FColorGradingProfile), &Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGainHighlights_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGainHighlights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGainHighlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorOffsetHighlights_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorOffsetHighlights_SetBit(void* Obj)
	{
		((FColorGradingProfile*)Obj)->bOverride_ColorOffsetHighlights = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorOffsetHighlights = { "bOverride_ColorOffsetHighlights", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FColorGradingProfile), &Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorOffsetHighlights_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorOffsetHighlights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorOffsetHighlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorCorrectionShadowsMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorCorrectionShadowsMax_SetBit(void* Obj)
	{
		((FColorGradingProfile*)Obj)->bOverride_ColorCorrectionShadowsMax = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorCorrectionShadowsMax = { "bOverride_ColorCorrectionShadowsMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FColorGradingProfile), &Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorCorrectionShadowsMax_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorCorrectionShadowsMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorCorrectionShadowsMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin_SetBit(void* Obj)
	{
		((FColorGradingProfile*)Obj)->bOverride_ColorCorrectionHighlightsMin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin = { "bOverride_ColorCorrectionHighlightsMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FColorGradingProfile), &Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_BlueCorrection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_BlueCorrection_SetBit(void* Obj)
	{
		((FColorGradingProfile*)Obj)->bOverride_BlueCorrection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_BlueCorrection = { "bOverride_BlueCorrection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FColorGradingProfile), &Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_BlueCorrection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_BlueCorrection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_BlueCorrection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ExpandGamut_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ExpandGamut_SetBit(void* Obj)
	{
		((FColorGradingProfile*)Obj)->bOverride_ExpandGamut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ExpandGamut = { "bOverride_ExpandGamut", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FColorGradingProfile), &Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ExpandGamut_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ExpandGamut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ExpandGamut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ProfileName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingProfile, ProfileName), Z_Construct_UScriptStruct_FLocString, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ProfileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGradingLUT_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGradingLUT = { "ColorGradingLUT", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingProfile, ColorGradingLUT), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGradingLUT_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGradingLUT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_WhiteTemp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_WhiteTemp = { "WhiteTemp", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingProfile, WhiteTemp), METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_WhiteTemp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_WhiteTemp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_WhiteTint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_WhiteTint = { "WhiteTint", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingProfile, WhiteTint), METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_WhiteTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_WhiteTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorSaturation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorSaturation = { "ColorSaturation", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingProfile, ColorSaturation), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorSaturation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorSaturation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorContrast_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorContrast = { "ColorContrast", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingProfile, ColorContrast), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorContrast_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorContrast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGamma_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGamma = { "ColorGamma", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingProfile, ColorGamma), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGamma_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGain_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGain = { "ColorGain", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingProfile, ColorGain), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorOffset = { "ColorOffset", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingProfile, ColorOffset), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorSaturationShadows_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorSaturationShadows = { "ColorSaturationShadows", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingProfile, ColorSaturationShadows), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorSaturationShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorSaturationShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorContrastShadows_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorContrastShadows = { "ColorContrastShadows", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingProfile, ColorContrastShadows), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorContrastShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorContrastShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGammaShadows_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGammaShadows = { "ColorGammaShadows", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingProfile, ColorGammaShadows), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGammaShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGammaShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGainShadows_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGainShadows = { "ColorGainShadows", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingProfile, ColorGainShadows), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGainShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGainShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorOffsetShadows_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorOffsetShadows = { "ColorOffsetShadows", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingProfile, ColorOffsetShadows), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorOffsetShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorOffsetShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorSaturationMidtones_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorSaturationMidtones = { "ColorSaturationMidtones", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingProfile, ColorSaturationMidtones), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorSaturationMidtones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorSaturationMidtones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorContrastMidtones_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorContrastMidtones = { "ColorContrastMidtones", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingProfile, ColorContrastMidtones), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorContrastMidtones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorContrastMidtones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGammaMidtones_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGammaMidtones = { "ColorGammaMidtones", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingProfile, ColorGammaMidtones), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGammaMidtones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGammaMidtones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGainMidtones_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGainMidtones = { "ColorGainMidtones", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingProfile, ColorGainMidtones), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGainMidtones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGainMidtones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorOffsetMidtones_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorOffsetMidtones = { "ColorOffsetMidtones", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingProfile, ColorOffsetMidtones), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorOffsetMidtones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorOffsetMidtones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorSaturationHighlights_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorSaturationHighlights = { "ColorSaturationHighlights", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingProfile, ColorSaturationHighlights), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorSaturationHighlights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorSaturationHighlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorContrastHighlights_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorContrastHighlights = { "ColorContrastHighlights", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingProfile, ColorContrastHighlights), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorContrastHighlights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorContrastHighlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGammaHighlights_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGammaHighlights = { "ColorGammaHighlights", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingProfile, ColorGammaHighlights), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGammaHighlights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGammaHighlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGainHighlights_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGainHighlights = { "ColorGainHighlights", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingProfile, ColorGainHighlights), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGainHighlights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGainHighlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorOffsetHighlights_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorOffsetHighlights = { "ColorOffsetHighlights", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingProfile, ColorOffsetHighlights), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorOffsetHighlights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorOffsetHighlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorCorrectionHighlightsMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorCorrectionHighlightsMin = { "ColorCorrectionHighlightsMin", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingProfile, ColorCorrectionHighlightsMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorCorrectionHighlightsMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorCorrectionHighlightsMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorCorrectionShadowsMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorCorrectionShadowsMax = { "ColorCorrectionShadowsMax", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingProfile, ColorCorrectionShadowsMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorCorrectionShadowsMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorCorrectionShadowsMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_BlueCorrection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_BlueCorrection = { "BlueCorrection", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingProfile, BlueCorrection), METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_BlueCorrection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_BlueCorrection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ExpandGamut_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorGradingProfile" },
		{ "ModuleRelativePath", "Public/ColorGradingProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ExpandGamut = { "ExpandGamut", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingProfile, ExpandGamut), METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ExpandGamut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ExpandGamut_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FColorGradingProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_WhiteTemp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_WhiteTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorSaturation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorContrast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGamma,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorSaturationShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorContrastShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGammaShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGainShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorOffsetShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorSaturationMidtones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorContrastMidtones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGammaMidtones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGainMidtones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorOffsetMidtones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorSaturationHighlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorContrastHighlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGammaHighlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorGainHighlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorOffsetHighlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorCorrectionShadowsMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_BlueCorrection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_bOverride_ExpandGamut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ProfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGradingLUT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_WhiteTemp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_WhiteTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorSaturation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorContrast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGamma,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorSaturationShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorContrastShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGammaShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGainShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorOffsetShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorSaturationMidtones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorContrastMidtones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGammaMidtones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGainMidtones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorOffsetMidtones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorSaturationHighlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorContrastHighlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGammaHighlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorGainHighlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorOffsetHighlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorCorrectionHighlightsMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ColorCorrectionShadowsMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_BlueCorrection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingProfile_Statics::NewProp_ExpandGamut,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FColorGradingProfile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIPhotoMode,
		nullptr,
		&NewStructOps,
		"ColorGradingProfile",
		sizeof(FColorGradingProfile),
		alignof(FColorGradingProfile),
		Z_Construct_UScriptStruct_FColorGradingProfile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingProfile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FColorGradingProfile()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FColorGradingProfile_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIPhotoMode();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ColorGradingProfile"), sizeof(FColorGradingProfile), Get_Z_Construct_UScriptStruct_FColorGradingProfile_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FColorGradingProfile_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FColorGradingProfile_Hash() { return 4123645752U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
