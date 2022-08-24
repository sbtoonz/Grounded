// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/EMatchmakeStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMatchmakeStatus() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EMatchmakeStatus();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* EMatchmakeStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EMatchmakeStatus, Z_Construct_UPackage__Script_PlayFab(), TEXT("EMatchmakeStatus"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EMatchmakeStatus>()
	{
		return EMatchmakeStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMatchmakeStatus(EMatchmakeStatus_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EMatchmakeStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EMatchmakeStatus_Hash() { return 1308208496U; }
	UEnum* Z_Construct_UEnum_PlayFab_EMatchmakeStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMatchmakeStatus"), 0, Get_Z_Construct_UEnum_PlayFab_EMatchmakeStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMatchmakeStatus::pfenum_Complete", (int64)EMatchmakeStatus::pfenum_Complete },
				{ "EMatchmakeStatus::pfenum_Waiting", (int64)EMatchmakeStatus::pfenum_Waiting },
				{ "EMatchmakeStatus::pfenum_GameNotFound", (int64)EMatchmakeStatus::pfenum_GameNotFound },
				{ "EMatchmakeStatus::pfenum_NoAvailableSlots", (int64)EMatchmakeStatus::pfenum_NoAvailableSlots },
				{ "EMatchmakeStatus::pfenum_SessionClosed", (int64)EMatchmakeStatus::pfenum_SessionClosed },
				{ "EMatchmakeStatus::pfenum_MAX", (int64)EMatchmakeStatus::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EMatchmakeStatus.h" },
				{ "pfenum_Complete.Name", "EMatchmakeStatus::pfenum_Complete" },
				{ "pfenum_GameNotFound.Name", "EMatchmakeStatus::pfenum_GameNotFound" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "EMatchmakeStatus::pfenum_MAX" },
				{ "pfenum_NoAvailableSlots.Name", "EMatchmakeStatus::pfenum_NoAvailableSlots" },
				{ "pfenum_SessionClosed.Name", "EMatchmakeStatus::pfenum_SessionClosed" },
				{ "pfenum_Waiting.Name", "EMatchmakeStatus::pfenum_Waiting" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EMatchmakeStatus",
				"EMatchmakeStatus",
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
