// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/EProtocolType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEProtocolType() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EProtocolType();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* EProtocolType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EProtocolType, Z_Construct_UPackage__Script_PlayFab(), TEXT("EProtocolType"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EProtocolType>()
	{
		return EProtocolType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EProtocolType(EProtocolType_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EProtocolType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EProtocolType_Hash() { return 1399509236U; }
	UEnum* Z_Construct_UEnum_PlayFab_EProtocolType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EProtocolType"), 0, Get_Z_Construct_UEnum_PlayFab_EProtocolType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EProtocolType::pfenum_TCP", (int64)EProtocolType::pfenum_TCP },
				{ "EProtocolType::pfenum_UDP", (int64)EProtocolType::pfenum_UDP },
				{ "EProtocolType::pfenum_MAX", (int64)EProtocolType::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EProtocolType.h" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "EProtocolType::pfenum_MAX" },
				{ "pfenum_TCP.Name", "EProtocolType::pfenum_TCP" },
				{ "pfenum_UDP.Name", "EProtocolType::pfenum_UDP" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EProtocolType",
				"EProtocolType",
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
