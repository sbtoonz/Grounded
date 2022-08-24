// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/EIdentifiedDeviceType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIdentifiedDeviceType() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EIdentifiedDeviceType();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* EIdentifiedDeviceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EIdentifiedDeviceType, Z_Construct_UPackage__Script_PlayFab(), TEXT("EIdentifiedDeviceType"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EIdentifiedDeviceType>()
	{
		return EIdentifiedDeviceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EIdentifiedDeviceType(EIdentifiedDeviceType_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EIdentifiedDeviceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EIdentifiedDeviceType_Hash() { return 786369275U; }
	UEnum* Z_Construct_UEnum_PlayFab_EIdentifiedDeviceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EIdentifiedDeviceType"), 0, Get_Z_Construct_UEnum_PlayFab_EIdentifiedDeviceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EIdentifiedDeviceType::pfenum_Unknown", (int64)EIdentifiedDeviceType::pfenum_Unknown },
				{ "EIdentifiedDeviceType::pfenum_XboxOne", (int64)EIdentifiedDeviceType::pfenum_XboxOne },
				{ "EIdentifiedDeviceType::pfenum_Scarlett", (int64)EIdentifiedDeviceType::pfenum_Scarlett },
				{ "EIdentifiedDeviceType::pfenum_MAX", (int64)EIdentifiedDeviceType::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EIdentifiedDeviceType.h" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "EIdentifiedDeviceType::pfenum_MAX" },
				{ "pfenum_Scarlett.Name", "EIdentifiedDeviceType::pfenum_Scarlett" },
				{ "pfenum_Unknown.Name", "EIdentifiedDeviceType::pfenum_Unknown" },
				{ "pfenum_XboxOne.Name", "EIdentifiedDeviceType::pfenum_XboxOne" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EIdentifiedDeviceType",
				"EIdentifiedDeviceType",
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
