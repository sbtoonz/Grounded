// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/PhotoModePoseData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhotoModePoseData() {}
// Cross Module References
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModePoseData_NoRegister();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModePoseData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
	OEIPHOTOMODE_API UScriptStruct* Z_Construct_UScriptStruct_FPhotoModePose();
// End Cross Module References
	void UPhotoModePoseData::StaticRegisterNativesUPhotoModePoseData()
	{
	}
	UClass* Z_Construct_UClass_UPhotoModePoseData_NoRegister()
	{
		return UPhotoModePoseData::StaticClass();
	}
	struct Z_Construct_UClass_UPhotoModePoseData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Poses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Poses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Poses;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhotoModePoseData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIPhotoMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModePoseData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PhotoModePoseData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PhotoModePoseData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhotoModePoseData_Statics::NewProp_Poses_Inner = { "Poses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPhotoModePose, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModePoseData_Statics::NewProp_Poses_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModePoseData" },
		{ "ModuleRelativePath", "Public/PhotoModePoseData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhotoModePoseData_Statics::NewProp_Poses = { "Poses", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModePoseData, Poses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPhotoModePoseData_Statics::NewProp_Poses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModePoseData_Statics::NewProp_Poses_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhotoModePoseData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModePoseData_Statics::NewProp_Poses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModePoseData_Statics::NewProp_Poses,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhotoModePoseData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhotoModePoseData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhotoModePoseData_Statics::ClassParams = {
		&UPhotoModePoseData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhotoModePoseData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModePoseData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhotoModePoseData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModePoseData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhotoModePoseData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhotoModePoseData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhotoModePoseData, 1270194171);
	template<> OEIPHOTOMODE_API UClass* StaticClass<UPhotoModePoseData>()
	{
		return UPhotoModePoseData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhotoModePoseData(Z_Construct_UClass_UPhotoModePoseData, &UPhotoModePoseData::StaticClass, TEXT("/Script/OEIPhotoMode"), TEXT("UPhotoModePoseData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhotoModePoseData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
