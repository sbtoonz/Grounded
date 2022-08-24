// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEISplineEmitter/Public/OEISplineEmitterActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEISplineEmitterActor() {}
// Cross Module References
	OEISPLINEEMITTER_API UClass* Z_Construct_UClass_AOEISplineEmitterActor_NoRegister();
	OEISPLINEEMITTER_API UClass* Z_Construct_UClass_AOEISplineEmitterActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_OEISplineEmitter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AOEISplineEmitterActor::execStartSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOEISplineEmitterActor::execStopSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopSound();
		P_NATIVE_END;
	}
	void AOEISplineEmitterActor::StaticRegisterNativesAOEISplineEmitterActor()
	{
		UClass* Class = AOEISplineEmitterActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartSound", &AOEISplineEmitterActor::execStartSound },
			{ "StopSound", &AOEISplineEmitterActor::execStopSound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOEISplineEmitterActor_StartSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOEISplineEmitterActor_StartSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEISplineEmitterActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOEISplineEmitterActor_StartSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOEISplineEmitterActor, nullptr, "StartSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOEISplineEmitterActor_StartSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOEISplineEmitterActor_StartSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOEISplineEmitterActor_StartSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOEISplineEmitterActor_StartSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOEISplineEmitterActor_StopSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOEISplineEmitterActor_StopSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEISplineEmitterActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOEISplineEmitterActor_StopSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOEISplineEmitterActor, nullptr, "StopSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOEISplineEmitterActor_StopSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOEISplineEmitterActor_StopSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOEISplineEmitterActor_StopSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOEISplineEmitterActor_StopSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOEISplineEmitterActor_NoRegister()
	{
		return AOEISplineEmitterActor::StaticClass();
	}
	struct Z_Construct_UClass_AOEISplineEmitterActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityRTPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VelocityRTPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmitterComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumAttenuationRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumAttenuationRadius;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SplineVelocities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineVelocities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SplineVelocities;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoPost_MetaData[];
#endif
		static void NewProp_bAutoPost_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoPost;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOEISplineEmitterActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OEISplineEmitter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOEISplineEmitterActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOEISplineEmitterActor_StartSound, "StartSound" }, // 1344173922
		{ &Z_Construct_UFunction_AOEISplineEmitterActor_StopSound, "StopSound" }, // 3672923681
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOEISplineEmitterActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEISplineEmitterActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEISplineEmitterActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_AudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEISplineEmitterActor" },
		{ "ModuleRelativePath", "Public/OEISplineEmitterActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_AudioEvent = { "AudioEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOEISplineEmitterActor, AudioEvent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_AudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_AudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_VelocityRTPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEISplineEmitterActor" },
		{ "ModuleRelativePath", "Public/OEISplineEmitterActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_VelocityRTPC = { "VelocityRTPC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOEISplineEmitterActor, VelocityRTPC), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_VelocityRTPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_VelocityRTPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_EmitterComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEISplineEmitterActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OEISplineEmitterActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_EmitterComponent = { "EmitterComponent", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOEISplineEmitterActor, EmitterComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_EmitterComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_EmitterComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_Spline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEISplineEmitterActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OEISplineEmitterActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOEISplineEmitterActor, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_Spline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_MinimumAttenuationRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEISplineEmitterActor" },
		{ "ModuleRelativePath", "Public/OEISplineEmitterActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_MinimumAttenuationRadius = { "MinimumAttenuationRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOEISplineEmitterActor, MinimumAttenuationRadius), METADATA_PARAMS(Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_MinimumAttenuationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_MinimumAttenuationRadius_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_SplineVelocities_Inner = { "SplineVelocities", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_SplineVelocities_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEISplineEmitterActor" },
		{ "ModuleRelativePath", "Public/OEISplineEmitterActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_SplineVelocities = { "SplineVelocities", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOEISplineEmitterActor, SplineVelocities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_SplineVelocities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_SplineVelocities_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_bAutoPost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEISplineEmitterActor" },
		{ "ModuleRelativePath", "Public/OEISplineEmitterActor.h" },
	};
#endif
	void Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_bAutoPost_SetBit(void* Obj)
	{
		((AOEISplineEmitterActor*)Obj)->bAutoPost = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_bAutoPost = { "bAutoPost", nullptr, (EPropertyFlags)0x0010020000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AOEISplineEmitterActor), &Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_bAutoPost_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_bAutoPost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_bAutoPost_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOEISplineEmitterActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_AudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_VelocityRTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_EmitterComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_Spline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_MinimumAttenuationRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_SplineVelocities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_SplineVelocities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOEISplineEmitterActor_Statics::NewProp_bAutoPost,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOEISplineEmitterActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOEISplineEmitterActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOEISplineEmitterActor_Statics::ClassParams = {
		&AOEISplineEmitterActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOEISplineEmitterActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AOEISplineEmitterActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOEISplineEmitterActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOEISplineEmitterActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOEISplineEmitterActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOEISplineEmitterActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOEISplineEmitterActor, 940622931);
	template<> OEISPLINEEMITTER_API UClass* StaticClass<AOEISplineEmitterActor>()
	{
		return AOEISplineEmitterActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOEISplineEmitterActor(Z_Construct_UClass_AOEISplineEmitterActor, &AOEISplineEmitterActor::StaticClass, TEXT("/Script/OEISplineEmitter"), TEXT("AOEISplineEmitterActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOEISplineEmitterActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
