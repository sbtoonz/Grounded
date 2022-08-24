// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEICommon/Public/BoxShapeData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxShapeData() {}
// Cross Module References
	OEICOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FBoxShapeData();
	UPackage* Z_Construct_UPackage__Script_OEICommon();
	OEICOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FShapeInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References

static_assert(std::is_polymorphic<FBoxShapeData>() == std::is_polymorphic<FShapeInterface>(), "USTRUCT FBoxShapeData cannot be polymorphic unless super FShapeInterface is polymorphic");

class UScriptStruct* FBoxShapeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEICOMMON_API uint32 Get_Z_Construct_UScriptStruct_FBoxShapeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoxShapeData, Z_Construct_UPackage__Script_OEICommon(), TEXT("BoxShapeData"), sizeof(FBoxShapeData), Get_Z_Construct_UScriptStruct_FBoxShapeData_Hash());
	}
	return Singleton;
}
template<> OEICOMMON_API UScriptStruct* StaticStruct<FBoxShapeData>()
{
	return FBoxShapeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoxShapeData(FBoxShapeData::StaticStruct, TEXT("/Script/OEICommon"), TEXT("BoxShapeData"), false, nullptr, nullptr);
static struct FScriptStruct_OEICommon_StaticRegisterNativesFBoxShapeData
{
	FScriptStruct_OEICommon_StaticRegisterNativesFBoxShapeData()
	{
		UScriptStruct::DeferCppStructOps<FBoxShapeData>(FName(TEXT("BoxShapeData")));
	}
} ScriptStruct_OEICommon_StaticRegisterNativesFBoxShapeData;
	struct Z_Construct_UScriptStruct_FBoxShapeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxExtent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxShapeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoxShapeData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoxShapeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoxShapeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxShapeData_Statics::NewProp_BoxExtent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BoxShapeData" },
		{ "ModuleRelativePath", "Public/BoxShapeData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoxShapeData_Statics::NewProp_BoxExtent = { "BoxExtent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoxShapeData, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxShapeData_Statics::NewProp_BoxExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxShapeData_Statics::NewProp_BoxExtent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoxShapeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxShapeData_Statics::NewProp_BoxExtent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoxShapeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEICommon,
		Z_Construct_UScriptStruct_FShapeInterface,
		&NewStructOps,
		"BoxShapeData",
		sizeof(FBoxShapeData),
		alignof(FBoxShapeData),
		Z_Construct_UScriptStruct_FBoxShapeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxShapeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxShapeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxShapeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoxShapeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoxShapeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEICommon();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoxShapeData"), sizeof(FBoxShapeData), Get_Z_Construct_UScriptStruct_FBoxShapeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBoxShapeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoxShapeData_Hash() { return 364560925U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
