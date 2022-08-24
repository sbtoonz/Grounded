// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIGlobalVariables/Public/GlobalVariableReference.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalVariableReference() {}
// Cross Module References
	OEIGLOBALVARIABLES_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalVariableReference();
	UPackage* Z_Construct_UPackage__Script_OEIGlobalVariables();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FGlobalVariableReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIGLOBALVARIABLES_API uint32 Get_Z_Construct_UScriptStruct_FGlobalVariableReference_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGlobalVariableReference, Z_Construct_UPackage__Script_OEIGlobalVariables(), TEXT("GlobalVariableReference"), sizeof(FGlobalVariableReference), Get_Z_Construct_UScriptStruct_FGlobalVariableReference_Hash());
	}
	return Singleton;
}
template<> OEIGLOBALVARIABLES_API UScriptStruct* StaticStruct<FGlobalVariableReference>()
{
	return FGlobalVariableReference::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGlobalVariableReference(FGlobalVariableReference::StaticStruct, TEXT("/Script/OEIGlobalVariables"), TEXT("GlobalVariableReference"), false, nullptr, nullptr);
static struct FScriptStruct_OEIGlobalVariables_StaticRegisterNativesFGlobalVariableReference
{
	FScriptStruct_OEIGlobalVariables_StaticRegisterNativesFGlobalVariableReference()
	{
		UScriptStruct::DeferCppStructOps<FGlobalVariableReference>(FName(TEXT("GlobalVariableReference")));
	}
} ScriptStruct_OEIGlobalVariables_StaticRegisterNativesFGlobalVariableReference;
	struct Z_Construct_UScriptStruct_FGlobalVariableReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalVariableReference_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GlobalVariableReference.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGlobalVariableReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGlobalVariableReference>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalVariableReference_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GlobalVariableReference" },
		{ "ModuleRelativePath", "Public/GlobalVariableReference.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGlobalVariableReference_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGlobalVariableReference, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalVariableReference_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalVariableReference_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGlobalVariableReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalVariableReference_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGlobalVariableReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIGlobalVariables,
		nullptr,
		&NewStructOps,
		"GlobalVariableReference",
		sizeof(FGlobalVariableReference),
		alignof(FGlobalVariableReference),
		Z_Construct_UScriptStruct_FGlobalVariableReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalVariableReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalVariableReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalVariableReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGlobalVariableReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGlobalVariableReference_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIGlobalVariables();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GlobalVariableReference"), sizeof(FGlobalVariableReference), Get_Z_Construct_UScriptStruct_FGlobalVariableReference_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGlobalVariableReference_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGlobalVariableReference_Hash() { return 2178361373U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
