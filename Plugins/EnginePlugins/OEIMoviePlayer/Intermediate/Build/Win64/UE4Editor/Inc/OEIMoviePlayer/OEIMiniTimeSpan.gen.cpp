// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIMoviePlayer/Public/OEIMiniTimeSpan.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIMiniTimeSpan() {}
// Cross Module References
	OEIMOVIEPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FOEIMiniTimeSpan();
	UPackage* Z_Construct_UPackage__Script_OEIMoviePlayer();
// End Cross Module References
class UScriptStruct* FOEIMiniTimeSpan::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIMOVIEPLAYER_API uint32 Get_Z_Construct_UScriptStruct_FOEIMiniTimeSpan_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOEIMiniTimeSpan, Z_Construct_UPackage__Script_OEIMoviePlayer(), TEXT("OEIMiniTimeSpan"), sizeof(FOEIMiniTimeSpan), Get_Z_Construct_UScriptStruct_FOEIMiniTimeSpan_Hash());
	}
	return Singleton;
}
template<> OEIMOVIEPLAYER_API UScriptStruct* StaticStruct<FOEIMiniTimeSpan>()
{
	return FOEIMiniTimeSpan::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOEIMiniTimeSpan(FOEIMiniTimeSpan::StaticStruct, TEXT("/Script/OEIMoviePlayer"), TEXT("OEIMiniTimeSpan"), false, nullptr, nullptr);
static struct FScriptStruct_OEIMoviePlayer_StaticRegisterNativesFOEIMiniTimeSpan
{
	FScriptStruct_OEIMoviePlayer_StaticRegisterNativesFOEIMiniTimeSpan()
	{
		UScriptStruct::DeferCppStructOps<FOEIMiniTimeSpan>(FName(TEXT("OEIMiniTimeSpan")));
	}
} ScriptStruct_OEIMoviePlayer_StaticRegisterNativesFOEIMiniTimeSpan;
	struct Z_Construct_UScriptStruct_FOEIMiniTimeSpan_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Minutes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Minutes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Milliseconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Milliseconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIMiniTimeSpan_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OEIMiniTimeSpan.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOEIMiniTimeSpan_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOEIMiniTimeSpan>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIMiniTimeSpan_Statics::NewProp_Minutes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIMiniTimeSpan" },
		{ "ModuleRelativePath", "Public/OEIMiniTimeSpan.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOEIMiniTimeSpan_Statics::NewProp_Minutes = { "Minutes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOEIMiniTimeSpan, Minutes), METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIMiniTimeSpan_Statics::NewProp_Minutes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIMiniTimeSpan_Statics::NewProp_Minutes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIMiniTimeSpan_Statics::NewProp_Seconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIMiniTimeSpan" },
		{ "ModuleRelativePath", "Public/OEIMiniTimeSpan.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOEIMiniTimeSpan_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOEIMiniTimeSpan, Seconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIMiniTimeSpan_Statics::NewProp_Seconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIMiniTimeSpan_Statics::NewProp_Seconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIMiniTimeSpan_Statics::NewProp_Milliseconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIMiniTimeSpan" },
		{ "ModuleRelativePath", "Public/OEIMiniTimeSpan.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOEIMiniTimeSpan_Statics::NewProp_Milliseconds = { "Milliseconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOEIMiniTimeSpan, Milliseconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIMiniTimeSpan_Statics::NewProp_Milliseconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIMiniTimeSpan_Statics::NewProp_Milliseconds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOEIMiniTimeSpan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEIMiniTimeSpan_Statics::NewProp_Minutes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEIMiniTimeSpan_Statics::NewProp_Seconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEIMiniTimeSpan_Statics::NewProp_Milliseconds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOEIMiniTimeSpan_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIMoviePlayer,
		nullptr,
		&NewStructOps,
		"OEIMiniTimeSpan",
		sizeof(FOEIMiniTimeSpan),
		alignof(FOEIMiniTimeSpan),
		Z_Construct_UScriptStruct_FOEIMiniTimeSpan_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIMiniTimeSpan_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIMiniTimeSpan_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIMiniTimeSpan_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOEIMiniTimeSpan()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOEIMiniTimeSpan_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIMoviePlayer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OEIMiniTimeSpan"), sizeof(FOEIMiniTimeSpan), Get_Z_Construct_UScriptStruct_FOEIMiniTimeSpan_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOEIMiniTimeSpan_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOEIMiniTimeSpan_Hash() { return 1168254855U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
