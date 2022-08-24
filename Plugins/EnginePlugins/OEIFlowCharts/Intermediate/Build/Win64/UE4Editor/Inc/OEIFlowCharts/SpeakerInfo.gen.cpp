// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/SpeakerInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeakerInfo() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FSpeakerInfo();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FSpeakerReference();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FConversationReference();
// End Cross Module References
class UScriptStruct* FSpeakerInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FSpeakerInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpeakerInfo, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("SpeakerInfo"), sizeof(FSpeakerInfo), Get_Z_Construct_UScriptStruct_FSpeakerInfo_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FSpeakerInfo>()
{
	return FSpeakerInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpeakerInfo(FSpeakerInfo::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("SpeakerInfo"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFSpeakerInfo
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFSpeakerInfo()
	{
		UScriptStruct::DeferCppStructOps<FSpeakerInfo>(FName(TEXT("SpeakerInfo")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFSpeakerInfo;
	struct Z_Construct_UScriptStruct_FSpeakerInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Speaker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conversation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Conversation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpeakerInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SpeakerInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpeakerInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_Speaker_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpeakerInfo" },
		{ "ModuleRelativePath", "Public/SpeakerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpeakerInfo, Speaker), Z_Construct_UScriptStruct_FSpeakerReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_Speaker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_Speaker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_Conversation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpeakerInfo" },
		{ "ModuleRelativePath", "Public/SpeakerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_Conversation = { "Conversation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpeakerInfo, Conversation), Z_Construct_UScriptStruct_FConversationReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_Conversation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_Conversation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpeakerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_Speaker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeakerInfo_Statics::NewProp_Conversation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpeakerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		nullptr,
		&NewStructOps,
		"SpeakerInfo",
		sizeof(FSpeakerInfo),
		alignof(FSpeakerInfo),
		Z_Construct_UScriptStruct_FSpeakerInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeakerInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpeakerInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeakerInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpeakerInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpeakerInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpeakerInfo"), sizeof(FSpeakerInfo), Get_Z_Construct_UScriptStruct_FSpeakerInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpeakerInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpeakerInfo_Hash() { return 2940091938U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
