// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIScripting/Public/ScriptCall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScriptCall() {}
// Cross Module References
	OEISCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FScriptCall();
	UPackage* Z_Construct_UPackage__Script_OEIScripting();
// End Cross Module References
class UScriptStruct* FScriptCall::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEISCRIPTING_API uint32 Get_Z_Construct_UScriptStruct_FScriptCall_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FScriptCall, Z_Construct_UPackage__Script_OEIScripting(), TEXT("ScriptCall"), sizeof(FScriptCall), Get_Z_Construct_UScriptStruct_FScriptCall_Hash());
	}
	return Singleton;
}
template<> OEISCRIPTING_API UScriptStruct* StaticStruct<FScriptCall>()
{
	return FScriptCall::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FScriptCall(FScriptCall::StaticStruct, TEXT("/Script/OEIScripting"), TEXT("ScriptCall"), false, nullptr, nullptr);
static struct FScriptStruct_OEIScripting_StaticRegisterNativesFScriptCall
{
	FScriptStruct_OEIScripting_StaticRegisterNativesFScriptCall()
	{
		UScriptStruct::DeferCppStructOps<FScriptCall>(FName(TEXT("ScriptCall")));
	}
} ScriptStruct_OEIScripting_StaticRegisterNativesFScriptCall;
	struct Z_Construct_UScriptStruct_FScriptCall_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Library_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Library;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Script_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Script;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConditionalIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConditionalIndex;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptCall_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ScriptCall.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScriptCall_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScriptCall>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_Library_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ScriptCall" },
		{ "ModuleRelativePath", "Public/ScriptCall.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_Library = { "Library", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScriptCall, Library), METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_Library_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_Library_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_Script_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ScriptCall" },
		{ "ModuleRelativePath", "Public/ScriptCall.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_Script = { "Script", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScriptCall, Script), METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_Script_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_Script_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_Flags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ScriptCall" },
		{ "ModuleRelativePath", "Public/ScriptCall.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScriptCall, Flags), METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_Flags_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_Parameters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ScriptCall" },
		{ "ModuleRelativePath", "Public/ScriptCall.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScriptCall, Parameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_Parameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_ConditionalIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ScriptCall" },
		{ "ModuleRelativePath", "Public/ScriptCall.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_ConditionalIndex = { "ConditionalIndex", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScriptCall, ConditionalIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_ConditionalIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_ConditionalIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_FunctionHash_MetaData[] = {
		{ "Category", "ScriptCall" },
		{ "ModuleRelativePath", "Public/ScriptCall.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_FunctionHash = { "FunctionHash", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScriptCall, FunctionHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_FunctionHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_FunctionHash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_ParamHash_MetaData[] = {
		{ "Category", "ScriptCall" },
		{ "ModuleRelativePath", "Public/ScriptCall.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_ParamHash = { "ParamHash", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScriptCall, ParamHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_ParamHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_ParamHash_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScriptCall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_Library,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_Script,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_Flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_Parameters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_Parameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_ConditionalIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_FunctionHash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptCall_Statics::NewProp_ParamHash,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScriptCall_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIScripting,
		nullptr,
		&NewStructOps,
		"ScriptCall",
		sizeof(FScriptCall),
		alignof(FScriptCall),
		Z_Construct_UScriptStruct_FScriptCall_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptCall_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptCall_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptCall_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScriptCall()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScriptCall_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIScripting();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScriptCall"), sizeof(FScriptCall), Get_Z_Construct_UScriptStruct_FScriptCall_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FScriptCall_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScriptCall_Hash() { return 4089598903U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
