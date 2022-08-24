// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/ECompletionStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECompletionStatus() {}
// Cross Module References
	OEIFLOWCHARTS_API UEnum* Z_Construct_UEnum_OEIFlowCharts_ECompletionStatus();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
// End Cross Module References
	static UEnum* ECompletionStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OEIFlowCharts_ECompletionStatus, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("ECompletionStatus"));
		}
		return Singleton;
	}
	template<> OEIFLOWCHARTS_API UEnum* StaticEnum<ECompletionStatus>()
	{
		return ECompletionStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECompletionStatus(ECompletionStatus_StaticEnum, TEXT("/Script/OEIFlowCharts"), TEXT("ECompletionStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OEIFlowCharts_ECompletionStatus_Hash() { return 2005227642U; }
	UEnum* Z_Construct_UEnum_OEIFlowCharts_ECompletionStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECompletionStatus"), 0, Get_Z_Construct_UEnum_OEIFlowCharts_ECompletionStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECompletionStatus::Invalid", (int64)ECompletionStatus::Invalid },
				{ "ECompletionStatus::NotStarted", (int64)ECompletionStatus::NotStarted },
				{ "ECompletionStatus::InProgress", (int64)ECompletionStatus::InProgress },
				{ "ECompletionStatus::Completed", (int64)ECompletionStatus::Completed },
				{ "ECompletionStatus::Failed", (int64)ECompletionStatus::Failed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Completed.Name", "ECompletionStatus::Completed" },
				{ "Failed.Name", "ECompletionStatus::Failed" },
				{ "InProgress.Name", "ECompletionStatus::InProgress" },
				{ "Invalid.Name", "ECompletionStatus::Invalid" },
				{ "ModuleRelativePath", "Public/ECompletionStatus.h" },
				{ "NotStarted.Name", "ECompletionStatus::NotStarted" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OEIFlowCharts,
				nullptr,
				"ECompletionStatus",
				"ECompletionStatus",
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
