// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/EAdActivity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAdActivity() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EAdActivity();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* EAdActivity_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EAdActivity, Z_Construct_UPackage__Script_PlayFab(), TEXT("EAdActivity"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EAdActivity>()
	{
		return EAdActivity_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAdActivity(EAdActivity_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EAdActivity"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EAdActivity_Hash() { return 3095005961U; }
	UEnum* Z_Construct_UEnum_PlayFab_EAdActivity()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAdActivity"), 0, Get_Z_Construct_UEnum_PlayFab_EAdActivity_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAdActivity::pfenum_Opened", (int64)EAdActivity::pfenum_Opened },
				{ "EAdActivity::pfenum_Closed", (int64)EAdActivity::pfenum_Closed },
				{ "EAdActivity::pfenum_Start", (int64)EAdActivity::pfenum_Start },
				{ "EAdActivity::pfenum_End", (int64)EAdActivity::pfenum_End },
				{ "EAdActivity::pfenum_MAX", (int64)EAdActivity::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EAdActivity.h" },
				{ "pfenum_Closed.Name", "EAdActivity::pfenum_Closed" },
				{ "pfenum_End.Name", "EAdActivity::pfenum_End" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "EAdActivity::pfenum_MAX" },
				{ "pfenum_Opened.Name", "EAdActivity::pfenum_Opened" },
				{ "pfenum_Start.Name", "EAdActivity::pfenum_Start" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EAdActivity",
				"EAdActivity",
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
