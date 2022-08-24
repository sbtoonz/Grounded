// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/EAuthTokenType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAuthTokenType() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EAuthTokenType();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* EAuthTokenType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EAuthTokenType, Z_Construct_UPackage__Script_PlayFab(), TEXT("EAuthTokenType"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EAuthTokenType>()
	{
		return EAuthTokenType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAuthTokenType(EAuthTokenType_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EAuthTokenType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EAuthTokenType_Hash() { return 1759875549U; }
	UEnum* Z_Construct_UEnum_PlayFab_EAuthTokenType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAuthTokenType"), 0, Get_Z_Construct_UEnum_PlayFab_EAuthTokenType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAuthTokenType::pfenum_Email", (int64)EAuthTokenType::pfenum_Email },
				{ "EAuthTokenType::pfenum_MAX", (int64)EAuthTokenType::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EAuthTokenType.h" },
				{ "pfenum_Email.Name", "EAuthTokenType::pfenum_Email" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "EAuthTokenType::pfenum_MAX" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EAuthTokenType",
				"EAuthTokenType",
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
