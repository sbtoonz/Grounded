// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIVoiceOver/Public/AnimNode_OEIBlendFaceFXAnimation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_OEIBlendFaceFXAnimation() {}
// Cross Module References
	OEIVOICEOVER_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation();
	UPackage* Z_Construct_UPackage__Script_OEIVoiceOver();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentSpacePoseLink();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_OEIBlendFaceFXAnimation>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_OEIBlendFaceFXAnimation cannot be polymorphic unless super FAnimNode_Base is polymorphic");

class UScriptStruct* FAnimNode_OEIBlendFaceFXAnimation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIVOICEOVER_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation, Z_Construct_UPackage__Script_OEIVoiceOver(), TEXT("AnimNode_OEIBlendFaceFXAnimation"), sizeof(FAnimNode_OEIBlendFaceFXAnimation), Get_Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Hash());
	}
	return Singleton;
}
template<> OEIVOICEOVER_API UScriptStruct* StaticStruct<FAnimNode_OEIBlendFaceFXAnimation>()
{
	return FAnimNode_OEIBlendFaceFXAnimation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation(FAnimNode_OEIBlendFaceFXAnimation::StaticStruct, TEXT("/Script/OEIVoiceOver"), TEXT("AnimNode_OEIBlendFaceFXAnimation"), false, nullptr, nullptr);
static struct FScriptStruct_OEIVoiceOver_StaticRegisterNativesFAnimNode_OEIBlendFaceFXAnimation
{
	FScriptStruct_OEIVoiceOver_StaticRegisterNativesFAnimNode_OEIBlendFaceFXAnimation()
	{
		UScriptStruct::DeferCppStructOps<FAnimNode_OEIBlendFaceFXAnimation>(FName(TEXT("AnimNode_OEIBlendFaceFXAnimation")));
	}
} ScriptStruct_OEIVoiceOver_StaticRegisterNativesFAnimNode_OEIBlendFaceFXAnimation;
	struct Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipBoneMappingWithoutNS_MetaData[];
#endif
		static void NewProp_bSkipBoneMappingWithoutNS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipBoneMappingWithoutNS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODThreshold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_OEIBlendFaceFXAnimation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_OEIBlendFaceFXAnimation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Statics::NewProp_ComponentPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_OEIBlendFaceFXAnimation" },
		{ "ModuleRelativePath", "Public/AnimNode_OEIBlendFaceFXAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Statics::NewProp_ComponentPose = { "ComponentPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_OEIBlendFaceFXAnimation, ComponentPose), Z_Construct_UScriptStruct_FComponentSpacePoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Statics::NewProp_ComponentPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Statics::NewProp_ComponentPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Statics::NewProp_Alpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_OEIBlendFaceFXAnimation" },
		{ "ModuleRelativePath", "Public/AnimNode_OEIBlendFaceFXAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_OEIBlendFaceFXAnimation, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Statics::NewProp_bSkipBoneMappingWithoutNS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_OEIBlendFaceFXAnimation" },
		{ "ModuleRelativePath", "Public/AnimNode_OEIBlendFaceFXAnimation.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Statics::NewProp_bSkipBoneMappingWithoutNS_SetBit(void* Obj)
	{
		((FAnimNode_OEIBlendFaceFXAnimation*)Obj)->bSkipBoneMappingWithoutNS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Statics::NewProp_bSkipBoneMappingWithoutNS = { "bSkipBoneMappingWithoutNS", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_OEIBlendFaceFXAnimation), &Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Statics::NewProp_bSkipBoneMappingWithoutNS_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Statics::NewProp_bSkipBoneMappingWithoutNS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Statics::NewProp_bSkipBoneMappingWithoutNS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Statics::NewProp_LODThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_OEIBlendFaceFXAnimation" },
		{ "ModuleRelativePath", "Public/AnimNode_OEIBlendFaceFXAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Statics::NewProp_LODThreshold = { "LODThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_OEIBlendFaceFXAnimation, LODThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Statics::NewProp_LODThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Statics::NewProp_LODThreshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Statics::NewProp_ComponentPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Statics::NewProp_bSkipBoneMappingWithoutNS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Statics::NewProp_LODThreshold,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIVoiceOver,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_OEIBlendFaceFXAnimation",
		sizeof(FAnimNode_OEIBlendFaceFXAnimation),
		alignof(FAnimNode_OEIBlendFaceFXAnimation),
		Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIVoiceOver();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_OEIBlendFaceFXAnimation"), sizeof(FAnimNode_OEIBlendFaceFXAnimation), Get_Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXAnimation_Hash() { return 1123988338U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
