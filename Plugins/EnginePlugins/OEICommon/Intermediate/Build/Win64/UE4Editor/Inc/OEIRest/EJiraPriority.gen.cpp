// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIRest/Public/EJiraPriority.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEJiraPriority() {}
// Cross Module References
	OEIREST_API UEnum* Z_Construct_UEnum_OEIRest_EJiraPriority();
	UPackage* Z_Construct_UPackage__Script_OEIRest();
// End Cross Module References
	static UEnum* EJiraPriority_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OEIRest_EJiraPriority, Z_Construct_UPackage__Script_OEIRest(), TEXT("EJiraPriority"));
		}
		return Singleton;
	}
	template<> OEIREST_API UEnum* StaticEnum<EJiraPriority>()
	{
		return EJiraPriority_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EJiraPriority(EJiraPriority_StaticEnum, TEXT("/Script/OEIRest"), TEXT("EJiraPriority"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OEIRest_EJiraPriority_Hash() { return 3525564732U; }
	UEnum* Z_Construct_UEnum_OEIRest_EJiraPriority()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OEIRest();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EJiraPriority"), 0, Get_Z_Construct_UEnum_OEIRest_EJiraPriority_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EJiraPriority::A1", (int64)EJiraPriority::A1 },
				{ "EJiraPriority::A2", (int64)EJiraPriority::A2 },
				{ "EJiraPriority::A3", (int64)EJiraPriority::A3 },
				{ "EJiraPriority::B", (int64)EJiraPriority::B },
				{ "EJiraPriority::C", (int64)EJiraPriority::C },
				{ "EJiraPriority::D", (int64)EJiraPriority::D },
				{ "EJiraPriority::Unknown", (int64)EJiraPriority::Unknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "A1.Name", "EJiraPriority::A1" },
				{ "A2.Name", "EJiraPriority::A2" },
				{ "A3.Name", "EJiraPriority::A3" },
				{ "B.Name", "EJiraPriority::B" },
				{ "C.Name", "EJiraPriority::C" },
				{ "D.Name", "EJiraPriority::D" },
				{ "ModuleRelativePath", "Public/EJiraPriority.h" },
				{ "Unknown.Name", "EJiraPriority::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OEIRest,
				nullptr,
				"EJiraPriority",
				"EJiraPriority",
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
