// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIScripting/Public/EScriptTargetType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEScriptTargetType() {}
// Cross Module References
	OEISCRIPTING_API UEnum* Z_Construct_UEnum_OEIScripting_EScriptTargetType();
	UPackage* Z_Construct_UPackage__Script_OEIScripting();
// End Cross Module References
	static UEnum* EScriptTargetType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OEIScripting_EScriptTargetType, Z_Construct_UPackage__Script_OEIScripting(), TEXT("EScriptTargetType"));
		}
		return Singleton;
	}
	template<> OEISCRIPTING_API UEnum* StaticEnum<EScriptTargetType>()
	{
		return EScriptTargetType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EScriptTargetType(EScriptTargetType_StaticEnum, TEXT("/Script/OEIScripting"), TEXT("EScriptTargetType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OEIScripting_EScriptTargetType_Hash() { return 2795669514U; }
	UEnum* Z_Construct_UEnum_OEIScripting_EScriptTargetType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OEIScripting();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EScriptTargetType"), 0, Get_Z_Construct_UEnum_OEIScripting_EScriptTargetType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EScriptTargetType::Owner", (int64)EScriptTargetType::Owner },
				{ "EScriptTargetType::LocalPlayerPawn", (int64)EScriptTargetType::LocalPlayerPawn },
				{ "EScriptTargetType::InstigatorPlayerPawn", (int64)EScriptTargetType::InstigatorPlayerPawn },
				{ "EScriptTargetType::ResponderPlayerPawn", (int64)EScriptTargetType::ResponderPlayerPawn },
				{ "EScriptTargetType::Speaker", (int64)EScriptTargetType::Speaker },
				{ "EScriptTargetType::Listener", (int64)EScriptTargetType::Listener },
				{ "EScriptTargetType::MAX", (int64)EScriptTargetType::MAX },
				{ "EScriptTargetType::WorldContextObject", (int64)EScriptTargetType::WorldContextObject },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "InstigatorPlayerPawn.Name", "EScriptTargetType::InstigatorPlayerPawn" },
				{ "Listener.Name", "EScriptTargetType::Listener" },
				{ "LocalPlayerPawn.Name", "EScriptTargetType::LocalPlayerPawn" },
				{ "MAX.Name", "EScriptTargetType::MAX" },
				{ "ModuleRelativePath", "Public/EScriptTargetType.h" },
				{ "Owner.Name", "EScriptTargetType::Owner" },
				{ "ResponderPlayerPawn.Name", "EScriptTargetType::ResponderPlayerPawn" },
				{ "Speaker.Name", "EScriptTargetType::Speaker" },
				{ "WorldContextObject.Name", "EScriptTargetType::WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OEIScripting,
				nullptr,
				"EScriptTargetType",
				"EScriptTargetType",
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