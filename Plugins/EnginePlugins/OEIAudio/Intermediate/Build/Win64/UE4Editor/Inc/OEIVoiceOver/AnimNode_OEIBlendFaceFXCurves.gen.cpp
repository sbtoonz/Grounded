// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIVoiceOver/Public/AnimNode_OEIBlendFaceFXCurves.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_OEIBlendFaceFXCurves() {}
// Cross Module References
	OEIVOICEOVER_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves();
	UPackage* Z_Construct_UPackage__Script_OEIVoiceOver();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentSpacePoseLink();
	ENGINE_API UClass* Z_Construct_UClass_UPoseAsset_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_OEIBlendFaceFXCurves>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_OEIBlendFaceFXCurves cannot be polymorphic unless super FAnimNode_Base is polymorphic");

class UScriptStruct* FAnimNode_OEIBlendFaceFXCurves::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIVOICEOVER_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves, Z_Construct_UPackage__Script_OEIVoiceOver(), TEXT("AnimNode_OEIBlendFaceFXCurves"), sizeof(FAnimNode_OEIBlendFaceFXCurves), Get_Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Hash());
	}
	return Singleton;
}
template<> OEIVOICEOVER_API UScriptStruct* StaticStruct<FAnimNode_OEIBlendFaceFXCurves>()
{
	return FAnimNode_OEIBlendFaceFXCurves::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves(FAnimNode_OEIBlendFaceFXCurves::StaticStruct, TEXT("/Script/OEIVoiceOver"), TEXT("AnimNode_OEIBlendFaceFXCurves"), false, nullptr, nullptr);
static struct FScriptStruct_OEIVoiceOver_StaticRegisterNativesFAnimNode_OEIBlendFaceFXCurves
{
	FScriptStruct_OEIVoiceOver_StaticRegisterNativesFAnimNode_OEIBlendFaceFXCurves()
	{
		UScriptStruct::DeferCppStructOps<FAnimNode_OEIBlendFaceFXCurves>(FName(TEXT("AnimNode_OEIBlendFaceFXCurves")));
	}
} ScriptStruct_OEIVoiceOver_StaticRegisterNativesFAnimNode_OEIBlendFaceFXCurves;
	struct Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PoseAsset;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_OEIBlendFaceFXCurves.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_OEIBlendFaceFXCurves>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::NewProp_ComponentPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_OEIBlendFaceFXCurves" },
		{ "ModuleRelativePath", "Public/AnimNode_OEIBlendFaceFXCurves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::NewProp_ComponentPose = { "ComponentPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_OEIBlendFaceFXCurves, ComponentPose), Z_Construct_UScriptStruct_FComponentSpacePoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::NewProp_ComponentPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::NewProp_ComponentPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::NewProp_PoseAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_OEIBlendFaceFXCurves" },
		{ "ModuleRelativePath", "Public/AnimNode_OEIBlendFaceFXCurves.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::NewProp_PoseAsset = { "PoseAsset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_OEIBlendFaceFXCurves, PoseAsset), Z_Construct_UClass_UPoseAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::NewProp_PoseAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::NewProp_PoseAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::NewProp_Alpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_OEIBlendFaceFXCurves" },
		{ "ModuleRelativePath", "Public/AnimNode_OEIBlendFaceFXCurves.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_OEIBlendFaceFXCurves, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::NewProp_bSkipBoneMappingWithoutNS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_OEIBlendFaceFXCurves" },
		{ "ModuleRelativePath", "Public/AnimNode_OEIBlendFaceFXCurves.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::NewProp_bSkipBoneMappingWithoutNS_SetBit(void* Obj)
	{
		((FAnimNode_OEIBlendFaceFXCurves*)Obj)->bSkipBoneMappingWithoutNS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::NewProp_bSkipBoneMappingWithoutNS = { "bSkipBoneMappingWithoutNS", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_OEIBlendFaceFXCurves), &Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::NewProp_bSkipBoneMappingWithoutNS_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::NewProp_bSkipBoneMappingWithoutNS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::NewProp_bSkipBoneMappingWithoutNS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::NewProp_LODThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_OEIBlendFaceFXCurves" },
		{ "ModuleRelativePath", "Public/AnimNode_OEIBlendFaceFXCurves.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::NewProp_LODThreshold = { "LODThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_OEIBlendFaceFXCurves, LODThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::NewProp_LODThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::NewProp_LODThreshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::NewProp_ComponentPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::NewProp_PoseAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::NewProp_bSkipBoneMappingWithoutNS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::NewProp_LODThreshold,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIVoiceOver,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_OEIBlendFaceFXCurves",
		sizeof(FAnimNode_OEIBlendFaceFXCurves),
		alignof(FAnimNode_OEIBlendFaceFXCurves),
		Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIVoiceOver();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_OEIBlendFaceFXCurves"), sizeof(FAnimNode_OEIBlendFaceFXCurves), Get_Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_OEIBlendFaceFXCurves_Hash() { return 1129637986U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
