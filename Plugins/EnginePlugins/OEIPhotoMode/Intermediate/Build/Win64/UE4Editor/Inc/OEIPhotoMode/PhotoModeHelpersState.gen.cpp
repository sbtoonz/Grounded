// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/PhotoModeHelpersState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhotoModeHelpersState() {}
// Cross Module References
	OEIPHOTOMODE_API UScriptStruct* Z_Construct_UScriptStruct_FPhotoModeHelpersState();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
// End Cross Module References
class UScriptStruct* FPhotoModeHelpersState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIPHOTOMODE_API uint32 Get_Z_Construct_UScriptStruct_FPhotoModeHelpersState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhotoModeHelpersState, Z_Construct_UPackage__Script_OEIPhotoMode(), TEXT("PhotoModeHelpersState"), sizeof(FPhotoModeHelpersState), Get_Z_Construct_UScriptStruct_FPhotoModeHelpersState_Hash());
	}
	return Singleton;
}
template<> OEIPHOTOMODE_API UScriptStruct* StaticStruct<FPhotoModeHelpersState>()
{
	return FPhotoModeHelpersState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPhotoModeHelpersState(FPhotoModeHelpersState::StaticStruct, TEXT("/Script/OEIPhotoMode"), TEXT("PhotoModeHelpersState"), false, nullptr, nullptr);
static struct FScriptStruct_OEIPhotoMode_StaticRegisterNativesFPhotoModeHelpersState
{
	FScriptStruct_OEIPhotoMode_StaticRegisterNativesFPhotoModeHelpersState()
	{
		UScriptStruct::DeferCppStructOps<FPhotoModeHelpersState>(FName(TEXT("PhotoModeHelpersState")));
	}
} ScriptStruct_OEIPhotoMode_StaticRegisterNativesFPhotoModeHelpersState;
	struct Z_Construct_UScriptStruct_FPhotoModeHelpersState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MeshObjectIdToForcedLOD_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MeshObjectIdToForcedLOD_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshObjectIdToForcedLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MeshObjectIdToForcedLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrePhotoModeCustomTimeDilation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PrePhotoModeCustomTimeDilation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrePhotoModeTickableWhenPaused_MetaData[];
#endif
		static void NewProp_PrePhotoModeTickableWhenPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PrePhotoModeTickableWhenPaused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeHelpersState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PhotoModeHelpersState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhotoModeHelpersState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhotoModeHelpersState>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhotoModeHelpersState_Statics::NewProp_MeshObjectIdToForcedLOD_ValueProp = { "MeshObjectIdToForcedLOD", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhotoModeHelpersState_Statics::NewProp_MeshObjectIdToForcedLOD_Key_KeyProp = { "MeshObjectIdToForcedLOD_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeHelpersState_Statics::NewProp_MeshObjectIdToForcedLOD_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeHelpersState" },
		{ "ModuleRelativePath", "Public/PhotoModeHelpersState.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPhotoModeHelpersState_Statics::NewProp_MeshObjectIdToForcedLOD = { "MeshObjectIdToForcedLOD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhotoModeHelpersState, MeshObjectIdToForcedLOD), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeHelpersState_Statics::NewProp_MeshObjectIdToForcedLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeHelpersState_Statics::NewProp_MeshObjectIdToForcedLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeHelpersState_Statics::NewProp_PrePhotoModeCustomTimeDilation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeHelpersState" },
		{ "ModuleRelativePath", "Public/PhotoModeHelpersState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhotoModeHelpersState_Statics::NewProp_PrePhotoModeCustomTimeDilation = { "PrePhotoModeCustomTimeDilation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhotoModeHelpersState, PrePhotoModeCustomTimeDilation), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeHelpersState_Statics::NewProp_PrePhotoModeCustomTimeDilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeHelpersState_Statics::NewProp_PrePhotoModeCustomTimeDilation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeHelpersState_Statics::NewProp_PrePhotoModeTickableWhenPaused_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeHelpersState" },
		{ "ModuleRelativePath", "Public/PhotoModeHelpersState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPhotoModeHelpersState_Statics::NewProp_PrePhotoModeTickableWhenPaused_SetBit(void* Obj)
	{
		((FPhotoModeHelpersState*)Obj)->PrePhotoModeTickableWhenPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhotoModeHelpersState_Statics::NewProp_PrePhotoModeTickableWhenPaused = { "PrePhotoModeTickableWhenPaused", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPhotoModeHelpersState), &Z_Construct_UScriptStruct_FPhotoModeHelpersState_Statics::NewProp_PrePhotoModeTickableWhenPaused_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeHelpersState_Statics::NewProp_PrePhotoModeTickableWhenPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeHelpersState_Statics::NewProp_PrePhotoModeTickableWhenPaused_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhotoModeHelpersState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeHelpersState_Statics::NewProp_MeshObjectIdToForcedLOD_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeHelpersState_Statics::NewProp_MeshObjectIdToForcedLOD_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeHelpersState_Statics::NewProp_MeshObjectIdToForcedLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeHelpersState_Statics::NewProp_PrePhotoModeCustomTimeDilation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeHelpersState_Statics::NewProp_PrePhotoModeTickableWhenPaused,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhotoModeHelpersState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIPhotoMode,
		nullptr,
		&NewStructOps,
		"PhotoModeHelpersState",
		sizeof(FPhotoModeHelpersState),
		alignof(FPhotoModeHelpersState),
		Z_Construct_UScriptStruct_FPhotoModeHelpersState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeHelpersState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeHelpersState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeHelpersState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhotoModeHelpersState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPhotoModeHelpersState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIPhotoMode();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PhotoModeHelpersState"), sizeof(FPhotoModeHelpersState), Get_Z_Construct_UScriptStruct_FPhotoModeHelpersState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPhotoModeHelpersState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPhotoModeHelpersState_Hash() { return 3131997311U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
