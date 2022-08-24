// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIVoiceOver/Public/AnimNode_OEIJaliFixer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_OEIJaliFixer() {}
// Cross Module References
	OEIVOICEOVER_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_OEIJaliFixer();
	UPackage* Z_Construct_UPackage__Script_OEIVoiceOver();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_OEIJaliFixer>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_OEIJaliFixer cannot be polymorphic unless super FAnimNode_Base is polymorphic");

class UScriptStruct* FAnimNode_OEIJaliFixer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIVOICEOVER_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_OEIJaliFixer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OEIJaliFixer, Z_Construct_UPackage__Script_OEIVoiceOver(), TEXT("AnimNode_OEIJaliFixer"), sizeof(FAnimNode_OEIJaliFixer), Get_Z_Construct_UScriptStruct_FAnimNode_OEIJaliFixer_Hash());
	}
	return Singleton;
}
template<> OEIVOICEOVER_API UScriptStruct* StaticStruct<FAnimNode_OEIJaliFixer>()
{
	return FAnimNode_OEIJaliFixer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_OEIJaliFixer(FAnimNode_OEIJaliFixer::StaticStruct, TEXT("/Script/OEIVoiceOver"), TEXT("AnimNode_OEIJaliFixer"), false, nullptr, nullptr);
static struct FScriptStruct_OEIVoiceOver_StaticRegisterNativesFAnimNode_OEIJaliFixer
{
	FScriptStruct_OEIVoiceOver_StaticRegisterNativesFAnimNode_OEIJaliFixer()
	{
		UScriptStruct::DeferCppStructOps<FAnimNode_OEIJaliFixer>(FName(TEXT("AnimNode_OEIJaliFixer")));
	}
} ScriptStruct_OEIVoiceOver_StaticRegisterNativesFAnimNode_OEIJaliFixer;
	struct Z_Construct_UScriptStruct_FAnimNode_OEIJaliFixer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourcePose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OEIJaliFixer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_OEIJaliFixer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_OEIJaliFixer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_OEIJaliFixer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OEIJaliFixer_Statics::NewProp_SourcePose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_OEIJaliFixer" },
		{ "ModuleRelativePath", "Public/AnimNode_OEIJaliFixer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_OEIJaliFixer_Statics::NewProp_SourcePose = { "SourcePose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_OEIJaliFixer, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OEIJaliFixer_Statics::NewProp_SourcePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OEIJaliFixer_Statics::NewProp_SourcePose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OEIJaliFixer_Statics::NewProp_Alpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_OEIJaliFixer" },
		{ "ModuleRelativePath", "Public/AnimNode_OEIJaliFixer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_OEIJaliFixer_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_OEIJaliFixer, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OEIJaliFixer_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OEIJaliFixer_Statics::NewProp_Alpha_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_OEIJaliFixer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OEIJaliFixer_Statics::NewProp_SourcePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OEIJaliFixer_Statics::NewProp_Alpha,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_OEIJaliFixer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIVoiceOver,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_OEIJaliFixer",
		sizeof(FAnimNode_OEIJaliFixer),
		alignof(FAnimNode_OEIJaliFixer),
		Z_Construct_UScriptStruct_FAnimNode_OEIJaliFixer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OEIJaliFixer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OEIJaliFixer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OEIJaliFixer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_OEIJaliFixer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_OEIJaliFixer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIVoiceOver();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_OEIJaliFixer"), sizeof(FAnimNode_OEIJaliFixer), Get_Z_Construct_UScriptStruct_FAnimNode_OEIJaliFixer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_OEIJaliFixer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_OEIJaliFixer_Hash() { return 108577480U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
