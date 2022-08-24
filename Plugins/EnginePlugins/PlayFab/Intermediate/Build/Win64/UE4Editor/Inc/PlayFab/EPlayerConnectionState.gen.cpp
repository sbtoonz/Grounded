// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/EPlayerConnectionState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPlayerConnectionState() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EPlayerConnectionState();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* EPlayerConnectionState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EPlayerConnectionState, Z_Construct_UPackage__Script_PlayFab(), TEXT("EPlayerConnectionState"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EPlayerConnectionState>()
	{
		return EPlayerConnectionState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlayerConnectionState(EPlayerConnectionState_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EPlayerConnectionState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EPlayerConnectionState_Hash() { return 1310077183U; }
	UEnum* Z_Construct_UEnum_PlayFab_EPlayerConnectionState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlayerConnectionState"), 0, Get_Z_Construct_UEnum_PlayFab_EPlayerConnectionState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlayerConnectionState::pfenum_Unassigned", (int64)EPlayerConnectionState::pfenum_Unassigned },
				{ "EPlayerConnectionState::pfenum_Connecting", (int64)EPlayerConnectionState::pfenum_Connecting },
				{ "EPlayerConnectionState::pfenum_Participating", (int64)EPlayerConnectionState::pfenum_Participating },
				{ "EPlayerConnectionState::pfenum_Participated", (int64)EPlayerConnectionState::pfenum_Participated },
				{ "EPlayerConnectionState::pfenum_MAX", (int64)EPlayerConnectionState::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EPlayerConnectionState.h" },
				{ "pfenum_Connecting.Name", "EPlayerConnectionState::pfenum_Connecting" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "EPlayerConnectionState::pfenum_MAX" },
				{ "pfenum_Participated.Name", "EPlayerConnectionState::pfenum_Participated" },
				{ "pfenum_Participating.Name", "EPlayerConnectionState::pfenum_Participating" },
				{ "pfenum_Unassigned.Name", "EPlayerConnectionState::pfenum_Unassigned" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EPlayerConnectionState",
				"EPlayerConnectionState",
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
