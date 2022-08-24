// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEICommon/Public/GameObjectRegistry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameObjectRegistry() {}
// Cross Module References
	OEICOMMON_API UClass* Z_Construct_UClass_UGameObjectRegistry_NoRegister();
	OEICOMMON_API UClass* Z_Construct_UClass_UGameObjectRegistry();
	OEICOMMON_API UClass* Z_Construct_UClass_UOEIWorldRuntimeSubsystem();
	UPackage* Z_Construct_UPackage__Script_OEICommon();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UGameObjectRegistry::StaticRegisterNativesUGameObjectRegistry()
	{
	}
	UClass* Z_Construct_UClass_UGameObjectRegistry_NoRegister()
	{
		return UGameObjectRegistry::StaticClass();
	}
	struct Z_Construct_UClass_UGameObjectRegistry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RegisteredGameObjects_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RegisteredGameObjects_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisteredGameObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_RegisteredGameObjects;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameObjectRegistry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOEIWorldRuntimeSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OEICommon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameObjectRegistry_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameObjectRegistry.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameObjectRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameObjectRegistry_Statics::NewProp_RegisteredGameObjects_ValueProp = { "RegisteredGameObjects", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameObjectRegistry_Statics::NewProp_RegisteredGameObjects_Key_KeyProp = { "RegisteredGameObjects_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameObjectRegistry_Statics::NewProp_RegisteredGameObjects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameObjectRegistry" },
		{ "ModuleRelativePath", "Public/GameObjectRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGameObjectRegistry_Statics::NewProp_RegisteredGameObjects = { "RegisteredGameObjects", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameObjectRegistry, RegisteredGameObjects), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameObjectRegistry_Statics::NewProp_RegisteredGameObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameObjectRegistry_Statics::NewProp_RegisteredGameObjects_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameObjectRegistry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameObjectRegistry_Statics::NewProp_RegisteredGameObjects_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameObjectRegistry_Statics::NewProp_RegisteredGameObjects_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameObjectRegistry_Statics::NewProp_RegisteredGameObjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameObjectRegistry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameObjectRegistry>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameObjectRegistry_Statics::ClassParams = {
		&UGameObjectRegistry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameObjectRegistry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameObjectRegistry_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameObjectRegistry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameObjectRegistry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameObjectRegistry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameObjectRegistry_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameObjectRegistry, 398477059);
	template<> OEICOMMON_API UClass* StaticClass<UGameObjectRegistry>()
	{
		return UGameObjectRegistry::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameObjectRegistry(Z_Construct_UClass_UGameObjectRegistry, &UGameObjectRegistry::StaticClass, TEXT("/Script/OEICommon"), TEXT("UGameObjectRegistry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameObjectRegistry);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
