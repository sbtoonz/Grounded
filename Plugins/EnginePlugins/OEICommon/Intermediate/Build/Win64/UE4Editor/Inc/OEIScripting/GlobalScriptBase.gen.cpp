// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIScripting/Public/GlobalScriptBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalScriptBase() {}
// Cross Module References
	OEISCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalScriptBase();
	UPackage* Z_Construct_UPackage__Script_OEIScripting();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	OEISCRIPTING_API UEnum* Z_Construct_UEnum_OEIScripting_EGlobalScriptType();
// End Cross Module References
class UScriptStruct* FGlobalScriptBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEISCRIPTING_API uint32 Get_Z_Construct_UScriptStruct_FGlobalScriptBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGlobalScriptBase, Z_Construct_UPackage__Script_OEIScripting(), TEXT("GlobalScriptBase"), sizeof(FGlobalScriptBase), Get_Z_Construct_UScriptStruct_FGlobalScriptBase_Hash());
	}
	return Singleton;
}
template<> OEISCRIPTING_API UScriptStruct* StaticStruct<FGlobalScriptBase>()
{
	return FGlobalScriptBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGlobalScriptBase(FGlobalScriptBase::StaticStruct, TEXT("/Script/OEIScripting"), TEXT("GlobalScriptBase"), false, nullptr, nullptr);
static struct FScriptStruct_OEIScripting_StaticRegisterNativesFGlobalScriptBase
{
	FScriptStruct_OEIScripting_StaticRegisterNativesFGlobalScriptBase()
	{
		UScriptStruct::DeferCppStructOps<FGlobalScriptBase>(FName(TEXT("GlobalScriptBase")));
	}
} ScriptStruct_OEIScripting_StaticRegisterNativesFGlobalScriptBase;
	struct Z_Construct_UScriptStruct_FGlobalScriptBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScriptType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScriptType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScriptType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalScriptBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GlobalScriptBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGlobalScriptBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGlobalScriptBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalScriptBase_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GlobalScriptBase" },
		{ "ModuleRelativePath", "Public/GlobalScriptBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGlobalScriptBase_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGlobalScriptBase, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalScriptBase_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalScriptBase_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalScriptBase_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GlobalScriptBase" },
		{ "ModuleRelativePath", "Public/GlobalScriptBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGlobalScriptBase_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGlobalScriptBase, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalScriptBase_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalScriptBase_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGlobalScriptBase_Statics::NewProp_ScriptType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalScriptBase_Statics::NewProp_ScriptType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GlobalScriptBase" },
		{ "ModuleRelativePath", "Public/GlobalScriptBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGlobalScriptBase_Statics::NewProp_ScriptType = { "ScriptType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGlobalScriptBase, ScriptType), Z_Construct_UEnum_OEIScripting_EGlobalScriptType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalScriptBase_Statics::NewProp_ScriptType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalScriptBase_Statics::NewProp_ScriptType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGlobalScriptBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalScriptBase_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalScriptBase_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalScriptBase_Statics::NewProp_ScriptType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalScriptBase_Statics::NewProp_ScriptType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGlobalScriptBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIScripting,
		nullptr,
		&NewStructOps,
		"GlobalScriptBase",
		sizeof(FGlobalScriptBase),
		alignof(FGlobalScriptBase),
		Z_Construct_UScriptStruct_FGlobalScriptBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalScriptBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalScriptBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalScriptBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGlobalScriptBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGlobalScriptBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIScripting();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GlobalScriptBase"), sizeof(FGlobalScriptBase), Get_Z_Construct_UScriptStruct_FGlobalScriptBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGlobalScriptBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGlobalScriptBase_Hash() { return 3957826858U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
