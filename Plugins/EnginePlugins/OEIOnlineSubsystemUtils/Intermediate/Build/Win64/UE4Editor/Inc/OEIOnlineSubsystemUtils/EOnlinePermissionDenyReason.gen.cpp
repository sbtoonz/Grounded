// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIOnlineSubsystemUtils/Public/EOnlinePermissionDenyReason.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOnlinePermissionDenyReason() {}
// Cross Module References
	OEIONLINESUBSYSTEMUTILS_API UEnum* Z_Construct_UEnum_OEIOnlineSubsystemUtils_EOnlinePermissionDenyReason();
	UPackage* Z_Construct_UPackage__Script_OEIOnlineSubsystemUtils();
// End Cross Module References
	static UEnum* EOnlinePermissionDenyReason_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OEIOnlineSubsystemUtils_EOnlinePermissionDenyReason, Z_Construct_UPackage__Script_OEIOnlineSubsystemUtils(), TEXT("EOnlinePermissionDenyReason"));
		}
		return Singleton;
	}
	template<> OEIONLINESUBSYSTEMUTILS_API UEnum* StaticEnum<EOnlinePermissionDenyReason>()
	{
		return EOnlinePermissionDenyReason_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOnlinePermissionDenyReason(EOnlinePermissionDenyReason_StaticEnum, TEXT("/Script/OEIOnlineSubsystemUtils"), TEXT("EOnlinePermissionDenyReason"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OEIOnlineSubsystemUtils_EOnlinePermissionDenyReason_Hash() { return 155915386U; }
	UEnum* Z_Construct_UEnum_OEIOnlineSubsystemUtils_EOnlinePermissionDenyReason()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OEIOnlineSubsystemUtils();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOnlinePermissionDenyReason"), 0, Get_Z_Construct_UEnum_OEIOnlineSubsystemUtils_EOnlinePermissionDenyReason_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOnlinePermissionDenyReason::Allowed", (int64)EOnlinePermissionDenyReason::Allowed },
				{ "EOnlinePermissionDenyReason::Unknown", (int64)EOnlinePermissionDenyReason::Unknown },
				{ "EOnlinePermissionDenyReason::NotAllowed", (int64)EOnlinePermissionDenyReason::NotAllowed },
				{ "EOnlinePermissionDenyReason::MissingPrivilege", (int64)EOnlinePermissionDenyReason::MissingPrivilege },
				{ "EOnlinePermissionDenyReason::PrivilegeRestrictsTarget", (int64)EOnlinePermissionDenyReason::PrivilegeRestrictsTarget },
				{ "EOnlinePermissionDenyReason::BlockListRestrictsTarget", (int64)EOnlinePermissionDenyReason::BlockListRestrictsTarget },
				{ "EOnlinePermissionDenyReason::MuteListRestrictsTarget", (int64)EOnlinePermissionDenyReason::MuteListRestrictsTarget },
				{ "EOnlinePermissionDenyReason::PrivacySettingsRestrictsTarget", (int64)EOnlinePermissionDenyReason::PrivacySettingsRestrictsTarget },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Allowed.Name", "EOnlinePermissionDenyReason::Allowed" },
				{ "BlockListRestrictsTarget.Name", "EOnlinePermissionDenyReason::BlockListRestrictsTarget" },
				{ "MissingPrivilege.Name", "EOnlinePermissionDenyReason::MissingPrivilege" },
				{ "ModuleRelativePath", "Public/EOnlinePermissionDenyReason.h" },
				{ "MuteListRestrictsTarget.Name", "EOnlinePermissionDenyReason::MuteListRestrictsTarget" },
				{ "NotAllowed.Name", "EOnlinePermissionDenyReason::NotAllowed" },
				{ "PrivacySettingsRestrictsTarget.Name", "EOnlinePermissionDenyReason::PrivacySettingsRestrictsTarget" },
				{ "PrivilegeRestrictsTarget.Name", "EOnlinePermissionDenyReason::PrivilegeRestrictsTarget" },
				{ "Unknown.Name", "EOnlinePermissionDenyReason::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OEIOnlineSubsystemUtils,
				nullptr,
				"EOnlinePermissionDenyReason",
				"EOnlinePermissionDenyReason",
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
