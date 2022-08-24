// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIScripting/Public/GlobalScript.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalScript() {}
// Cross Module References
	OEISCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalScript();
	UPackage* Z_Construct_UPackage__Script_OEIScripting();
	OEISCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalScriptBase();
	OEISCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FScriptCall();
// End Cross Module References

static_assert(std::is_polymorphic<FGlobalScript>() == std::is_polymorphic<FGlobalScriptBase>(), "USTRUCT FGlobalScript cannot be polymorphic unless super FGlobalScriptBase is polymorphic");

class UScriptStruct* FGlobalScript::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEISCRIPTING_API uint32 Get_Z_Construct_UScriptStruct_FGlobalScript_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGlobalScript, Z_Construct_UPackage__Script_OEIScripting(), TEXT("GlobalScript"), sizeof(FGlobalScript), Get_Z_Construct_UScriptStruct_FGlobalScript_Hash());
	}
	return Singleton;
}
template<> OEISCRIPTING_API UScriptStruct* StaticStruct<FGlobalScript>()
{
	return FGlobalScript::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGlobalScript(FGlobalScript::StaticStruct, TEXT("/Script/OEIScripting"), TEXT("GlobalScript"), false, nullptr, nullptr);
static struct FScriptStruct_OEIScripting_StaticRegisterNativesFGlobalScript
{
	FScriptStruct_OEIScripting_StaticRegisterNativesFGlobalScript()
	{
		UScriptStruct::DeferCppStructOps<FGlobalScript>(FName(TEXT("GlobalScript")));
	}
} ScriptStruct_OEIScripting_StaticRegisterNativesFGlobalScript;
	struct Z_Construct_UScriptStruct_FGlobalScript_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScriptCalls_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScriptCalls_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScriptCalls;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalScript_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GlobalScript.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGlobalScript_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGlobalScript>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGlobalScript_Statics::NewProp_ScriptCalls_Inner = { "ScriptCalls", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FScriptCall, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalScript_Statics::NewProp_ScriptCalls_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GlobalScript" },
		{ "ModuleRelativePath", "Public/GlobalScript.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGlobalScript_Statics::NewProp_ScriptCalls = { "ScriptCalls", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGlobalScript, ScriptCalls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalScript_Statics::NewProp_ScriptCalls_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalScript_Statics::NewProp_ScriptCalls_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGlobalScript_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalScript_Statics::NewProp_ScriptCalls_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalScript_Statics::NewProp_ScriptCalls,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGlobalScript_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIScripting,
		Z_Construct_UScriptStruct_FGlobalScriptBase,
		&NewStructOps,
		"GlobalScript",
		sizeof(FGlobalScript),
		alignof(FGlobalScript),
		Z_Construct_UScriptStruct_FGlobalScript_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalScript_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalScript_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalScript_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGlobalScript()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGlobalScript_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIScripting();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GlobalScript"), sizeof(FGlobalScript), Get_Z_Construct_UScriptStruct_FGlobalScript_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGlobalScript_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGlobalScript_Hash() { return 3052987520U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
