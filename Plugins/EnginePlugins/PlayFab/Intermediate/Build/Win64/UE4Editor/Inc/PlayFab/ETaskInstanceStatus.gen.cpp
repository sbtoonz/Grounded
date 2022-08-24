// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ETaskInstanceStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETaskInstanceStatus() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ETaskInstanceStatus();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* ETaskInstanceStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_ETaskInstanceStatus, Z_Construct_UPackage__Script_PlayFab(), TEXT("ETaskInstanceStatus"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<ETaskInstanceStatus>()
	{
		return ETaskInstanceStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETaskInstanceStatus(ETaskInstanceStatus_StaticEnum, TEXT("/Script/PlayFab"), TEXT("ETaskInstanceStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_ETaskInstanceStatus_Hash() { return 1957628655U; }
	UEnum* Z_Construct_UEnum_PlayFab_ETaskInstanceStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETaskInstanceStatus"), 0, Get_Z_Construct_UEnum_PlayFab_ETaskInstanceStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETaskInstanceStatus::pfenum_Succeeded", (int64)ETaskInstanceStatus::pfenum_Succeeded },
				{ "ETaskInstanceStatus::pfenum_Starting", (int64)ETaskInstanceStatus::pfenum_Starting },
				{ "ETaskInstanceStatus::pfenum_InProgress", (int64)ETaskInstanceStatus::pfenum_InProgress },
				{ "ETaskInstanceStatus::pfenum_Failed", (int64)ETaskInstanceStatus::pfenum_Failed },
				{ "ETaskInstanceStatus::pfenum_Aborted", (int64)ETaskInstanceStatus::pfenum_Aborted },
				{ "ETaskInstanceStatus::pfenum_Stalled", (int64)ETaskInstanceStatus::pfenum_Stalled },
				{ "ETaskInstanceStatus::pfenum_MAX", (int64)ETaskInstanceStatus::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ETaskInstanceStatus.h" },
				{ "pfenum_Aborted.Name", "ETaskInstanceStatus::pfenum_Aborted" },
				{ "pfenum_Failed.Name", "ETaskInstanceStatus::pfenum_Failed" },
				{ "pfenum_InProgress.Name", "ETaskInstanceStatus::pfenum_InProgress" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "ETaskInstanceStatus::pfenum_MAX" },
				{ "pfenum_Stalled.Name", "ETaskInstanceStatus::pfenum_Stalled" },
				{ "pfenum_Starting.Name", "ETaskInstanceStatus::pfenum_Starting" },
				{ "pfenum_Succeeded.Name", "ETaskInstanceStatus::pfenum_Succeeded" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"ETaskInstanceStatus",
				"ETaskInstanceStatus",
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
