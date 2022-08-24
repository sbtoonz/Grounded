// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIScripting/Public/GlobalScriptReference.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalScriptReference() {}
// Cross Module References
	OEISCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalScriptReference();
	UPackage* Z_Construct_UPackage__Script_OEIScripting();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FGlobalScriptReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEISCRIPTING_API uint32 Get_Z_Construct_UScriptStruct_FGlobalScriptReference_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGlobalScriptReference, Z_Construct_UPackage__Script_OEIScripting(), TEXT("GlobalScriptReference"), sizeof(FGlobalScriptReference), Get_Z_Construct_UScriptStruct_FGlobalScriptReference_Hash());
	}
	return Singleton;
}
template<> OEISCRIPTING_API UScriptStruct* StaticStruct<FGlobalScriptReference>()
{
	return FGlobalScriptReference::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGlobalScriptReference(FGlobalScriptReference::StaticStruct, TEXT("/Script/OEIScripting"), TEXT("GlobalScriptReference"), false, nullptr, nullptr);
static struct FScriptStruct_OEIScripting_StaticRegisterNativesFGlobalScriptReference
{
	FScriptStruct_OEIScripting_StaticRegisterNativesFGlobalScriptReference()
	{
		UScriptStruct::DeferCppStructOps<FGlobalScriptReference>(FName(TEXT("GlobalScriptReference")));
	}
} ScriptStruct_OEIScripting_StaticRegisterNativesFGlobalScriptReference;
	struct Z_Construct_UScriptStruct_FGlobalScriptReference_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalScriptReference_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GlobalScriptReference.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGlobalScriptReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGlobalScriptReference>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalScriptReference_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GlobalScriptReference" },
		{ "ModuleRelativePath", "Public/GlobalScriptReference.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGlobalScriptReference_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGlobalScriptReference, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalScriptReference_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalScriptReference_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGlobalScriptReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalScriptReference_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGlobalScriptReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIScripting,
		nullptr,
		&NewStructOps,
		"GlobalScriptReference",
		sizeof(FGlobalScriptReference),
		alignof(FGlobalScriptReference),
		Z_Construct_UScriptStruct_FGlobalScriptReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalScriptReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalScriptReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalScriptReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGlobalScriptReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGlobalScriptReference_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIScripting();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GlobalScriptReference"), sizeof(FGlobalScriptReference), Get_Z_Construct_UScriptStruct_FGlobalScriptReference_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGlobalScriptReference_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGlobalScriptReference_Hash() { return 227078148U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
