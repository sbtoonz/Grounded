// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIText/Public/EStringTokenValueType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEStringTokenValueType() {}
// Cross Module References
	OEITEXT_API UEnum* Z_Construct_UEnum_OEIText_EStringTokenValueType();
	UPackage* Z_Construct_UPackage__Script_OEIText();
// End Cross Module References
	static UEnum* EStringTokenValueType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OEIText_EStringTokenValueType, Z_Construct_UPackage__Script_OEIText(), TEXT("EStringTokenValueType"));
		}
		return Singleton;
	}
	template<> OEITEXT_API UEnum* StaticEnum<EStringTokenValueType>()
	{
		return EStringTokenValueType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStringTokenValueType(EStringTokenValueType_StaticEnum, TEXT("/Script/OEIText"), TEXT("EStringTokenValueType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OEIText_EStringTokenValueType_Hash() { return 2720280785U; }
	UEnum* Z_Construct_UEnum_OEIText_EStringTokenValueType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OEIText();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStringTokenValueType"), 0, Get_Z_Construct_UEnum_OEIText_EStringTokenValueType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStringTokenValueType::LocString", (int64)EStringTokenValueType::LocString },
				{ "EStringTokenValueType::Integer", (int64)EStringTokenValueType::Integer },
				{ "EStringTokenValueType::Float", (int64)EStringTokenValueType::Float },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Float.Name", "EStringTokenValueType::Float" },
				{ "Integer.Name", "EStringTokenValueType::Integer" },
				{ "LocString.Name", "EStringTokenValueType::LocString" },
				{ "ModuleRelativePath", "Public/EStringTokenValueType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OEIText,
				nullptr,
				"EStringTokenValueType",
				"EStringTokenValueType",
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
