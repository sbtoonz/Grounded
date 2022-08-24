// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/EQuestionNodeDisplayType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEQuestionNodeDisplayType() {}
// Cross Module References
	OEIFLOWCHARTS_API UEnum* Z_Construct_UEnum_OEIFlowCharts_EQuestionNodeDisplayType();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
// End Cross Module References
	static UEnum* EQuestionNodeDisplayType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OEIFlowCharts_EQuestionNodeDisplayType, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("EQuestionNodeDisplayType"));
		}
		return Singleton;
	}
	template<> OEIFLOWCHARTS_API UEnum* StaticEnum<EQuestionNodeDisplayType>()
	{
		return EQuestionNodeDisplayType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EQuestionNodeDisplayType(EQuestionNodeDisplayType_StaticEnum, TEXT("/Script/OEIFlowCharts"), TEXT("EQuestionNodeDisplayType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OEIFlowCharts_EQuestionNodeDisplayType_Hash() { return 1278881477U; }
	UEnum* Z_Construct_UEnum_OEIFlowCharts_EQuestionNodeDisplayType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EQuestionNodeDisplayType"), 0, Get_Z_Construct_UEnum_OEIFlowCharts_EQuestionNodeDisplayType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EQuestionNodeDisplayType::ShowOnce", (int64)EQuestionNodeDisplayType::ShowOnce },
				{ "EQuestionNodeDisplayType::ShowAlways", (int64)EQuestionNodeDisplayType::ShowAlways },
				{ "EQuestionNodeDisplayType::ShowNever", (int64)EQuestionNodeDisplayType::ShowNever },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EQuestionNodeDisplayType.h" },
				{ "ShowAlways.Name", "EQuestionNodeDisplayType::ShowAlways" },
				{ "ShowNever.Name", "EQuestionNodeDisplayType::ShowNever" },
				{ "ShowOnce.Name", "EQuestionNodeDisplayType::ShowOnce" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OEIFlowCharts,
				nullptr,
				"EQuestionNodeDisplayType",
				"EQuestionNodeDisplayType",
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
