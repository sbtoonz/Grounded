// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEICommon/Public/GuidIntPair.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGuidIntPair() {}
// Cross Module References
	OEICOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FGuidIntPair();
	UPackage* Z_Construct_UPackage__Script_OEICommon();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FGuidIntPair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEICOMMON_API uint32 Get_Z_Construct_UScriptStruct_FGuidIntPair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGuidIntPair, Z_Construct_UPackage__Script_OEICommon(), TEXT("GuidIntPair"), sizeof(FGuidIntPair), Get_Z_Construct_UScriptStruct_FGuidIntPair_Hash());
	}
	return Singleton;
}
template<> OEICOMMON_API UScriptStruct* StaticStruct<FGuidIntPair>()
{
	return FGuidIntPair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGuidIntPair(FGuidIntPair::StaticStruct, TEXT("/Script/OEICommon"), TEXT("GuidIntPair"), false, nullptr, nullptr);
static struct FScriptStruct_OEICommon_StaticRegisterNativesFGuidIntPair
{
	FScriptStruct_OEICommon_StaticRegisterNativesFGuidIntPair()
	{
		UScriptStruct::DeferCppStructOps<FGuidIntPair>(FName(TEXT("GuidIntPair")));
	}
} ScriptStruct_OEICommon_StaticRegisterNativesFGuidIntPair;
	struct Z_Construct_UScriptStruct_FGuidIntPair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Item1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Item2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuidIntPair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GuidIntPair.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGuidIntPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGuidIntPair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuidIntPair_Statics::NewProp_Item1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GuidIntPair" },
		{ "ModuleRelativePath", "Public/GuidIntPair.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGuidIntPair_Statics::NewProp_Item1 = { "Item1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuidIntPair, Item1), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FGuidIntPair_Statics::NewProp_Item1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuidIntPair_Statics::NewProp_Item1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuidIntPair_Statics::NewProp_Item2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GuidIntPair" },
		{ "ModuleRelativePath", "Public/GuidIntPair.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGuidIntPair_Statics::NewProp_Item2 = { "Item2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuidIntPair, Item2), METADATA_PARAMS(Z_Construct_UScriptStruct_FGuidIntPair_Statics::NewProp_Item2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuidIntPair_Statics::NewProp_Item2_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGuidIntPair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuidIntPair_Statics::NewProp_Item1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuidIntPair_Statics::NewProp_Item2,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGuidIntPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEICommon,
		nullptr,
		&NewStructOps,
		"GuidIntPair",
		sizeof(FGuidIntPair),
		alignof(FGuidIntPair),
		Z_Construct_UScriptStruct_FGuidIntPair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuidIntPair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGuidIntPair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuidIntPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGuidIntPair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGuidIntPair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEICommon();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GuidIntPair"), sizeof(FGuidIntPair), Get_Z_Construct_UScriptStruct_FGuidIntPair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGuidIntPair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGuidIntPair_Hash() { return 3461743054U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
