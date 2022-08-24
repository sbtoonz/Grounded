// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/EPhotoPawnType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPhotoPawnType() {}
// Cross Module References
	OEIPHOTOMODE_API UEnum* Z_Construct_UEnum_OEIPhotoMode_EPhotoPawnType();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
// End Cross Module References
	static UEnum* EPhotoPawnType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OEIPhotoMode_EPhotoPawnType, Z_Construct_UPackage__Script_OEIPhotoMode(), TEXT("EPhotoPawnType"));
		}
		return Singleton;
	}
	template<> OEIPHOTOMODE_API UEnum* StaticEnum<EPhotoPawnType>()
	{
		return EPhotoPawnType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPhotoPawnType(EPhotoPawnType_StaticEnum, TEXT("/Script/OEIPhotoMode"), TEXT("EPhotoPawnType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OEIPhotoMode_EPhotoPawnType_Hash() { return 215687303U; }
	UEnum* Z_Construct_UEnum_OEIPhotoMode_EPhotoPawnType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OEIPhotoMode();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPhotoPawnType"), 0, Get_Z_Construct_UEnum_OEIPhotoMode_EPhotoPawnType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPhotoPawnType::Base", (int64)EPhotoPawnType::Base },
				{ "EPhotoPawnType::FreeCam", (int64)EPhotoPawnType::FreeCam },
				{ "EPhotoPawnType::SpringArm", (int64)EPhotoPawnType::SpringArm },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Base.Name", "EPhotoPawnType::Base" },
				{ "BlueprintType", "true" },
				{ "FreeCam.Name", "EPhotoPawnType::FreeCam" },
				{ "ModuleRelativePath", "Public/EPhotoPawnType.h" },
				{ "SpringArm.Name", "EPhotoPawnType::SpringArm" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OEIPhotoMode,
				nullptr,
				"EPhotoPawnType",
				"EPhotoPawnType",
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
