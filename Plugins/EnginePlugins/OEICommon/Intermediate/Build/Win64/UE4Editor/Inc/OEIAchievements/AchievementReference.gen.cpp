// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIAchievements/Public/AchievementReference.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAchievementReference() {}
// Cross Module References
	OEIACHIEVEMENTS_API UScriptStruct* Z_Construct_UScriptStruct_FAchievementReference();
	UPackage* Z_Construct_UPackage__Script_OEIAchievements();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FAchievementReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIACHIEVEMENTS_API uint32 Get_Z_Construct_UScriptStruct_FAchievementReference_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAchievementReference, Z_Construct_UPackage__Script_OEIAchievements(), TEXT("AchievementReference"), sizeof(FAchievementReference), Get_Z_Construct_UScriptStruct_FAchievementReference_Hash());
	}
	return Singleton;
}
template<> OEIACHIEVEMENTS_API UScriptStruct* StaticStruct<FAchievementReference>()
{
	return FAchievementReference::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAchievementReference(FAchievementReference::StaticStruct, TEXT("/Script/OEIAchievements"), TEXT("AchievementReference"), false, nullptr, nullptr);
static struct FScriptStruct_OEIAchievements_StaticRegisterNativesFAchievementReference
{
	FScriptStruct_OEIAchievements_StaticRegisterNativesFAchievementReference()
	{
		UScriptStruct::DeferCppStructOps<FAchievementReference>(FName(TEXT("AchievementReference")));
	}
} ScriptStruct_OEIAchievements_StaticRegisterNativesFAchievementReference;
	struct Z_Construct_UScriptStruct_FAchievementReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAchievementReference_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AchievementReference.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAchievementReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAchievementReference>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAchievementReference_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AchievementReference" },
		{ "ModuleRelativePath", "Public/AchievementReference.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAchievementReference_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAchievementReference, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FAchievementReference_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementReference_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAchievementReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAchievementReference_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAchievementReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIAchievements,
		nullptr,
		&NewStructOps,
		"AchievementReference",
		sizeof(FAchievementReference),
		alignof(FAchievementReference),
		Z_Construct_UScriptStruct_FAchievementReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAchievementReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAchievementReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAchievementReference_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIAchievements();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AchievementReference"), sizeof(FAchievementReference), Get_Z_Construct_UScriptStruct_FAchievementReference_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAchievementReference_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAchievementReference_Hash() { return 985905483U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
