// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEICommon/Public/Shape.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShape() {}
// Cross Module References
	OEICOMMON_API UClass* Z_Construct_UClass_UShape_NoRegister();
	OEICOMMON_API UClass* Z_Construct_UClass_UShape();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OEICommon();
// End Cross Module References
	void UShape::StaticRegisterNativesUShape()
	{
	}
	UClass* Z_Construct_UClass_UShape_NoRegister()
	{
		return UShape::StaticClass();
	}
	struct Z_Construct_UClass_UShape_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OEICommon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShape_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Shape.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Shape.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShape>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShape_Statics::ClassParams = {
		&UShape::StaticClass,
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
		0x002030A1u,
		METADATA_PARAMS(Z_Construct_UClass_UShape_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShape_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShape()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShape_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShape, 980766890);
	template<> OEICOMMON_API UClass* StaticClass<UShape>()
	{
		return UShape::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShape(Z_Construct_UClass_UShape, &UShape::StaticClass, TEXT("/Script/OEICommon"), TEXT("UShape"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShape);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
