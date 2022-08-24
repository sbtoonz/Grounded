// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIVoiceOver/Public/OEIVoiceOverPhonemeCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIVoiceOverPhonemeCollection() {}
// Cross Module References
	OEIVOICEOVER_API UScriptStruct* Z_Construct_UScriptStruct_FOEIVoiceOverPhonemeCollection();
	UPackage* Z_Construct_UPackage__Script_OEIVoiceOver();
// End Cross Module References
class UScriptStruct* FOEIVoiceOverPhonemeCollection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIVOICEOVER_API uint32 Get_Z_Construct_UScriptStruct_FOEIVoiceOverPhonemeCollection_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOEIVoiceOverPhonemeCollection, Z_Construct_UPackage__Script_OEIVoiceOver(), TEXT("OEIVoiceOverPhonemeCollection"), sizeof(FOEIVoiceOverPhonemeCollection), Get_Z_Construct_UScriptStruct_FOEIVoiceOverPhonemeCollection_Hash());
	}
	return Singleton;
}
template<> OEIVOICEOVER_API UScriptStruct* StaticStruct<FOEIVoiceOverPhonemeCollection>()
{
	return FOEIVoiceOverPhonemeCollection::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOEIVoiceOverPhonemeCollection(FOEIVoiceOverPhonemeCollection::StaticStruct, TEXT("/Script/OEIVoiceOver"), TEXT("OEIVoiceOverPhonemeCollection"), false, nullptr, nullptr);
static struct FScriptStruct_OEIVoiceOver_StaticRegisterNativesFOEIVoiceOverPhonemeCollection
{
	FScriptStruct_OEIVoiceOver_StaticRegisterNativesFOEIVoiceOverPhonemeCollection()
	{
		UScriptStruct::DeferCppStructOps<FOEIVoiceOverPhonemeCollection>(FName(TEXT("OEIVoiceOverPhonemeCollection")));
	}
} ScriptStruct_OEIVoiceOver_StaticRegisterNativesFOEIVoiceOverPhonemeCollection;
	struct Z_Construct_UScriptStruct_FOEIVoiceOverPhonemeCollection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIVoiceOverPhonemeCollection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OEIVoiceOverPhonemeCollection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOEIVoiceOverPhonemeCollection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOEIVoiceOverPhonemeCollection>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOEIVoiceOverPhonemeCollection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIVoiceOver,
		nullptr,
		&NewStructOps,
		"OEIVoiceOverPhonemeCollection",
		sizeof(FOEIVoiceOverPhonemeCollection),
		alignof(FOEIVoiceOverPhonemeCollection),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIVoiceOverPhonemeCollection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIVoiceOverPhonemeCollection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOEIVoiceOverPhonemeCollection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOEIVoiceOverPhonemeCollection_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIVoiceOver();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OEIVoiceOverPhonemeCollection"), sizeof(FOEIVoiceOverPhonemeCollection), Get_Z_Construct_UScriptStruct_FOEIVoiceOverPhonemeCollection_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOEIVoiceOverPhonemeCollection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOEIVoiceOverPhonemeCollection_Hash() { return 2918665033U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
