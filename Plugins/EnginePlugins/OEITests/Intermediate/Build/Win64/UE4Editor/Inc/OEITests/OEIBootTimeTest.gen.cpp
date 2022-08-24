// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEITests/Public/OEIBootTimeTest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIBootTimeTest() {}
// Cross Module References
	OEITESTS_API UClass* Z_Construct_UClass_UOEIBootTimeTest_NoRegister();
	OEITESTS_API UClass* Z_Construct_UClass_UOEIBootTimeTest();
	GAUNTLET_API UClass* Z_Construct_UClass_UGauntletTestController();
	UPackage* Z_Construct_UPackage__Script_OEITests();
// End Cross Module References
	void UOEIBootTimeTest::StaticRegisterNativesUOEIBootTimeTest()
	{
	}
	UClass* Z_Construct_UClass_UOEIBootTimeTest_NoRegister()
	{
		return UOEIBootTimeTest::StaticClass();
	}
	struct Z_Construct_UClass_UOEIBootTimeTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEIBootTimeTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGauntletTestController,
		(UObject* (*)())Z_Construct_UPackage__Script_OEITests,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIBootTimeTest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEIBootTimeTest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEIBootTimeTest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEIBootTimeTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEIBootTimeTest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEIBootTimeTest_Statics::ClassParams = {
		&UOEIBootTimeTest::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOEIBootTimeTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIBootTimeTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEIBootTimeTest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEIBootTimeTest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEIBootTimeTest, 2510157554);
	template<> OEITESTS_API UClass* StaticClass<UOEIBootTimeTest>()
	{
		return UOEIBootTimeTest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEIBootTimeTest(Z_Construct_UClass_UOEIBootTimeTest, &UOEIBootTimeTest::StaticClass, TEXT("/Script/OEITests"), TEXT("UOEIBootTimeTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEIBootTimeTest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
