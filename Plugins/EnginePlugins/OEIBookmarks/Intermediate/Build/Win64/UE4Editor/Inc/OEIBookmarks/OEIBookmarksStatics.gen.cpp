// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIBookmarks/Public/OEIBookmarksStatics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIBookmarksStatics() {}
// Cross Module References
	OEIBOOKMARKS_API UClass* Z_Construct_UClass_UOEIBookmarksStatics_NoRegister();
	OEIBOOKMARKS_API UClass* Z_Construct_UClass_UOEIBookmarksStatics();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_OEIBookmarks();
// End Cross Module References
	void UOEIBookmarksStatics::StaticRegisterNativesUOEIBookmarksStatics()
	{
	}
	UClass* Z_Construct_UClass_UOEIBookmarksStatics_NoRegister()
	{
		return UOEIBookmarksStatics::StaticClass();
	}
	struct Z_Construct_UClass_UOEIBookmarksStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEIBookmarksStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIBookmarks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIBookmarksStatics_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEIBookmarksStatics.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEIBookmarksStatics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEIBookmarksStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEIBookmarksStatics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEIBookmarksStatics_Statics::ClassParams = {
		&UOEIBookmarksStatics::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOEIBookmarksStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIBookmarksStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEIBookmarksStatics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEIBookmarksStatics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEIBookmarksStatics, 1838761413);
	template<> OEIBOOKMARKS_API UClass* StaticClass<UOEIBookmarksStatics>()
	{
		return UOEIBookmarksStatics::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEIBookmarksStatics(Z_Construct_UClass_UOEIBookmarksStatics, &UOEIBookmarksStatics::StaticClass, TEXT("/Script/OEIBookmarks"), TEXT("UOEIBookmarksStatics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEIBookmarksStatics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
