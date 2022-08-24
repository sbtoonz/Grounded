// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/EPushSetupPlatform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPushSetupPlatform() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EPushSetupPlatform();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* EPushSetupPlatform_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EPushSetupPlatform, Z_Construct_UPackage__Script_PlayFab(), TEXT("EPushSetupPlatform"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EPushSetupPlatform>()
	{
		return EPushSetupPlatform_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPushSetupPlatform(EPushSetupPlatform_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EPushSetupPlatform"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EPushSetupPlatform_Hash() { return 41886094U; }
	UEnum* Z_Construct_UEnum_PlayFab_EPushSetupPlatform()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPushSetupPlatform"), 0, Get_Z_Construct_UEnum_PlayFab_EPushSetupPlatform_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPushSetupPlatform::pfenum_GCM", (int64)EPushSetupPlatform::pfenum_GCM },
				{ "EPushSetupPlatform::pfenum_APNS", (int64)EPushSetupPlatform::pfenum_APNS },
				{ "EPushSetupPlatform::pfenum_APNS_SANDBOX", (int64)EPushSetupPlatform::pfenum_APNS_SANDBOX },
				{ "EPushSetupPlatform::pfenum_MAX", (int64)EPushSetupPlatform::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EPushSetupPlatform.h" },
				{ "pfenum_APNS.Name", "EPushSetupPlatform::pfenum_APNS" },
				{ "pfenum_APNS_SANDBOX.Name", "EPushSetupPlatform::pfenum_APNS_SANDBOX" },
				{ "pfenum_GCM.Name", "EPushSetupPlatform::pfenum_GCM" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "EPushSetupPlatform::pfenum_MAX" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EPushSetupPlatform",
				"EPushSetupPlatform",
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
