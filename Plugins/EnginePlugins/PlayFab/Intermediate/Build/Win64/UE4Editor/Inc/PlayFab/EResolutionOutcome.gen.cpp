// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/EResolutionOutcome.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEResolutionOutcome() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EResolutionOutcome();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* EResolutionOutcome_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EResolutionOutcome, Z_Construct_UPackage__Script_PlayFab(), TEXT("EResolutionOutcome"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EResolutionOutcome>()
	{
		return EResolutionOutcome_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EResolutionOutcome(EResolutionOutcome_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EResolutionOutcome"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EResolutionOutcome_Hash() { return 1860783860U; }
	UEnum* Z_Construct_UEnum_PlayFab_EResolutionOutcome()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EResolutionOutcome"), 0, Get_Z_Construct_UEnum_PlayFab_EResolutionOutcome_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EResolutionOutcome::pfenum_Revoke", (int64)EResolutionOutcome::pfenum_Revoke },
				{ "EResolutionOutcome::pfenum_Reinstate", (int64)EResolutionOutcome::pfenum_Reinstate },
				{ "EResolutionOutcome::pfenum_Manual", (int64)EResolutionOutcome::pfenum_Manual },
				{ "EResolutionOutcome::pfenum_MAX", (int64)EResolutionOutcome::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EResolutionOutcome.h" },
				{ "pfenum_Manual.Name", "EResolutionOutcome::pfenum_Manual" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "EResolutionOutcome::pfenum_MAX" },
				{ "pfenum_Reinstate.Name", "EResolutionOutcome::pfenum_Reinstate" },
				{ "pfenum_Revoke.Name", "EResolutionOutcome::pfenum_Revoke" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EResolutionOutcome",
				"EResolutionOutcome",
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
