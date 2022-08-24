// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/EAzureVmSize.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAzureVmSize() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EAzureVmSize();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* EAzureVmSize_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EAzureVmSize, Z_Construct_UPackage__Script_PlayFab(), TEXT("EAzureVmSize"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EAzureVmSize>()
	{
		return EAzureVmSize_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAzureVmSize(EAzureVmSize_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EAzureVmSize"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EAzureVmSize_Hash() { return 195109849U; }
	UEnum* Z_Construct_UEnum_PlayFab_EAzureVmSize()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAzureVmSize"), 0, Get_Z_Construct_UEnum_PlayFab_EAzureVmSize_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAzureVmSize::pfenum_Standard_A1", (int64)EAzureVmSize::pfenum_Standard_A1 },
				{ "EAzureVmSize::pfenum_Standard_A2", (int64)EAzureVmSize::pfenum_Standard_A2 },
				{ "EAzureVmSize::pfenum_Standard_A3", (int64)EAzureVmSize::pfenum_Standard_A3 },
				{ "EAzureVmSize::pfenum_Standard_A4", (int64)EAzureVmSize::pfenum_Standard_A4 },
				{ "EAzureVmSize::pfenum_Standard_A1_v2", (int64)EAzureVmSize::pfenum_Standard_A1_v2 },
				{ "EAzureVmSize::pfenum_Standard_A2_v2", (int64)EAzureVmSize::pfenum_Standard_A2_v2 },
				{ "EAzureVmSize::pfenum_Standard_A4_v2", (int64)EAzureVmSize::pfenum_Standard_A4_v2 },
				{ "EAzureVmSize::pfenum_Standard_A8_v2", (int64)EAzureVmSize::pfenum_Standard_A8_v2 },
				{ "EAzureVmSize::pfenum_Standard_D1_v2", (int64)EAzureVmSize::pfenum_Standard_D1_v2 },
				{ "EAzureVmSize::pfenum_Standard_D2_v2", (int64)EAzureVmSize::pfenum_Standard_D2_v2 },
				{ "EAzureVmSize::pfenum_Standard_D3_v2", (int64)EAzureVmSize::pfenum_Standard_D3_v2 },
				{ "EAzureVmSize::pfenum_Standard_D4_v2", (int64)EAzureVmSize::pfenum_Standard_D4_v2 },
				{ "EAzureVmSize::pfenum_Standard_D5_v2", (int64)EAzureVmSize::pfenum_Standard_D5_v2 },
				{ "EAzureVmSize::pfenum_Standard_D2_v3", (int64)EAzureVmSize::pfenum_Standard_D2_v3 },
				{ "EAzureVmSize::pfenum_Standard_D4_v3", (int64)EAzureVmSize::pfenum_Standard_D4_v3 },
				{ "EAzureVmSize::pfenum_Standard_D8_v3", (int64)EAzureVmSize::pfenum_Standard_D8_v3 },
				{ "EAzureVmSize::pfenum_Standard_D16_v3", (int64)EAzureVmSize::pfenum_Standard_D16_v3 },
				{ "EAzureVmSize::pfenum_Standard_F1", (int64)EAzureVmSize::pfenum_Standard_F1 },
				{ "EAzureVmSize::pfenum_Standard_F2", (int64)EAzureVmSize::pfenum_Standard_F2 },
				{ "EAzureVmSize::pfenum_Standard_F4", (int64)EAzureVmSize::pfenum_Standard_F4 },
				{ "EAzureVmSize::pfenum_Standard_F8", (int64)EAzureVmSize::pfenum_Standard_F8 },
				{ "EAzureVmSize::pfenum_Standard_F16", (int64)EAzureVmSize::pfenum_Standard_F16 },
				{ "EAzureVmSize::pfenum_Standard_F2s_v2", (int64)EAzureVmSize::pfenum_Standard_F2s_v2 },
				{ "EAzureVmSize::pfenum_Standard_F4s_v2", (int64)EAzureVmSize::pfenum_Standard_F4s_v2 },
				{ "EAzureVmSize::pfenum_Standard_F8s_v2", (int64)EAzureVmSize::pfenum_Standard_F8s_v2 },
				{ "EAzureVmSize::pfenum_Standard_F16s_v2", (int64)EAzureVmSize::pfenum_Standard_F16s_v2 },
				{ "EAzureVmSize::pfenum_Standard_D2as_v4", (int64)EAzureVmSize::pfenum_Standard_D2as_v4 },
				{ "EAzureVmSize::pfenum_Standard_D4as_v4", (int64)EAzureVmSize::pfenum_Standard_D4as_v4 },
				{ "EAzureVmSize::pfenum_Standard_D8as_v4", (int64)EAzureVmSize::pfenum_Standard_D8as_v4 },
				{ "EAzureVmSize::pfenum_Standard_D16as_v4", (int64)EAzureVmSize::pfenum_Standard_D16as_v4 },
				{ "EAzureVmSize::pfenum_Standard_D2a_v4", (int64)EAzureVmSize::pfenum_Standard_D2a_v4 },
				{ "EAzureVmSize::pfenum_Standard_D4a_v4", (int64)EAzureVmSize::pfenum_Standard_D4a_v4 },
				{ "EAzureVmSize::pfenum_Standard_D8a_v4", (int64)EAzureVmSize::pfenum_Standard_D8a_v4 },
				{ "EAzureVmSize::pfenum_Standard_D16a_v4", (int64)EAzureVmSize::pfenum_Standard_D16a_v4 },
				{ "EAzureVmSize::pfenum_Standard_E2a_v4", (int64)EAzureVmSize::pfenum_Standard_E2a_v4 },
				{ "EAzureVmSize::pfenum_Standard_E4a_v4", (int64)EAzureVmSize::pfenum_Standard_E4a_v4 },
				{ "EAzureVmSize::pfenum_Standard_E8a_v4", (int64)EAzureVmSize::pfenum_Standard_E8a_v4 },
				{ "EAzureVmSize::pfenum_Standard_E16a_v4", (int64)EAzureVmSize::pfenum_Standard_E16a_v4 },
				{ "EAzureVmSize::pfenum_Standard_E2as_v4", (int64)EAzureVmSize::pfenum_Standard_E2as_v4 },
				{ "EAzureVmSize::pfenum_Standard_E4as_v4", (int64)EAzureVmSize::pfenum_Standard_E4as_v4 },
				{ "EAzureVmSize::pfenum_Standard_E8as_v4", (int64)EAzureVmSize::pfenum_Standard_E8as_v4 },
				{ "EAzureVmSize::pfenum_Standard_E16as_v4", (int64)EAzureVmSize::pfenum_Standard_E16as_v4 },
				{ "EAzureVmSize::pfenum_Standard_D2s_v3", (int64)EAzureVmSize::pfenum_Standard_D2s_v3 },
				{ "EAzureVmSize::pfenum_Standard_D4s_v3", (int64)EAzureVmSize::pfenum_Standard_D4s_v3 },
				{ "EAzureVmSize::pfenum_Standard_D8s_v3", (int64)EAzureVmSize::pfenum_Standard_D8s_v3 },
				{ "EAzureVmSize::pfenum_Standard_D16s_v3", (int64)EAzureVmSize::pfenum_Standard_D16s_v3 },
				{ "EAzureVmSize::pfenum_Standard_DS1_v2", (int64)EAzureVmSize::pfenum_Standard_DS1_v2 },
				{ "EAzureVmSize::pfenum_Standard_DS2_v2", (int64)EAzureVmSize::pfenum_Standard_DS2_v2 },
				{ "EAzureVmSize::pfenum_Standard_DS3_v2", (int64)EAzureVmSize::pfenum_Standard_DS3_v2 },
				{ "EAzureVmSize::pfenum_Standard_DS4_v2", (int64)EAzureVmSize::pfenum_Standard_DS4_v2 },
				{ "EAzureVmSize::pfenum_Standard_DS5_v2", (int64)EAzureVmSize::pfenum_Standard_DS5_v2 },
				{ "EAzureVmSize::pfenum_Standard_MAX", (int64)EAzureVmSize::pfenum_Standard_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EAzureVmSize.h" },
				{ "pfenum_Standard_A1.Name", "EAzureVmSize::pfenum_Standard_A1" },
				{ "pfenum_Standard_A1_v2.Name", "EAzureVmSize::pfenum_Standard_A1_v2" },
				{ "pfenum_Standard_A2.Name", "EAzureVmSize::pfenum_Standard_A2" },
				{ "pfenum_Standard_A2_v2.Name", "EAzureVmSize::pfenum_Standard_A2_v2" },
				{ "pfenum_Standard_A3.Name", "EAzureVmSize::pfenum_Standard_A3" },
				{ "pfenum_Standard_A4.Name", "EAzureVmSize::pfenum_Standard_A4" },
				{ "pfenum_Standard_A4_v2.Name", "EAzureVmSize::pfenum_Standard_A4_v2" },
				{ "pfenum_Standard_A8_v2.Name", "EAzureVmSize::pfenum_Standard_A8_v2" },
				{ "pfenum_Standard_D16_v3.Name", "EAzureVmSize::pfenum_Standard_D16_v3" },
				{ "pfenum_Standard_D16a_v4.Name", "EAzureVmSize::pfenum_Standard_D16a_v4" },
				{ "pfenum_Standard_D16as_v4.Name", "EAzureVmSize::pfenum_Standard_D16as_v4" },
				{ "pfenum_Standard_D16s_v3.Name", "EAzureVmSize::pfenum_Standard_D16s_v3" },
				{ "pfenum_Standard_D1_v2.Name", "EAzureVmSize::pfenum_Standard_D1_v2" },
				{ "pfenum_Standard_D2_v2.Name", "EAzureVmSize::pfenum_Standard_D2_v2" },
				{ "pfenum_Standard_D2_v3.Name", "EAzureVmSize::pfenum_Standard_D2_v3" },
				{ "pfenum_Standard_D2a_v4.Name", "EAzureVmSize::pfenum_Standard_D2a_v4" },
				{ "pfenum_Standard_D2as_v4.Name", "EAzureVmSize::pfenum_Standard_D2as_v4" },
				{ "pfenum_Standard_D2s_v3.Name", "EAzureVmSize::pfenum_Standard_D2s_v3" },
				{ "pfenum_Standard_D3_v2.Name", "EAzureVmSize::pfenum_Standard_D3_v2" },
				{ "pfenum_Standard_D4_v2.Name", "EAzureVmSize::pfenum_Standard_D4_v2" },
				{ "pfenum_Standard_D4_v3.Name", "EAzureVmSize::pfenum_Standard_D4_v3" },
				{ "pfenum_Standard_D4a_v4.Name", "EAzureVmSize::pfenum_Standard_D4a_v4" },
				{ "pfenum_Standard_D4as_v4.Name", "EAzureVmSize::pfenum_Standard_D4as_v4" },
				{ "pfenum_Standard_D4s_v3.Name", "EAzureVmSize::pfenum_Standard_D4s_v3" },
				{ "pfenum_Standard_D5_v2.Name", "EAzureVmSize::pfenum_Standard_D5_v2" },
				{ "pfenum_Standard_D8_v3.Name", "EAzureVmSize::pfenum_Standard_D8_v3" },
				{ "pfenum_Standard_D8a_v4.Name", "EAzureVmSize::pfenum_Standard_D8a_v4" },
				{ "pfenum_Standard_D8as_v4.Name", "EAzureVmSize::pfenum_Standard_D8as_v4" },
				{ "pfenum_Standard_D8s_v3.Name", "EAzureVmSize::pfenum_Standard_D8s_v3" },
				{ "pfenum_Standard_DS1_v2.Name", "EAzureVmSize::pfenum_Standard_DS1_v2" },
				{ "pfenum_Standard_DS2_v2.Name", "EAzureVmSize::pfenum_Standard_DS2_v2" },
				{ "pfenum_Standard_DS3_v2.Name", "EAzureVmSize::pfenum_Standard_DS3_v2" },
				{ "pfenum_Standard_DS4_v2.Name", "EAzureVmSize::pfenum_Standard_DS4_v2" },
				{ "pfenum_Standard_DS5_v2.Name", "EAzureVmSize::pfenum_Standard_DS5_v2" },
				{ "pfenum_Standard_E16a_v4.Name", "EAzureVmSize::pfenum_Standard_E16a_v4" },
				{ "pfenum_Standard_E16as_v4.Name", "EAzureVmSize::pfenum_Standard_E16as_v4" },
				{ "pfenum_Standard_E2a_v4.Name", "EAzureVmSize::pfenum_Standard_E2a_v4" },
				{ "pfenum_Standard_E2as_v4.Name", "EAzureVmSize::pfenum_Standard_E2as_v4" },
				{ "pfenum_Standard_E4a_v4.Name", "EAzureVmSize::pfenum_Standard_E4a_v4" },
				{ "pfenum_Standard_E4as_v4.Name", "EAzureVmSize::pfenum_Standard_E4as_v4" },
				{ "pfenum_Standard_E8a_v4.Name", "EAzureVmSize::pfenum_Standard_E8a_v4" },
				{ "pfenum_Standard_E8as_v4.Name", "EAzureVmSize::pfenum_Standard_E8as_v4" },
				{ "pfenum_Standard_F1.Name", "EAzureVmSize::pfenum_Standard_F1" },
				{ "pfenum_Standard_F16.Name", "EAzureVmSize::pfenum_Standard_F16" },
				{ "pfenum_Standard_F16s_v2.Name", "EAzureVmSize::pfenum_Standard_F16s_v2" },
				{ "pfenum_Standard_F2.Name", "EAzureVmSize::pfenum_Standard_F2" },
				{ "pfenum_Standard_F2s_v2.Name", "EAzureVmSize::pfenum_Standard_F2s_v2" },
				{ "pfenum_Standard_F4.Name", "EAzureVmSize::pfenum_Standard_F4" },
				{ "pfenum_Standard_F4s_v2.Name", "EAzureVmSize::pfenum_Standard_F4s_v2" },
				{ "pfenum_Standard_F8.Name", "EAzureVmSize::pfenum_Standard_F8" },
				{ "pfenum_Standard_F8s_v2.Name", "EAzureVmSize::pfenum_Standard_F8s_v2" },
				{ "pfenum_Standard_MAX.Hidden", "" },
				{ "pfenum_Standard_MAX.Name", "EAzureVmSize::pfenum_Standard_MAX" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EAzureVmSize",
				"EAzureVmSize",
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
