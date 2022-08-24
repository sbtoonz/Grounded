// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEICommon/Public/CapsuleShapeData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsuleShapeData() {}
// Cross Module References
	OEICOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FCapsuleShapeData();
	UPackage* Z_Construct_UPackage__Script_OEICommon();
	OEICOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FShapeInterface();
// End Cross Module References

static_assert(std::is_polymorphic<FCapsuleShapeData>() == std::is_polymorphic<FShapeInterface>(), "USTRUCT FCapsuleShapeData cannot be polymorphic unless super FShapeInterface is polymorphic");

class UScriptStruct* FCapsuleShapeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEICOMMON_API uint32 Get_Z_Construct_UScriptStruct_FCapsuleShapeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCapsuleShapeData, Z_Construct_UPackage__Script_OEICommon(), TEXT("CapsuleShapeData"), sizeof(FCapsuleShapeData), Get_Z_Construct_UScriptStruct_FCapsuleShapeData_Hash());
	}
	return Singleton;
}
template<> OEICOMMON_API UScriptStruct* StaticStruct<FCapsuleShapeData>()
{
	return FCapsuleShapeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCapsuleShapeData(FCapsuleShapeData::StaticStruct, TEXT("/Script/OEICommon"), TEXT("CapsuleShapeData"), false, nullptr, nullptr);
static struct FScriptStruct_OEICommon_StaticRegisterNativesFCapsuleShapeData
{
	FScriptStruct_OEICommon_StaticRegisterNativesFCapsuleShapeData()
	{
		UScriptStruct::DeferCppStructOps<FCapsuleShapeData>(FName(TEXT("CapsuleShapeData")));
	}
} ScriptStruct_OEICommon_StaticRegisterNativesFCapsuleShapeData;
	struct Z_Construct_UScriptStruct_FCapsuleShapeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleHalfHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CapsuleHalfHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CapsuleRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapsuleShapeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CapsuleShapeData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCapsuleShapeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCapsuleShapeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapsuleShapeData_Statics::NewProp_CapsuleHalfHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CapsuleShapeData" },
		{ "ModuleRelativePath", "Public/CapsuleShapeData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCapsuleShapeData_Statics::NewProp_CapsuleHalfHeight = { "CapsuleHalfHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCapsuleShapeData, CapsuleHalfHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FCapsuleShapeData_Statics::NewProp_CapsuleHalfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleShapeData_Statics::NewProp_CapsuleHalfHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapsuleShapeData_Statics::NewProp_CapsuleRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CapsuleShapeData" },
		{ "ModuleRelativePath", "Public/CapsuleShapeData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCapsuleShapeData_Statics::NewProp_CapsuleRadius = { "CapsuleRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCapsuleShapeData, CapsuleRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FCapsuleShapeData_Statics::NewProp_CapsuleRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleShapeData_Statics::NewProp_CapsuleRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCapsuleShapeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapsuleShapeData_Statics::NewProp_CapsuleHalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapsuleShapeData_Statics::NewProp_CapsuleRadius,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCapsuleShapeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEICommon,
		Z_Construct_UScriptStruct_FShapeInterface,
		&NewStructOps,
		"CapsuleShapeData",
		sizeof(FCapsuleShapeData),
		alignof(FCapsuleShapeData),
		Z_Construct_UScriptStruct_FCapsuleShapeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleShapeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCapsuleShapeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleShapeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCapsuleShapeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCapsuleShapeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEICommon();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CapsuleShapeData"), sizeof(FCapsuleShapeData), Get_Z_Construct_UScriptStruct_FCapsuleShapeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCapsuleShapeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCapsuleShapeData_Hash() { return 2918491799U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
