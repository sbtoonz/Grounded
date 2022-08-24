// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/EResultTableNodeType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEResultTableNodeType() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EResultTableNodeType();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* EResultTableNodeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EResultTableNodeType, Z_Construct_UPackage__Script_PlayFab(), TEXT("EResultTableNodeType"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EResultTableNodeType>()
	{
		return EResultTableNodeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EResultTableNodeType(EResultTableNodeType_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EResultTableNodeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EResultTableNodeType_Hash() { return 3020402659U; }
	UEnum* Z_Construct_UEnum_PlayFab_EResultTableNodeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EResultTableNodeType"), 0, Get_Z_Construct_UEnum_PlayFab_EResultTableNodeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EResultTableNodeType::pfenum_ItemId", (int64)EResultTableNodeType::pfenum_ItemId },
				{ "EResultTableNodeType::pfenum_TableId", (int64)EResultTableNodeType::pfenum_TableId },
				{ "EResultTableNodeType::pfenum_MAX", (int64)EResultTableNodeType::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EResultTableNodeType.h" },
				{ "pfenum_ItemId.Name", "EResultTableNodeType::pfenum_ItemId" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "EResultTableNodeType::pfenum_MAX" },
				{ "pfenum_TableId.Name", "EResultTableNodeType::pfenum_TableId" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EResultTableNodeType",
				"EResultTableNodeType",
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
