// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ECloudScriptRevisionOption.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECloudScriptRevisionOption() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ECloudScriptRevisionOption();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* ECloudScriptRevisionOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_ECloudScriptRevisionOption, Z_Construct_UPackage__Script_PlayFab(), TEXT("ECloudScriptRevisionOption"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<ECloudScriptRevisionOption>()
	{
		return ECloudScriptRevisionOption_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECloudScriptRevisionOption(ECloudScriptRevisionOption_StaticEnum, TEXT("/Script/PlayFab"), TEXT("ECloudScriptRevisionOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_ECloudScriptRevisionOption_Hash() { return 3720113286U; }
	UEnum* Z_Construct_UEnum_PlayFab_ECloudScriptRevisionOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECloudScriptRevisionOption"), 0, Get_Z_Construct_UEnum_PlayFab_ECloudScriptRevisionOption_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECloudScriptRevisionOption::pfenum_Live", (int64)ECloudScriptRevisionOption::pfenum_Live },
				{ "ECloudScriptRevisionOption::pfenum_Latest", (int64)ECloudScriptRevisionOption::pfenum_Latest },
				{ "ECloudScriptRevisionOption::pfenum_Specific", (int64)ECloudScriptRevisionOption::pfenum_Specific },
				{ "ECloudScriptRevisionOption::pfenum_MAX", (int64)ECloudScriptRevisionOption::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ECloudScriptRevisionOption.h" },
				{ "pfenum_Latest.Name", "ECloudScriptRevisionOption::pfenum_Latest" },
				{ "pfenum_Live.Name", "ECloudScriptRevisionOption::pfenum_Live" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "ECloudScriptRevisionOption::pfenum_MAX" },
				{ "pfenum_Specific.Name", "ECloudScriptRevisionOption::pfenum_Specific" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"ECloudScriptRevisionOption",
				"ECloudScriptRevisionOption",
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
