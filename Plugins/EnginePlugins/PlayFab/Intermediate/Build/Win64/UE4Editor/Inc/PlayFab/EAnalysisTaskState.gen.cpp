// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/EAnalysisTaskState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAnalysisTaskState() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EAnalysisTaskState();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* EAnalysisTaskState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EAnalysisTaskState, Z_Construct_UPackage__Script_PlayFab(), TEXT("EAnalysisTaskState"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EAnalysisTaskState>()
	{
		return EAnalysisTaskState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAnalysisTaskState(EAnalysisTaskState_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EAnalysisTaskState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EAnalysisTaskState_Hash() { return 1621525964U; }
	UEnum* Z_Construct_UEnum_PlayFab_EAnalysisTaskState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAnalysisTaskState"), 0, Get_Z_Construct_UEnum_PlayFab_EAnalysisTaskState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAnalysisTaskState::pfenum_Waiting", (int64)EAnalysisTaskState::pfenum_Waiting },
				{ "EAnalysisTaskState::pfenum_ReadyForSubmission", (int64)EAnalysisTaskState::pfenum_ReadyForSubmission },
				{ "EAnalysisTaskState::pfenum_SubmittingToPipeline", (int64)EAnalysisTaskState::pfenum_SubmittingToPipeline },
				{ "EAnalysisTaskState::pfenum_Running", (int64)EAnalysisTaskState::pfenum_Running },
				{ "EAnalysisTaskState::pfenum_Completed", (int64)EAnalysisTaskState::pfenum_Completed },
				{ "EAnalysisTaskState::pfenum_Failed", (int64)EAnalysisTaskState::pfenum_Failed },
				{ "EAnalysisTaskState::pfenum_Canceled", (int64)EAnalysisTaskState::pfenum_Canceled },
				{ "EAnalysisTaskState::pfenum_MAX", (int64)EAnalysisTaskState::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EAnalysisTaskState.h" },
				{ "pfenum_Canceled.Name", "EAnalysisTaskState::pfenum_Canceled" },
				{ "pfenum_Completed.Name", "EAnalysisTaskState::pfenum_Completed" },
				{ "pfenum_Failed.Name", "EAnalysisTaskState::pfenum_Failed" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "EAnalysisTaskState::pfenum_MAX" },
				{ "pfenum_ReadyForSubmission.Name", "EAnalysisTaskState::pfenum_ReadyForSubmission" },
				{ "pfenum_Running.Name", "EAnalysisTaskState::pfenum_Running" },
				{ "pfenum_SubmittingToPipeline.Name", "EAnalysisTaskState::pfenum_SubmittingToPipeline" },
				{ "pfenum_Waiting.Name", "EAnalysisTaskState::pfenum_Waiting" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EAnalysisTaskState",
				"EAnalysisTaskState",
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