// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/EGameInstanceState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEGameInstanceState() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EGameInstanceState();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* EGameInstanceState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EGameInstanceState, Z_Construct_UPackage__Script_PlayFab(), TEXT("EGameInstanceState"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EGameInstanceState>()
	{
		return EGameInstanceState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameInstanceState(EGameInstanceState_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EGameInstanceState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EGameInstanceState_Hash() { return 1289044182U; }
	UEnum* Z_Construct_UEnum_PlayFab_EGameInstanceState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameInstanceState"), 0, Get_Z_Construct_UEnum_PlayFab_EGameInstanceState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameInstanceState::pfenum_Open", (int64)EGameInstanceState::pfenum_Open },
				{ "EGameInstanceState::pfenum_Closed", (int64)EGameInstanceState::pfenum_Closed },
				{ "EGameInstanceState::pfenum_MAX", (int64)EGameInstanceState::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EGameInstanceState.h" },
				{ "pfenum_Closed.Name", "EGameInstanceState::pfenum_Closed" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "EGameInstanceState::pfenum_MAX" },
				{ "pfenum_Open.Name", "EGameInstanceState::pfenum_Open" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EGameInstanceState",
				"EGameInstanceState",
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
