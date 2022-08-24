// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/EPersistenceType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPersistenceType() {}
// Cross Module References
	OEIFLOWCHARTS_API UEnum* Z_Construct_UEnum_OEIFlowCharts_EPersistenceType();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
// End Cross Module References
	static UEnum* EPersistenceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OEIFlowCharts_EPersistenceType, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("EPersistenceType"));
		}
		return Singleton;
	}
	template<> OEIFLOWCHARTS_API UEnum* StaticEnum<EPersistenceType>()
	{
		return EPersistenceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPersistenceType(EPersistenceType_StaticEnum, TEXT("/Script/OEIFlowCharts"), TEXT("EPersistenceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OEIFlowCharts_EPersistenceType_Hash() { return 1872971705U; }
	UEnum* Z_Construct_UEnum_OEIFlowCharts_EPersistenceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPersistenceType"), 0, Get_Z_Construct_UEnum_OEIFlowCharts_EPersistenceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPersistenceType::None", (int64)EPersistenceType::None },
				{ "EPersistenceType::OnceEver", (int64)EPersistenceType::OnceEver },
				{ "EPersistenceType::OncePerConversation", (int64)EPersistenceType::OncePerConversation },
				{ "EPersistenceType::MarkAsRead", (int64)EPersistenceType::MarkAsRead },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "MarkAsRead.Name", "EPersistenceType::MarkAsRead" },
				{ "ModuleRelativePath", "Public/EPersistenceType.h" },
				{ "None.Name", "EPersistenceType::None" },
				{ "OnceEver.Name", "EPersistenceType::OnceEver" },
				{ "OncePerConversation.Name", "EPersistenceType::OncePerConversation" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OEIFlowCharts,
				nullptr,
				"EPersistenceType",
				"EPersistenceType",
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
