// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/PhotoModeHelperOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhotoModeHelperOptions() {}
// Cross Module References
	OEIPHOTOMODE_API UScriptStruct* Z_Construct_UScriptStruct_FPhotoModeHelperOptions();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
// End Cross Module References
class UScriptStruct* FPhotoModeHelperOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIPHOTOMODE_API uint32 Get_Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhotoModeHelperOptions, Z_Construct_UPackage__Script_OEIPhotoMode(), TEXT("PhotoModeHelperOptions"), sizeof(FPhotoModeHelperOptions), Get_Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Hash());
	}
	return Singleton;
}
template<> OEIPHOTOMODE_API UScriptStruct* StaticStruct<FPhotoModeHelperOptions>()
{
	return FPhotoModeHelperOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPhotoModeHelperOptions(FPhotoModeHelperOptions::StaticStruct, TEXT("/Script/OEIPhotoMode"), TEXT("PhotoModeHelperOptions"), false, nullptr, nullptr);
static struct FScriptStruct_OEIPhotoMode_StaticRegisterNativesFPhotoModeHelperOptions
{
	FScriptStruct_OEIPhotoMode_StaticRegisterNativesFPhotoModeHelperOptions()
	{
		UScriptStruct::DeferCppStructOps<FPhotoModeHelperOptions>(FName(TEXT("PhotoModeHelperOptions")));
	}
} ScriptStruct_OEIPhotoMode_StaticRegisterNativesFPhotoModeHelperOptions;
	struct Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceLOD0_MetaData[];
#endif
		static void NewProp_ForceLOD0_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceLOD0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeDilation_MetaData[];
#endif
		static void NewProp_TimeDilation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TimeDilation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderStateDirtyOnTick_MetaData[];
#endif
		static void NewProp_RenderStateDirtyOnTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RenderStateDirtyOnTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickableWhenPaused_MetaData[];
#endif
		static void NewProp_TickableWhenPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TickableWhenPaused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PhotoModeHelperOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhotoModeHelperOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::NewProp_ForceLOD0_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeHelperOptions" },
		{ "ModuleRelativePath", "Public/PhotoModeHelperOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::NewProp_ForceLOD0_SetBit(void* Obj)
	{
		((FPhotoModeHelperOptions*)Obj)->ForceLOD0 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::NewProp_ForceLOD0 = { "ForceLOD0", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPhotoModeHelperOptions), &Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::NewProp_ForceLOD0_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::NewProp_ForceLOD0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::NewProp_ForceLOD0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::NewProp_TimeDilation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeHelperOptions" },
		{ "ModuleRelativePath", "Public/PhotoModeHelperOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::NewProp_TimeDilation_SetBit(void* Obj)
	{
		((FPhotoModeHelperOptions*)Obj)->TimeDilation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::NewProp_TimeDilation = { "TimeDilation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPhotoModeHelperOptions), &Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::NewProp_TimeDilation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::NewProp_TimeDilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::NewProp_TimeDilation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::NewProp_RenderStateDirtyOnTick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeHelperOptions" },
		{ "ModuleRelativePath", "Public/PhotoModeHelperOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::NewProp_RenderStateDirtyOnTick_SetBit(void* Obj)
	{
		((FPhotoModeHelperOptions*)Obj)->RenderStateDirtyOnTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::NewProp_RenderStateDirtyOnTick = { "RenderStateDirtyOnTick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPhotoModeHelperOptions), &Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::NewProp_RenderStateDirtyOnTick_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::NewProp_RenderStateDirtyOnTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::NewProp_RenderStateDirtyOnTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::NewProp_TickableWhenPaused_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeHelperOptions" },
		{ "ModuleRelativePath", "Public/PhotoModeHelperOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::NewProp_TickableWhenPaused_SetBit(void* Obj)
	{
		((FPhotoModeHelperOptions*)Obj)->TickableWhenPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::NewProp_TickableWhenPaused = { "TickableWhenPaused", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPhotoModeHelperOptions), &Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::NewProp_TickableWhenPaused_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::NewProp_TickableWhenPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::NewProp_TickableWhenPaused_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::NewProp_ForceLOD0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::NewProp_TimeDilation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::NewProp_RenderStateDirtyOnTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::NewProp_TickableWhenPaused,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIPhotoMode,
		nullptr,
		&NewStructOps,
		"PhotoModeHelperOptions",
		sizeof(FPhotoModeHelperOptions),
		alignof(FPhotoModeHelperOptions),
		Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhotoModeHelperOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIPhotoMode();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PhotoModeHelperOptions"), sizeof(FPhotoModeHelperOptions), Get_Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPhotoModeHelperOptions_Hash() { return 4066079818U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
