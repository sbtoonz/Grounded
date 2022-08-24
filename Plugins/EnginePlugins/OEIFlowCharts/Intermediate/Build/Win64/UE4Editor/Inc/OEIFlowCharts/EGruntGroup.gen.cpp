// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/EGruntGroup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEGruntGroup() {}
// Cross Module References
	OEIFLOWCHARTS_API UEnum* Z_Construct_UEnum_OEIFlowCharts_EGruntGroup();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
// End Cross Module References
	static UEnum* EGruntGroup_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OEIFlowCharts_EGruntGroup, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("EGruntGroup"));
		}
		return Singleton;
	}
	template<> OEIFLOWCHARTS_API UEnum* StaticEnum<EGruntGroup>()
	{
		return EGruntGroup_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGruntGroup(EGruntGroup_StaticEnum, TEXT("/Script/OEIFlowCharts"), TEXT("EGruntGroup"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OEIFlowCharts_EGruntGroup_Hash() { return 3979087548U; }
	UEnum* Z_Construct_UEnum_OEIFlowCharts_EGruntGroup()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGruntGroup"), 0, Get_Z_Construct_UEnum_OEIFlowCharts_EGruntGroup_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGruntGroup::None", (int64)EGruntGroup::None },
				{ "EGruntGroup::Attack", (int64)EGruntGroup::Attack },
				{ "EGruntGroup::Death", (int64)EGruntGroup::Death },
				{ "EGruntGroup::HitReact", (int64)EGruntGroup::HitReact },
				{ "EGruntGroup::Movement", (int64)EGruntGroup::Movement },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attack.Name", "EGruntGroup::Attack" },
				{ "Death.Name", "EGruntGroup::Death" },
				{ "HitReact.Name", "EGruntGroup::HitReact" },
				{ "ModuleRelativePath", "Public/EGruntGroup.h" },
				{ "Movement.Name", "EGruntGroup::Movement" },
				{ "None.Name", "EGruntGroup::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OEIFlowCharts,
				nullptr,
				"EGruntGroup",
				"EGruntGroup",
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
