// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineManager/Public/EBlueprintUserProfilePictureSize.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBlueprintUserProfilePictureSize() {}
// Cross Module References
	ONLINEMANAGER_API UEnum* Z_Construct_UEnum_OnlineManager_EBlueprintUserProfilePictureSize();
	UPackage* Z_Construct_UPackage__Script_OnlineManager();
// End Cross Module References
	static UEnum* EBlueprintUserProfilePictureSize_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineManager_EBlueprintUserProfilePictureSize, Z_Construct_UPackage__Script_OnlineManager(), TEXT("EBlueprintUserProfilePictureSize"));
		}
		return Singleton;
	}
	template<> ONLINEMANAGER_API UEnum* StaticEnum<EBlueprintUserProfilePictureSize>()
	{
		return EBlueprintUserProfilePictureSize_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlueprintUserProfilePictureSize(EBlueprintUserProfilePictureSize_StaticEnum, TEXT("/Script/OnlineManager"), TEXT("EBlueprintUserProfilePictureSize"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineManager_EBlueprintUserProfilePictureSize_Hash() { return 1265673316U; }
	UEnum* Z_Construct_UEnum_OnlineManager_EBlueprintUserProfilePictureSize()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineManager();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlueprintUserProfilePictureSize"), 0, Get_Z_Construct_UEnum_OnlineManager_EBlueprintUserProfilePictureSize_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBlueprintUserProfilePictureSize::Small", (int64)EBlueprintUserProfilePictureSize::Small },
				{ "EBlueprintUserProfilePictureSize::Medium", (int64)EBlueprintUserProfilePictureSize::Medium },
				{ "EBlueprintUserProfilePictureSize::Large", (int64)EBlueprintUserProfilePictureSize::Large },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Large.Name", "EBlueprintUserProfilePictureSize::Large" },
				{ "Medium.Name", "EBlueprintUserProfilePictureSize::Medium" },
				{ "ModuleRelativePath", "Public/EBlueprintUserProfilePictureSize.h" },
				{ "Small.Name", "EBlueprintUserProfilePictureSize::Small" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineManager,
				nullptr,
				"EBlueprintUserProfilePictureSize",
				"EBlueprintUserProfilePictureSize",
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
