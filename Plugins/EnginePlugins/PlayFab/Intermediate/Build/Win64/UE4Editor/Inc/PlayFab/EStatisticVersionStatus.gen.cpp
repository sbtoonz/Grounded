// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/EStatisticVersionStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEStatisticVersionStatus() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EStatisticVersionStatus();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* EStatisticVersionStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EStatisticVersionStatus, Z_Construct_UPackage__Script_PlayFab(), TEXT("EStatisticVersionStatus"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EStatisticVersionStatus>()
	{
		return EStatisticVersionStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStatisticVersionStatus(EStatisticVersionStatus_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EStatisticVersionStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EStatisticVersionStatus_Hash() { return 1636345478U; }
	UEnum* Z_Construct_UEnum_PlayFab_EStatisticVersionStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStatisticVersionStatus"), 0, Get_Z_Construct_UEnum_PlayFab_EStatisticVersionStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStatisticVersionStatus::pfenum_Active", (int64)EStatisticVersionStatus::pfenum_Active },
				{ "EStatisticVersionStatus::pfenum_SnapshotPending", (int64)EStatisticVersionStatus::pfenum_SnapshotPending },
				{ "EStatisticVersionStatus::pfenum_Snapshot", (int64)EStatisticVersionStatus::pfenum_Snapshot },
				{ "EStatisticVersionStatus::pfenum_ArchivalPending", (int64)EStatisticVersionStatus::pfenum_ArchivalPending },
				{ "EStatisticVersionStatus::pfenum_Archived", (int64)EStatisticVersionStatus::pfenum_Archived },
				{ "EStatisticVersionStatus::pfenum_MAX", (int64)EStatisticVersionStatus::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EStatisticVersionStatus.h" },
				{ "pfenum_Active.Name", "EStatisticVersionStatus::pfenum_Active" },
				{ "pfenum_ArchivalPending.Name", "EStatisticVersionStatus::pfenum_ArchivalPending" },
				{ "pfenum_Archived.Name", "EStatisticVersionStatus::pfenum_Archived" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "EStatisticVersionStatus::pfenum_MAX" },
				{ "pfenum_Snapshot.Name", "EStatisticVersionStatus::pfenum_Snapshot" },
				{ "pfenum_SnapshotPending.Name", "EStatisticVersionStatus::pfenum_SnapshotPending" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EStatisticVersionStatus",
				"EStatisticVersionStatus",
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
