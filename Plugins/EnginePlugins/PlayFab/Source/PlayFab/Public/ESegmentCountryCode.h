#pragma once
#include "CoreMinimal.h"
#include "ESegmentCountryCode.generated.h"

UENUM()
enum class ESegmentCountryCode {
    pfenum_AF,
    pfenum_AX,
    pfenum_AL,
    pfenum_DZ,
    pfenum_AS,
    pfenum_AD,
    pfenum_AO,
    pfenum_AI,
    pfenum_AQ,
    pfenum_AG,
    pfenum_AR,
    pfenum_AM,
    pfenum_AW,
    pfenum_AU,
    pfenum_AT,
    pfenum_AZ,
    pfenum_BS,
    pfenum_BH,
    pfenum_BD,
    pfenum_BB,
    pfenum_BY,
    pfenum_BE,
    pfenum_BZ,
    pfenum_BJ,
    pfenum_BM,
    pfenum_BT,
    pfenum_BO,
    pfenum_BQ,
    pfenum_BA,
    pfenum_BW,
    pfenum_BV,
    pfenum_BR,
    pfenum_IO,
    pfenum_BN,
    pfenum_BG,
    pfenum_BF,
    pfenum_BI,
    pfenum_KH,
    pfenum_CM,
    pfenum_CA,
    pfenum_CV,
    pfenum_KY,
    pfenum_CF,
    pfenum_TD,
    pfenum_CL,
    pfenum_CN,
    pfenum_CX,
    pfenum_CC,
    pfenum_CO,
    pfenum_KM,
    pfenum_CG,
    pfenum_CD,
    pfenum_CK,
    pfenum_CR,
    pfenum_CI,
    pfenum_HR,
    pfenum_CU,
    pfenum_CW,
    pfenum_CY,
    pfenum_CZ,
    pfenum_DK,
    pfenum_DJ,
    pfenum_DM,
    pfenum_DO,
    pfenum_EC,
    pfenum_EG,
    pfenum_SV,
    pfenum_GQ,
    pfenum_ER,
    pfenum_EE,
    pfenum_ET,
    pfenum_FK,
    pfenum_FO,
    pfenum_FJ,
    pfenum_FI,
    pfenum_FR,
    pfenum_GF,
    pfenum_PF,
    pfenum_TF,
    pfenum_GA,
    pfenum_GM,
    pfenum_GE,
    pfenum_DE,
    pfenum_GH,
    pfenum_GI,
    pfenum_GR,
    pfenum_GL,
    pfenum_GD,
    pfenum_GP,
    pfenum_GU,
    pfenum_GT,
    pfenum_GG,
    pfenum_GN,
    pfenum_GW,
    pfenum_GY,
    pfenum_HT,
    pfenum_HM,
    pfenum_VA,
    pfenum_HN,
    pfenum_HK,
    pfenum_HU,
    pfenum_IS,
    pfenum_IN,
    pfenum_ID,
    pfenum_IR,
    pfenum_IQ,
    pfenum_IE,
    pfenum_IM,
    pfenum_IL,
    pfenum_IT,
    pfenum_JM,
    pfenum_JP,
    pfenum_JE,
    pfenum_JO,
    pfenum_KZ,
    pfenum_KE,
    pfenum_KI,
    pfenum_KP,
    pfenum_KR,
    pfenum_KW,
    pfenum_KG,
    pfenum_LA,
    pfenum_LV,
    pfenum_LB,
    pfenum_LS,
    pfenum_LR,
    pfenum_LY,
    pfenum_LI,
    pfenum_LT,
    pfenum_LU,
    pfenum_MO,
    pfenum_MK,
    pfenum_MG,
    pfenum_MW,
    pfenum_MY,
    pfenum_MV,
    pfenum_ML,
    pfenum_MT,
    pfenum_MH,
    pfenum_MQ,
    pfenum_MR,
    pfenum_MU,
    pfenum_YT,
    pfenum_MX,
    pfenum_FM,
    pfenum_MD,
    pfenum_MC,
    pfenum_MN,
    pfenum_ME,
    pfenum_MS,
    pfenum_MA,
    pfenum_MZ,
    pfenum_MM,
    pfenum_NA,
    pfenum_NR,
    pfenum_NP,
    pfenum_NL,
    pfenum_NC,
    pfenum_NZ,
    pfenum_NI,
    pfenum_NE,
    pfenum_NG,
    pfenum_NU,
    pfenum_NF,
    pfenum_MP,
    pfenum_NO,
    pfenum_OM,
    pfenum_PK,
    pfenum_PW,
    pfenum_PS,
    pfenum_PA,
    pfenum_PG,
    pfenum_PY,
    pfenum_PE,
    pfenum_PH,
    pfenum_PN,
    pfenum_PL,
    pfenum_PT,
    pfenum_PR,
    pfenum_QA,
    pfenum_RE,
    pfenum_RO,
    pfenum_RU,
    pfenum_RW,
    pfenum_BL,
    pfenum_SH,
    pfenum_KN,
    pfenum_LC,
    pfenum_MF,
    pfenum_PM,
    pfenum_VC,
    pfenum_WS,
    pfenum_SM,
    pfenum_ST,
    pfenum_SA,
    pfenum_SN,
    pfenum_RS,
    pfenum_SC,
    pfenum_SL,
    pfenum_SG,
    pfenum_SX,
    pfenum_SK,
    pfenum_SI,
    pfenum_SB,
    pfenum_SO,
    pfenum_ZA,
    pfenum_GS,
    pfenum_SS,
    pfenum_ES,
    pfenum_LK,
    pfenum_SD,
    pfenum_SR,
    pfenum_SJ,
    pfenum_SZ,
    pfenum_SE,
    pfenum_CH,
    pfenum_SY,
    pfenum_TW,
    pfenum_TJ,
    pfenum_TZ,
    pfenum_TH,
    pfenum_TL,
    pfenum_TG,
    pfenum_TK,
    pfenum_TO,
    pfenum_TT,
    pfenum_TN,
    pfenum_TR,
    pfenum_TM,
    pfenum_TC,
    pfenum_TV,
    pfenum_UG,
    pfenum_UA,
    pfenum_AE,
    pfenum_GB,
    pfenum_US,
    pfenum_UM,
    pfenum_UY,
    pfenum_UZ,
    pfenum_VU,
    pfenum_VE,
    pfenum_VN,
    pfenum_VG,
    pfenum_VI,
    pfenum_WF,
    pfenum_EH,
    pfenum_YE,
    pfenum_ZM,
    pfenum_ZW,
    pfenum_MAX UMETA(Hidden),
};

