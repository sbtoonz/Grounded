// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/ChatterBundle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChatterBundle() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FChatterBundle();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FFlowChartBundle();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FChatterLink();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FChatterEventNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FChatterNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FSoundEffectNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FScriptNode();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FTalkNode();
// End Cross Module References

static_assert(std::is_polymorphic<FChatterBundle>() == std::is_polymorphic<FFlowChartBundle>(), "USTRUCT FChatterBundle cannot be polymorphic unless super FFlowChartBundle is polymorphic");

class UScriptStruct* FChatterBundle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FChatterBundle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChatterBundle, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("ChatterBundle"), sizeof(FChatterBundle), Get_Z_Construct_UScriptStruct_FChatterBundle_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FChatterBundle>()
{
	return FChatterBundle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChatterBundle(FChatterBundle::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("ChatterBundle"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFChatterBundle
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFChatterBundle()
	{
		UScriptStruct::DeferCppStructOps<FChatterBundle>(FName(TEXT("ChatterBundle")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFChatterBundle;
	struct Z_Construct_UScriptStruct_FChatterBundle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AudioLookup_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AudioLookup_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioLookup_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AudioLookup;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StringTableFilenames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringTableFilenames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StringTableFilenames;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatterLinks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatterLinks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChatterLinks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatterEventNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatterEventNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChatterEventNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatterNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatterNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChatterNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoundEffectNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundEffectNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SoundEffectNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScriptNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScriptNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScriptNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TalkNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TalkNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TalkNodes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatterBundle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChatterBundle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChatterBundle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChatterBundle>();
	}
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_AudioLookup_ValueProp = { "AudioLookup", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_AudioLookup_Key_KeyProp = { "AudioLookup_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_AudioLookup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatterBundle" },
		{ "ModuleRelativePath", "Public/ChatterBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_AudioLookup = { "AudioLookup", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatterBundle, AudioLookup), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_AudioLookup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_AudioLookup_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_StringTableFilenames_Inner = { "StringTableFilenames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_StringTableFilenames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatterBundle" },
		{ "ModuleRelativePath", "Public/ChatterBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_StringTableFilenames = { "StringTableFilenames", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatterBundle, StringTableFilenames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_StringTableFilenames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_StringTableFilenames_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_ChatterLinks_Inner = { "ChatterLinks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChatterLink, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_ChatterLinks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatterBundle" },
		{ "ModuleRelativePath", "Public/ChatterBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_ChatterLinks = { "ChatterLinks", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatterBundle, ChatterLinks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_ChatterLinks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_ChatterLinks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_ChatterEventNodes_Inner = { "ChatterEventNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChatterEventNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_ChatterEventNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatterBundle" },
		{ "ModuleRelativePath", "Public/ChatterBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_ChatterEventNodes = { "ChatterEventNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatterBundle, ChatterEventNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_ChatterEventNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_ChatterEventNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_ChatterNodes_Inner = { "ChatterNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChatterNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_ChatterNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatterBundle" },
		{ "ModuleRelativePath", "Public/ChatterBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_ChatterNodes = { "ChatterNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatterBundle, ChatterNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_ChatterNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_ChatterNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_SoundEffectNodes_Inner = { "SoundEffectNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoundEffectNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_SoundEffectNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatterBundle" },
		{ "ModuleRelativePath", "Public/ChatterBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_SoundEffectNodes = { "SoundEffectNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatterBundle, SoundEffectNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_SoundEffectNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_SoundEffectNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_ScriptNodes_Inner = { "ScriptNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FScriptNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_ScriptNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatterBundle" },
		{ "ModuleRelativePath", "Public/ChatterBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_ScriptNodes = { "ScriptNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatterBundle, ScriptNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_ScriptNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_ScriptNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_TalkNodes_Inner = { "TalkNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTalkNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_TalkNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatterBundle" },
		{ "ModuleRelativePath", "Public/ChatterBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_TalkNodes = { "TalkNodes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatterBundle, TalkNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_TalkNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_TalkNodes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChatterBundle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_AudioLookup_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_AudioLookup_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_AudioLookup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_StringTableFilenames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_StringTableFilenames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_ChatterLinks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_ChatterLinks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_ChatterEventNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_ChatterEventNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_ChatterNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_ChatterNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_SoundEffectNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_SoundEffectNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_ScriptNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_ScriptNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_TalkNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatterBundle_Statics::NewProp_TalkNodes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChatterBundle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		Z_Construct_UScriptStruct_FFlowChartBundle,
		&NewStructOps,
		"ChatterBundle",
		sizeof(FChatterBundle),
		alignof(FChatterBundle),
		Z_Construct_UScriptStruct_FChatterBundle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatterBundle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChatterBundle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatterBundle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChatterBundle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChatterBundle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChatterBundle"), sizeof(FChatterBundle), Get_Z_Construct_UScriptStruct_FChatterBundle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChatterBundle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChatterBundle_Hash() { return 1179690971U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
