// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIScripting/Public/EExpressionComponentType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEExpressionComponentType() {}
// Cross Module References
	OEISCRIPTING_API UEnum* Z_Construct_UEnum_OEIScripting_EExpressionComponentType();
	UPackage* Z_Construct_UPackage__Script_OEIScripting();
// End Cross Module References
	static UEnum* EExpressionComponentType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OEIScripting_EExpressionComponentType, Z_Construct_UPackage__Script_OEIScripting(), TEXT("EExpressionComponentType"));
		}
		return Singleton;
	}
	template<> OEISCRIPTING_API UEnum* StaticEnum<EExpressionComponentType>()
	{
		return EExpressionComponentType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EExpressionComponentType(EExpressionComponentType_StaticEnum, TEXT("/Script/OEIScripting"), TEXT("EExpressionComponentType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OEIScripting_EExpressionComponentType_Hash() { return 2997731152U; }
	UEnum* Z_Construct_UEnum_OEIScripting_EExpressionComponentType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OEIScripting();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EExpressionComponentType"), 0, Get_Z_Construct_UEnum_OEIScripting_EExpressionComponentType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EExpressionComponentType::ScriptCall", (int64)EExpressionComponentType::ScriptCall },
				{ "EExpressionComponentType::Expression", (int64)EExpressionComponentType::Expression },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Expression.Name", "EExpressionComponentType::Expression" },
				{ "ModuleRelativePath", "Public/EExpressionComponentType.h" },
				{ "ScriptCall.Name", "EExpressionComponentType::ScriptCall" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OEIScripting,
				nullptr,
				"EExpressionComponentType",
				"EExpressionComponentType",
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
