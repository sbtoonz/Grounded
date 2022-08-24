// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/EConditionals.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEConditionals() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EConditionals();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* EConditionals_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EConditionals, Z_Construct_UPackage__Script_PlayFab(), TEXT("EConditionals"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EConditionals>()
	{
		return EConditionals_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EConditionals(EConditionals_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EConditionals"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EConditionals_Hash() { return 62624140U; }
	UEnum* Z_Construct_UEnum_PlayFab_EConditionals()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EConditionals"), 0, Get_Z_Construct_UEnum_PlayFab_EConditionals_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EConditionals::pfenum_Any", (int64)EConditionals::pfenum_Any },
				{ "EConditionals::pfenum_True", (int64)EConditionals::pfenum_True },
				{ "EConditionals::pfenum_False", (int64)EConditionals::pfenum_False },
				{ "EConditionals::pfenum_MAX", (int64)EConditionals::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EConditionals.h" },
				{ "pfenum_Any.Name", "EConditionals::pfenum_Any" },
				{ "pfenum_False.Name", "EConditionals::pfenum_False" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "EConditionals::pfenum_MAX" },
				{ "pfenum_True.Name", "EConditionals::pfenum_True" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EConditionals",
				"EConditionals",
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
