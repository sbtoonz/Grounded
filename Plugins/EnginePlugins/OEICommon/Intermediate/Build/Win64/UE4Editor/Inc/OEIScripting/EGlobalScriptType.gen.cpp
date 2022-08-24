// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIScripting/Public/EGlobalScriptType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEGlobalScriptType() {}
// Cross Module References
	OEISCRIPTING_API UEnum* Z_Construct_UEnum_OEIScripting_EGlobalScriptType();
	UPackage* Z_Construct_UPackage__Script_OEIScripting();
// End Cross Module References
	static UEnum* EGlobalScriptType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OEIScripting_EGlobalScriptType, Z_Construct_UPackage__Script_OEIScripting(), TEXT("EGlobalScriptType"));
		}
		return Singleton;
	}
	template<> OEISCRIPTING_API UEnum* StaticEnum<EGlobalScriptType>()
	{
		return EGlobalScriptType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGlobalScriptType(EGlobalScriptType_StaticEnum, TEXT("/Script/OEIScripting"), TEXT("EGlobalScriptType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OEIScripting_EGlobalScriptType_Hash() { return 924114261U; }
	UEnum* Z_Construct_UEnum_OEIScripting_EGlobalScriptType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OEIScripting();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGlobalScriptType"), 0, Get_Z_Construct_UEnum_OEIScripting_EGlobalScriptType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGlobalScriptType::Script", (int64)EGlobalScriptType::Script },
				{ "EGlobalScriptType::Conditional", (int64)EGlobalScriptType::Conditional },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Conditional.Name", "EGlobalScriptType::Conditional" },
				{ "ModuleRelativePath", "Public/EGlobalScriptType.h" },
				{ "Script.Name", "EGlobalScriptType::Script" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OEIScripting,
				nullptr,
				"EGlobalScriptType",
				"EGlobalScriptType",
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
