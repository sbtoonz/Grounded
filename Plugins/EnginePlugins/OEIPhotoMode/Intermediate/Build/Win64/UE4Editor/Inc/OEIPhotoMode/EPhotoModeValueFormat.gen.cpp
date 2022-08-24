// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/EPhotoModeValueFormat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPhotoModeValueFormat() {}
// Cross Module References
	OEIPHOTOMODE_API UEnum* Z_Construct_UEnum_OEIPhotoMode_EPhotoModeValueFormat();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
// End Cross Module References
	static UEnum* EPhotoModeValueFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OEIPhotoMode_EPhotoModeValueFormat, Z_Construct_UPackage__Script_OEIPhotoMode(), TEXT("EPhotoModeValueFormat"));
		}
		return Singleton;
	}
	template<> OEIPHOTOMODE_API UEnum* StaticEnum<EPhotoModeValueFormat>()
	{
		return EPhotoModeValueFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPhotoModeValueFormat(EPhotoModeValueFormat_StaticEnum, TEXT("/Script/OEIPhotoMode"), TEXT("EPhotoModeValueFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OEIPhotoMode_EPhotoModeValueFormat_Hash() { return 2579769966U; }
	UEnum* Z_Construct_UEnum_OEIPhotoMode_EPhotoModeValueFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OEIPhotoMode();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPhotoModeValueFormat"), 0, Get_Z_Construct_UEnum_OEIPhotoMode_EPhotoModeValueFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPhotoModeValueFormat::PlainNumber", (int64)EPhotoModeValueFormat::PlainNumber },
				{ "EPhotoModeValueFormat::Aperture", (int64)EPhotoModeValueFormat::Aperture },
				{ "EPhotoModeValueFormat::Degrees", (int64)EPhotoModeValueFormat::Degrees },
				{ "EPhotoModeValueFormat::Percent", (int64)EPhotoModeValueFormat::Percent },
				{ "EPhotoModeValueFormat::Seconds", (int64)EPhotoModeValueFormat::Seconds },
				{ "EPhotoModeValueFormat::TimeOfDay24h", (int64)EPhotoModeValueFormat::TimeOfDay24h },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Aperture.Name", "EPhotoModeValueFormat::Aperture" },
				{ "BlueprintType", "true" },
				{ "Degrees.Name", "EPhotoModeValueFormat::Degrees" },
				{ "ModuleRelativePath", "Public/EPhotoModeValueFormat.h" },
				{ "Percent.Name", "EPhotoModeValueFormat::Percent" },
				{ "PlainNumber.Name", "EPhotoModeValueFormat::PlainNumber" },
				{ "Seconds.Name", "EPhotoModeValueFormat::Seconds" },
				{ "TimeOfDay24h.Name", "EPhotoModeValueFormat::TimeOfDay24h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OEIPhotoMode,
				nullptr,
				"EPhotoModeValueFormat",
				"EPhotoModeValueFormat",
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
