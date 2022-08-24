// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/SoftSpeakerReference.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoftSpeakerReference() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FSoftSpeakerReference();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_USpeakerAsset_NoRegister();
// End Cross Module References
class UScriptStruct* FSoftSpeakerReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FSoftSpeakerReference_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoftSpeakerReference, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("SoftSpeakerReference"), sizeof(FSoftSpeakerReference), Get_Z_Construct_UScriptStruct_FSoftSpeakerReference_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FSoftSpeakerReference>()
{
	return FSoftSpeakerReference::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoftSpeakerReference(FSoftSpeakerReference::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("SoftSpeakerReference"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFSoftSpeakerReference
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFSoftSpeakerReference()
	{
		UScriptStruct::DeferCppStructOps<FSoftSpeakerReference>(FName(TEXT("SoftSpeakerReference")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFSoftSpeakerReference;
	struct Z_Construct_UScriptStruct_FSoftSpeakerReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeakerAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SpeakerAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoftSpeakerReference_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SoftSpeakerReference.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoftSpeakerReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoftSpeakerReference>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoftSpeakerReference_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoftSpeakerReference" },
		{ "ModuleRelativePath", "Public/SoftSpeakerReference.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoftSpeakerReference_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoftSpeakerReference, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoftSpeakerReference_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoftSpeakerReference_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoftSpeakerReference_Statics::NewProp_SpeakerAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoftSpeakerReference" },
		{ "ModuleRelativePath", "Public/SoftSpeakerReference.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSoftSpeakerReference_Statics::NewProp_SpeakerAsset = { "SpeakerAsset", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoftSpeakerReference, SpeakerAsset), Z_Construct_UClass_USpeakerAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoftSpeakerReference_Statics::NewProp_SpeakerAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoftSpeakerReference_Statics::NewProp_SpeakerAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoftSpeakerReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoftSpeakerReference_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoftSpeakerReference_Statics::NewProp_SpeakerAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoftSpeakerReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		nullptr,
		&NewStructOps,
		"SoftSpeakerReference",
		sizeof(FSoftSpeakerReference),
		alignof(FSoftSpeakerReference),
		Z_Construct_UScriptStruct_FSoftSpeakerReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoftSpeakerReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoftSpeakerReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoftSpeakerReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoftSpeakerReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoftSpeakerReference_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoftSpeakerReference"), sizeof(FSoftSpeakerReference), Get_Z_Construct_UScriptStruct_FSoftSpeakerReference_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoftSpeakerReference_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoftSpeakerReference_Hash() { return 1246223128U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
