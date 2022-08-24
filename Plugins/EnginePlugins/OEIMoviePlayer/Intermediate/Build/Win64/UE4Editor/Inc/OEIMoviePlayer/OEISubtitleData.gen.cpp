// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIMoviePlayer/Public/OEISubtitleData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEISubtitleData() {}
// Cross Module References
	OEIMOVIEPLAYER_API UClass* Z_Construct_UClass_UOEISubtitleData_NoRegister();
	OEIMOVIEPLAYER_API UClass* Z_Construct_UClass_UOEISubtitleData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_OEIMoviePlayer();
	OEIMOVIEPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FOEISubtitleEntry();
// End Cross Module References
	void UOEISubtitleData::StaticRegisterNativesUOEISubtitleData()
	{
	}
	UClass* Z_Construct_UClass_UOEISubtitleData_NoRegister()
	{
		return UOEISubtitleData::StaticClass();
	}
	struct Z_Construct_UClass_UOEISubtitleData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConversationFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConversationFile;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubtitleEntries_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitleEntries_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubtitleEntries;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEISubtitleData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIMoviePlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEISubtitleData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEISubtitleData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEISubtitleData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEISubtitleData_Statics::NewProp_ConversationFile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEISubtitleData" },
		{ "ModuleRelativePath", "Public/OEISubtitleData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOEISubtitleData_Statics::NewProp_ConversationFile = { "ConversationFile", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEISubtitleData, ConversationFile), METADATA_PARAMS(Z_Construct_UClass_UOEISubtitleData_Statics::NewProp_ConversationFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEISubtitleData_Statics::NewProp_ConversationFile_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOEISubtitleData_Statics::NewProp_SubtitleEntries_Inner = { "SubtitleEntries", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOEISubtitleEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEISubtitleData_Statics::NewProp_SubtitleEntries_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEISubtitleData" },
		{ "ModuleRelativePath", "Public/OEISubtitleData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOEISubtitleData_Statics::NewProp_SubtitleEntries = { "SubtitleEntries", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEISubtitleData, SubtitleEntries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOEISubtitleData_Statics::NewProp_SubtitleEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEISubtitleData_Statics::NewProp_SubtitleEntries_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOEISubtitleData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEISubtitleData_Statics::NewProp_ConversationFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEISubtitleData_Statics::NewProp_SubtitleEntries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEISubtitleData_Statics::NewProp_SubtitleEntries,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEISubtitleData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEISubtitleData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEISubtitleData_Statics::ClassParams = {
		&UOEISubtitleData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOEISubtitleData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOEISubtitleData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOEISubtitleData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEISubtitleData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEISubtitleData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEISubtitleData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEISubtitleData, 975674737);
	template<> OEIMOVIEPLAYER_API UClass* StaticClass<UOEISubtitleData>()
	{
		return UOEISubtitleData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEISubtitleData(Z_Construct_UClass_UOEISubtitleData, &UOEISubtitleData::StaticClass, TEXT("/Script/OEIMoviePlayer"), TEXT("UOEISubtitleData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEISubtitleData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
