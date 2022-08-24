// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ETitleMultiplayerServerEnabledStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETitleMultiplayerServerEnabledStatus() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ETitleMultiplayerServerEnabledStatus();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* ETitleMultiplayerServerEnabledStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_ETitleMultiplayerServerEnabledStatus, Z_Construct_UPackage__Script_PlayFab(), TEXT("ETitleMultiplayerServerEnabledStatus"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<ETitleMultiplayerServerEnabledStatus>()
	{
		return ETitleMultiplayerServerEnabledStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETitleMultiplayerServerEnabledStatus(ETitleMultiplayerServerEnabledStatus_StaticEnum, TEXT("/Script/PlayFab"), TEXT("ETitleMultiplayerServerEnabledStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_ETitleMultiplayerServerEnabledStatus_Hash() { return 4066973904U; }
	UEnum* Z_Construct_UEnum_PlayFab_ETitleMultiplayerServerEnabledStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETitleMultiplayerServerEnabledStatus"), 0, Get_Z_Construct_UEnum_PlayFab_ETitleMultiplayerServerEnabledStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETitleMultiplayerServerEnabledStatus::pfenum_Initializing", (int64)ETitleMultiplayerServerEnabledStatus::pfenum_Initializing },
				{ "ETitleMultiplayerServerEnabledStatus::pfenum_Enabled", (int64)ETitleMultiplayerServerEnabledStatus::pfenum_Enabled },
				{ "ETitleMultiplayerServerEnabledStatus::pfenum_Disabled", (int64)ETitleMultiplayerServerEnabledStatus::pfenum_Disabled },
				{ "ETitleMultiplayerServerEnabledStatus::pfenum_MAX", (int64)ETitleMultiplayerServerEnabledStatus::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ETitleMultiplayerServerEnabledStatus.h" },
				{ "pfenum_Disabled.Name", "ETitleMultiplayerServerEnabledStatus::pfenum_Disabled" },
				{ "pfenum_Enabled.Name", "ETitleMultiplayerServerEnabledStatus::pfenum_Enabled" },
				{ "pfenum_Initializing.Name", "ETitleMultiplayerServerEnabledStatus::pfenum_Initializing" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "ETitleMultiplayerServerEnabledStatus::pfenum_MAX" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"ETitleMultiplayerServerEnabledStatus",
				"ETitleMultiplayerServerEnabledStatus",
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
