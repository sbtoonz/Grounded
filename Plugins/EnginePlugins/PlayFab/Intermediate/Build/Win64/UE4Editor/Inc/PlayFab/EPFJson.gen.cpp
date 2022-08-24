// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/EPFJson.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPFJson() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EPFJson();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* EPFJson_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EPFJson, Z_Construct_UPackage__Script_PlayFab(), TEXT("EPFJson"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EPFJson::Type>()
	{
		return EPFJson_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPFJson(EPFJson_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EPFJson"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EPFJson_Hash() { return 1160736541U; }
	UEnum* Z_Construct_UEnum_PlayFab_EPFJson()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPFJson"), 0, Get_Z_Construct_UEnum_PlayFab_EPFJson_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPFJson::None", (int64)EPFJson::None },
				{ "EPFJson::Null", (int64)EPFJson::Null },
				{ "EPFJson::String", (int64)EPFJson::String },
				{ "EPFJson::Number", (int64)EPFJson::Number },
				{ "EPFJson::Boolean", (int64)EPFJson::Boolean },
				{ "EPFJson::Array", (int64)EPFJson::Array },
				{ "EPFJson::Object", (int64)EPFJson::Object },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Array.Name", "EPFJson::Array" },
				{ "Boolean.Name", "EPFJson::Boolean" },
				{ "ModuleRelativePath", "Public/EPFJson.h" },
				{ "None.Name", "EPFJson::None" },
				{ "Null.Name", "EPFJson::Null" },
				{ "Number.Name", "EPFJson::Number" },
				{ "Object.Name", "EPFJson::Object" },
				{ "String.Name", "EPFJson::String" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EPFJson",
				"EPFJson::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
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
