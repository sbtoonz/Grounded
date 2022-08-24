// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ETradeStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETradeStatus() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ETradeStatus();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* ETradeStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_ETradeStatus, Z_Construct_UPackage__Script_PlayFab(), TEXT("ETradeStatus"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<ETradeStatus>()
	{
		return ETradeStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETradeStatus(ETradeStatus_StaticEnum, TEXT("/Script/PlayFab"), TEXT("ETradeStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_ETradeStatus_Hash() { return 1774044625U; }
	UEnum* Z_Construct_UEnum_PlayFab_ETradeStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETradeStatus"), 0, Get_Z_Construct_UEnum_PlayFab_ETradeStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETradeStatus::pfenum_Invalid", (int64)ETradeStatus::pfenum_Invalid },
				{ "ETradeStatus::pfenum_Opening", (int64)ETradeStatus::pfenum_Opening },
				{ "ETradeStatus::pfenum_Open", (int64)ETradeStatus::pfenum_Open },
				{ "ETradeStatus::pfenum_Accepting", (int64)ETradeStatus::pfenum_Accepting },
				{ "ETradeStatus::pfenum_Accepted", (int64)ETradeStatus::pfenum_Accepted },
				{ "ETradeStatus::pfenum_Filled", (int64)ETradeStatus::pfenum_Filled },
				{ "ETradeStatus::pfenum_Cancelled", (int64)ETradeStatus::pfenum_Cancelled },
				{ "ETradeStatus::pfenum_MAX", (int64)ETradeStatus::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ETradeStatus.h" },
				{ "pfenum_Accepted.Name", "ETradeStatus::pfenum_Accepted" },
				{ "pfenum_Accepting.Name", "ETradeStatus::pfenum_Accepting" },
				{ "pfenum_Cancelled.Name", "ETradeStatus::pfenum_Cancelled" },
				{ "pfenum_Filled.Name", "ETradeStatus::pfenum_Filled" },
				{ "pfenum_Invalid.Name", "ETradeStatus::pfenum_Invalid" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "ETradeStatus::pfenum_MAX" },
				{ "pfenum_Open.Name", "ETradeStatus::pfenum_Open" },
				{ "pfenum_Opening.Name", "ETradeStatus::pfenum_Opening" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"ETradeStatus",
				"ETradeStatus",
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
