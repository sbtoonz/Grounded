// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIText/Public/LocStringTokenValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocStringTokenValue() {}
// Cross Module References
	OEITEXT_API UScriptStruct* Z_Construct_UScriptStruct_FLocStringTokenValue();
	UPackage* Z_Construct_UPackage__Script_OEIText();
	OEITEXT_API UEnum* Z_Construct_UEnum_OEIText_EStringTokenValueType();
	OEITEXT_API UScriptStruct* Z_Construct_UScriptStruct_FLocString();
// End Cross Module References
class UScriptStruct* FLocStringTokenValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEITEXT_API uint32 Get_Z_Construct_UScriptStruct_FLocStringTokenValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocStringTokenValue, Z_Construct_UPackage__Script_OEIText(), TEXT("LocStringTokenValue"), sizeof(FLocStringTokenValue), Get_Z_Construct_UScriptStruct_FLocStringTokenValue_Hash());
	}
	return Singleton;
}
template<> OEITEXT_API UScriptStruct* StaticStruct<FLocStringTokenValue>()
{
	return FLocStringTokenValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLocStringTokenValue(FLocStringTokenValue::StaticStruct, TEXT("/Script/OEIText"), TEXT("LocStringTokenValue"), false, nullptr, nullptr);
static struct FScriptStruct_OEIText_StaticRegisterNativesFLocStringTokenValue
{
	FScriptStruct_OEIText_StaticRegisterNativesFLocStringTokenValue()
	{
		UScriptStruct::DeferCppStructOps<FLocStringTokenValue>(FName(TEXT("LocStringTokenValue")));
	}
} ScriptStruct_OEIText_StaticRegisterNativesFLocStringTokenValue;
	struct Z_Construct_UScriptStruct_FLocStringTokenValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TokenName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TokenName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TokenType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TokenType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TokenType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsLocString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AsLocString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsInteger_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AsInteger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AsFloat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LocStringTokenValue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocStringTokenValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::NewProp_TokenName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LocStringTokenValue" },
		{ "ModuleRelativePath", "Public/LocStringTokenValue.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::NewProp_TokenName = { "TokenName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocStringTokenValue, TokenName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::NewProp_TokenName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::NewProp_TokenName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::NewProp_TokenType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::NewProp_TokenType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LocStringTokenValue" },
		{ "ModuleRelativePath", "Public/LocStringTokenValue.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::NewProp_TokenType = { "TokenType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocStringTokenValue, TokenType), Z_Construct_UEnum_OEIText_EStringTokenValueType, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::NewProp_TokenType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::NewProp_TokenType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::NewProp_AsLocString_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LocStringTokenValue" },
		{ "ModuleRelativePath", "Public/LocStringTokenValue.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::NewProp_AsLocString = { "AsLocString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocStringTokenValue, AsLocString), Z_Construct_UScriptStruct_FLocString, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::NewProp_AsLocString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::NewProp_AsLocString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::NewProp_AsInteger_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LocStringTokenValue" },
		{ "ModuleRelativePath", "Public/LocStringTokenValue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::NewProp_AsInteger = { "AsInteger", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocStringTokenValue, AsInteger), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::NewProp_AsInteger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::NewProp_AsInteger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::NewProp_AsFloat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LocStringTokenValue" },
		{ "ModuleRelativePath", "Public/LocStringTokenValue.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::NewProp_AsFloat = { "AsFloat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocStringTokenValue, AsFloat), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::NewProp_AsFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::NewProp_AsFloat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::NewProp_TokenName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::NewProp_TokenType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::NewProp_TokenType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::NewProp_AsLocString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::NewProp_AsInteger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::NewProp_AsFloat,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIText,
		nullptr,
		&NewStructOps,
		"LocStringTokenValue",
		sizeof(FLocStringTokenValue),
		alignof(FLocStringTokenValue),
		Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLocStringTokenValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLocStringTokenValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIText();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LocStringTokenValue"), sizeof(FLocStringTokenValue), Get_Z_Construct_UScriptStruct_FLocStringTokenValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLocStringTokenValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLocStringTokenValue_Hash() { return 1014936323U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
