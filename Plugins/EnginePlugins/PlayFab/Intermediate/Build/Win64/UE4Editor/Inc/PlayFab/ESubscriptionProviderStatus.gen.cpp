// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ESubscriptionProviderStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESubscriptionProviderStatus() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ESubscriptionProviderStatus();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* ESubscriptionProviderStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_ESubscriptionProviderStatus, Z_Construct_UPackage__Script_PlayFab(), TEXT("ESubscriptionProviderStatus"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<ESubscriptionProviderStatus>()
	{
		return ESubscriptionProviderStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubscriptionProviderStatus(ESubscriptionProviderStatus_StaticEnum, TEXT("/Script/PlayFab"), TEXT("ESubscriptionProviderStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_ESubscriptionProviderStatus_Hash() { return 2596172048U; }
	UEnum* Z_Construct_UEnum_PlayFab_ESubscriptionProviderStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubscriptionProviderStatus"), 0, Get_Z_Construct_UEnum_PlayFab_ESubscriptionProviderStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESubscriptionProviderStatus::pfenum_NoError", (int64)ESubscriptionProviderStatus::pfenum_NoError },
				{ "ESubscriptionProviderStatus::pfenum_Cancelled", (int64)ESubscriptionProviderStatus::pfenum_Cancelled },
				{ "ESubscriptionProviderStatus::pfenum_UnknownError", (int64)ESubscriptionProviderStatus::pfenum_UnknownError },
				{ "ESubscriptionProviderStatus::pfenum_BillingError", (int64)ESubscriptionProviderStatus::pfenum_BillingError },
				{ "ESubscriptionProviderStatus::pfenum_ProductUnavailable", (int64)ESubscriptionProviderStatus::pfenum_ProductUnavailable },
				{ "ESubscriptionProviderStatus::pfenum_CustomerDidNotAcceptPriceChange", (int64)ESubscriptionProviderStatus::pfenum_CustomerDidNotAcceptPriceChange },
				{ "ESubscriptionProviderStatus::pfenum_FreeTrial", (int64)ESubscriptionProviderStatus::pfenum_FreeTrial },
				{ "ESubscriptionProviderStatus::pfenum_PaymentPending", (int64)ESubscriptionProviderStatus::pfenum_PaymentPending },
				{ "ESubscriptionProviderStatus::pfenum_MAX", (int64)ESubscriptionProviderStatus::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ESubscriptionProviderStatus.h" },
				{ "pfenum_BillingError.Name", "ESubscriptionProviderStatus::pfenum_BillingError" },
				{ "pfenum_Cancelled.Name", "ESubscriptionProviderStatus::pfenum_Cancelled" },
				{ "pfenum_CustomerDidNotAcceptPriceChange.Name", "ESubscriptionProviderStatus::pfenum_CustomerDidNotAcceptPriceChange" },
				{ "pfenum_FreeTrial.Name", "ESubscriptionProviderStatus::pfenum_FreeTrial" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "ESubscriptionProviderStatus::pfenum_MAX" },
				{ "pfenum_NoError.Name", "ESubscriptionProviderStatus::pfenum_NoError" },
				{ "pfenum_PaymentPending.Name", "ESubscriptionProviderStatus::pfenum_PaymentPending" },
				{ "pfenum_ProductUnavailable.Name", "ESubscriptionProviderStatus::pfenum_ProductUnavailable" },
				{ "pfenum_UnknownError.Name", "ESubscriptionProviderStatus::pfenum_UnknownError" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"ESubscriptionProviderStatus",
				"ESubscriptionProviderStatus",
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
