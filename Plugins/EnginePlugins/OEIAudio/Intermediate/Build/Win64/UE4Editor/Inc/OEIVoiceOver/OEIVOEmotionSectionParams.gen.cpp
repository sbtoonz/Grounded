// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIVoiceOver/Public/OEIVOEmotionSectionParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIVOEmotionSectionParams() {}
// Cross Module References
	OEIVOICEOVER_API UScriptStruct* Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams();
	UPackage* Z_Construct_UPackage__Script_OEIVoiceOver();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
class UScriptStruct* FOEIVOEmotionSectionParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIVOICEOVER_API uint32 Get_Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams, Z_Construct_UPackage__Script_OEIVoiceOver(), TEXT("OEIVOEmotionSectionParams"), sizeof(FOEIVOEmotionSectionParams), Get_Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams_Hash());
	}
	return Singleton;
}
template<> OEIVOICEOVER_API UScriptStruct* StaticStruct<FOEIVOEmotionSectionParams>()
{
	return FOEIVOEmotionSectionParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOEIVOEmotionSectionParams(FOEIVOEmotionSectionParams::StaticStruct, TEXT("/Script/OEIVoiceOver"), TEXT("OEIVOEmotionSectionParams"), false, nullptr, nullptr);
static struct FScriptStruct_OEIVoiceOver_StaticRegisterNativesFOEIVOEmotionSectionParams
{
	FScriptStruct_OEIVoiceOver_StaticRegisterNativesFOEIVOEmotionSectionParams()
	{
		UScriptStruct::DeferCppStructOps<FOEIVOEmotionSectionParams>(FName(TEXT("OEIVOEmotionSectionParams")));
	}
} ScriptStruct_OEIVoiceOver_StaticRegisterNativesFOEIVOEmotionSectionParams;
	struct Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Emotion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Emotion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Persist_MetaData[];
#endif
		static void NewProp_Persist_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Persist;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OEIVOEmotionSectionParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOEIVOEmotionSectionParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams_Statics::NewProp_Emotion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIVOEmotionSectionParams" },
		{ "ModuleRelativePath", "Public/OEIVOEmotionSectionParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams_Statics::NewProp_Emotion = { "Emotion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOEIVOEmotionSectionParams, Emotion), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams_Statics::NewProp_Emotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams_Statics::NewProp_Emotion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams_Statics::NewProp_Weight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIVOEmotionSectionParams" },
		{ "ModuleRelativePath", "Public/OEIVOEmotionSectionParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOEIVOEmotionSectionParams, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams_Statics::NewProp_Persist_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIVOEmotionSectionParams" },
		{ "ModuleRelativePath", "Public/OEIVOEmotionSectionParams.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams_Statics::NewProp_Persist_SetBit(void* Obj)
	{
		((FOEIVOEmotionSectionParams*)Obj)->Persist = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams_Statics::NewProp_Persist = { "Persist", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FOEIVOEmotionSectionParams), &Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams_Statics::NewProp_Persist_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams_Statics::NewProp_Persist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams_Statics::NewProp_Persist_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams_Statics::NewProp_Emotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams_Statics::NewProp_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams_Statics::NewProp_Persist,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIVoiceOver,
		nullptr,
		&NewStructOps,
		"OEIVOEmotionSectionParams",
		sizeof(FOEIVOEmotionSectionParams),
		alignof(FOEIVOEmotionSectionParams),
		Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIVoiceOver();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OEIVOEmotionSectionParams"), sizeof(FOEIVOEmotionSectionParams), Get_Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams_Hash() { return 816962719U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
