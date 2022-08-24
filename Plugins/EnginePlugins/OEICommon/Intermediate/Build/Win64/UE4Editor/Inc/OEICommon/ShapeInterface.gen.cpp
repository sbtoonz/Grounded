// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEICommon/Public/ShapeInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShapeInterface() {}
// Cross Module References
	OEICOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FShapeInterface();
	UPackage* Z_Construct_UPackage__Script_OEICommon();
// End Cross Module References
class UScriptStruct* FShapeInterface::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEICOMMON_API uint32 Get_Z_Construct_UScriptStruct_FShapeInterface_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FShapeInterface, Z_Construct_UPackage__Script_OEICommon(), TEXT("ShapeInterface"), sizeof(FShapeInterface), Get_Z_Construct_UScriptStruct_FShapeInterface_Hash());
	}
	return Singleton;
}
template<> OEICOMMON_API UScriptStruct* StaticStruct<FShapeInterface>()
{
	return FShapeInterface::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FShapeInterface(FShapeInterface::StaticStruct, TEXT("/Script/OEICommon"), TEXT("ShapeInterface"), false, nullptr, nullptr);
static struct FScriptStruct_OEICommon_StaticRegisterNativesFShapeInterface
{
	FScriptStruct_OEICommon_StaticRegisterNativesFShapeInterface()
	{
		UScriptStruct::DeferCppStructOps<FShapeInterface>(FName(TEXT("ShapeInterface")));
	}
} ScriptStruct_OEICommon_StaticRegisterNativesFShapeInterface;
	struct Z_Construct_UScriptStruct_FShapeInterface_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShapeInterface_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ShapeInterface.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShapeInterface_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShapeInterface>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShapeInterface_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEICommon,
		nullptr,
		&NewStructOps,
		"ShapeInterface",
		sizeof(FShapeInterface),
		alignof(FShapeInterface),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShapeInterface_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShapeInterface_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShapeInterface()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FShapeInterface_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEICommon();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ShapeInterface"), sizeof(FShapeInterface), Get_Z_Construct_UScriptStruct_FShapeInterface_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FShapeInterface_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FShapeInterface_Hash() { return 2361974664U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
