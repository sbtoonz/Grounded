// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYFAB_EStatisticResetIntervalOption_generated_h
#error "EStatisticResetIntervalOption.generated.h already included, missing '#pragma once' in EStatisticResetIntervalOption.h"
#endif
#define PLAYFAB_EStatisticResetIntervalOption_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_PlayFab_Source_PlayFab_Public_EStatisticResetIntervalOption_h


#define FOREACH_ENUM_ESTATISTICRESETINTERVALOPTION(op) \
	op(EStatisticResetIntervalOption::pfenum_Never) \
	op(EStatisticResetIntervalOption::pfenum_Hour) \
	op(EStatisticResetIntervalOption::pfenum_Day) \
	op(EStatisticResetIntervalOption::pfenum_Week) \
	op(EStatisticResetIntervalOption::pfenum_Month) 

enum class EStatisticResetIntervalOption : uint8;
template<> PLAYFAB_API UEnum* StaticEnum<EStatisticResetIntervalOption>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
