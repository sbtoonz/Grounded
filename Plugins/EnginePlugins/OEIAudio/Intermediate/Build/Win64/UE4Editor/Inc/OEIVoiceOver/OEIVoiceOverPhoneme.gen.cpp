// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIVoiceOver/Public/OEIVoiceOverPhoneme.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIVoiceOverPhoneme() {}
// Cross Module References
	OEIVOICEOVER_API UScriptStruct* Z_Construct_UScriptStruct_FOEIVoiceOverPhoneme();
	UPackage* Z_Construct_UPackage__Script_OEIVoiceOver();
// End Cross Module References
class UScriptStruct* FOEIVoiceOverPhoneme::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIVOICEOVER_API uint32 Get_Z_Construct_UScriptStruct_FOEIVoiceOverPhoneme_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOEIVoiceOverPhoneme, Z_Construct_UPackage__Script_OEIVoiceOver(), TEXT("OEIVoiceOverPhoneme"), sizeof(FOEIVoiceOverPhoneme), Get_Z_Construct_UScriptStruct_FOEIVoiceOverPhoneme_Hash());
	}
	return Singleton;
}
template<> OEIVOICEOVER_API UScriptStruct* StaticStruct<FOEIVoiceOverPhoneme>()
{
	return FOEIVoiceOverPhoneme::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOEIVoiceOverPhoneme(FOEIVoiceOverPhoneme::StaticStruct, TEXT("/Script/OEIVoiceOver"), TEXT("OEIVoiceOverPhoneme"), false, nullptr, nullptr);
static struct FScriptStruct_OEIVoiceOver_StaticRegisterNativesFOEIVoiceOverPhoneme
{
	FScriptStruct_OEIVoiceOver_StaticRegisterNativesFOEIVoiceOverPhoneme()
	{
		UScriptStruct::DeferCppStructOps<FOEIVoiceOverPhoneme>(FName(TEXT("OEIVoiceOverPhoneme")));
	}
} ScriptStruct_OEIVoiceOver_StaticRegisterNativesFOEIVoiceOverPhoneme;
	struct Z_Construct_UScriptStruct_FOEIVoiceOverPhoneme_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIVoiceOverPhoneme_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OEIVoiceOverPhoneme.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOEIVoiceOverPhoneme_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOEIVoiceOverPhoneme>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOEIVoiceOverPhoneme_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIVoiceOver,
		nullptr,
		&NewStructOps,
		"OEIVoiceOverPhoneme",
		sizeof(FOEIVoiceOverPhoneme),
		alignof(FOEIVoiceOverPhoneme),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIVoiceOverPhoneme_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIVoiceOverPhoneme_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOEIVoiceOverPhoneme()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOEIVoiceOverPhoneme_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIVoiceOver();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OEIVoiceOverPhoneme"), sizeof(FOEIVoiceOverPhoneme), Get_Z_Construct_UScriptStruct_FOEIVoiceOverPhoneme_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOEIVoiceOverPhoneme_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOEIVoiceOverPhoneme_Hash() { return 2742178565U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
