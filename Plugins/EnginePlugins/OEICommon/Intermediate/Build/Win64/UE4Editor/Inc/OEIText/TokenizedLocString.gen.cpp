// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIText/Public/TokenizedLocString.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTokenizedLocString() {}
// Cross Module References
	OEITEXT_API UScriptStruct* Z_Construct_UScriptStruct_FTokenizedLocString();
	UPackage* Z_Construct_UPackage__Script_OEIText();
	OEITEXT_API UScriptStruct* Z_Construct_UScriptStruct_FLocString();
	OEITEXT_API UScriptStruct* Z_Construct_UScriptStruct_FLocStringTokenValue();
// End Cross Module References
class UScriptStruct* FTokenizedLocString::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEITEXT_API uint32 Get_Z_Construct_UScriptStruct_FTokenizedLocString_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTokenizedLocString, Z_Construct_UPackage__Script_OEIText(), TEXT("TokenizedLocString"), sizeof(FTokenizedLocString), Get_Z_Construct_UScriptStruct_FTokenizedLocString_Hash());
	}
	return Singleton;
}
template<> OEITEXT_API UScriptStruct* StaticStruct<FTokenizedLocString>()
{
	return FTokenizedLocString::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTokenizedLocString(FTokenizedLocString::StaticStruct, TEXT("/Script/OEIText"), TEXT("TokenizedLocString"), false, nullptr, nullptr);
static struct FScriptStruct_OEIText_StaticRegisterNativesFTokenizedLocString
{
	FScriptStruct_OEIText_StaticRegisterNativesFTokenizedLocString()
	{
		UScriptStruct::DeferCppStructOps<FTokenizedLocString>(FName(TEXT("TokenizedLocString")));
	}
} ScriptStruct_OEIText_StaticRegisterNativesFTokenizedLocString;
	struct Z_Construct_UScriptStruct_FTokenizedLocString_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tokens_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tokens_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tokens;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenizedLocString_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TokenizedLocString.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTokenizedLocString_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTokenizedLocString>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenizedLocString_Statics::NewProp_BaseString_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TokenizedLocString" },
		{ "ModuleRelativePath", "Public/TokenizedLocString.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTokenizedLocString_Statics::NewProp_BaseString = { "BaseString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTokenizedLocString, BaseString), Z_Construct_UScriptStruct_FLocString, METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenizedLocString_Statics::NewProp_BaseString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenizedLocString_Statics::NewProp_BaseString_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTokenizedLocString_Statics::NewProp_Tokens_Inner = { "Tokens", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLocStringTokenValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenizedLocString_Statics::NewProp_Tokens_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TokenizedLocString" },
		{ "ModuleRelativePath", "Public/TokenizedLocString.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTokenizedLocString_Statics::NewProp_Tokens = { "Tokens", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTokenizedLocString, Tokens), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenizedLocString_Statics::NewProp_Tokens_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenizedLocString_Statics::NewProp_Tokens_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTokenizedLocString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTokenizedLocString_Statics::NewProp_BaseString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTokenizedLocString_Statics::NewProp_Tokens_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTokenizedLocString_Statics::NewProp_Tokens,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTokenizedLocString_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIText,
		nullptr,
		&NewStructOps,
		"TokenizedLocString",
		sizeof(FTokenizedLocString),
		alignof(FTokenizedLocString),
		Z_Construct_UScriptStruct_FTokenizedLocString_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenizedLocString_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenizedLocString_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenizedLocString_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTokenizedLocString()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTokenizedLocString_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIText();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TokenizedLocString"), sizeof(FTokenizedLocString), Get_Z_Construct_UScriptStruct_FTokenizedLocString_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTokenizedLocString_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTokenizedLocString_Hash() { return 2396177126U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
