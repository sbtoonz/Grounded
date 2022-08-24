// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEICommon/Public/SphereShape.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSphereShape() {}
// Cross Module References
	OEICOMMON_API UClass* Z_Construct_UClass_USphereShape_NoRegister();
	OEICOMMON_API UClass* Z_Construct_UClass_USphereShape();
	OEICOMMON_API UClass* Z_Construct_UClass_UShape();
	UPackage* Z_Construct_UPackage__Script_OEICommon();
	OEICOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FSphereShapeData();
// End Cross Module References
	void USphereShape::StaticRegisterNativesUSphereShape()
	{
	}
	UClass* Z_Construct_UClass_USphereShape_NoRegister()
	{
		return USphereShape::StaticClass();
	}
	struct Z_Construct_UClass_USphereShape_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereShape_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SphereShape;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USphereShape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UShape,
		(UObject* (*)())Z_Construct_UPackage__Script_OEICommon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphereShape_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SphereShape.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SphereShape.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphereShape_Statics::NewProp_SphereShape_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SphereShape" },
		{ "ModuleRelativePath", "Public/SphereShape.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USphereShape_Statics::NewProp_SphereShape = { "SphereShape", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USphereShape, SphereShape), Z_Construct_UScriptStruct_FSphereShapeData, METADATA_PARAMS(Z_Construct_UClass_USphereShape_Statics::NewProp_SphereShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USphereShape_Statics::NewProp_SphereShape_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USphereShape_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USphereShape_Statics::NewProp_SphereShape,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USphereShape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USphereShape>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USphereShape_Statics::ClassParams = {
		&USphereShape::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USphereShape_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USphereShape_Statics::PropPointers),
		0,
		0x003030A0u,
		METADATA_PARAMS(Z_Construct_UClass_USphereShape_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USphereShape_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USphereShape()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USphereShape_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USphereShape, 645338100);
	template<> OEICOMMON_API UClass* StaticClass<USphereShape>()
	{
		return USphereShape::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USphereShape(Z_Construct_UClass_USphereShape, &USphereShape::StaticClass, TEXT("/Script/OEICommon"), TEXT("USphereShape"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USphereShape);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
