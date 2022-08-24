// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/EContinentCode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEContinentCode() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EContinentCode();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* EContinentCode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EContinentCode, Z_Construct_UPackage__Script_PlayFab(), TEXT("EContinentCode"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EContinentCode>()
	{
		return EContinentCode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EContinentCode(EContinentCode_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EContinentCode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EContinentCode_Hash() { return 420423412U; }
	UEnum* Z_Construct_UEnum_PlayFab_EContinentCode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EContinentCode"), 0, Get_Z_Construct_UEnum_PlayFab_EContinentCode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EContinentCode::pfenum_AF", (int64)EContinentCode::pfenum_AF },
				{ "EContinentCode::pfenum_AN", (int64)EContinentCode::pfenum_AN },
				{ "EContinentCode::pfenum_AS", (int64)EContinentCode::pfenum_AS },
				{ "EContinentCode::pfenum_EU", (int64)EContinentCode::pfenum_EU },
				{ "EContinentCode::pfenum_NA", (int64)EContinentCode::pfenum_NA },
				{ "EContinentCode::pfenum_OC", (int64)EContinentCode::pfenum_OC },
				{ "EContinentCode::pfenum_SA", (int64)EContinentCode::pfenum_SA },
				{ "EContinentCode::pfenum_MAX", (int64)EContinentCode::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EContinentCode.h" },
				{ "pfenum_AF.Name", "EContinentCode::pfenum_AF" },
				{ "pfenum_AN.Name", "EContinentCode::pfenum_AN" },
				{ "pfenum_AS.Name", "EContinentCode::pfenum_AS" },
				{ "pfenum_EU.Name", "EContinentCode::pfenum_EU" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "EContinentCode::pfenum_MAX" },
				{ "pfenum_NA.Name", "EContinentCode::pfenum_NA" },
				{ "pfenum_OC.Name", "EContinentCode::pfenum_OC" },
				{ "pfenum_SA.Name", "EContinentCode::pfenum_SA" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EContinentCode",
				"EContinentCode",
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
