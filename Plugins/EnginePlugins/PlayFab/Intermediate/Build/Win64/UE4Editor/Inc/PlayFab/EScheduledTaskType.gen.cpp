// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/EScheduledTaskType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEScheduledTaskType() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EScheduledTaskType();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* EScheduledTaskType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EScheduledTaskType, Z_Construct_UPackage__Script_PlayFab(), TEXT("EScheduledTaskType"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EScheduledTaskType>()
	{
		return EScheduledTaskType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EScheduledTaskType(EScheduledTaskType_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EScheduledTaskType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EScheduledTaskType_Hash() { return 232473430U; }
	UEnum* Z_Construct_UEnum_PlayFab_EScheduledTaskType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EScheduledTaskType"), 0, Get_Z_Construct_UEnum_PlayFab_EScheduledTaskType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EScheduledTaskType::pfenum_CloudScript", (int64)EScheduledTaskType::pfenum_CloudScript },
				{ "EScheduledTaskType::pfenum_ActionsOnPlayerSegment", (int64)EScheduledTaskType::pfenum_ActionsOnPlayerSegment },
				{ "EScheduledTaskType::pfenum_CloudScriptAzureFunctions", (int64)EScheduledTaskType::pfenum_CloudScriptAzureFunctions },
				{ "EScheduledTaskType::pfenum_InsightsScheduledScaling", (int64)EScheduledTaskType::pfenum_InsightsScheduledScaling },
				{ "EScheduledTaskType::pfenum_MAX", (int64)EScheduledTaskType::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EScheduledTaskType.h" },
				{ "pfenum_ActionsOnPlayerSegment.Name", "EScheduledTaskType::pfenum_ActionsOnPlayerSegment" },
				{ "pfenum_CloudScript.Name", "EScheduledTaskType::pfenum_CloudScript" },
				{ "pfenum_CloudScriptAzureFunctions.Name", "EScheduledTaskType::pfenum_CloudScriptAzureFunctions" },
				{ "pfenum_InsightsScheduledScaling.Name", "EScheduledTaskType::pfenum_InsightsScheduledScaling" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "EScheduledTaskType::pfenum_MAX" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EScheduledTaskType",
				"EScheduledTaskType",
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
