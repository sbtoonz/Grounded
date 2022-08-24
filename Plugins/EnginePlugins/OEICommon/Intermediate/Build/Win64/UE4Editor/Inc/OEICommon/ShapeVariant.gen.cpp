// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEICommon/Public/ShapeVariant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShapeVariant() {}
// Cross Module References
	OEICOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FShapeVariant();
	UPackage* Z_Construct_UPackage__Script_OEICommon();
	OEICOMMON_API UEnum* Z_Construct_UEnum_OEICommon_EShapeType();
	OEICOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FBoxShapeData();
	OEICOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FSphereShapeData();
	OEICOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FCapsuleShapeData();
// End Cross Module References
class UScriptStruct* FShapeVariant::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEICOMMON_API uint32 Get_Z_Construct_UScriptStruct_FShapeVariant_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FShapeVariant, Z_Construct_UPackage__Script_OEICommon(), TEXT("ShapeVariant"), sizeof(FShapeVariant), Get_Z_Construct_UScriptStruct_FShapeVariant_Hash());
	}
	return Singleton;
}
template<> OEICOMMON_API UScriptStruct* StaticStruct<FShapeVariant>()
{
	return FShapeVariant::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FShapeVariant(FShapeVariant::StaticStruct, TEXT("/Script/OEICommon"), TEXT("ShapeVariant"), false, nullptr, nullptr);
static struct FScriptStruct_OEICommon_StaticRegisterNativesFShapeVariant
{
	FScriptStruct_OEICommon_StaticRegisterNativesFShapeVariant()
	{
		UScriptStruct::DeferCppStructOps<FShapeVariant>(FName(TEXT("ShapeVariant")));
	}
} ScriptStruct_OEICommon_StaticRegisterNativesFShapeVariant;
	struct Z_Construct_UScriptStruct_FShapeVariant_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ShapeType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShapeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ShapeType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SphereData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapsuleData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShapeVariant_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ShapeVariant.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShapeVariant_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShapeVariant>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FShapeVariant_Statics::NewProp_ShapeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShapeVariant_Statics::NewProp_ShapeType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ShapeVariant" },
		{ "ModuleRelativePath", "Public/ShapeVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FShapeVariant_Statics::NewProp_ShapeType = { "ShapeType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShapeVariant, ShapeType), Z_Construct_UEnum_OEICommon_EShapeType, METADATA_PARAMS(Z_Construct_UScriptStruct_FShapeVariant_Statics::NewProp_ShapeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShapeVariant_Statics::NewProp_ShapeType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShapeVariant_Statics::NewProp_BoxData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ShapeVariant" },
		{ "ModuleRelativePath", "Public/ShapeVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShapeVariant_Statics::NewProp_BoxData = { "BoxData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShapeVariant, BoxData), Z_Construct_UScriptStruct_FBoxShapeData, METADATA_PARAMS(Z_Construct_UScriptStruct_FShapeVariant_Statics::NewProp_BoxData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShapeVariant_Statics::NewProp_BoxData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShapeVariant_Statics::NewProp_SphereData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ShapeVariant" },
		{ "ModuleRelativePath", "Public/ShapeVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShapeVariant_Statics::NewProp_SphereData = { "SphereData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShapeVariant, SphereData), Z_Construct_UScriptStruct_FSphereShapeData, METADATA_PARAMS(Z_Construct_UScriptStruct_FShapeVariant_Statics::NewProp_SphereData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShapeVariant_Statics::NewProp_SphereData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShapeVariant_Statics::NewProp_CapsuleData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ShapeVariant" },
		{ "ModuleRelativePath", "Public/ShapeVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShapeVariant_Statics::NewProp_CapsuleData = { "CapsuleData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShapeVariant, CapsuleData), Z_Construct_UScriptStruct_FCapsuleShapeData, METADATA_PARAMS(Z_Construct_UScriptStruct_FShapeVariant_Statics::NewProp_CapsuleData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShapeVariant_Statics::NewProp_CapsuleData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShapeVariant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShapeVariant_Statics::NewProp_ShapeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShapeVariant_Statics::NewProp_ShapeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShapeVariant_Statics::NewProp_BoxData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShapeVariant_Statics::NewProp_SphereData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShapeVariant_Statics::NewProp_CapsuleData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShapeVariant_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEICommon,
		nullptr,
		&NewStructOps,
		"ShapeVariant",
		sizeof(FShapeVariant),
		alignof(FShapeVariant),
		Z_Construct_UScriptStruct_FShapeVariant_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShapeVariant_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShapeVariant_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShapeVariant_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShapeVariant()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FShapeVariant_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEICommon();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ShapeVariant"), sizeof(FShapeVariant), Get_Z_Construct_UScriptStruct_FShapeVariant_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FShapeVariant_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FShapeVariant_Hash() { return 646741463U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
