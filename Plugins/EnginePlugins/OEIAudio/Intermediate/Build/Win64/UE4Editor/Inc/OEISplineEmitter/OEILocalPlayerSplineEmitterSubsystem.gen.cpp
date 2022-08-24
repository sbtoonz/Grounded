// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEISplineEmitter/Public/OEILocalPlayerSplineEmitterSubsystem.h"
#include "Engine/Classes/Engine/LocalPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEILocalPlayerSplineEmitterSubsystem() {}
// Cross Module References
	OEISPLINEEMITTER_API UClass* Z_Construct_UClass_UOEILocalPlayerSplineEmitterSubsystem_NoRegister();
	OEISPLINEEMITTER_API UClass* Z_Construct_UClass_UOEILocalPlayerSplineEmitterSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem();
	UPackage* Z_Construct_UPackage__Script_OEISplineEmitter();
// End Cross Module References
	void UOEILocalPlayerSplineEmitterSubsystem::StaticRegisterNativesUOEILocalPlayerSplineEmitterSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UOEILocalPlayerSplineEmitterSubsystem_NoRegister()
	{
		return UOEILocalPlayerSplineEmitterSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOEILocalPlayerSplineEmitterSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEILocalPlayerSplineEmitterSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalPlayerSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OEISplineEmitter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEILocalPlayerSplineEmitterSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEILocalPlayerSplineEmitterSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEILocalPlayerSplineEmitterSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEILocalPlayerSplineEmitterSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEILocalPlayerSplineEmitterSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEILocalPlayerSplineEmitterSubsystem_Statics::ClassParams = {
		&UOEILocalPlayerSplineEmitterSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOEILocalPlayerSplineEmitterSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEILocalPlayerSplineEmitterSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEILocalPlayerSplineEmitterSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEILocalPlayerSplineEmitterSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEILocalPlayerSplineEmitterSubsystem, 2648557697);
	template<> OEISPLINEEMITTER_API UClass* StaticClass<UOEILocalPlayerSplineEmitterSubsystem>()
	{
		return UOEILocalPlayerSplineEmitterSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEILocalPlayerSplineEmitterSubsystem(Z_Construct_UClass_UOEILocalPlayerSplineEmitterSubsystem, &UOEILocalPlayerSplineEmitterSubsystem::StaticClass, TEXT("/Script/OEISplineEmitter"), TEXT("UOEILocalPlayerSplineEmitterSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEILocalPlayerSplineEmitterSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
