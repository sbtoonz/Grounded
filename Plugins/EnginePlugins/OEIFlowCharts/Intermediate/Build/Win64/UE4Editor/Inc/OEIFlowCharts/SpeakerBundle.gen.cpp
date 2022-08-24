// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/SpeakerBundle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeakerBundle() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FSpeakerBundle();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	OEITEXT_API UScriptStruct* Z_Construct_UScriptStruct_FLocString();
	OEICOMMON_API UEnum* Z_Construct_UEnum_OEICommon_EOEIGender();
// End Cross Module References
class UScriptStruct* FSpeakerBundle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FSpeakerBundle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpeakerBundle, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("SpeakerBundle"), sizeof(FSpeakerBundle), Get_Z_Construct_UScriptStruct_FSpeakerBundle_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FSpeakerBundle>()
{
	return FSpeakerBundle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpeakerBundle(FSpeakerBundle::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("SpeakerBundle"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFSpeakerBundle
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFSpeakerBundle()
	{
		UScriptStruct::DeferCppStructOps<FSpeakerBundle>(FName(TEXT("SpeakerBundle")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFSpeakerBundle;
	struct Z_Construct_UScriptStruct_FSpeakerBundle_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjectName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Gender;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUniqueNPC_MetaData[];
#endif
		static void NewProp_bIsUniqueNPC_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUniqueNPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VOPrefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VOPrefix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoicePrintID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VoicePrintID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatterFileID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatterFileID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpeakerBundle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SpeakerBundle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpeakerBundle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpeakerBundle" },
		{ "ModuleRelativePath", "Public/SpeakerBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpeakerBundle, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_ObjectName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpeakerBundle" },
		{ "ModuleRelativePath", "Public/SpeakerBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpeakerBundle, ObjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_ObjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_ObjectName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpeakerBundle" },
		{ "ModuleRelativePath", "Public/SpeakerBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpeakerBundle, DisplayName), Z_Construct_UScriptStruct_FLocString, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_Gender_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpeakerBundle" },
		{ "ModuleRelativePath", "Public/SpeakerBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpeakerBundle, Gender), Z_Construct_UEnum_OEICommon_EOEIGender, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_Gender_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_bIsUniqueNPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpeakerBundle" },
		{ "ModuleRelativePath", "Public/SpeakerBundle.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_bIsUniqueNPC_SetBit(void* Obj)
	{
		((FSpeakerBundle*)Obj)->bIsUniqueNPC = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_bIsUniqueNPC = { "bIsUniqueNPC", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSpeakerBundle), &Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_bIsUniqueNPC_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_bIsUniqueNPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_bIsUniqueNPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_VOPrefix_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpeakerBundle" },
		{ "ModuleRelativePath", "Public/SpeakerBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_VOPrefix = { "VOPrefix", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpeakerBundle, VOPrefix), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_VOPrefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_VOPrefix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_VoicePrintID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpeakerBundle" },
		{ "ModuleRelativePath", "Public/SpeakerBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_VoicePrintID = { "VoicePrintID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpeakerBundle, VoicePrintID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_VoicePrintID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_VoicePrintID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_ChatterFileID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpeakerBundle" },
		{ "ModuleRelativePath", "Public/SpeakerBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_ChatterFileID = { "ChatterFileID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpeakerBundle, ChatterFileID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_ChatterFileID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_ChatterFileID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpeakerBundle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_ObjectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_Gender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_Gender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_bIsUniqueNPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_VOPrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_VoicePrintID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeakerBundle_Statics::NewProp_ChatterFileID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpeakerBundle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		nullptr,
		&NewStructOps,
		"SpeakerBundle",
		sizeof(FSpeakerBundle),
		alignof(FSpeakerBundle),
		Z_Construct_UScriptStruct_FSpeakerBundle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeakerBundle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpeakerBundle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeakerBundle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpeakerBundle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpeakerBundle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpeakerBundle"), sizeof(FSpeakerBundle), Get_Z_Construct_UScriptStruct_FSpeakerBundle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpeakerBundle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpeakerBundle_Hash() { return 1640171240U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
