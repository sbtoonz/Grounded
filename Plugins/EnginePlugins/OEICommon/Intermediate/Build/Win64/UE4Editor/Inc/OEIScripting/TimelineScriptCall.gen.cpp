// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIScripting/Public/TimelineScriptCall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimelineScriptCall() {}
// Cross Module References
	OEISCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FTimelineScriptCall();
	UPackage* Z_Construct_UPackage__Script_OEIScripting();
	OEISCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FScriptCall();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References

static_assert(std::is_polymorphic<FTimelineScriptCall>() == std::is_polymorphic<FScriptCall>(), "USTRUCT FTimelineScriptCall cannot be polymorphic unless super FScriptCall is polymorphic");

class UScriptStruct* FTimelineScriptCall::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEISCRIPTING_API uint32 Get_Z_Construct_UScriptStruct_FTimelineScriptCall_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimelineScriptCall, Z_Construct_UPackage__Script_OEIScripting(), TEXT("TimelineScriptCall"), sizeof(FTimelineScriptCall), Get_Z_Construct_UScriptStruct_FTimelineScriptCall_Hash());
	}
	return Singleton;
}
template<> OEISCRIPTING_API UScriptStruct* StaticStruct<FTimelineScriptCall>()
{
	return FTimelineScriptCall::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTimelineScriptCall(FTimelineScriptCall::StaticStruct, TEXT("/Script/OEIScripting"), TEXT("TimelineScriptCall"), false, nullptr, nullptr);
static struct FScriptStruct_OEIScripting_StaticRegisterNativesFTimelineScriptCall
{
	FScriptStruct_OEIScripting_StaticRegisterNativesFTimelineScriptCall()
	{
		UScriptStruct::DeferCppStructOps<FTimelineScriptCall>(FName(TEXT("TimelineScriptCall")));
	}
} ScriptStruct_OEIScripting_StaticRegisterNativesFTimelineScriptCall;
	struct Z_Construct_UScriptStruct_FTimelineScriptCall_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimelineName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TimelineName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineScriptCall_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TimelineScriptCall.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimelineScriptCall_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimelineScriptCall>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineScriptCall_Statics::NewProp_TimelineName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TimelineScriptCall" },
		{ "ModuleRelativePath", "Public/TimelineScriptCall.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTimelineScriptCall_Statics::NewProp_TimelineName = { "TimelineName", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTimelineScriptCall, TimelineName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineScriptCall_Statics::NewProp_TimelineName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineScriptCall_Statics::NewProp_TimelineName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineScriptCall_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TimelineScriptCall" },
		{ "ModuleRelativePath", "Public/TimelineScriptCall.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTimelineScriptCall_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTimelineScriptCall, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineScriptCall_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineScriptCall_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimelineScriptCall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineScriptCall_Statics::NewProp_TimelineName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineScriptCall_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimelineScriptCall_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIScripting,
		Z_Construct_UScriptStruct_FScriptCall,
		&NewStructOps,
		"TimelineScriptCall",
		sizeof(FTimelineScriptCall),
		alignof(FTimelineScriptCall),
		Z_Construct_UScriptStruct_FTimelineScriptCall_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineScriptCall_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineScriptCall_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineScriptCall_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimelineScriptCall()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTimelineScriptCall_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIScripting();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TimelineScriptCall"), sizeof(FTimelineScriptCall), Get_Z_Construct_UScriptStruct_FTimelineScriptCall_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTimelineScriptCall_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTimelineScriptCall_Hash() { return 1032324719U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
