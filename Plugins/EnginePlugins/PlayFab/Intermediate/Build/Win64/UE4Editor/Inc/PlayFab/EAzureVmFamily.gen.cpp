// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/EAzureVmFamily.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAzureVmFamily() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EAzureVmFamily();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* EAzureVmFamily_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EAzureVmFamily, Z_Construct_UPackage__Script_PlayFab(), TEXT("EAzureVmFamily"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EAzureVmFamily>()
	{
		return EAzureVmFamily_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAzureVmFamily(EAzureVmFamily_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EAzureVmFamily"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EAzureVmFamily_Hash() { return 3944116885U; }
	UEnum* Z_Construct_UEnum_PlayFab_EAzureVmFamily()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAzureVmFamily"), 0, Get_Z_Construct_UEnum_PlayFab_EAzureVmFamily_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAzureVmFamily::pfenum_A", (int64)EAzureVmFamily::pfenum_A },
				{ "EAzureVmFamily::pfenum_Av2", (int64)EAzureVmFamily::pfenum_Av2 },
				{ "EAzureVmFamily::pfenum_Dv2", (int64)EAzureVmFamily::pfenum_Dv2 },
				{ "EAzureVmFamily::pfenum_Dv3", (int64)EAzureVmFamily::pfenum_Dv3 },
				{ "EAzureVmFamily::pfenum_F", (int64)EAzureVmFamily::pfenum_F },
				{ "EAzureVmFamily::pfenum_Fsv2", (int64)EAzureVmFamily::pfenum_Fsv2 },
				{ "EAzureVmFamily::pfenum_Dasv4", (int64)EAzureVmFamily::pfenum_Dasv4 },
				{ "EAzureVmFamily::pfenum_Dav4", (int64)EAzureVmFamily::pfenum_Dav4 },
				{ "EAzureVmFamily::pfenum_Eav4", (int64)EAzureVmFamily::pfenum_Eav4 },
				{ "EAzureVmFamily::pfenum_Easv4", (int64)EAzureVmFamily::pfenum_Easv4 },
				{ "EAzureVmFamily::pfenum_Ev4", (int64)EAzureVmFamily::pfenum_Ev4 },
				{ "EAzureVmFamily::pfenum_Esv4", (int64)EAzureVmFamily::pfenum_Esv4 },
				{ "EAzureVmFamily::pfenum_Dsv3", (int64)EAzureVmFamily::pfenum_Dsv3 },
				{ "EAzureVmFamily::pfenum_Dsv2", (int64)EAzureVmFamily::pfenum_Dsv2 },
				{ "EAzureVmFamily::pfenum_MAX", (int64)EAzureVmFamily::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EAzureVmFamily.h" },
				{ "pfenum_A.Name", "EAzureVmFamily::pfenum_A" },
				{ "pfenum_Av2.Name", "EAzureVmFamily::pfenum_Av2" },
				{ "pfenum_Dasv4.Name", "EAzureVmFamily::pfenum_Dasv4" },
				{ "pfenum_Dav4.Name", "EAzureVmFamily::pfenum_Dav4" },
				{ "pfenum_Dsv2.Name", "EAzureVmFamily::pfenum_Dsv2" },
				{ "pfenum_Dsv3.Name", "EAzureVmFamily::pfenum_Dsv3" },
				{ "pfenum_Dv2.Name", "EAzureVmFamily::pfenum_Dv2" },
				{ "pfenum_Dv3.Name", "EAzureVmFamily::pfenum_Dv3" },
				{ "pfenum_Easv4.Name", "EAzureVmFamily::pfenum_Easv4" },
				{ "pfenum_Eav4.Name", "EAzureVmFamily::pfenum_Eav4" },
				{ "pfenum_Esv4.Name", "EAzureVmFamily::pfenum_Esv4" },
				{ "pfenum_Ev4.Name", "EAzureVmFamily::pfenum_Ev4" },
				{ "pfenum_F.Name", "EAzureVmFamily::pfenum_F" },
				{ "pfenum_Fsv2.Name", "EAzureVmFamily::pfenum_Fsv2" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "EAzureVmFamily::pfenum_MAX" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EAzureVmFamily",
				"EAzureVmFamily",
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
