// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_ECurrency_generated_h
#error "ECurrency.generated.h already included, missing '#pragma once' in ECurrency.h"
#endif
#define PLAYFAB_ECurrency_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_ECurrency_h


#define FOREACH_ENUM_ECURRENCY(op) \
	op(ECurrency::pfenum_AED) \
	op(ECurrency::pfenum_AFN) \
	op(ECurrency::pfenum_ALL) \
	op(ECurrency::pfenum_AMD) \
	op(ECurrency::pfenum_ANG) \
	op(ECurrency::pfenum_AOA) \
	op(ECurrency::pfenum_ARS) \
	op(ECurrency::pfenum_AUD) \
	op(ECurrency::pfenum_AWG) \
	op(ECurrency::pfenum_AZN) \
	op(ECurrency::pfenum_BAM) \
	op(ECurrency::pfenum_BBD) \
	op(ECurrency::pfenum_BDT) \
	op(ECurrency::pfenum_BGN) \
	op(ECurrency::pfenum_BHD) \
	op(ECurrency::pfenum_BIF) \
	op(ECurrency::pfenum_BMD) \
	op(ECurrency::pfenum_BND) \
	op(ECurrency::pfenum_BOB) \
	op(ECurrency::pfenum_BRL) \
	op(ECurrency::pfenum_BSD) \
	op(ECurrency::pfenum_BTN) \
	op(ECurrency::pfenum_BWP) \
	op(ECurrency::pfenum_BYR) \
	op(ECurrency::pfenum_BZD) \
	op(ECurrency::pfenum_CAD) \
	op(ECurrency::pfenum_CDF) \
	op(ECurrency::pfenum_CHF) \
	op(ECurrency::pfenum_CLP) \
	op(ECurrency::pfenum_CNY) \
	op(ECurrency::pfenum_COP) \
	op(ECurrency::pfenum_CRC) \
	op(ECurrency::pfenum_CUC) \
	op(ECurrency::pfenum_CUP) \
	op(ECurrency::pfenum_CVE) \
	op(ECurrency::pfenum_CZK) \
	op(ECurrency::pfenum_DJF) \
	op(ECurrency::pfenum_DKK) \
	op(ECurrency::pfenum_DOP) \
	op(ECurrency::pfenum_DZD) \
	op(ECurrency::pfenum_EGP) \
	op(ECurrency::pfenum_ERN) \
	op(ECurrency::pfenum_ETB) \
	op(ECurrency::pfenum_EUR) \
	op(ECurrency::pfenum_FJD) \
	op(ECurrency::pfenum_FKP) \
	op(ECurrency::pfenum_GBP) \
	op(ECurrency::pfenum_GEL) \
	op(ECurrency::pfenum_GGP) \
	op(ECurrency::pfenum_GHS) \
	op(ECurrency::pfenum_GIP) \
	op(ECurrency::pfenum_GMD) \
	op(ECurrency::pfenum_GNF) \
	op(ECurrency::pfenum_GTQ) \
	op(ECurrency::pfenum_GYD) \
	op(ECurrency::pfenum_HKD) \
	op(ECurrency::pfenum_HNL) \
	op(ECurrency::pfenum_HRK) \
	op(ECurrency::pfenum_HTG) \
	op(ECurrency::pfenum_HUF) \
	op(ECurrency::pfenum_IDR) \
	op(ECurrency::pfenum_ILS) \
	op(ECurrency::pfenum_IMP) \
	op(ECurrency::pfenum_INR) \
	op(ECurrency::pfenum_IQD) \
	op(ECurrency::pfenum_IRR) \
	op(ECurrency::pfenum_ISK) \
	op(ECurrency::pfenum_JEP) \
	op(ECurrency::pfenum_JMD) \
	op(ECurrency::pfenum_JOD) \
	op(ECurrency::pfenum_JPY) \
	op(ECurrency::pfenum_KES) \
	op(ECurrency::pfenum_KGS) \
	op(ECurrency::pfenum_KHR) \
	op(ECurrency::pfenum_KMF) \
	op(ECurrency::pfenum_KPW) \
	op(ECurrency::pfenum_KRW) \
	op(ECurrency::pfenum_KWD) \
	op(ECurrency::pfenum_KYD) \
	op(ECurrency::pfenum_KZT) \
	op(ECurrency::pfenum_LAK) \
	op(ECurrency::pfenum_LBP) \
	op(ECurrency::pfenum_LKR) \
	op(ECurrency::pfenum_LRD) \
	op(ECurrency::pfenum_LSL) \
	op(ECurrency::pfenum_LYD) \
	op(ECurrency::pfenum_MAD) \
	op(ECurrency::pfenum_MDL) \
	op(ECurrency::pfenum_MGA) \
	op(ECurrency::pfenum_MKD) \
	op(ECurrency::pfenum_MMK) \
	op(ECurrency::pfenum_MNT) \
	op(ECurrency::pfenum_MOP) \
	op(ECurrency::pfenum_MRO) \
	op(ECurrency::pfenum_MUR) \
	op(ECurrency::pfenum_MVR) \
	op(ECurrency::pfenum_MWK) \
	op(ECurrency::pfenum_MXN) \
	op(ECurrency::pfenum_MYR) \
	op(ECurrency::pfenum_MZN) \
	op(ECurrency::pfenum_NAD) \
	op(ECurrency::pfenum_NGN) \
	op(ECurrency::pfenum_NIO) \
	op(ECurrency::pfenum_NOK) \
	op(ECurrency::pfenum_NPR) \
	op(ECurrency::pfenum_NZD) \
	op(ECurrency::pfenum_OMR) \
	op(ECurrency::pfenum_PAB) \
	op(ECurrency::pfenum_PEN) \
	op(ECurrency::pfenum_PGK) \
	op(ECurrency::pfenum_PHP) \
	op(ECurrency::pfenum_PKR) \
	op(ECurrency::pfenum_PLN) \
	op(ECurrency::pfenum_PYG) \
	op(ECurrency::pfenum_QAR) \
	op(ECurrency::pfenum_RON) \
	op(ECurrency::pfenum_RSD) \
	op(ECurrency::pfenum_RUB) \
	op(ECurrency::pfenum_RWF) \
	op(ECurrency::pfenum_SAR) \
	op(ECurrency::pfenum_SBD) \
	op(ECurrency::pfenum_SCR) \
	op(ECurrency::pfenum_SDG) \
	op(ECurrency::pfenum_SEK) \
	op(ECurrency::pfenum_SGD) \
	op(ECurrency::pfenum_SHP) \
	op(ECurrency::pfenum_SLL) \
	op(ECurrency::pfenum_SOS) \
	op(ECurrency::pfenum_SPL) \
	op(ECurrency::pfenum_SRD) \
	op(ECurrency::pfenum_STD) \
	op(ECurrency::pfenum_SVC) \
	op(ECurrency::pfenum_SYP) \
	op(ECurrency::pfenum_SZL) \
	op(ECurrency::pfenum_THB) \
	op(ECurrency::pfenum_TJS) \
	op(ECurrency::pfenum_TMT) \
	op(ECurrency::pfenum_TND) \
	op(ECurrency::pfenum_TOP) \
	op(ECurrency::pfenum_TRY) \
	op(ECurrency::pfenum_TTD) \
	op(ECurrency::pfenum_TVD) \
	op(ECurrency::pfenum_TWD) \
	op(ECurrency::pfenum_TZS) \
	op(ECurrency::pfenum_UAH) \
	op(ECurrency::pfenum_UGX) \
	op(ECurrency::pfenum_USD) \
	op(ECurrency::pfenum_UYU) \
	op(ECurrency::pfenum_UZS) \
	op(ECurrency::pfenum_VEF) \
	op(ECurrency::pfenum_VND) \
	op(ECurrency::pfenum_VUV) \
	op(ECurrency::pfenum_WST) \
	op(ECurrency::pfenum_XAF) \
	op(ECurrency::pfenum_XCD) \
	op(ECurrency::pfenum_XDR) \
	op(ECurrency::pfenum_XOF) \
	op(ECurrency::pfenum_XPF) \
	op(ECurrency::pfenum_YER) \
	op(ECurrency::pfenum_ZAR) \
	op(ECurrency::pfenum_ZMW) \
	op(ECurrency::pfenum_ZWD) 

enum class ECurrency;
template<> PLAYFAB_API UEnum* StaticEnum<ECurrency>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
