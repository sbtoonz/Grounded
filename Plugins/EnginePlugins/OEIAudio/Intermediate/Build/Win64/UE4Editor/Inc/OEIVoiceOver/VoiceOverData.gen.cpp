// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIVoiceOver/Public/VoiceOverData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoiceOverData() {}
// Cross Module References
	OEIVOICEOVER_API UScriptStruct* Z_Construct_UScriptStruct_FVoiceOverData();
	UPackage* Z_Construct_UPackage__Script_OEIVoiceOver();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FVoiceOverData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIVOICEOVER_API uint32 Get_Z_Construct_UScriptStruct_FVoiceOverData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoiceOverData, Z_Construct_UPackage__Script_OEIVoiceOver(), TEXT("VoiceOverData"), sizeof(FVoiceOverData), Get_Z_Construct_UScriptStruct_FVoiceOverData_Hash());
	}
	return Singleton;
}
template<> OEIVOICEOVER_API UScriptStruct* StaticStruct<FVoiceOverData>()
{
	return FVoiceOverData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoiceOverData(FVoiceOverData::StaticStruct, TEXT("/Script/OEIVoiceOver"), TEXT("VoiceOverData"), false, nullptr, nullptr);
static struct FScriptStruct_OEIVoiceOver_StaticRegisterNativesFVoiceOverData
{
	FScriptStruct_OEIVoiceOver_StaticRegisterNativesFVoiceOverData()
	{
		UScriptStruct::DeferCppStructOps<FVoiceOverData>(FName(TEXT("VoiceOverData")));
	}
} ScriptStruct_OEIVoiceOver_StaticRegisterNativesFVoiceOverData;
	struct Z_Construct_UScriptStruct_FVoiceOverData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioEventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AudioEventType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AudioPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AnimationPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSoundEffect_MetaData[];
#endif
		static void NewProp_bIsSoundEffect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSoundEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceOverData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoiceOverData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoiceOverData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoiceOverData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceOverData_Statics::NewProp_AudioEventType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "VoiceOverData" },
		{ "ModuleRelativePath", "Public/VoiceOverData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoiceOverData_Statics::NewProp_AudioEventType = { "AudioEventType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoiceOverData, AudioEventType), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceOverData_Statics::NewProp_AudioEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceOverData_Statics::NewProp_AudioEventType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceOverData_Statics::NewProp_AudioPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "VoiceOverData" },
		{ "ModuleRelativePath", "Public/VoiceOverData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FVoiceOverData_Statics::NewProp_AudioPath = { "AudioPath", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoiceOverData, AudioPath), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceOverData_Statics::NewProp_AudioPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceOverData_Statics::NewProp_AudioPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceOverData_Statics::NewProp_AnimationPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "VoiceOverData" },
		{ "ModuleRelativePath", "Public/VoiceOverData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FVoiceOverData_Statics::NewProp_AnimationPath = { "AnimationPath", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoiceOverData, AnimationPath), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceOverData_Statics::NewProp_AnimationPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceOverData_Statics::NewProp_AnimationPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceOverData_Statics::NewProp_bIsSoundEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "VoiceOverData" },
		{ "ModuleRelativePath", "Public/VoiceOverData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoiceOverData_Statics::NewProp_bIsSoundEffect_SetBit(void* Obj)
	{
		((FVoiceOverData*)Obj)->bIsSoundEffect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoiceOverData_Statics::NewProp_bIsSoundEffect = { "bIsSoundEffect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoiceOverData), &Z_Construct_UScriptStruct_FVoiceOverData_Statics::NewProp_bIsSoundEffect_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceOverData_Statics::NewProp_bIsSoundEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceOverData_Statics::NewProp_bIsSoundEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoiceOverData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceOverData_Statics::NewProp_AudioEventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceOverData_Statics::NewProp_AudioPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceOverData_Statics::NewProp_AnimationPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceOverData_Statics::NewProp_bIsSoundEffect,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoiceOverData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIVoiceOver,
		nullptr,
		&NewStructOps,
		"VoiceOverData",
		sizeof(FVoiceOverData),
		alignof(FVoiceOverData),
		Z_Construct_UScriptStruct_FVoiceOverData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceOverData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceOverData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceOverData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoiceOverData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoiceOverData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIVoiceOver();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoiceOverData"), sizeof(FVoiceOverData), Get_Z_Construct_UScriptStruct_FVoiceOverData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoiceOverData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoiceOverData_Hash() { return 503008162U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
