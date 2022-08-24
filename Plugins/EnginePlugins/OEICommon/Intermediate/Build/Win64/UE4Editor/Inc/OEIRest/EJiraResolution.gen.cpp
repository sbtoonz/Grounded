// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIRest/Public/EJiraResolution.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEJiraResolution() {}
// Cross Module References
	OEIREST_API UEnum* Z_Construct_UEnum_OEIRest_EJiraResolution();
	UPackage* Z_Construct_UPackage__Script_OEIRest();
// End Cross Module References
	static UEnum* EJiraResolution_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OEIRest_EJiraResolution, Z_Construct_UPackage__Script_OEIRest(), TEXT("EJiraResolution"));
		}
		return Singleton;
	}
	template<> OEIREST_API UEnum* StaticEnum<EJiraResolution>()
	{
		return EJiraResolution_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EJiraResolution(EJiraResolution_StaticEnum, TEXT("/Script/OEIRest"), TEXT("EJiraResolution"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OEIRest_EJiraResolution_Hash() { return 1788764882U; }
	UEnum* Z_Construct_UEnum_OEIRest_EJiraResolution()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OEIRest();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EJiraResolution"), 0, Get_Z_Construct_UEnum_OEIRest_EJiraResolution_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EJiraResolution::Fixed", (int64)EJiraResolution::Fixed },
				{ "EJiraResolution::WontFix", (int64)EJiraResolution::WontFix },
				{ "EJiraResolution::Duplicate", (int64)EJiraResolution::Duplicate },
				{ "EJiraResolution::Incomplete", (int64)EJiraResolution::Incomplete },
				{ "EJiraResolution::CannotReproduce", (int64)EJiraResolution::CannotReproduce },
				{ "EJiraResolution::Done", (int64)EJiraResolution::Done },
				{ "EJiraResolution::Waived", (int64)EJiraResolution::Waived },
				{ "EJiraResolution::Cut", (int64)EJiraResolution::Cut },
				{ "EJiraResolution::Accepted", (int64)EJiraResolution::Accepted },
				{ "EJiraResolution::Rejected", (int64)EJiraResolution::Rejected },
				{ "EJiraResolution::WontDo", (int64)EJiraResolution::WontDo },
				{ "EJiraResolution::Declined", (int64)EJiraResolution::Declined },
				{ "EJiraResolution::Completed", (int64)EJiraResolution::Completed },
				{ "EJiraResolution::Reopened", (int64)EJiraResolution::Reopened },
				{ "EJiraResolution::Pass", (int64)EJiraResolution::Pass },
				{ "EJiraResolution::Fail", (int64)EJiraResolution::Fail },
				{ "EJiraResolution::Submittable", (int64)EJiraResolution::Submittable },
				{ "EJiraResolution::Unknown", (int64)EJiraResolution::Unknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Accepted.Name", "EJiraResolution::Accepted" },
				{ "CannotReproduce.Name", "EJiraResolution::CannotReproduce" },
				{ "Completed.Name", "EJiraResolution::Completed" },
				{ "Cut.Name", "EJiraResolution::Cut" },
				{ "Declined.Name", "EJiraResolution::Declined" },
				{ "Done.Name", "EJiraResolution::Done" },
				{ "Duplicate.Name", "EJiraResolution::Duplicate" },
				{ "Fail.Name", "EJiraResolution::Fail" },
				{ "Fixed.Name", "EJiraResolution::Fixed" },
				{ "Incomplete.Name", "EJiraResolution::Incomplete" },
				{ "ModuleRelativePath", "Public/EJiraResolution.h" },
				{ "Pass.Name", "EJiraResolution::Pass" },
				{ "Rejected.Name", "EJiraResolution::Rejected" },
				{ "Reopened.Name", "EJiraResolution::Reopened" },
				{ "Submittable.Name", "EJiraResolution::Submittable" },
				{ "Unknown.Name", "EJiraResolution::Unknown" },
				{ "Waived.Name", "EJiraResolution::Waived" },
				{ "WontDo.Name", "EJiraResolution::WontDo" },
				{ "WontFix.Name", "EJiraResolution::WontFix" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OEIRest,
				nullptr,
				"EJiraResolution",
				"EJiraResolution",
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
