// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIGlobalVariables/Public/GlobalVariableEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalVariableEntry() {}
// Cross Module References
	OEIGLOBALVARIABLES_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalVariableEntry();
	UPackage* Z_Construct_UPackage__Script_OEIGlobalVariables();
// End Cross Module References
class UScriptStruct* FGlobalVariableEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIGLOBALVARIABLES_API uint32 Get_Z_Construct_UScriptStruct_FGlobalVariableEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGlobalVariableEntry, Z_Construct_UPackage__Script_OEIGlobalVariables(), TEXT("GlobalVariableEntry"), sizeof(FGlobalVariableEntry), Get_Z_Construct_UScriptStruct_FGlobalVariableEntry_Hash());
	}
	return Singleton;
}
template<> OEIGLOBALVARIABLES_API UScriptStruct* StaticStruct<FGlobalVariableEntry>()
{
	return FGlobalVariableEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGlobalVariableEntry(FGlobalVariableEntry::StaticStruct, TEXT("/Script/OEIGlobalVariables"), TEXT("GlobalVariableEntry"), false, nullptr, nullptr);
static struct FScriptStruct_OEIGlobalVariables_StaticRegisterNativesFGlobalVariableEntry
{
	FScriptStruct_OEIGlobalVariables_StaticRegisterNativesFGlobalVariableEntry()
	{
		UScriptStruct::DeferCppStructOps<FGlobalVariableEntry>(FName(TEXT("GlobalVariableEntry")));
	}
} ScriptStruct_OEIGlobalVariables_StaticRegisterNativesFGlobalVariableEntry;
	struct Z_Construct_UScriptStruct_FGlobalVariableEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalVariableEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GlobalVariableEntry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGlobalVariableEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGlobalVariableEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalVariableEntry_Statics::NewProp_Tag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GlobalVariableEntry" },
		{ "ModuleRelativePath", "Public/GlobalVariableEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGlobalVariableEntry_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGlobalVariableEntry, Tag), METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalVariableEntry_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalVariableEntry_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalVariableEntry_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GlobalVariableEntry" },
		{ "ModuleRelativePath", "Public/GlobalVariableEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGlobalVariableEntry_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGlobalVariableEntry, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalVariableEntry_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalVariableEntry_Statics::NewProp_DefaultValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGlobalVariableEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalVariableEntry_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalVariableEntry_Statics::NewProp_DefaultValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGlobalVariableEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIGlobalVariables,
		nullptr,
		&NewStructOps,
		"GlobalVariableEntry",
		sizeof(FGlobalVariableEntry),
		alignof(FGlobalVariableEntry),
		Z_Construct_UScriptStruct_FGlobalVariableEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalVariableEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalVariableEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalVariableEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGlobalVariableEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGlobalVariableEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIGlobalVariables();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GlobalVariableEntry"), sizeof(FGlobalVariableEntry), Get_Z_Construct_UScriptStruct_FGlobalVariableEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGlobalVariableEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGlobalVariableEntry_Hash() { return 2230603391U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
