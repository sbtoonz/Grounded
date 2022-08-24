// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/EEmailVerificationStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEmailVerificationStatus() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EEmailVerificationStatus();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* EEmailVerificationStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EEmailVerificationStatus, Z_Construct_UPackage__Script_PlayFab(), TEXT("EEmailVerificationStatus"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EEmailVerificationStatus>()
	{
		return EEmailVerificationStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEmailVerificationStatus(EEmailVerificationStatus_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EEmailVerificationStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EEmailVerificationStatus_Hash() { return 553329288U; }
	UEnum* Z_Construct_UEnum_PlayFab_EEmailVerificationStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEmailVerificationStatus"), 0, Get_Z_Construct_UEnum_PlayFab_EEmailVerificationStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEmailVerificationStatus::pfenum_Unverified", (int64)EEmailVerificationStatus::pfenum_Unverified },
				{ "EEmailVerificationStatus::pfenum_Pending", (int64)EEmailVerificationStatus::pfenum_Pending },
				{ "EEmailVerificationStatus::pfenum_Confirmed", (int64)EEmailVerificationStatus::pfenum_Confirmed },
				{ "EEmailVerificationStatus::pfenum_MAX", (int64)EEmailVerificationStatus::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EEmailVerificationStatus.h" },
				{ "pfenum_Confirmed.Name", "EEmailVerificationStatus::pfenum_Confirmed" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "EEmailVerificationStatus::pfenum_MAX" },
				{ "pfenum_Pending.Name", "EEmailVerificationStatus::pfenum_Pending" },
				{ "pfenum_Unverified.Name", "EEmailVerificationStatus::pfenum_Unverified" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EEmailVerificationStatus",
				"EEmailVerificationStatus",
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
