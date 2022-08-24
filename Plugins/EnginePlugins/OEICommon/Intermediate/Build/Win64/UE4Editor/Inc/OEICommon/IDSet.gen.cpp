// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEICommon/Public/IDSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIDSet() {}
// Cross Module References
	OEICOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FIDSet();
	UPackage* Z_Construct_UPackage__Script_OEICommon();
// End Cross Module References
class UScriptStruct* FIDSet::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEICOMMON_API uint32 Get_Z_Construct_UScriptStruct_FIDSet_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIDSet, Z_Construct_UPackage__Script_OEICommon(), TEXT("IDSet"), sizeof(FIDSet), Get_Z_Construct_UScriptStruct_FIDSet_Hash());
	}
	return Singleton;
}
template<> OEICOMMON_API UScriptStruct* StaticStruct<FIDSet>()
{
	return FIDSet::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIDSet(FIDSet::StaticStruct, TEXT("/Script/OEICommon"), TEXT("IDSet"), false, nullptr, nullptr);
static struct FScriptStruct_OEICommon_StaticRegisterNativesFIDSet
{
	FScriptStruct_OEICommon_StaticRegisterNativesFIDSet()
	{
		UScriptStruct::DeferCppStructOps<FIDSet>(FName(TEXT("IDSet")));
	}
} ScriptStruct_OEICommon_StaticRegisterNativesFIDSet;
	struct Z_Construct_UScriptStruct_FIDSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IDs_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_IDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIDSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/IDSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIDSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIDSet>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIDSet_Statics::NewProp_IDs_ElementProp = { "IDs", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIDSet_Statics::NewProp_IDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "IDSet" },
		{ "ModuleRelativePath", "Public/IDSet.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FIDSet_Statics::NewProp_IDs = { "IDs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIDSet, IDs), METADATA_PARAMS(Z_Construct_UScriptStruct_FIDSet_Statics::NewProp_IDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIDSet_Statics::NewProp_IDs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIDSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIDSet_Statics::NewProp_IDs_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIDSet_Statics::NewProp_IDs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIDSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEICommon,
		nullptr,
		&NewStructOps,
		"IDSet",
		sizeof(FIDSet),
		alignof(FIDSet),
		Z_Construct_UScriptStruct_FIDSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIDSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIDSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIDSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIDSet()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIDSet_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEICommon();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IDSet"), sizeof(FIDSet), Get_Z_Construct_UScriptStruct_FIDSet_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIDSet_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIDSet_Hash() { return 820423977U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
