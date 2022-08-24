// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_ESegmentCurrency_generated_h
#error "ESegmentCurrency.generated.h already included, missing '#pragma once' in ESegmentCurrency.h"
#endif
#define PLAYFAB_ESegmentCurrency_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_ESegmentCurrency_h


#define FOREACH_ENUM_ESEGMENTCURRENCY(op) \
	op(ESegmentCurrency::pfenum_AED) \
	op(ESegmentCurrency::pfenum_AFN) \
	op(ESegmentCurrency::pfenum_ALL) \
	op(ESegmentCurrency::pfenum_AMD) \
	op(ESegmentCurrency::pfenum_ANG) \
	op(ESegmentCurrency::pfenum_AOA) \
	op(ESegmentCurrency::pfenum_ARS) \
	op(ESegmentCurrency::pfenum_AUD) \
	op(ESegmentCurrency::pfenum_AWG) \
	op(ESegmentCurrency::pfenum_AZN) \
	op(ESegmentCurrency::pfenum_BAM) \
	op(ESegmentCurrency::pfenum_BBD) \
	op(ESegmentCurrency::pfenum_BDT) \
	op(ESegmentCurrency::pfenum_BGN) \
	op(ESegmentCurrency::pfenum_BHD) \
	op(ESegmentCurrency::pfenum_BIF) \
	op(ESegmentCurrency::pfenum_BMD) \
	op(ESegmentCurrency::pfenum_BND) \
	op(ESegmentCurrency::pfenum_BOB) \
	op(ESegmentCurrency::pfenum_BRL) \
	op(ESegmentCurrency::pfenum_BSD) \
	op(ESegmentCurrency::pfenum_BTN) \
	op(ESegmentCurrency::pfenum_BWP) \
	op(ESegmentCurrency::pfenum_BYR) \
	op(ESegmentCurrency::pfenum_BZD) \
	op(ESegmentCurrency::pfenum_CAD) \
	op(ESegmentCurrency::pfenum_CDF) \
	op(ESegmentCurrency::pfenum_CHF) \
	op(ESegmentCurrency::pfenum_CLP) \
	op(ESegmentCurrency::pfenum_CNY) \
	op(ESegmentCurrency::pfenum_COP) \
	op(ESegmentCurrency::pfenum_CRC) \
	op(ESegmentCurrency::pfenum_CUC) \
	op(ESegmentCurrency::pfenum_CUP) \
	op(ESegmentCurrency::pfenum_CVE) \
	op(ESegmentCurrency::pfenum_CZK) \
	op(ESegmentCurrency::pfenum_DJF) \
	op(ESegmentCurrency::pfenum_DKK) \
	op(ESegmentCurrency::pfenum_DOP) \
	op(ESegmentCurrency::pfenum_DZD) \
	op(ESegmentCurrency::pfenum_EGP) \
	op(ESegmentCurrency::pfenum_ERN) \
	op(ESegmentCurrency::pfenum_ETB) \
	op(ESegmentCurrency::pfenum_EUR) \
	op(ESegmentCurrency::pfenum_FJD) \
	op(ESegmentCurrency::pfenum_FKP) \
	op(ESegmentCurrency::pfenum_GBP) \
	op(ESegmentCurrency::pfenum_GEL) \
	op(ESegmentCurrency::pfenum_GGP) \
	op(ESegmentCurrency::pfenum_GHS) \
	op(ESegmentCurrency::pfenum_GIP) \
	op(ESegmentCurrency::pfenum_GMD) \
	op(ESegmentCurrency::pfenum_GNF) \
	op(ESegmentCurrency::pfenum_GTQ) \
	op(ESegmentCurrency::pfenum_GYD) \
	op(ESegmentCurrency::pfenum_HKD) \
	op(ESegmentCurrency::pfenum_HNL) \
	op(ESegmentCurrency::pfenum_HRK) \
	op(ESegmentCurrency::pfenum_HTG) \
	op(ESegmentCurrency::pfenum_HUF) \
	op(ESegmentCurrency::pfenum_IDR) \
	op(ESegmentCurrency::pfenum_ILS) \
	op(ESegmentCurrency::pfenum_IMP) \
	op(ESegmentCurrency::pfenum_INR) \
	op(ESegmentCurrency::pfenum_IQD) \
	op(ESegmentCurrency::pfenum_IRR) \
	op(ESegmentCurrency::pfenum_ISK) \
	op(ESegmentCurrency::pfenum_JEP) \
	op(ESegmentCurrency::pfenum_JMD) \
	op(ESegmentCurrency::pfenum_JOD) \
	op(ESegmentCurrency::pfenum_JPY) \
	op(ESegmentCurrency::pfenum_KES) \
	op(ESegmentCurrency::pfenum_KGS) \
	op(ESegmentCurrency::pfenum_KHR) \
	op(ESegmentCurrency::pfenum_KMF) \
	op(ESegmentCurrency::pfenum_KPW) \
	op(ESegmentCurrency::pfenum_KRW) \
	op(ESegmentCurrency::pfenum_KWD) \
	op(ESegmentCurrency::pfenum_KYD) \
	op(ESegmentCurrency::pfenum_KZT) \
	op(ESegmentCurrency::pfenum_LAK) \
	op(ESegmentCurrency::pfenum_LBP) \
	op(ESegmentCurrency::pfenum_LKR) \
	op(ESegmentCurrency::pfenum_LRD) \
	op(ESegmentCurrency::pfenum_LSL) \
	op(ESegmentCurrency::pfenum_LYD) \
	op(ESegmentCurrency::pfenum_MAD) \
	op(ESegmentCurrency::pfenum_MDL) \
	op(ESegmentCurrency::pfenum_MGA) \
	op(ESegmentCurrency::pfenum_MKD) \
	op(ESegmentCurrency::pfenum_MMK) \
	op(ESegmentCurrency::pfenum_MNT) \
	op(ESegmentCurrency::pfenum_MOP) \
	op(ESegmentCurrency::pfenum_MRO) \
	op(ESegmentCurrency::pfenum_MUR) \
	op(ESegmentCurrency::pfenum_MVR) \
	op(ESegmentCurrency::pfenum_MWK) \
	op(ESegmentCurrency::pfenum_MXN) \
	op(ESegmentCurrency::pfenum_MYR) \
	op(ESegmentCurrency::pfenum_MZN) \
	op(ESegmentCurrency::pfenum_NAD) \
	op(ESegmentCurrency::pfenum_NGN) \
	op(ESegmentCurrency::pfenum_NIO) \
	op(ESegmentCurrency::pfenum_NOK) \
	op(ESegmentCurrency::pfenum_NPR) \
	op(ESegmentCurrency::pfenum_NZD) \
	op(ESegmentCurrency::pfenum_OMR) \
	op(ESegmentCurrency::pfenum_PAB) \
	op(ESegmentCurrency::pfenum_PEN) \
	op(ESegmentCurrency::pfenum_PGK) \
	op(ESegmentCurrency::pfenum_PHP) \
	op(ESegmentCurrency::pfenum_PKR) \
	op(ESegmentCurrency::pfenum_PLN) \
	op(ESegmentCurrency::pfenum_PYG) \
	op(ESegmentCurrency::pfenum_QAR) \
	op(ESegmentCurrency::pfenum_RON) \
	op(ESegmentCurrency::pfenum_RSD) \
	op(ESegmentCurrency::pfenum_RUB) \
	op(ESegmentCurrency::pfenum_RWF) \
	op(ESegmentCurrency::pfenum_SAR) \
	op(ESegmentCurrency::pfenum_SBD) \
	op(ESegmentCurrency::pfenum_SCR) \
	op(ESegmentCurrency::pfenum_SDG) \
	op(ESegmentCurrency::pfenum_SEK) \
	op(ESegmentCurrency::pfenum_SGD) \
	op(ESegmentCurrency::pfenum_SHP) \
	op(ESegmentCurrency::pfenum_SLL) \
	op(ESegmentCurrency::pfenum_SOS) \
	op(ESegmentCurrency::pfenum_SPL) \
	op(ESegmentCurrency::pfenum_SRD) \
	op(ESegmentCurrency::pfenum_STD) \
	op(ESegmentCurrency::pfenum_SVC) \
	op(ESegmentCurrency::pfenum_SYP) \
	op(ESegmentCurrency::pfenum_SZL) \
	op(ESegmentCurrency::pfenum_THB) \
	op(ESegmentCurrency::pfenum_TJS) \
	op(ESegmentCurrency::pfenum_TMT) \
	op(ESegmentCurrency::pfenum_TND) \
	op(ESegmentCurrency::pfenum_TOP) \
	op(ESegmentCurrency::pfenum_TRY) \
	op(ESegmentCurrency::pfenum_TTD) \
	op(ESegmentCurrency::pfenum_TVD) \
	op(ESegmentCurrency::pfenum_TWD) \
	op(ESegmentCurrency::pfenum_TZS) \
	op(ESegmentCurrency::pfenum_UAH) \
	op(ESegmentCurrency::pfenum_UGX) \
	op(ESegmentCurrency::pfenum_USD) \
	op(ESegmentCurrency::pfenum_UYU) \
	op(ESegmentCurrency::pfenum_UZS) \
	op(ESegmentCurrency::pfenum_VEF) \
	op(ESegmentCurrency::pfenum_VND) \
	op(ESegmentCurrency::pfenum_VUV) \
	op(ESegmentCurrency::pfenum_WST) \
	op(ESegmentCurrency::pfenum_XAF) \
	op(ESegmentCurrency::pfenum_XCD) \
	op(ESegmentCurrency::pfenum_XDR) \
	op(ESegmentCurrency::pfenum_XOF) \
	op(ESegmentCurrency::pfenum_XPF) \
	op(ESegmentCurrency::pfenum_YER) \
	op(ESegmentCurrency::pfenum_ZAR) \
	op(ESegmentCurrency::pfenum_ZMW) \
	op(ESegmentCurrency::pfenum_ZWD) 

enum class ESegmentCurrency;
template<> PLAYFAB_API UEnum* StaticEnum<ESegmentCurrency>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
