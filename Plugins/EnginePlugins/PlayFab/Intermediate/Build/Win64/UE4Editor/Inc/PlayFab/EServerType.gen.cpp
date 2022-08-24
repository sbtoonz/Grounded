// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/EServerType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEServerType() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EServerType();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* EServerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EServerType, Z_Construct_UPackage__Script_PlayFab(), TEXT("EServerType"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EServerType>()
	{
		return EServerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EServerType(EServerType_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EServerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EServerType_Hash() { return 2708992924U; }
	UEnum* Z_Construct_UEnum_PlayFab_EServerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EServerType"), 0, Get_Z_Construct_UEnum_PlayFab_EServerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EServerType::pfenum_Container", (int64)EServerType::pfenum_Container },
				{ "EServerType::pfenum_Process", (int64)EServerType::pfenum_Process },
				{ "EServerType::pfenum_MAX", (int64)EServerType::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EServerType.h" },
				{ "pfenum_Container.Name", "EServerType::pfenum_Container" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "EServerType::pfenum_MAX" },
				{ "pfenum_Process.Name", "EServerType::pfenum_Process" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EServerType",
				"EServerType",
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
