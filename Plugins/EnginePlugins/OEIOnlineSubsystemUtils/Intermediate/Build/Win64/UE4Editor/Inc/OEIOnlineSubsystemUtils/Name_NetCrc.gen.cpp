// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIOnlineSubsystemUtils/Public/Name_NetCrc.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeName_NetCrc() {}
// Cross Module References
	OEIONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FName_NetCrc();
	UPackage* Z_Construct_UPackage__Script_OEIOnlineSubsystemUtils();
// End Cross Module References
class UScriptStruct* FName_NetCrc::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIONLINESUBSYSTEMUTILS_API uint32 Get_Z_Construct_UScriptStruct_FName_NetCrc_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FName_NetCrc, Z_Construct_UPackage__Script_OEIOnlineSubsystemUtils(), TEXT("Name_NetCrc"), sizeof(FName_NetCrc), Get_Z_Construct_UScriptStruct_FName_NetCrc_Hash());
	}
	return Singleton;
}
template<> OEIONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<FName_NetCrc>()
{
	return FName_NetCrc::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FName_NetCrc(FName_NetCrc::StaticStruct, TEXT("/Script/OEIOnlineSubsystemUtils"), TEXT("Name_NetCrc"), false, nullptr, nullptr);
static struct FScriptStruct_OEIOnlineSubsystemUtils_StaticRegisterNativesFName_NetCrc
{
	FScriptStruct_OEIOnlineSubsystemUtils_StaticRegisterNativesFName_NetCrc()
	{
		UScriptStruct::DeferCppStructOps<FName_NetCrc>(FName(TEXT("Name_NetCrc")));
	}
} ScriptStruct_OEIOnlineSubsystemUtils_StaticRegisterNativesFName_NetCrc;
	struct Z_Construct_UScriptStruct_FName_NetCrc_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FName_NetCrc_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Name_NetCrc.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FName_NetCrc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FName_NetCrc>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FName_NetCrc_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Name_NetCrc" },
		{ "ModuleRelativePath", "Public/Name_NetCrc.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FName_NetCrc_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FName_NetCrc, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FName_NetCrc_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FName_NetCrc_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FName_NetCrc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FName_NetCrc_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FName_NetCrc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIOnlineSubsystemUtils,
		nullptr,
		&NewStructOps,
		"Name_NetCrc",
		sizeof(FName_NetCrc),
		alignof(FName_NetCrc),
		Z_Construct_UScriptStruct_FName_NetCrc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FName_NetCrc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FName_NetCrc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FName_NetCrc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FName_NetCrc()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FName_NetCrc_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIOnlineSubsystemUtils();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Name_NetCrc"), sizeof(FName_NetCrc), Get_Z_Construct_UScriptStruct_FName_NetCrc_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FName_NetCrc_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FName_NetCrc_Hash() { return 3296302734U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
