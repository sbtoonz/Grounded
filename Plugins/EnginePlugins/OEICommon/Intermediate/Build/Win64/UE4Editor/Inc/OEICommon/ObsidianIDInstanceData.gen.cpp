// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEICommon/Public/ObsidianIDInstanceData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObsidianIDInstanceData() {}
// Cross Module References
	OEICOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FObsidianIDInstanceData();
	UPackage* Z_Construct_UPackage__Script_OEICommon();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorComponentInstanceData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References

static_assert(std::is_polymorphic<FObsidianIDInstanceData>() == std::is_polymorphic<FActorComponentInstanceData>(), "USTRUCT FObsidianIDInstanceData cannot be polymorphic unless super FActorComponentInstanceData is polymorphic");

class UScriptStruct* FObsidianIDInstanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEICOMMON_API uint32 Get_Z_Construct_UScriptStruct_FObsidianIDInstanceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FObsidianIDInstanceData, Z_Construct_UPackage__Script_OEICommon(), TEXT("ObsidianIDInstanceData"), sizeof(FObsidianIDInstanceData), Get_Z_Construct_UScriptStruct_FObsidianIDInstanceData_Hash());
	}
	return Singleton;
}
template<> OEICOMMON_API UScriptStruct* StaticStruct<FObsidianIDInstanceData>()
{
	return FObsidianIDInstanceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FObsidianIDInstanceData(FObsidianIDInstanceData::StaticStruct, TEXT("/Script/OEICommon"), TEXT("ObsidianIDInstanceData"), false, nullptr, nullptr);
static struct FScriptStruct_OEICommon_StaticRegisterNativesFObsidianIDInstanceData
{
	FScriptStruct_OEICommon_StaticRegisterNativesFObsidianIDInstanceData()
	{
		UScriptStruct::DeferCppStructOps<FObsidianIDInstanceData>(FName(TEXT("ObsidianIDInstanceData")));
	}
} ScriptStruct_OEICommon_StaticRegisterNativesFObsidianIDInstanceData;
	struct Z_Construct_UScriptStruct_FObsidianIDInstanceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObsidianIDInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ObsidianIDInstanceData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObsidianIDInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObsidianIDInstanceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObsidianIDInstanceData_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObsidianIDInstanceData" },
		{ "ModuleRelativePath", "Public/ObsidianIDInstanceData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FObsidianIDInstanceData_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObsidianIDInstanceData, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FObsidianIDInstanceData_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObsidianIDInstanceData_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObsidianIDInstanceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObsidianIDInstanceData_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObsidianIDInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEICommon,
		Z_Construct_UScriptStruct_FActorComponentInstanceData,
		&NewStructOps,
		"ObsidianIDInstanceData",
		sizeof(FObsidianIDInstanceData),
		alignof(FObsidianIDInstanceData),
		Z_Construct_UScriptStruct_FObsidianIDInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObsidianIDInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FObsidianIDInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObsidianIDInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FObsidianIDInstanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FObsidianIDInstanceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEICommon();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ObsidianIDInstanceData"), sizeof(FObsidianIDInstanceData), Get_Z_Construct_UScriptStruct_FObsidianIDInstanceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FObsidianIDInstanceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FObsidianIDInstanceData_Hash() { return 1114997495U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
