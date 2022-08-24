// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/EPhotoModeSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPhotoModeSetting() {}
// Cross Module References
	OEIPHOTOMODE_API UEnum* Z_Construct_UEnum_OEIPhotoMode_EPhotoModeSetting();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
// End Cross Module References
	static UEnum* EPhotoModeSetting_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OEIPhotoMode_EPhotoModeSetting, Z_Construct_UPackage__Script_OEIPhotoMode(), TEXT("EPhotoModeSetting"));
		}
		return Singleton;
	}
	template<> OEIPHOTOMODE_API UEnum* StaticEnum<EPhotoModeSetting>()
	{
		return EPhotoModeSetting_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPhotoModeSetting(EPhotoModeSetting_StaticEnum, TEXT("/Script/OEIPhotoMode"), TEXT("EPhotoModeSetting"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OEIPhotoMode_EPhotoModeSetting_Hash() { return 2644629299U; }
	UEnum* Z_Construct_UEnum_OEIPhotoMode_EPhotoModeSetting()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OEIPhotoMode();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPhotoModeSetting"), 0, Get_Z_Construct_UEnum_OEIPhotoMode_EPhotoModeSetting_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPhotoModeSetting::None", (int64)EPhotoModeSetting::None },
				{ "EPhotoModeSetting::ShowHideCharacter", (int64)EPhotoModeSetting::ShowHideCharacter },
				{ "EPhotoModeSetting::ShowHideEquipment", (int64)EPhotoModeSetting::ShowHideEquipment },
				{ "EPhotoModeSetting::PoseSelection", (int64)EPhotoModeSetting::PoseSelection },
				{ "EPhotoModeSetting::PoseBlend", (int64)EPhotoModeSetting::PoseBlend },
				{ "EPhotoModeSetting::Vignette", (int64)EPhotoModeSetting::Vignette },
				{ "EPhotoModeSetting::FilmGrain", (int64)EPhotoModeSetting::FilmGrain },
				{ "EPhotoModeSetting::SceneFringe", (int64)EPhotoModeSetting::SceneFringe },
				{ "EPhotoModeSetting::ColorGradingLUTSelection", (int64)EPhotoModeSetting::ColorGradingLUTSelection },
				{ "EPhotoModeSetting::ColorGradingProfileSelection", (int64)EPhotoModeSetting::ColorGradingProfileSelection },
				{ "EPhotoModeSetting::ColorGradingIntensity", (int64)EPhotoModeSetting::ColorGradingIntensity },
				{ "EPhotoModeSetting::CameraTilt", (int64)EPhotoModeSetting::CameraTilt },
				{ "EPhotoModeSetting::FOV", (int64)EPhotoModeSetting::FOV },
				{ "EPhotoModeSetting::DOFFstop", (int64)EPhotoModeSetting::DOFFstop },
				{ "EPhotoModeSetting::DOFFocusDistance", (int64)EPhotoModeSetting::DOFFocusDistance },
				{ "EPhotoModeSetting::TonemapperGamma", (int64)EPhotoModeSetting::TonemapperGamma },
				{ "EPhotoModeSetting::FogViewDistance", (int64)EPhotoModeSetting::FogViewDistance },
				{ "EPhotoModeSetting::CharacterYawOffset", (int64)EPhotoModeSetting::CharacterYawOffset },
				{ "EPhotoModeSetting::CameraSpeed", (int64)EPhotoModeSetting::CameraSpeed },
				{ "EPhotoModeSetting::TimeOfDay", (int64)EPhotoModeSetting::TimeOfDay },
				{ "EPhotoModeSetting::AzimuthAngleOffset", (int64)EPhotoModeSetting::AzimuthAngleOffset },
				{ "EPhotoModeSetting::Custom0", (int64)EPhotoModeSetting::Custom0 },
				{ "EPhotoModeSetting::Custom1", (int64)EPhotoModeSetting::Custom1 },
				{ "EPhotoModeSetting::Custom2", (int64)EPhotoModeSetting::Custom2 },
				{ "EPhotoModeSetting::Custom3", (int64)EPhotoModeSetting::Custom3 },
				{ "EPhotoModeSetting::Custom4", (int64)EPhotoModeSetting::Custom4 },
				{ "EPhotoModeSetting::Custom5", (int64)EPhotoModeSetting::Custom5 },
				{ "EPhotoModeSetting::Custom6", (int64)EPhotoModeSetting::Custom6 },
				{ "EPhotoModeSetting::Custom7", (int64)EPhotoModeSetting::Custom7 },
				{ "EPhotoModeSetting::Custom8", (int64)EPhotoModeSetting::Custom8 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AzimuthAngleOffset.Name", "EPhotoModeSetting::AzimuthAngleOffset" },
				{ "BlueprintType", "true" },
				{ "CameraSpeed.Name", "EPhotoModeSetting::CameraSpeed" },
				{ "CameraTilt.Name", "EPhotoModeSetting::CameraTilt" },
				{ "CharacterYawOffset.Name", "EPhotoModeSetting::CharacterYawOffset" },
				{ "ColorGradingIntensity.Name", "EPhotoModeSetting::ColorGradingIntensity" },
				{ "ColorGradingLUTSelection.Name", "EPhotoModeSetting::ColorGradingLUTSelection" },
				{ "ColorGradingProfileSelection.Name", "EPhotoModeSetting::ColorGradingProfileSelection" },
				{ "Custom0.Name", "EPhotoModeSetting::Custom0" },
				{ "Custom1.Name", "EPhotoModeSetting::Custom1" },
				{ "Custom2.Name", "EPhotoModeSetting::Custom2" },
				{ "Custom3.Name", "EPhotoModeSetting::Custom3" },
				{ "Custom4.Name", "EPhotoModeSetting::Custom4" },
				{ "Custom5.Name", "EPhotoModeSetting::Custom5" },
				{ "Custom6.Name", "EPhotoModeSetting::Custom6" },
				{ "Custom7.Name", "EPhotoModeSetting::Custom7" },
				{ "Custom8.Name", "EPhotoModeSetting::Custom8" },
				{ "DOFFocusDistance.Name", "EPhotoModeSetting::DOFFocusDistance" },
				{ "DOFFstop.Name", "EPhotoModeSetting::DOFFstop" },
				{ "FilmGrain.Name", "EPhotoModeSetting::FilmGrain" },
				{ "FogViewDistance.Name", "EPhotoModeSetting::FogViewDistance" },
				{ "FOV.Name", "EPhotoModeSetting::FOV" },
				{ "ModuleRelativePath", "Public/EPhotoModeSetting.h" },
				{ "None.Name", "EPhotoModeSetting::None" },
				{ "PoseBlend.Name", "EPhotoModeSetting::PoseBlend" },
				{ "PoseSelection.Name", "EPhotoModeSetting::PoseSelection" },
				{ "SceneFringe.Name", "EPhotoModeSetting::SceneFringe" },
				{ "ShowHideCharacter.Name", "EPhotoModeSetting::ShowHideCharacter" },
				{ "ShowHideEquipment.Name", "EPhotoModeSetting::ShowHideEquipment" },
				{ "TimeOfDay.Name", "EPhotoModeSetting::TimeOfDay" },
				{ "TonemapperGamma.Name", "EPhotoModeSetting::TonemapperGamma" },
				{ "Vignette.Name", "EPhotoModeSetting::Vignette" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OEIPhotoMode,
				nullptr,
				"EPhotoModeSetting",
				"EPhotoModeSetting",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
