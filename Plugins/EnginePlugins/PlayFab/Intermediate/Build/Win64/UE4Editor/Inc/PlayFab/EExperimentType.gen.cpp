// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/EExperimentType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEExperimentType() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EExperimentType();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* EExperimentType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EExperimentType, Z_Construct_UPackage__Script_PlayFab(), TEXT("EExperimentType"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EExperimentType>()
	{
		return EExperimentType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EExperimentType(EExperimentType_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EExperimentType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EExperimentType_Hash() { return 2595839995U; }
	UEnum* Z_Construct_UEnum_PlayFab_EExperimentType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EExperimentType"), 0, Get_Z_Construct_UEnum_PlayFab_EExperimentType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EExperimentType::pfenum_Active", (int64)EExperimentType::pfenum_Active },
				{ "EExperimentType::pfenum_Snapshot", (int64)EExperimentType::pfenum_Snapshot },
				{ "EExperimentType::pfenum_MAX", (int64)EExperimentType::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EExperimentType.h" },
				{ "pfenum_Active.Name", "EExperimentType::pfenum_Active" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "EExperimentType::pfenum_MAX" },
				{ "pfenum_Snapshot.Name", "EExperimentType::pfenum_Snapshot" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EExperimentType",
				"EExperimentType",
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
