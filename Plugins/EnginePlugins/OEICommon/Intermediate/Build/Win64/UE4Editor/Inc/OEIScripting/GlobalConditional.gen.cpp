// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIScripting/Public/GlobalConditional.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalConditional() {}
// Cross Module References
	OEISCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalConditional();
	UPackage* Z_Construct_UPackage__Script_OEIScripting();
	OEISCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalScriptBase();
	OEISCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FConditional();
// End Cross Module References

static_assert(std::is_polymorphic<FGlobalConditional>() == std::is_polymorphic<FGlobalScriptBase>(), "USTRUCT FGlobalConditional cannot be polymorphic unless super FGlobalScriptBase is polymorphic");

class UScriptStruct* FGlobalConditional::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEISCRIPTING_API uint32 Get_Z_Construct_UScriptStruct_FGlobalConditional_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGlobalConditional, Z_Construct_UPackage__Script_OEIScripting(), TEXT("GlobalConditional"), sizeof(FGlobalConditional), Get_Z_Construct_UScriptStruct_FGlobalConditional_Hash());
	}
	return Singleton;
}
template<> OEISCRIPTING_API UScriptStruct* StaticStruct<FGlobalConditional>()
{
	return FGlobalConditional::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGlobalConditional(FGlobalConditional::StaticStruct, TEXT("/Script/OEIScripting"), TEXT("GlobalConditional"), false, nullptr, nullptr);
static struct FScriptStruct_OEIScripting_StaticRegisterNativesFGlobalConditional
{
	FScriptStruct_OEIScripting_StaticRegisterNativesFGlobalConditional()
	{
		UScriptStruct::DeferCppStructOps<FGlobalConditional>(FName(TEXT("GlobalConditional")));
	}
} ScriptStruct_OEIScripting_StaticRegisterNativesFGlobalConditional;
	struct Z_Construct_UScriptStruct_FGlobalConditional_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conditional_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Conditional;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalConditional_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GlobalConditional.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGlobalConditional_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGlobalConditional>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalConditional_Statics::NewProp_Conditional_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GlobalConditional" },
		{ "ModuleRelativePath", "Public/GlobalConditional.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGlobalConditional_Statics::NewProp_Conditional = { "Conditional", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGlobalConditional, Conditional), Z_Construct_UScriptStruct_FConditional, METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalConditional_Statics::NewProp_Conditional_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalConditional_Statics::NewProp_Conditional_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGlobalConditional_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalConditional_Statics::NewProp_Conditional,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGlobalConditional_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIScripting,
		Z_Construct_UScriptStruct_FGlobalScriptBase,
		&NewStructOps,
		"GlobalConditional",
		sizeof(FGlobalConditional),
		alignof(FGlobalConditional),
		Z_Construct_UScriptStruct_FGlobalConditional_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalConditional_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalConditional_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalConditional_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGlobalConditional()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGlobalConditional_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIScripting();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GlobalConditional"), sizeof(FGlobalConditional), Get_Z_Construct_UScriptStruct_FGlobalConditional_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGlobalConditional_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGlobalConditional_Hash() { return 884167637U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
