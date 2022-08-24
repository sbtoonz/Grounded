// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/EContainerFlavor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEContainerFlavor() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EContainerFlavor();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* EContainerFlavor_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EContainerFlavor, Z_Construct_UPackage__Script_PlayFab(), TEXT("EContainerFlavor"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EContainerFlavor>()
	{
		return EContainerFlavor_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EContainerFlavor(EContainerFlavor_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EContainerFlavor"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EContainerFlavor_Hash() { return 2026937526U; }
	UEnum* Z_Construct_UEnum_PlayFab_EContainerFlavor()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EContainerFlavor"), 0, Get_Z_Construct_UEnum_PlayFab_EContainerFlavor_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EContainerFlavor::pfenum_ManagedWindowsServerCore", (int64)EContainerFlavor::pfenum_ManagedWindowsServerCore },
				{ "EContainerFlavor::pfenum_CustomLinux", (int64)EContainerFlavor::pfenum_CustomLinux },
				{ "EContainerFlavor::pfenum_ManagedWindowsServerCorePreview", (int64)EContainerFlavor::pfenum_ManagedWindowsServerCorePreview },
				{ "EContainerFlavor::pfenum_Invalid", (int64)EContainerFlavor::pfenum_Invalid },
				{ "EContainerFlavor::pfenum_MAX", (int64)EContainerFlavor::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EContainerFlavor.h" },
				{ "pfenum_CustomLinux.Name", "EContainerFlavor::pfenum_CustomLinux" },
				{ "pfenum_Invalid.Name", "EContainerFlavor::pfenum_Invalid" },
				{ "pfenum_ManagedWindowsServerCore.Name", "EContainerFlavor::pfenum_ManagedWindowsServerCore" },
				{ "pfenum_ManagedWindowsServerCorePreview.Name", "EContainerFlavor::pfenum_ManagedWindowsServerCorePreview" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "EContainerFlavor::pfenum_MAX" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EContainerFlavor",
				"EContainerFlavor",
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
