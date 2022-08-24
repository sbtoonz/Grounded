// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/EPhotoModeEntryAllowedResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPhotoModeEntryAllowedResult() {}
// Cross Module References
	OEIPHOTOMODE_API UEnum* Z_Construct_UEnum_OEIPhotoMode_EPhotoModeEntryAllowedResult();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
// End Cross Module References
	static UEnum* EPhotoModeEntryAllowedResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OEIPhotoMode_EPhotoModeEntryAllowedResult, Z_Construct_UPackage__Script_OEIPhotoMode(), TEXT("EPhotoModeEntryAllowedResult"));
		}
		return Singleton;
	}
	template<> OEIPHOTOMODE_API UEnum* StaticEnum<EPhotoModeEntryAllowedResult>()
	{
		return EPhotoModeEntryAllowedResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPhotoModeEntryAllowedResult(EPhotoModeEntryAllowedResult_StaticEnum, TEXT("/Script/OEIPhotoMode"), TEXT("EPhotoModeEntryAllowedResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OEIPhotoMode_EPhotoModeEntryAllowedResult_Hash() { return 3682287589U; }
	UEnum* Z_Construct_UEnum_OEIPhotoMode_EPhotoModeEntryAllowedResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OEIPhotoMode();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPhotoModeEntryAllowedResult"), 0, Get_Z_Construct_UEnum_OEIPhotoMode_EPhotoModeEntryAllowedResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPhotoModeEntryAllowedResult::Allowed", (int64)EPhotoModeEntryAllowedResult::Allowed },
				{ "EPhotoModeEntryAllowedResult::UnallowedGameplaySequence", (int64)EPhotoModeEntryAllowedResult::UnallowedGameplaySequence },
				{ "EPhotoModeEntryAllowedResult::UnallowedSpectatorMode", (int64)EPhotoModeEntryAllowedResult::UnallowedSpectatorMode },
				{ "EPhotoModeEntryAllowedResult::UnallowedMultiplayer", (int64)EPhotoModeEntryAllowedResult::UnallowedMultiplayer },
				{ "EPhotoModeEntryAllowedResult::UnallowedPlayerUnpossessed", (int64)EPhotoModeEntryAllowedResult::UnallowedPlayerUnpossessed },
				{ "EPhotoModeEntryAllowedResult::Unallowed", (int64)EPhotoModeEntryAllowedResult::Unallowed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Allowed.Name", "EPhotoModeEntryAllowedResult::Allowed" },
				{ "ModuleRelativePath", "Public/EPhotoModeEntryAllowedResult.h" },
				{ "Unallowed.Name", "EPhotoModeEntryAllowedResult::Unallowed" },
				{ "UnallowedGameplaySequence.Name", "EPhotoModeEntryAllowedResult::UnallowedGameplaySequence" },
				{ "UnallowedMultiplayer.Name", "EPhotoModeEntryAllowedResult::UnallowedMultiplayer" },
				{ "UnallowedPlayerUnpossessed.Name", "EPhotoModeEntryAllowedResult::UnallowedPlayerUnpossessed" },
				{ "UnallowedSpectatorMode.Name", "EPhotoModeEntryAllowedResult::UnallowedSpectatorMode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OEIPhotoMode,
				nullptr,
				"EPhotoModeEntryAllowedResult",
				"EPhotoModeEntryAllowedResult",
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
