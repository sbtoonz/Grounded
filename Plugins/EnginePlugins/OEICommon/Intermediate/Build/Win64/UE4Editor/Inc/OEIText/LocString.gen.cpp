// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIText/Public/LocString.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocString() {}
// Cross Module References
	OEITEXT_API UScriptStruct* Z_Construct_UScriptStruct_FLocString();
	UPackage* Z_Construct_UPackage__Script_OEIText();
// End Cross Module References
class UScriptStruct* FLocString::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEITEXT_API uint32 Get_Z_Construct_UScriptStruct_FLocString_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocString, Z_Construct_UPackage__Script_OEIText(), TEXT("LocString"), sizeof(FLocString), Get_Z_Construct_UScriptStruct_FLocString_Hash());
	}
	return Singleton;
}
template<> OEITEXT_API UScriptStruct* StaticStruct<FLocString>()
{
	return FLocString::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLocString(FLocString::StaticStruct, TEXT("/Script/OEIText"), TEXT("LocString"), false, nullptr, nullptr);
static struct FScriptStruct_OEIText_StaticRegisterNativesFLocString
{
	FScriptStruct_OEIText_StaticRegisterNativesFLocString()
	{
		UScriptStruct::DeferCppStructOps<FLocString>(FName(TEXT("LocString")));
	}
} ScriptStruct_OEIText_StaticRegisterNativesFLocString;
	struct Z_Construct_UScriptStruct_FLocString_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringTableID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StringTableID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StringID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringTableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StringTableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocString_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LocString.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLocString_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocString>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocString_Statics::NewProp_StringTableID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LocString" },
		{ "ModuleRelativePath", "Public/LocString.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLocString_Statics::NewProp_StringTableID = { "StringTableID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocString, StringTableID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocString_Statics::NewProp_StringTableID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocString_Statics::NewProp_StringTableID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocString_Statics::NewProp_StringID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LocString" },
		{ "ModuleRelativePath", "Public/LocString.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLocString_Statics::NewProp_StringID = { "StringID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocString, StringID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocString_Statics::NewProp_StringID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocString_Statics::NewProp_StringID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocString_Statics::NewProp_StringTableName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LocString" },
		{ "ModuleRelativePath", "Public/LocString.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLocString_Statics::NewProp_StringTableName = { "StringTableName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocString, StringTableName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocString_Statics::NewProp_StringTableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocString_Statics::NewProp_StringTableName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocString_Statics::NewProp_StringTableID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocString_Statics::NewProp_StringID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocString_Statics::NewProp_StringTableName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocString_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIText,
		nullptr,
		&NewStructOps,
		"LocString",
		sizeof(FLocString),
		alignof(FLocString),
		Z_Construct_UScriptStruct_FLocString_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocString_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLocString_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocString_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLocString()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLocString_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIText();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LocString"), sizeof(FLocString), Get_Z_Construct_UScriptStruct_FLocString_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLocString_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLocString_Hash() { return 2417220918U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
