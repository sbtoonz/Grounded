// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/PhotoModeGeneralOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhotoModeGeneralOptions() {}
// Cross Module References
	OEIPHOTOMODE_API UScriptStruct* Z_Construct_UScriptStruct_FPhotoModeGeneralOptions();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
class UScriptStruct* FPhotoModeGeneralOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIPHOTOMODE_API uint32 Get_Z_Construct_UScriptStruct_FPhotoModeGeneralOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhotoModeGeneralOptions, Z_Construct_UPackage__Script_OEIPhotoMode(), TEXT("PhotoModeGeneralOptions"), sizeof(FPhotoModeGeneralOptions), Get_Z_Construct_UScriptStruct_FPhotoModeGeneralOptions_Hash());
	}
	return Singleton;
}
template<> OEIPHOTOMODE_API UScriptStruct* StaticStruct<FPhotoModeGeneralOptions>()
{
	return FPhotoModeGeneralOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPhotoModeGeneralOptions(FPhotoModeGeneralOptions::StaticStruct, TEXT("/Script/OEIPhotoMode"), TEXT("PhotoModeGeneralOptions"), false, nullptr, nullptr);
static struct FScriptStruct_OEIPhotoMode_StaticRegisterNativesFPhotoModeGeneralOptions
{
	FScriptStruct_OEIPhotoMode_StaticRegisterNativesFPhotoModeGeneralOptions()
	{
		UScriptStruct::DeferCppStructOps<FPhotoModeGeneralOptions>(FName(TEXT("PhotoModeGeneralOptions")));
	}
} ScriptStruct_OEIPhotoMode_StaticRegisterNativesFPhotoModeGeneralOptions;
	struct Z_Construct_UScriptStruct_FPhotoModeGeneralOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseShutterEffect_MetaData[];
#endif
		static void NewProp_UseShutterEffect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseShutterEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultShutterMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultShutterMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultShutterMaterialControl_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultShutterMaterialControl;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeGeneralOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PhotoModeGeneralOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhotoModeGeneralOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhotoModeGeneralOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeGeneralOptions_Statics::NewProp_UseShutterEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeGeneralOptions" },
		{ "ModuleRelativePath", "Public/PhotoModeGeneralOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPhotoModeGeneralOptions_Statics::NewProp_UseShutterEffect_SetBit(void* Obj)
	{
		((FPhotoModeGeneralOptions*)Obj)->UseShutterEffect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhotoModeGeneralOptions_Statics::NewProp_UseShutterEffect = { "UseShutterEffect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPhotoModeGeneralOptions), &Z_Construct_UScriptStruct_FPhotoModeGeneralOptions_Statics::NewProp_UseShutterEffect_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeGeneralOptions_Statics::NewProp_UseShutterEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeGeneralOptions_Statics::NewProp_UseShutterEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeGeneralOptions_Statics::NewProp_DefaultShutterMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeGeneralOptions" },
		{ "ModuleRelativePath", "Public/PhotoModeGeneralOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPhotoModeGeneralOptions_Statics::NewProp_DefaultShutterMaterial = { "DefaultShutterMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhotoModeGeneralOptions, DefaultShutterMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeGeneralOptions_Statics::NewProp_DefaultShutterMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeGeneralOptions_Statics::NewProp_DefaultShutterMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeGeneralOptions_Statics::NewProp_DefaultShutterMaterialControl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeGeneralOptions" },
		{ "ModuleRelativePath", "Public/PhotoModeGeneralOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPhotoModeGeneralOptions_Statics::NewProp_DefaultShutterMaterialControl = { "DefaultShutterMaterialControl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhotoModeGeneralOptions, DefaultShutterMaterialControl), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeGeneralOptions_Statics::NewProp_DefaultShutterMaterialControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeGeneralOptions_Statics::NewProp_DefaultShutterMaterialControl_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhotoModeGeneralOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeGeneralOptions_Statics::NewProp_UseShutterEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeGeneralOptions_Statics::NewProp_DefaultShutterMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeGeneralOptions_Statics::NewProp_DefaultShutterMaterialControl,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhotoModeGeneralOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIPhotoMode,
		nullptr,
		&NewStructOps,
		"PhotoModeGeneralOptions",
		sizeof(FPhotoModeGeneralOptions),
		alignof(FPhotoModeGeneralOptions),
		Z_Construct_UScriptStruct_FPhotoModeGeneralOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeGeneralOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeGeneralOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeGeneralOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhotoModeGeneralOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPhotoModeGeneralOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIPhotoMode();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PhotoModeGeneralOptions"), sizeof(FPhotoModeGeneralOptions), Get_Z_Construct_UScriptStruct_FPhotoModeGeneralOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPhotoModeGeneralOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPhotoModeGeneralOptions_Hash() { return 1409858047U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
