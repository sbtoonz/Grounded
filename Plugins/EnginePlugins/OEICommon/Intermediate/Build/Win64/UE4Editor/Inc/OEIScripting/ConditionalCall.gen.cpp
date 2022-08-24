// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIScripting/Public/ConditionalCall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConditionalCall() {}
// Cross Module References
	OEISCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FConditionalCall();
	UPackage* Z_Construct_UPackage__Script_OEIScripting();
	OEISCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionComponent();
// End Cross Module References

static_assert(std::is_polymorphic<FConditionalCall>() == std::is_polymorphic<FExpressionComponent>(), "USTRUCT FConditionalCall cannot be polymorphic unless super FExpressionComponent is polymorphic");

class UScriptStruct* FConditionalCall::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEISCRIPTING_API uint32 Get_Z_Construct_UScriptStruct_FConditionalCall_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConditionalCall, Z_Construct_UPackage__Script_OEIScripting(), TEXT("ConditionalCall"), sizeof(FConditionalCall), Get_Z_Construct_UScriptStruct_FConditionalCall_Hash());
	}
	return Singleton;
}
template<> OEISCRIPTING_API UScriptStruct* StaticStruct<FConditionalCall>()
{
	return FConditionalCall::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConditionalCall(FConditionalCall::StaticStruct, TEXT("/Script/OEIScripting"), TEXT("ConditionalCall"), false, nullptr, nullptr);
static struct FScriptStruct_OEIScripting_StaticRegisterNativesFConditionalCall
{
	FScriptStruct_OEIScripting_StaticRegisterNativesFConditionalCall()
	{
		UScriptStruct::DeferCppStructOps<FConditionalCall>(FName(TEXT("ConditionalCall")));
	}
} ScriptStruct_OEIScripting_StaticRegisterNativesFConditionalCall;
	struct Z_Construct_UScriptStruct_FConditionalCall_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNot_MetaData[];
#endif
		static void NewProp_bNot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Library_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Library;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScriptCall_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ScriptCall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FullName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Flags;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Parameters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Parameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_FunctionHash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ParamHash;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalCall_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ConditionalCall.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConditionalCall_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConditionalCall>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_bNot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConditionalCall" },
		{ "ModuleRelativePath", "Public/ConditionalCall.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_bNot_SetBit(void* Obj)
	{
		((FConditionalCall*)Obj)->bNot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_bNot = { "bNot", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FConditionalCall), &Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_bNot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_bNot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_bNot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_Library_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConditionalCall" },
		{ "ModuleRelativePath", "Public/ConditionalCall.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_Library = { "Library", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConditionalCall, Library), METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_Library_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_Library_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_ScriptCall_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConditionalCall" },
		{ "ModuleRelativePath", "Public/ConditionalCall.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_ScriptCall = { "ScriptCall", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConditionalCall, ScriptCall), METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_ScriptCall_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_ScriptCall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_FullName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConditionalCall" },
		{ "ModuleRelativePath", "Public/ConditionalCall.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_FullName = { "FullName", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConditionalCall, FullName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_FullName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_FullName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_Flags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConditionalCall" },
		{ "ModuleRelativePath", "Public/ConditionalCall.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConditionalCall, Flags), METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_Flags_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_Parameters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConditionalCall" },
		{ "ModuleRelativePath", "Public/ConditionalCall.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConditionalCall, Parameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_Parameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_FunctionHash_MetaData[] = {
		{ "Category", "ConditionalCall" },
		{ "ModuleRelativePath", "Public/ConditionalCall.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_FunctionHash = { "FunctionHash", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConditionalCall, FunctionHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_FunctionHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_FunctionHash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_ParamHash_MetaData[] = {
		{ "Category", "ConditionalCall" },
		{ "ModuleRelativePath", "Public/ConditionalCall.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_ParamHash = { "ParamHash", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConditionalCall, ParamHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_ParamHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_ParamHash_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConditionalCall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_bNot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_Library,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_ScriptCall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_FullName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_Flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_Parameters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_Parameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_FunctionHash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalCall_Statics::NewProp_ParamHash,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConditionalCall_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIScripting,
		Z_Construct_UScriptStruct_FExpressionComponent,
		&NewStructOps,
		"ConditionalCall",
		sizeof(FConditionalCall),
		alignof(FConditionalCall),
		Z_Construct_UScriptStruct_FConditionalCall_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalCall_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalCall_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalCall_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConditionalCall()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConditionalCall_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIScripting();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConditionalCall"), sizeof(FConditionalCall), Get_Z_Construct_UScriptStruct_FConditionalCall_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConditionalCall_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConditionalCall_Hash() { return 3828822794U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
