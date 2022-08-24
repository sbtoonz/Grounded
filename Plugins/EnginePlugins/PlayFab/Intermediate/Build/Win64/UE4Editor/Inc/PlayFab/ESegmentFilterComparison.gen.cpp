// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ESegmentFilterComparison.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESegmentFilterComparison() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ESegmentFilterComparison();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* ESegmentFilterComparison_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_ESegmentFilterComparison, Z_Construct_UPackage__Script_PlayFab(), TEXT("ESegmentFilterComparison"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<ESegmentFilterComparison>()
	{
		return ESegmentFilterComparison_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESegmentFilterComparison(ESegmentFilterComparison_StaticEnum, TEXT("/Script/PlayFab"), TEXT("ESegmentFilterComparison"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_ESegmentFilterComparison_Hash() { return 3685175905U; }
	UEnum* Z_Construct_UEnum_PlayFab_ESegmentFilterComparison()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESegmentFilterComparison"), 0, Get_Z_Construct_UEnum_PlayFab_ESegmentFilterComparison_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESegmentFilterComparison::pfenum_GreaterThan", (int64)ESegmentFilterComparison::pfenum_GreaterThan },
				{ "ESegmentFilterComparison::pfenum_LessThan", (int64)ESegmentFilterComparison::pfenum_LessThan },
				{ "ESegmentFilterComparison::pfenum_EqualTo", (int64)ESegmentFilterComparison::pfenum_EqualTo },
				{ "ESegmentFilterComparison::pfenum_NotEqualTo", (int64)ESegmentFilterComparison::pfenum_NotEqualTo },
				{ "ESegmentFilterComparison::pfenum_GreaterThanOrEqual", (int64)ESegmentFilterComparison::pfenum_GreaterThanOrEqual },
				{ "ESegmentFilterComparison::pfenum_LessThanOrEqual", (int64)ESegmentFilterComparison::pfenum_LessThanOrEqual },
				{ "ESegmentFilterComparison::pfenum_Exists", (int64)ESegmentFilterComparison::pfenum_Exists },
				{ "ESegmentFilterComparison::pfenum_Contains", (int64)ESegmentFilterComparison::pfenum_Contains },
				{ "ESegmentFilterComparison::pfenum_NotContains", (int64)ESegmentFilterComparison::pfenum_NotContains },
				{ "ESegmentFilterComparison::pfenum_MAX", (int64)ESegmentFilterComparison::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ESegmentFilterComparison.h" },
				{ "pfenum_Contains.Name", "ESegmentFilterComparison::pfenum_Contains" },
				{ "pfenum_EqualTo.Name", "ESegmentFilterComparison::pfenum_EqualTo" },
				{ "pfenum_Exists.Name", "ESegmentFilterComparison::pfenum_Exists" },
				{ "pfenum_GreaterThan.Name", "ESegmentFilterComparison::pfenum_GreaterThan" },
				{ "pfenum_GreaterThanOrEqual.Name", "ESegmentFilterComparison::pfenum_GreaterThanOrEqual" },
				{ "pfenum_LessThan.Name", "ESegmentFilterComparison::pfenum_LessThan" },
				{ "pfenum_LessThanOrEqual.Name", "ESegmentFilterComparison::pfenum_LessThanOrEqual" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "ESegmentFilterComparison::pfenum_MAX" },
				{ "pfenum_NotContains.Name", "ESegmentFilterComparison::pfenum_NotContains" },
				{ "pfenum_NotEqualTo.Name", "ESegmentFilterComparison::pfenum_NotEqualTo" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"ESegmentFilterComparison",
				"ESegmentFilterComparison",
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
