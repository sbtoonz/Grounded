// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/EPfSourceType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPfSourceType() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EPfSourceType();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* EPfSourceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EPfSourceType, Z_Construct_UPackage__Script_PlayFab(), TEXT("EPfSourceType"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EPfSourceType>()
	{
		return EPfSourceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPfSourceType(EPfSourceType_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EPfSourceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EPfSourceType_Hash() { return 3742713062U; }
	UEnum* Z_Construct_UEnum_PlayFab_EPfSourceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPfSourceType"), 0, Get_Z_Construct_UEnum_PlayFab_EPfSourceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPfSourceType::pfenum_Admin", (int64)EPfSourceType::pfenum_Admin },
				{ "EPfSourceType::pfenum_BackEnd", (int64)EPfSourceType::pfenum_BackEnd },
				{ "EPfSourceType::pfenum_GameClient", (int64)EPfSourceType::pfenum_GameClient },
				{ "EPfSourceType::pfenum_GameServer", (int64)EPfSourceType::pfenum_GameServer },
				{ "EPfSourceType::pfenum_Partner", (int64)EPfSourceType::pfenum_Partner },
				{ "EPfSourceType::pfenum_Custom", (int64)EPfSourceType::pfenum_Custom },
				{ "EPfSourceType::pfenum_API", (int64)EPfSourceType::pfenum_API },
				{ "EPfSourceType::pfenum_MAX", (int64)EPfSourceType::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EPfSourceType.h" },
				{ "pfenum_Admin.Name", "EPfSourceType::pfenum_Admin" },
				{ "pfenum_API.Name", "EPfSourceType::pfenum_API" },
				{ "pfenum_BackEnd.Name", "EPfSourceType::pfenum_BackEnd" },
				{ "pfenum_Custom.Name", "EPfSourceType::pfenum_Custom" },
				{ "pfenum_GameClient.Name", "EPfSourceType::pfenum_GameClient" },
				{ "pfenum_GameServer.Name", "EPfSourceType::pfenum_GameServer" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "EPfSourceType::pfenum_MAX" },
				{ "pfenum_Partner.Name", "EPfSourceType::pfenum_Partner" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EPfSourceType",
				"EPfSourceType",
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
