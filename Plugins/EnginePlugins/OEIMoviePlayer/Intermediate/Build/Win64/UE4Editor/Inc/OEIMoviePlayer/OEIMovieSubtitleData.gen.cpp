// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIMoviePlayer/Public/OEIMovieSubtitleData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIMovieSubtitleData() {}
// Cross Module References
	OEIMOVIEPLAYER_API UClass* Z_Construct_UClass_UOEIMovieSubtitleData_NoRegister();
	OEIMOVIEPLAYER_API UClass* Z_Construct_UClass_UOEIMovieSubtitleData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_OEIMoviePlayer();
	OEIMOVIEPLAYER_API UClass* Z_Construct_UClass_UOEISubtitleData_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UOEIMovieSubtitleData::StaticRegisterNativesUOEIMovieSubtitleData()
	{
	}
	UClass* Z_Construct_UClass_UOEIMovieSubtitleData_NoRegister()
	{
		return UOEIMovieSubtitleData::StaticClass();
	}
	struct Z_Construct_UClass_UOEIMovieSubtitleData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubtitleData_ValueProp;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SubtitleData_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitleData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SubtitleData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEIMovieSubtitleData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIMoviePlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIMovieSubtitleData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEIMovieSubtitleData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEIMovieSubtitleData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOEIMovieSubtitleData_Statics::NewProp_SubtitleData_ValueProp = { "SubtitleData", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UOEISubtitleData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOEIMovieSubtitleData_Statics::NewProp_SubtitleData_Key_KeyProp = { "SubtitleData_Key", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIMovieSubtitleData_Statics::NewProp_SubtitleData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIMovieSubtitleData" },
		{ "ModuleRelativePath", "Public/OEIMovieSubtitleData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOEIMovieSubtitleData_Statics::NewProp_SubtitleData = { "SubtitleData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIMovieSubtitleData, SubtitleData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOEIMovieSubtitleData_Statics::NewProp_SubtitleData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIMovieSubtitleData_Statics::NewProp_SubtitleData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOEIMovieSubtitleData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIMovieSubtitleData_Statics::NewProp_SubtitleData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIMovieSubtitleData_Statics::NewProp_SubtitleData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIMovieSubtitleData_Statics::NewProp_SubtitleData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEIMovieSubtitleData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEIMovieSubtitleData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEIMovieSubtitleData_Statics::ClassParams = {
		&UOEIMovieSubtitleData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOEIMovieSubtitleData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOEIMovieSubtitleData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOEIMovieSubtitleData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIMovieSubtitleData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEIMovieSubtitleData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEIMovieSubtitleData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEIMovieSubtitleData, 2917994784);
	template<> OEIMOVIEPLAYER_API UClass* StaticClass<UOEIMovieSubtitleData>()
	{
		return UOEIMovieSubtitleData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEIMovieSubtitleData(Z_Construct_UClass_UOEIMovieSubtitleData, &UOEIMovieSubtitleData::StaticClass, TEXT("/Script/OEIMoviePlayer"), TEXT("UOEIMovieSubtitleData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEIMovieSubtitleData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
