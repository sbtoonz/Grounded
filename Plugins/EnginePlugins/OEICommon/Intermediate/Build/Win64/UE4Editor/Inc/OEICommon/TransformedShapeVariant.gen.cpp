// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEICommon/Public/TransformedShapeVariant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransformedShapeVariant() {}
// Cross Module References
	OEICOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FTransformedShapeVariant();
	UPackage* Z_Construct_UPackage__Script_OEICommon();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	OEICOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FShapeVariant();
// End Cross Module References
class UScriptStruct* FTransformedShapeVariant::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEICOMMON_API uint32 Get_Z_Construct_UScriptStruct_FTransformedShapeVariant_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformedShapeVariant, Z_Construct_UPackage__Script_OEICommon(), TEXT("TransformedShapeVariant"), sizeof(FTransformedShapeVariant), Get_Z_Construct_UScriptStruct_FTransformedShapeVariant_Hash());
	}
	return Singleton;
}
template<> OEICOMMON_API UScriptStruct* StaticStruct<FTransformedShapeVariant>()
{
	return FTransformedShapeVariant::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTransformedShapeVariant(FTransformedShapeVariant::StaticStruct, TEXT("/Script/OEICommon"), TEXT("TransformedShapeVariant"), false, nullptr, nullptr);
static struct FScriptStruct_OEICommon_StaticRegisterNativesFTransformedShapeVariant
{
	FScriptStruct_OEICommon_StaticRegisterNativesFTransformedShapeVariant()
	{
		UScriptStruct::DeferCppStructOps<FTransformedShapeVariant>(FName(TEXT("TransformedShapeVariant")));
	}
} ScriptStruct_OEICommon_StaticRegisterNativesFTransformedShapeVariant;
	struct Z_Construct_UScriptStruct_FTransformedShapeVariant_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShapeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShapeTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Shape;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformedShapeVariant_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TransformedShapeVariant.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransformedShapeVariant_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformedShapeVariant>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformedShapeVariant_Statics::NewProp_ShapeTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TransformedShapeVariant" },
		{ "ModuleRelativePath", "Public/TransformedShapeVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformedShapeVariant_Statics::NewProp_ShapeTransform = { "ShapeTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransformedShapeVariant, ShapeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformedShapeVariant_Statics::NewProp_ShapeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformedShapeVariant_Statics::NewProp_ShapeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformedShapeVariant_Statics::NewProp_Shape_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TransformedShapeVariant" },
		{ "ModuleRelativePath", "Public/TransformedShapeVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformedShapeVariant_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransformedShapeVariant, Shape), Z_Construct_UScriptStruct_FShapeVariant, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformedShapeVariant_Statics::NewProp_Shape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformedShapeVariant_Statics::NewProp_Shape_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransformedShapeVariant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformedShapeVariant_Statics::NewProp_ShapeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformedShapeVariant_Statics::NewProp_Shape,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformedShapeVariant_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEICommon,
		nullptr,
		&NewStructOps,
		"TransformedShapeVariant",
		sizeof(FTransformedShapeVariant),
		alignof(FTransformedShapeVariant),
		Z_Construct_UScriptStruct_FTransformedShapeVariant_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformedShapeVariant_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformedShapeVariant_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformedShapeVariant_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransformedShapeVariant()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTransformedShapeVariant_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEICommon();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TransformedShapeVariant"), sizeof(FTransformedShapeVariant), Get_Z_Construct_UScriptStruct_FTransformedShapeVariant_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTransformedShapeVariant_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTransformedShapeVariant_Hash() { return 1714081901U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
