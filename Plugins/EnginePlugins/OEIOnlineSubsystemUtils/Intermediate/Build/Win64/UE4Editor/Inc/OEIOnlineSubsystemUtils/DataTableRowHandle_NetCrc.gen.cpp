// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIOnlineSubsystemUtils/Public/DataTableRowHandle_NetCrc.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataTableRowHandle_NetCrc() {}
// Cross Module References
	OEIONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle_NetCrc();
	UPackage* Z_Construct_UPackage__Script_OEIOnlineSubsystemUtils();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
// End Cross Module References

static_assert(std::is_polymorphic<FDataTableRowHandle_NetCrc>() == std::is_polymorphic<FDataTableRowHandle>(), "USTRUCT FDataTableRowHandle_NetCrc cannot be polymorphic unless super FDataTableRowHandle is polymorphic");

class UScriptStruct* FDataTableRowHandle_NetCrc::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIONLINESUBSYSTEMUTILS_API uint32 Get_Z_Construct_UScriptStruct_FDataTableRowHandle_NetCrc_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataTableRowHandle_NetCrc, Z_Construct_UPackage__Script_OEIOnlineSubsystemUtils(), TEXT("DataTableRowHandle_NetCrc"), sizeof(FDataTableRowHandle_NetCrc), Get_Z_Construct_UScriptStruct_FDataTableRowHandle_NetCrc_Hash());
	}
	return Singleton;
}
template<> OEIONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<FDataTableRowHandle_NetCrc>()
{
	return FDataTableRowHandle_NetCrc::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataTableRowHandle_NetCrc(FDataTableRowHandle_NetCrc::StaticStruct, TEXT("/Script/OEIOnlineSubsystemUtils"), TEXT("DataTableRowHandle_NetCrc"), false, nullptr, nullptr);
static struct FScriptStruct_OEIOnlineSubsystemUtils_StaticRegisterNativesFDataTableRowHandle_NetCrc
{
	FScriptStruct_OEIOnlineSubsystemUtils_StaticRegisterNativesFDataTableRowHandle_NetCrc()
	{
		UScriptStruct::DeferCppStructOps<FDataTableRowHandle_NetCrc>(FName(TEXT("DataTableRowHandle_NetCrc")));
	}
} ScriptStruct_OEIOnlineSubsystemUtils_StaticRegisterNativesFDataTableRowHandle_NetCrc;
	struct Z_Construct_UScriptStruct_FDataTableRowHandle_NetCrc_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataTableRowHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataTableRowHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataTableRowHandle_NetCrc_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTableRowHandle_NetCrc.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataTableRowHandle_NetCrc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataTableRowHandle_NetCrc>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataTableRowHandle_NetCrc_Statics::NewProp_DataTableRowHandle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataTableRowHandle_NetCrc" },
		{ "ModuleRelativePath", "Public/DataTableRowHandle_NetCrc.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataTableRowHandle_NetCrc_Statics::NewProp_DataTableRowHandle = { "DataTableRowHandle", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataTableRowHandle_NetCrc, DataTableRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataTableRowHandle_NetCrc_Statics::NewProp_DataTableRowHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableRowHandle_NetCrc_Statics::NewProp_DataTableRowHandle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataTableRowHandle_NetCrc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataTableRowHandle_NetCrc_Statics::NewProp_DataTableRowHandle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataTableRowHandle_NetCrc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIOnlineSubsystemUtils,
		Z_Construct_UScriptStruct_FDataTableRowHandle,
		&NewStructOps,
		"DataTableRowHandle_NetCrc",
		sizeof(FDataTableRowHandle_NetCrc),
		alignof(FDataTableRowHandle_NetCrc),
		Z_Construct_UScriptStruct_FDataTableRowHandle_NetCrc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableRowHandle_NetCrc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataTableRowHandle_NetCrc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableRowHandle_NetCrc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle_NetCrc()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataTableRowHandle_NetCrc_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIOnlineSubsystemUtils();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataTableRowHandle_NetCrc"), sizeof(FDataTableRowHandle_NetCrc), Get_Z_Construct_UScriptStruct_FDataTableRowHandle_NetCrc_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataTableRowHandle_NetCrc_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataTableRowHandle_NetCrc_Hash() { return 1864176015U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
