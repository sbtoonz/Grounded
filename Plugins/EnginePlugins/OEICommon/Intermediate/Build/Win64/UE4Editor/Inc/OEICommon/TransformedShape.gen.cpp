// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEICommon/Public/TransformedShape.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransformedShape() {}
// Cross Module References
	OEICOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FTransformedShape();
	UPackage* Z_Construct_UPackage__Script_OEICommon();
	OEICOMMON_API UClass* Z_Construct_UClass_UShape_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
class UScriptStruct* FTransformedShape::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEICOMMON_API uint32 Get_Z_Construct_UScriptStruct_FTransformedShape_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformedShape, Z_Construct_UPackage__Script_OEICommon(), TEXT("TransformedShape"), sizeof(FTransformedShape), Get_Z_Construct_UScriptStruct_FTransformedShape_Hash());
	}
	return Singleton;
}
template<> OEICOMMON_API UScriptStruct* StaticStruct<FTransformedShape>()
{
	return FTransformedShape::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTransformedShape(FTransformedShape::StaticStruct, TEXT("/Script/OEICommon"), TEXT("TransformedShape"), false, nullptr, nullptr);
static struct FScriptStruct_OEICommon_StaticRegisterNativesFTransformedShape
{
	FScriptStruct_OEICommon_StaticRegisterNativesFTransformedShape()
	{
		UScriptStruct::DeferCppStructOps<FTransformedShape>(FName(TEXT("TransformedShape")));
	}
} ScriptStruct_OEICommon_StaticRegisterNativesFTransformedShape;
	struct Z_Construct_UScriptStruct_FTransformedShape_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Shape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShapeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShapeTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformedShape_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TransformedShape.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransformedShape_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformedShape>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformedShape_Statics::NewProp_Shape_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TransformedShape" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TransformedShape.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTransformedShape_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransformedShape, Shape), Z_Construct_UClass_UShape_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformedShape_Statics::NewProp_Shape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformedShape_Statics::NewProp_Shape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformedShape_Statics::NewProp_ShapeTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TransformedShape" },
		{ "ModuleRelativePath", "Public/TransformedShape.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformedShape_Statics::NewProp_ShapeTransform = { "ShapeTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransformedShape, ShapeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformedShape_Statics::NewProp_ShapeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformedShape_Statics::NewProp_ShapeTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransformedShape_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformedShape_Statics::NewProp_Shape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformedShape_Statics::NewProp_ShapeTransform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformedShape_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEICommon,
		nullptr,
		&NewStructOps,
		"TransformedShape",
		sizeof(FTransformedShape),
		alignof(FTransformedShape),
		Z_Construct_UScriptStruct_FTransformedShape_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformedShape_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformedShape_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformedShape_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransformedShape()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTransformedShape_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEICommon();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TransformedShape"), sizeof(FTransformedShape), Get_Z_Construct_UScriptStruct_FTransformedShape_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTransformedShape_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTransformedShape_Hash() { return 1090059926U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
