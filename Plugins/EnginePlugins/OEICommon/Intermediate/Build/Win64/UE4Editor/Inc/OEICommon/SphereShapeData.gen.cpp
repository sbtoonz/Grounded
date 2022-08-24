// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEICommon/Public/SphereShapeData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSphereShapeData() {}
// Cross Module References
	OEICOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FSphereShapeData();
	UPackage* Z_Construct_UPackage__Script_OEICommon();
	OEICOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FShapeInterface();
// End Cross Module References

static_assert(std::is_polymorphic<FSphereShapeData>() == std::is_polymorphic<FShapeInterface>(), "USTRUCT FSphereShapeData cannot be polymorphic unless super FShapeInterface is polymorphic");

class UScriptStruct* FSphereShapeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEICOMMON_API uint32 Get_Z_Construct_UScriptStruct_FSphereShapeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSphereShapeData, Z_Construct_UPackage__Script_OEICommon(), TEXT("SphereShapeData"), sizeof(FSphereShapeData), Get_Z_Construct_UScriptStruct_FSphereShapeData_Hash());
	}
	return Singleton;
}
template<> OEICOMMON_API UScriptStruct* StaticStruct<FSphereShapeData>()
{
	return FSphereShapeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSphereShapeData(FSphereShapeData::StaticStruct, TEXT("/Script/OEICommon"), TEXT("SphereShapeData"), false, nullptr, nullptr);
static struct FScriptStruct_OEICommon_StaticRegisterNativesFSphereShapeData
{
	FScriptStruct_OEICommon_StaticRegisterNativesFSphereShapeData()
	{
		UScriptStruct::DeferCppStructOps<FSphereShapeData>(FName(TEXT("SphereShapeData")));
	}
} ScriptStruct_OEICommon_StaticRegisterNativesFSphereShapeData;
	struct Z_Construct_UScriptStruct_FSphereShapeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphereShapeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SphereShapeData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSphereShapeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSphereShapeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphereShapeData_Statics::NewProp_SphereRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SphereShapeData" },
		{ "ModuleRelativePath", "Public/SphereShapeData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSphereShapeData_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSphereShapeData, SphereRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSphereShapeData_Statics::NewProp_SphereRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphereShapeData_Statics::NewProp_SphereRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSphereShapeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphereShapeData_Statics::NewProp_SphereRadius,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSphereShapeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEICommon,
		Z_Construct_UScriptStruct_FShapeInterface,
		&NewStructOps,
		"SphereShapeData",
		sizeof(FSphereShapeData),
		alignof(FSphereShapeData),
		Z_Construct_UScriptStruct_FSphereShapeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphereShapeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSphereShapeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphereShapeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSphereShapeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSphereShapeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEICommon();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SphereShapeData"), sizeof(FSphereShapeData), Get_Z_Construct_UScriptStruct_FSphereShapeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSphereShapeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSphereShapeData_Hash() { return 3967901145U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
