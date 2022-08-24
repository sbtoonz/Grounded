// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ETitleActivationStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETitleActivationStatus() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ETitleActivationStatus();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* ETitleActivationStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_ETitleActivationStatus, Z_Construct_UPackage__Script_PlayFab(), TEXT("ETitleActivationStatus"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<ETitleActivationStatus>()
	{
		return ETitleActivationStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETitleActivationStatus(ETitleActivationStatus_StaticEnum, TEXT("/Script/PlayFab"), TEXT("ETitleActivationStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_ETitleActivationStatus_Hash() { return 3377767250U; }
	UEnum* Z_Construct_UEnum_PlayFab_ETitleActivationStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETitleActivationStatus"), 0, Get_Z_Construct_UEnum_PlayFab_ETitleActivationStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETitleActivationStatus::pfenum_None", (int64)ETitleActivationStatus::pfenum_None },
				{ "ETitleActivationStatus::pfenum_ActivatedTitleKey", (int64)ETitleActivationStatus::pfenum_ActivatedTitleKey },
				{ "ETitleActivationStatus::pfenum_PendingSteam", (int64)ETitleActivationStatus::pfenum_PendingSteam },
				{ "ETitleActivationStatus::pfenum_ActivatedSteam", (int64)ETitleActivationStatus::pfenum_ActivatedSteam },
				{ "ETitleActivationStatus::pfenum_RevokedSteam", (int64)ETitleActivationStatus::pfenum_RevokedSteam },
				{ "ETitleActivationStatus::pfenum_MAX", (int64)ETitleActivationStatus::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ETitleActivationStatus.h" },
				{ "pfenum_ActivatedSteam.Name", "ETitleActivationStatus::pfenum_ActivatedSteam" },
				{ "pfenum_ActivatedTitleKey.Name", "ETitleActivationStatus::pfenum_ActivatedTitleKey" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "ETitleActivationStatus::pfenum_MAX" },
				{ "pfenum_None.Name", "ETitleActivationStatus::pfenum_None" },
				{ "pfenum_PendingSteam.Name", "ETitleActivationStatus::pfenum_PendingSteam" },
				{ "pfenum_RevokedSteam.Name", "ETitleActivationStatus::pfenum_RevokedSteam" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"ETitleActivationStatus",
				"ETitleActivationStatus",
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
