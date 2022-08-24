// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/EOsPlatform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOsPlatform() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EOsPlatform();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* EOsPlatform_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EOsPlatform, Z_Construct_UPackage__Script_PlayFab(), TEXT("EOsPlatform"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EOsPlatform>()
	{
		return EOsPlatform_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOsPlatform(EOsPlatform_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EOsPlatform"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EOsPlatform_Hash() { return 2581771985U; }
	UEnum* Z_Construct_UEnum_PlayFab_EOsPlatform()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOsPlatform"), 0, Get_Z_Construct_UEnum_PlayFab_EOsPlatform_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOsPlatform::pfenum_Windows", (int64)EOsPlatform::pfenum_Windows },
				{ "EOsPlatform::pfenum_Linux", (int64)EOsPlatform::pfenum_Linux },
				{ "EOsPlatform::pfenum_MAX", (int64)EOsPlatform::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EOsPlatform.h" },
				{ "pfenum_Linux.Name", "EOsPlatform::pfenum_Linux" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "EOsPlatform::pfenum_MAX" },
				{ "pfenum_Windows.Name", "EOsPlatform::pfenum_Windows" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EOsPlatform",
				"EOsPlatform",
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
