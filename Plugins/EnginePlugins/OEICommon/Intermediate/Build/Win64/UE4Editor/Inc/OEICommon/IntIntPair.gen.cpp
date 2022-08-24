// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEICommon/Public/IntIntPair.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntIntPair() {}
// Cross Module References
	OEICOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FIntIntPair();
	UPackage* Z_Construct_UPackage__Script_OEICommon();
// End Cross Module References
class UScriptStruct* FIntIntPair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEICOMMON_API uint32 Get_Z_Construct_UScriptStruct_FIntIntPair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIntIntPair, Z_Construct_UPackage__Script_OEICommon(), TEXT("IntIntPair"), sizeof(FIntIntPair), Get_Z_Construct_UScriptStruct_FIntIntPair_Hash());
	}
	return Singleton;
}
template<> OEICOMMON_API UScriptStruct* StaticStruct<FIntIntPair>()
{
	return FIntIntPair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIntIntPair(FIntIntPair::StaticStruct, TEXT("/Script/OEICommon"), TEXT("IntIntPair"), false, nullptr, nullptr);
static struct FScriptStruct_OEICommon_StaticRegisterNativesFIntIntPair
{
	FScriptStruct_OEICommon_StaticRegisterNativesFIntIntPair()
	{
		UScriptStruct::DeferCppStructOps<FIntIntPair>(FName(TEXT("IntIntPair")));
	}
} ScriptStruct_OEICommon_StaticRegisterNativesFIntIntPair;
	struct Z_Construct_UScriptStruct_FIntIntPair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Item1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Item2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntIntPair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/IntIntPair.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIntIntPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIntIntPair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntIntPair_Statics::NewProp_Item1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "IntIntPair" },
		{ "ModuleRelativePath", "Public/IntIntPair.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIntIntPair_Statics::NewProp_Item1 = { "Item1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIntIntPair, Item1), METADATA_PARAMS(Z_Construct_UScriptStruct_FIntIntPair_Statics::NewProp_Item1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntIntPair_Statics::NewProp_Item1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntIntPair_Statics::NewProp_Item2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "IntIntPair" },
		{ "ModuleRelativePath", "Public/IntIntPair.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIntIntPair_Statics::NewProp_Item2 = { "Item2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIntIntPair, Item2), METADATA_PARAMS(Z_Construct_UScriptStruct_FIntIntPair_Statics::NewProp_Item2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntIntPair_Statics::NewProp_Item2_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIntIntPair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntIntPair_Statics::NewProp_Item1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntIntPair_Statics::NewProp_Item2,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIntIntPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEICommon,
		nullptr,
		&NewStructOps,
		"IntIntPair",
		sizeof(FIntIntPair),
		alignof(FIntIntPair),
		Z_Construct_UScriptStruct_FIntIntPair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntIntPair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIntIntPair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntIntPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIntIntPair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIntIntPair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEICommon();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IntIntPair"), sizeof(FIntIntPair), Get_Z_Construct_UScriptStruct_FIntIntPair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIntIntPair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIntIntPair_Hash() { return 2436597268U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
