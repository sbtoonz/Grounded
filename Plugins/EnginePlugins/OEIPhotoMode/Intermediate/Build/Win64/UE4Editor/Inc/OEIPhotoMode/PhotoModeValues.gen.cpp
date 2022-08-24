// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/PhotoModeValues.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhotoModeValues() {}
// Cross Module References
	OEIPHOTOMODE_API UScriptStruct* Z_Construct_UScriptStruct_FPhotoModeValues();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	OEIPHOTOMODE_API UScriptStruct* Z_Construct_UScriptStruct_FColorGradingProfile();
// End Cross Module References
class UScriptStruct* FPhotoModeValues::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIPHOTOMODE_API uint32 Get_Z_Construct_UScriptStruct_FPhotoModeValues_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhotoModeValues, Z_Construct_UPackage__Script_OEIPhotoMode(), TEXT("PhotoModeValues"), sizeof(FPhotoModeValues), Get_Z_Construct_UScriptStruct_FPhotoModeValues_Hash());
	}
	return Singleton;
}
template<> OEIPHOTOMODE_API UScriptStruct* StaticStruct<FPhotoModeValues>()
{
	return FPhotoModeValues::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPhotoModeValues(FPhotoModeValues::StaticStruct, TEXT("/Script/OEIPhotoMode"), TEXT("PhotoModeValues"), false, nullptr, nullptr);
static struct FScriptStruct_OEIPhotoMode_StaticRegisterNativesFPhotoModeValues
{
	FScriptStruct_OEIPhotoMode_StaticRegisterNativesFPhotoModeValues()
	{
		UScriptStruct::DeferCppStructOps<FPhotoModeValues>(FName(TEXT("PhotoModeValues")));
	}
} ScriptStruct_OEIPhotoMode_StaticRegisterNativesFPhotoModeValues;
	struct Z_Construct_UScriptStruct_FPhotoModeValues_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VignetteIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VignetteIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGradingLUT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ColorGradingLUT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGradingIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ColorGradingIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionBlurAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MotionBlurAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldFstop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldFstop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldFocusDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldFocusDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraFilmbackWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraFilmbackWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraFilmbackHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraFilmbackHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraRoll_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrainIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GrainIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneFringeIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SceneFringeIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TonemapperGamma_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TonemapperGamma;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumetricFogDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGradingProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorGradingProfile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeValues_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PhotoModeValues.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhotoModeValues>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_VignetteIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeValues" },
		{ "ModuleRelativePath", "Public/PhotoModeValues.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_VignetteIntensity = { "VignetteIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhotoModeValues, VignetteIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_VignetteIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_VignetteIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_ColorGradingLUT_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeValues" },
		{ "ModuleRelativePath", "Public/PhotoModeValues.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_ColorGradingLUT = { "ColorGradingLUT", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhotoModeValues, ColorGradingLUT), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_ColorGradingLUT_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_ColorGradingLUT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_ColorGradingIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeValues" },
		{ "ModuleRelativePath", "Public/PhotoModeValues.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_ColorGradingIntensity = { "ColorGradingIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhotoModeValues, ColorGradingIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_ColorGradingIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_ColorGradingIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_MotionBlurAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeValues" },
		{ "ModuleRelativePath", "Public/PhotoModeValues.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_MotionBlurAmount = { "MotionBlurAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhotoModeValues, MotionBlurAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_MotionBlurAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_MotionBlurAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_FOV_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeValues" },
		{ "ModuleRelativePath", "Public/PhotoModeValues.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhotoModeValues, FOV), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_FOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_FOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_DepthOfFieldFstop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeValues" },
		{ "ModuleRelativePath", "Public/PhotoModeValues.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_DepthOfFieldFstop = { "DepthOfFieldFstop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhotoModeValues, DepthOfFieldFstop), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_DepthOfFieldFstop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_DepthOfFieldFstop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_DepthOfFieldFocusDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeValues" },
		{ "ModuleRelativePath", "Public/PhotoModeValues.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_DepthOfFieldFocusDistance = { "DepthOfFieldFocusDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhotoModeValues, DepthOfFieldFocusDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_DepthOfFieldFocusDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_DepthOfFieldFocusDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_CameraFilmbackWidth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeValues" },
		{ "ModuleRelativePath", "Public/PhotoModeValues.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_CameraFilmbackWidth = { "CameraFilmbackWidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhotoModeValues, CameraFilmbackWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_CameraFilmbackWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_CameraFilmbackWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_CameraFilmbackHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeValues" },
		{ "ModuleRelativePath", "Public/PhotoModeValues.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_CameraFilmbackHeight = { "CameraFilmbackHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhotoModeValues, CameraFilmbackHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_CameraFilmbackHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_CameraFilmbackHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_CameraRoll_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeValues" },
		{ "ModuleRelativePath", "Public/PhotoModeValues.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_CameraRoll = { "CameraRoll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhotoModeValues, CameraRoll), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_CameraRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_CameraRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_GrainIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeValues" },
		{ "ModuleRelativePath", "Public/PhotoModeValues.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_GrainIntensity = { "GrainIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhotoModeValues, GrainIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_GrainIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_GrainIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_SceneFringeIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeValues" },
		{ "ModuleRelativePath", "Public/PhotoModeValues.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_SceneFringeIntensity = { "SceneFringeIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhotoModeValues, SceneFringeIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_SceneFringeIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_SceneFringeIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_TonemapperGamma_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeValues" },
		{ "ModuleRelativePath", "Public/PhotoModeValues.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_TonemapperGamma = { "TonemapperGamma", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhotoModeValues, TonemapperGamma), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_TonemapperGamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_TonemapperGamma_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_VolumetricFogDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeValues" },
		{ "ModuleRelativePath", "Public/PhotoModeValues.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_VolumetricFogDistance = { "VolumetricFogDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhotoModeValues, VolumetricFogDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_VolumetricFogDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_VolumetricFogDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_ColorGradingProfile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeValues" },
		{ "ModuleRelativePath", "Public/PhotoModeValues.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_ColorGradingProfile = { "ColorGradingProfile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhotoModeValues, ColorGradingProfile), Z_Construct_UScriptStruct_FColorGradingProfile, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_ColorGradingProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_ColorGradingProfile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhotoModeValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_VignetteIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_ColorGradingLUT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_ColorGradingIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_MotionBlurAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_FOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_DepthOfFieldFstop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_DepthOfFieldFocusDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_CameraFilmbackWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_CameraFilmbackHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_CameraRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_GrainIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_SceneFringeIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_TonemapperGamma,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_VolumetricFogDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeValues_Statics::NewProp_ColorGradingProfile,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhotoModeValues_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIPhotoMode,
		nullptr,
		&NewStructOps,
		"PhotoModeValues",
		sizeof(FPhotoModeValues),
		alignof(FPhotoModeValues),
		Z_Construct_UScriptStruct_FPhotoModeValues_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeValues_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeValues_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeValues_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhotoModeValues()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPhotoModeValues_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIPhotoMode();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PhotoModeValues"), sizeof(FPhotoModeValues), Get_Z_Construct_UScriptStruct_FPhotoModeValues_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPhotoModeValues_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPhotoModeValues_Hash() { return 3915340148U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
