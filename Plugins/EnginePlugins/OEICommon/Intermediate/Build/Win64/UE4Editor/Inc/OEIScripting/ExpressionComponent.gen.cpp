// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIScripting/Public/ExpressionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExpressionComponent() {}
// Cross Module References
	OEISCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionComponent();
	UPackage* Z_Construct_UPackage__Script_OEIScripting();
	OEISCRIPTING_API UEnum* Z_Construct_UEnum_OEIScripting_ELogicalOperator();
// End Cross Module References
class UScriptStruct* FExpressionComponent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEISCRIPTING_API uint32 Get_Z_Construct_UScriptStruct_FExpressionComponent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExpressionComponent, Z_Construct_UPackage__Script_OEIScripting(), TEXT("ExpressionComponent"), sizeof(FExpressionComponent), Get_Z_Construct_UScriptStruct_FExpressionComponent_Hash());
	}
	return Singleton;
}
template<> OEISCRIPTING_API UScriptStruct* StaticStruct<FExpressionComponent>()
{
	return FExpressionComponent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExpressionComponent(FExpressionComponent::StaticStruct, TEXT("/Script/OEIScripting"), TEXT("ExpressionComponent"), false, nullptr, nullptr);
static struct FScriptStruct_OEIScripting_StaticRegisterNativesFExpressionComponent
{
	FScriptStruct_OEIScripting_StaticRegisterNativesFExpressionComponent()
	{
		UScriptStruct::DeferCppStructOps<FExpressionComponent>(FName(TEXT("ExpressionComponent")));
	}
} ScriptStruct_OEIScripting_StaticRegisterNativesFExpressionComponent;
	struct Z_Construct_UScriptStruct_FExpressionComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Operator_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Operator_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Operator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionComponent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ExpressionComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExpressionComponent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExpressionComponent>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FExpressionComponent_Statics::NewProp_Operator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionComponent_Statics::NewProp_Operator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExpressionComponent" },
		{ "ModuleRelativePath", "Public/ExpressionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FExpressionComponent_Statics::NewProp_Operator = { "Operator", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExpressionComponent, Operator), Z_Construct_UEnum_OEIScripting_ELogicalOperator, METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionComponent_Statics::NewProp_Operator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionComponent_Statics::NewProp_Operator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExpressionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionComponent_Statics::NewProp_Operator_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionComponent_Statics::NewProp_Operator,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExpressionComponent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIScripting,
		nullptr,
		&NewStructOps,
		"ExpressionComponent",
		sizeof(FExpressionComponent),
		alignof(FExpressionComponent),
		Z_Construct_UScriptStruct_FExpressionComponent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionComponent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionComponent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionComponent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExpressionComponent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExpressionComponent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIScripting();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExpressionComponent"), sizeof(FExpressionComponent), Get_Z_Construct_UScriptStruct_FExpressionComponent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExpressionComponent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExpressionComponent_Hash() { return 3965143825U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
