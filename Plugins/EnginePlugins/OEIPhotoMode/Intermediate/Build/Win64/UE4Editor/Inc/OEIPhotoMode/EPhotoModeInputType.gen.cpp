// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/EPhotoModeInputType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPhotoModeInputType() {}
// Cross Module References
	OEIPHOTOMODE_API UEnum* Z_Construct_UEnum_OEIPhotoMode_EPhotoModeInputType();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
// End Cross Module References
	static UEnum* EPhotoModeInputType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OEIPhotoMode_EPhotoModeInputType, Z_Construct_UPackage__Script_OEIPhotoMode(), TEXT("EPhotoModeInputType"));
		}
		return Singleton;
	}
	template<> OEIPHOTOMODE_API UEnum* StaticEnum<EPhotoModeInputType>()
	{
		return EPhotoModeInputType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPhotoModeInputType(EPhotoModeInputType_StaticEnum, TEXT("/Script/OEIPhotoMode"), TEXT("EPhotoModeInputType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OEIPhotoMode_EPhotoModeInputType_Hash() { return 2713690822U; }
	UEnum* Z_Construct_UEnum_OEIPhotoMode_EPhotoModeInputType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OEIPhotoMode();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPhotoModeInputType"), 0, Get_Z_Construct_UEnum_OEIPhotoMode_EPhotoModeInputType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPhotoModeInputType::Slider", (int64)EPhotoModeInputType::Slider },
				{ "EPhotoModeInputType::CheckBox", (int64)EPhotoModeInputType::CheckBox },
				{ "EPhotoModeInputType::ComboBox", (int64)EPhotoModeInputType::ComboBox },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CheckBox.Name", "EPhotoModeInputType::CheckBox" },
				{ "ComboBox.Name", "EPhotoModeInputType::ComboBox" },
				{ "ModuleRelativePath", "Public/EPhotoModeInputType.h" },
				{ "Slider.Name", "EPhotoModeInputType::Slider" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OEIPhotoMode,
				nullptr,
				"EPhotoModeInputType",
				"EPhotoModeInputType",
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
