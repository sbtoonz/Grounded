// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIScripting/Public/ConditionalExpression.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConditionalExpression() {}
// Cross Module References
	OEISCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FConditionalExpression();
	UPackage* Z_Construct_UPackage__Script_OEIScripting();
	OEISCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionComponent();
	OEISCRIPTING_API UEnum* Z_Construct_UEnum_OEIScripting_EExpressionComponentType();
// End Cross Module References

static_assert(std::is_polymorphic<FConditionalExpression>() == std::is_polymorphic<FExpressionComponent>(), "USTRUCT FConditionalExpression cannot be polymorphic unless super FExpressionComponent is polymorphic");

class UScriptStruct* FConditionalExpression::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEISCRIPTING_API uint32 Get_Z_Construct_UScriptStruct_FConditionalExpression_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConditionalExpression, Z_Construct_UPackage__Script_OEIScripting(), TEXT("ConditionalExpression"), sizeof(FConditionalExpression), Get_Z_Construct_UScriptStruct_FConditionalExpression_Hash());
	}
	return Singleton;
}
template<> OEISCRIPTING_API UScriptStruct* StaticStruct<FConditionalExpression>()
{
	return FConditionalExpression::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConditionalExpression(FConditionalExpression::StaticStruct, TEXT("/Script/OEIScripting"), TEXT("ConditionalExpression"), false, nullptr, nullptr);
static struct FScriptStruct_OEIScripting_StaticRegisterNativesFConditionalExpression
{
	FScriptStruct_OEIScripting_StaticRegisterNativesFConditionalExpression()
	{
		UScriptStruct::DeferCppStructOps<FConditionalExpression>(FName(TEXT("ConditionalExpression")));
	}
} ScriptStruct_OEIScripting_StaticRegisterNativesFConditionalExpression;
	struct Z_Construct_UScriptStruct_FConditionalExpression_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ComponentTypes_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ComponentTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ComponentTypes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ComponentIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ComponentIndices;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalExpression_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ConditionalExpression.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConditionalExpression_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConditionalExpression>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConditionalExpression_Statics::NewProp_ComponentTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConditionalExpression_Statics::NewProp_ComponentTypes_Inner = { "ComponentTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_OEIScripting_EExpressionComponentType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalExpression_Statics::NewProp_ComponentTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConditionalExpression" },
		{ "ModuleRelativePath", "Public/ConditionalExpression.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConditionalExpression_Statics::NewProp_ComponentTypes = { "ComponentTypes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConditionalExpression, ComponentTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalExpression_Statics::NewProp_ComponentTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalExpression_Statics::NewProp_ComponentTypes_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConditionalExpression_Statics::NewProp_ComponentIndices_Inner = { "ComponentIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalExpression_Statics::NewProp_ComponentIndices_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConditionalExpression" },
		{ "ModuleRelativePath", "Public/ConditionalExpression.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConditionalExpression_Statics::NewProp_ComponentIndices = { "ComponentIndices", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConditionalExpression, ComponentIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalExpression_Statics::NewProp_ComponentIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalExpression_Statics::NewProp_ComponentIndices_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConditionalExpression_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalExpression_Statics::NewProp_ComponentTypes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalExpression_Statics::NewProp_ComponentTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalExpression_Statics::NewProp_ComponentTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalExpression_Statics::NewProp_ComponentIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalExpression_Statics::NewProp_ComponentIndices,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConditionalExpression_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIScripting,
		Z_Construct_UScriptStruct_FExpressionComponent,
		&NewStructOps,
		"ConditionalExpression",
		sizeof(FConditionalExpression),
		alignof(FConditionalExpression),
		Z_Construct_UScriptStruct_FConditionalExpression_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalExpression_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalExpression_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalExpression_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConditionalExpression()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConditionalExpression_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIScripting();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConditionalExpression"), sizeof(FConditionalExpression), Get_Z_Construct_UScriptStruct_FConditionalExpression_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConditionalExpression_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConditionalExpression_Hash() { return 814121491U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
