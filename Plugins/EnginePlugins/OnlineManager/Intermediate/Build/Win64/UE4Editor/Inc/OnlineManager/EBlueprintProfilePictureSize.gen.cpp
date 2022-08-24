// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineManager/Public/EBlueprintProfilePictureSize.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBlueprintProfilePictureSize() {}
// Cross Module References
	ONLINEMANAGER_API UEnum* Z_Construct_UEnum_OnlineManager_EBlueprintProfilePictureSize();
	UPackage* Z_Construct_UPackage__Script_OnlineManager();
// End Cross Module References
	static UEnum* EBlueprintProfilePictureSize_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineManager_EBlueprintProfilePictureSize, Z_Construct_UPackage__Script_OnlineManager(), TEXT("EBlueprintProfilePictureSize"));
		}
		return Singleton;
	}
	template<> ONLINEMANAGER_API UEnum* StaticEnum<EBlueprintProfilePictureSize>()
	{
		return EBlueprintProfilePictureSize_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlueprintProfilePictureSize(EBlueprintProfilePictureSize_StaticEnum, TEXT("/Script/OnlineManager"), TEXT("EBlueprintProfilePictureSize"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineManager_EBlueprintProfilePictureSize_Hash() { return 943133265U; }
	UEnum* Z_Construct_UEnum_OnlineManager_EBlueprintProfilePictureSize()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineManager();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlueprintProfilePictureSize"), 0, Get_Z_Construct_UEnum_OnlineManager_EBlueprintProfilePictureSize_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBlueprintProfilePictureSize::Small", (int64)EBlueprintProfilePictureSize::Small },
				{ "EBlueprintProfilePictureSize::Medium", (int64)EBlueprintProfilePictureSize::Medium },
				{ "EBlueprintProfilePictureSize::Large", (int64)EBlueprintProfilePictureSize::Large },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Large.Name", "EBlueprintProfilePictureSize::Large" },
				{ "Medium.Name", "EBlueprintProfilePictureSize::Medium" },
				{ "ModuleRelativePath", "Public/EBlueprintProfilePictureSize.h" },
				{ "Small.Name", "EBlueprintProfilePictureSize::Small" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineManager,
				nullptr,
				"EBlueprintProfilePictureSize",
				"EBlueprintProfilePictureSize",
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
