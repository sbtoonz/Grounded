// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEICommon/Public/PooledActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePooledActor() {}
// Cross Module References
	OEICOMMON_API UClass* Z_Construct_UClass_APooledActor_NoRegister();
	OEICOMMON_API UClass* Z_Construct_UClass_APooledActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_OEICommon();
// End Cross Module References
	DEFINE_FUNCTION(APooledActor::execIsSpawned)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSpawned();
		P_NATIVE_END;
	}
	void APooledActor::StaticRegisterNativesAPooledActor()
	{
		UClass* Class = APooledActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsSpawned", &APooledActor::execIsSpawned },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APooledActor_IsSpawned_Statics
	{
		struct PooledActor_eventIsSpawned_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APooledActor_IsSpawned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PooledActor_eventIsSpawned_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APooledActor_IsSpawned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PooledActor_eventIsSpawned_Parms), &Z_Construct_UFunction_APooledActor_IsSpawned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APooledActor_IsSpawned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APooledActor_IsSpawned_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APooledActor_IsSpawned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PooledActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APooledActor_IsSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APooledActor, nullptr, "IsSpawned", nullptr, nullptr, sizeof(PooledActor_eventIsSpawned_Parms), Z_Construct_UFunction_APooledActor_IsSpawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APooledActor_IsSpawned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APooledActor_IsSpawned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APooledActor_IsSpawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APooledActor_IsSpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APooledActor_IsSpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APooledActor_NoRegister()
	{
		return APooledActor::StaticClass();
	}
	struct Z_Construct_UClass_APooledActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawned_MetaData[];
#endif
		static void NewProp_Spawned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Spawned;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APooledActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OEICommon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APooledActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APooledActor_IsSpawned, "IsSpawned" }, // 2140441006
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APooledActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PooledActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PooledActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APooledActor_Statics::NewProp_Spawned_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PooledActor" },
		{ "ModuleRelativePath", "Public/PooledActor.h" },
	};
#endif
	void Z_Construct_UClass_APooledActor_Statics::NewProp_Spawned_SetBit(void* Obj)
	{
		((APooledActor*)Obj)->Spawned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APooledActor_Statics::NewProp_Spawned = { "Spawned", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APooledActor), &Z_Construct_UClass_APooledActor_Statics::NewProp_Spawned_SetBit, METADATA_PARAMS(Z_Construct_UClass_APooledActor_Statics::NewProp_Spawned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APooledActor_Statics::NewProp_Spawned_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APooledActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APooledActor_Statics::NewProp_Spawned,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APooledActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APooledActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APooledActor_Statics::ClassParams = {
		&APooledActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APooledActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APooledActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APooledActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APooledActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APooledActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APooledActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APooledActor, 2652170467);
	template<> OEICOMMON_API UClass* StaticClass<APooledActor>()
	{
		return APooledActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APooledActor(Z_Construct_UClass_APooledActor, &APooledActor::StaticClass, TEXT("/Script/OEICommon"), TEXT("APooledActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APooledActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
