// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIScripting/Public/ELogicalOperator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELogicalOperator() {}
// Cross Module References
	OEISCRIPTING_API UEnum* Z_Construct_UEnum_OEIScripting_ELogicalOperator();
	UPackage* Z_Construct_UPackage__Script_OEIScripting();
// End Cross Module References
	static UEnum* ELogicalOperator_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OEIScripting_ELogicalOperator, Z_Construct_UPackage__Script_OEIScripting(), TEXT("ELogicalOperator"));
		}
		return Singleton;
	}
	template<> OEISCRIPTING_API UEnum* StaticEnum<ELogicalOperator>()
	{
		return ELogicalOperator_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELogicalOperator(ELogicalOperator_StaticEnum, TEXT("/Script/OEIScripting"), TEXT("ELogicalOperator"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OEIScripting_ELogicalOperator_Hash() { return 3173774283U; }
	UEnum* Z_Construct_UEnum_OEIScripting_ELogicalOperator()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OEIScripting();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELogicalOperator"), 0, Get_Z_Construct_UEnum_OEIScripting_ELogicalOperator_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELogicalOperator::And", (int64)ELogicalOperator::And },
				{ "ELogicalOperator::Or", (int64)ELogicalOperator::Or },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "And.Name", "ELogicalOperator::And" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ELogicalOperator.h" },
				{ "Or.Name", "ELogicalOperator::Or" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OEIScripting,
				nullptr,
				"ELogicalOperator",
				"ELogicalOperator",
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
