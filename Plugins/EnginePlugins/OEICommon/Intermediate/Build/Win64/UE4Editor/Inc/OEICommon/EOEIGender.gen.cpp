// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEICommon/Public/EOEIGender.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOEIGender() {}
// Cross Module References
	OEICOMMON_API UEnum* Z_Construct_UEnum_OEICommon_EOEIGender();
	UPackage* Z_Construct_UPackage__Script_OEICommon();
// End Cross Module References
	static UEnum* EOEIGender_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OEICommon_EOEIGender, Z_Construct_UPackage__Script_OEICommon(), TEXT("EOEIGender"));
		}
		return Singleton;
	}
	template<> OEICOMMON_API UEnum* StaticEnum<EOEIGender>()
	{
		return EOEIGender_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOEIGender(EOEIGender_StaticEnum, TEXT("/Script/OEICommon"), TEXT("EOEIGender"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OEICommon_EOEIGender_Hash() { return 4076936885U; }
	UEnum* Z_Construct_UEnum_OEICommon_EOEIGender()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OEICommon();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOEIGender"), 0, Get_Z_Construct_UEnum_OEICommon_EOEIGender_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOEIGender::Male", (int64)EOEIGender::Male },
				{ "EOEIGender::Female", (int64)EOEIGender::Female },
				{ "EOEIGender::Neuter", (int64)EOEIGender::Neuter },
				{ "EOEIGender::GenderNeutral", (int64)EOEIGender::GenderNeutral },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Female.Name", "EOEIGender::Female" },
				{ "GenderNeutral.Name", "EOEIGender::GenderNeutral" },
				{ "Male.Name", "EOEIGender::Male" },
				{ "ModuleRelativePath", "Public/EOEIGender.h" },
				{ "Neuter.Name", "EOEIGender::Neuter" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OEICommon,
				nullptr,
				"EOEIGender",
				"EOEIGender",
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
