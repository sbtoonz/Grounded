// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/FreeCamPhotoPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFreeCamPhotoPawn() {}
// Cross Module References
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_AFreeCamPhotoPawn_NoRegister();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_AFreeCamPhotoPawn();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_APhotoPawn();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
// End Cross Module References
	void AFreeCamPhotoPawn::StaticRegisterNativesAFreeCamPhotoPawn()
	{
	}
	UClass* Z_Construct_UClass_AFreeCamPhotoPawn_NoRegister()
	{
		return AFreeCamPhotoPawn::StaticClass();
	}
	struct Z_Construct_UClass_AFreeCamPhotoPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedIncreaseRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedIncreaseRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TetherDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TetherDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFreeCamPhotoPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APhotoPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIPhotoMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFreeCamPhotoPawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FreeCamPhotoPawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FreeCamPhotoPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFreeCamPhotoPawn_Statics::NewProp_SpeedIncreaseRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FreeCamPhotoPawn" },
		{ "ModuleRelativePath", "Public/FreeCamPhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFreeCamPhotoPawn_Statics::NewProp_SpeedIncreaseRate = { "SpeedIncreaseRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFreeCamPhotoPawn, SpeedIncreaseRate), METADATA_PARAMS(Z_Construct_UClass_AFreeCamPhotoPawn_Statics::NewProp_SpeedIncreaseRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFreeCamPhotoPawn_Statics::NewProp_SpeedIncreaseRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFreeCamPhotoPawn_Statics::NewProp_MaxSpeedMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FreeCamPhotoPawn" },
		{ "ModuleRelativePath", "Public/FreeCamPhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFreeCamPhotoPawn_Statics::NewProp_MaxSpeedMultiplier = { "MaxSpeedMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFreeCamPhotoPawn, MaxSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_AFreeCamPhotoPawn_Statics::NewProp_MaxSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFreeCamPhotoPawn_Statics::NewProp_MaxSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFreeCamPhotoPawn_Statics::NewProp_MinSpeedMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FreeCamPhotoPawn" },
		{ "ModuleRelativePath", "Public/FreeCamPhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFreeCamPhotoPawn_Statics::NewProp_MinSpeedMultiplier = { "MinSpeedMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFreeCamPhotoPawn, MinSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_AFreeCamPhotoPawn_Statics::NewProp_MinSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFreeCamPhotoPawn_Statics::NewProp_MinSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFreeCamPhotoPawn_Statics::NewProp_TetherDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FreeCamPhotoPawn" },
		{ "ModuleRelativePath", "Public/FreeCamPhotoPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFreeCamPhotoPawn_Statics::NewProp_TetherDistance = { "TetherDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFreeCamPhotoPawn, TetherDistance), METADATA_PARAMS(Z_Construct_UClass_AFreeCamPhotoPawn_Statics::NewProp_TetherDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFreeCamPhotoPawn_Statics::NewProp_TetherDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFreeCamPhotoPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFreeCamPhotoPawn_Statics::NewProp_SpeedIncreaseRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFreeCamPhotoPawn_Statics::NewProp_MaxSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFreeCamPhotoPawn_Statics::NewProp_MinSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFreeCamPhotoPawn_Statics::NewProp_TetherDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFreeCamPhotoPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFreeCamPhotoPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFreeCamPhotoPawn_Statics::ClassParams = {
		&AFreeCamPhotoPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFreeCamPhotoPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFreeCamPhotoPawn_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFreeCamPhotoPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFreeCamPhotoPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFreeCamPhotoPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFreeCamPhotoPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFreeCamPhotoPawn, 1382996847);
	template<> OEIPHOTOMODE_API UClass* StaticClass<AFreeCamPhotoPawn>()
	{
		return AFreeCamPhotoPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFreeCamPhotoPawn(Z_Construct_UClass_AFreeCamPhotoPawn, &AFreeCamPhotoPawn::StaticClass, TEXT("/Script/OEIPhotoMode"), TEXT("AFreeCamPhotoPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFreeCamPhotoPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
