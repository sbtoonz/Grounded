// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIVoiceOver/Public/OEIVOEmotionSectionTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIVOEmotionSectionTemplate() {}
// Cross Module References
	OEIVOICEOVER_API UScriptStruct* Z_Construct_UScriptStruct_FOEIVOEmotionSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_OEIVoiceOver();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
// End Cross Module References

static_assert(std::is_polymorphic<FOEIVOEmotionSectionTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FOEIVOEmotionSectionTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

class UScriptStruct* FOEIVOEmotionSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIVOICEOVER_API uint32 Get_Z_Construct_UScriptStruct_FOEIVOEmotionSectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOEIVOEmotionSectionTemplate, Z_Construct_UPackage__Script_OEIVoiceOver(), TEXT("OEIVOEmotionSectionTemplate"), sizeof(FOEIVOEmotionSectionTemplate), Get_Z_Construct_UScriptStruct_FOEIVOEmotionSectionTemplate_Hash());
	}
	return Singleton;
}
template<> OEIVOICEOVER_API UScriptStruct* StaticStruct<FOEIVOEmotionSectionTemplate>()
{
	return FOEIVOEmotionSectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOEIVOEmotionSectionTemplate(FOEIVOEmotionSectionTemplate::StaticStruct, TEXT("/Script/OEIVoiceOver"), TEXT("OEIVOEmotionSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_OEIVoiceOver_StaticRegisterNativesFOEIVOEmotionSectionTemplate
{
	FScriptStruct_OEIVoiceOver_StaticRegisterNativesFOEIVOEmotionSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps<FOEIVOEmotionSectionTemplate>(FName(TEXT("OEIVOEmotionSectionTemplate")));
	}
} ScriptStruct_OEIVoiceOver_StaticRegisterNativesFOEIVOEmotionSectionTemplate;
	struct Z_Construct_UScriptStruct_FOEIVOEmotionSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIVOEmotionSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OEIVOEmotionSectionTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOEIVOEmotionSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOEIVOEmotionSectionTemplate>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOEIVOEmotionSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIVoiceOver,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"OEIVOEmotionSectionTemplate",
		sizeof(FOEIVOEmotionSectionTemplate),
		alignof(FOEIVOEmotionSectionTemplate),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIVOEmotionSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIVOEmotionSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOEIVOEmotionSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOEIVOEmotionSectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIVoiceOver();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OEIVOEmotionSectionTemplate"), sizeof(FOEIVOEmotionSectionTemplate), Get_Z_Construct_UScriptStruct_FOEIVOEmotionSectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOEIVOEmotionSectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOEIVOEmotionSectionTemplate_Hash() { return 3847149003U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
