// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ETransactionStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETransactionStatus() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ETransactionStatus();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* ETransactionStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_ETransactionStatus, Z_Construct_UPackage__Script_PlayFab(), TEXT("ETransactionStatus"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<ETransactionStatus>()
	{
		return ETransactionStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETransactionStatus(ETransactionStatus_StaticEnum, TEXT("/Script/PlayFab"), TEXT("ETransactionStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_ETransactionStatus_Hash() { return 2681421063U; }
	UEnum* Z_Construct_UEnum_PlayFab_ETransactionStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETransactionStatus"), 0, Get_Z_Construct_UEnum_PlayFab_ETransactionStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETransactionStatus::pfenum_CreateCart", (int64)ETransactionStatus::pfenum_CreateCart },
				{ "ETransactionStatus::pfenum_Init", (int64)ETransactionStatus::pfenum_Init },
				{ "ETransactionStatus::pfenum_Approved", (int64)ETransactionStatus::pfenum_Approved },
				{ "ETransactionStatus::pfenum_Succeeded", (int64)ETransactionStatus::pfenum_Succeeded },
				{ "ETransactionStatus::pfenum_FailedByProvider", (int64)ETransactionStatus::pfenum_FailedByProvider },
				{ "ETransactionStatus::pfenum_DisputePending", (int64)ETransactionStatus::pfenum_DisputePending },
				{ "ETransactionStatus::pfenum_RefundPending", (int64)ETransactionStatus::pfenum_RefundPending },
				{ "ETransactionStatus::pfenum_Refunded", (int64)ETransactionStatus::pfenum_Refunded },
				{ "ETransactionStatus::pfenum_RefundFailed", (int64)ETransactionStatus::pfenum_RefundFailed },
				{ "ETransactionStatus::pfenum_ChargedBack", (int64)ETransactionStatus::pfenum_ChargedBack },
				{ "ETransactionStatus::pfenum_FailedByUber", (int64)ETransactionStatus::pfenum_FailedByUber },
				{ "ETransactionStatus::pfenum_FailedByPlayFab", (int64)ETransactionStatus::pfenum_FailedByPlayFab },
				{ "ETransactionStatus::pfenum_Revoked", (int64)ETransactionStatus::pfenum_Revoked },
				{ "ETransactionStatus::pfenum_TradePending", (int64)ETransactionStatus::pfenum_TradePending },
				{ "ETransactionStatus::pfenum_Traded", (int64)ETransactionStatus::pfenum_Traded },
				{ "ETransactionStatus::pfenum_Upgraded", (int64)ETransactionStatus::pfenum_Upgraded },
				{ "ETransactionStatus::pfenum_StackPending", (int64)ETransactionStatus::pfenum_StackPending },
				{ "ETransactionStatus::pfenum_Stacked", (int64)ETransactionStatus::pfenum_Stacked },
				{ "ETransactionStatus::pfenum_Other", (int64)ETransactionStatus::pfenum_Other },
				{ "ETransactionStatus::pfenum_Failed", (int64)ETransactionStatus::pfenum_Failed },
				{ "ETransactionStatus::pfenum_MAX", (int64)ETransactionStatus::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ETransactionStatus.h" },
				{ "pfenum_Approved.Name", "ETransactionStatus::pfenum_Approved" },
				{ "pfenum_ChargedBack.Name", "ETransactionStatus::pfenum_ChargedBack" },
				{ "pfenum_CreateCart.Name", "ETransactionStatus::pfenum_CreateCart" },
				{ "pfenum_DisputePending.Name", "ETransactionStatus::pfenum_DisputePending" },
				{ "pfenum_Failed.Name", "ETransactionStatus::pfenum_Failed" },
				{ "pfenum_FailedByPlayFab.Name", "ETransactionStatus::pfenum_FailedByPlayFab" },
				{ "pfenum_FailedByProvider.Name", "ETransactionStatus::pfenum_FailedByProvider" },
				{ "pfenum_FailedByUber.Name", "ETransactionStatus::pfenum_FailedByUber" },
				{ "pfenum_Init.Name", "ETransactionStatus::pfenum_Init" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "ETransactionStatus::pfenum_MAX" },
				{ "pfenum_Other.Name", "ETransactionStatus::pfenum_Other" },
				{ "pfenum_Refunded.Name", "ETransactionStatus::pfenum_Refunded" },
				{ "pfenum_RefundFailed.Name", "ETransactionStatus::pfenum_RefundFailed" },
				{ "pfenum_RefundPending.Name", "ETransactionStatus::pfenum_RefundPending" },
				{ "pfenum_Revoked.Name", "ETransactionStatus::pfenum_Revoked" },
				{ "pfenum_Stacked.Name", "ETransactionStatus::pfenum_Stacked" },
				{ "pfenum_StackPending.Name", "ETransactionStatus::pfenum_StackPending" },
				{ "pfenum_Succeeded.Name", "ETransactionStatus::pfenum_Succeeded" },
				{ "pfenum_Traded.Name", "ETransactionStatus::pfenum_Traded" },
				{ "pfenum_TradePending.Name", "ETransactionStatus::pfenum_TradePending" },
				{ "pfenum_Upgraded.Name", "ETransactionStatus::pfenum_Upgraded" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"ETransactionStatus",
				"ETransactionStatus",
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
