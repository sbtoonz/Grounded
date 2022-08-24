// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIVoiceOver/Public/OEIVoiceOverSectionTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIVoiceOverSectionTemplate() {}
// Cross Module References
	OEIVOICEOVER_API UScriptStruct* Z_Construct_UScriptStruct_FOEIVoiceOverSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_OEIVoiceOver();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	OEIVOICEOVER_API UClass* Z_Construct_UClass_UOEIVoiceOverSection_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FOEIVoiceOverSectionTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FOEIVoiceOverSectionTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

class UScriptStruct* FOEIVoiceOverSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIVOICEOVER_API uint32 Get_Z_Construct_UScriptStruct_FOEIVoiceOverSectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOEIVoiceOverSectionTemplate, Z_Construct_UPackage__Script_OEIVoiceOver(), TEXT("OEIVoiceOverSectionTemplate"), sizeof(FOEIVoiceOverSectionTemplate), Get_Z_Construct_UScriptStruct_FOEIVoiceOverSectionTemplate_Hash());
	}
	return Singleton;
}
template<> OEIVOICEOVER_API UScriptStruct* StaticStruct<FOEIVoiceOverSectionTemplate>()
{
	return FOEIVoiceOverSectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOEIVoiceOverSectionTemplate(FOEIVoiceOverSectionTemplate::StaticStruct, TEXT("/Script/OEIVoiceOver"), TEXT("OEIVoiceOverSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_OEIVoiceOver_StaticRegisterNativesFOEIVoiceOverSectionTemplate
{
	FScriptStruct_OEIVoiceOver_StaticRegisterNativesFOEIVoiceOverSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps<FOEIVoiceOverSectionTemplate>(FName(TEXT("OEIVoiceOverSectionTemplate")));
	}
} ScriptStruct_OEIVoiceOver_StaticRegisterNativesFOEIVoiceOverSectionTemplate;
	struct Z_Construct_UScriptStruct_FOEIVoiceOverSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Section;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIVoiceOverSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OEIVoiceOverSectionTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOEIVoiceOverSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOEIVoiceOverSectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIVoiceOverSectionTemplate_Statics::NewProp_Section_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIVoiceOverSectionTemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OEIVoiceOverSectionTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOEIVoiceOverSectionTemplate_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOEIVoiceOverSectionTemplate, Section), Z_Construct_UClass_UOEIVoiceOverSection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIVoiceOverSectionTemplate_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIVoiceOverSectionTemplate_Statics::NewProp_Section_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOEIVoiceOverSectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEIVoiceOverSectionTemplate_Statics::NewProp_Section,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOEIVoiceOverSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIVoiceOver,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"OEIVoiceOverSectionTemplate",
		sizeof(FOEIVoiceOverSectionTemplate),
		alignof(FOEIVoiceOverSectionTemplate),
		Z_Construct_UScriptStruct_FOEIVoiceOverSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIVoiceOverSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIVoiceOverSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIVoiceOverSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOEIVoiceOverSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOEIVoiceOverSectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIVoiceOver();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OEIVoiceOverSectionTemplate"), sizeof(FOEIVoiceOverSectionTemplate), Get_Z_Construct_UScriptStruct_FOEIVoiceOverSectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOEIVoiceOverSectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOEIVoiceOverSectionTemplate_Hash() { return 1214004484U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
