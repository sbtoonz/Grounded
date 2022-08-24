// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/PhotoModeCharacterCollisionInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhotoModeCharacterCollisionInfo() {}
// Cross Module References
	OEIPHOTOMODE_API UScriptStruct* Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionEnabled();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionResponseContainer();
// End Cross Module References
class UScriptStruct* FPhotoModeCharacterCollisionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIPHOTOMODE_API uint32 Get_Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo, Z_Construct_UPackage__Script_OEIPhotoMode(), TEXT("PhotoModeCharacterCollisionInfo"), sizeof(FPhotoModeCharacterCollisionInfo), Get_Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Hash());
	}
	return Singleton;
}
template<> OEIPHOTOMODE_API UScriptStruct* StaticStruct<FPhotoModeCharacterCollisionInfo>()
{
	return FPhotoModeCharacterCollisionInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPhotoModeCharacterCollisionInfo(FPhotoModeCharacterCollisionInfo::StaticStruct, TEXT("/Script/OEIPhotoMode"), TEXT("PhotoModeCharacterCollisionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_OEIPhotoMode_StaticRegisterNativesFPhotoModeCharacterCollisionInfo
{
	FScriptStruct_OEIPhotoMode_StaticRegisterNativesFPhotoModeCharacterCollisionInfo()
	{
		UScriptStruct::DeferCppStructOps<FPhotoModeCharacterCollisionInfo>(FName(TEXT("PhotoModeCharacterCollisionInfo")));
	}
} ScriptStruct_OEIPhotoMode_StaticRegisterNativesFPhotoModeCharacterCollisionInfo;
	struct Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionProfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CollisionProfileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionObjectType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionObjectType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionEnabled_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionResponseContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionResponseContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PhotoModeCharacterCollisionInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhotoModeCharacterCollisionInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Statics::NewProp_CollisionProfileName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeCharacterCollisionInfo" },
		{ "ModuleRelativePath", "Public/PhotoModeCharacterCollisionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Statics::NewProp_CollisionProfileName = { "CollisionProfileName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhotoModeCharacterCollisionInfo, CollisionProfileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Statics::NewProp_CollisionProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Statics::NewProp_CollisionProfileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Statics::NewProp_CollisionObjectType_MetaData[] = {
		{ "Category", "PhotoModeCharacterCollisionInfo" },
		{ "ModuleRelativePath", "Public/PhotoModeCharacterCollisionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Statics::NewProp_CollisionObjectType = { "CollisionObjectType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhotoModeCharacterCollisionInfo, CollisionObjectType), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Statics::NewProp_CollisionObjectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Statics::NewProp_CollisionObjectType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Statics::NewProp_CollisionEnabled_MetaData[] = {
		{ "Category", "PhotoModeCharacterCollisionInfo" },
		{ "ModuleRelativePath", "Public/PhotoModeCharacterCollisionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Statics::NewProp_CollisionEnabled = { "CollisionEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhotoModeCharacterCollisionInfo, CollisionEnabled), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Statics::NewProp_CollisionEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Statics::NewProp_CollisionEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Statics::NewProp_CollisionResponseContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeCharacterCollisionInfo" },
		{ "ModuleRelativePath", "Public/PhotoModeCharacterCollisionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Statics::NewProp_CollisionResponseContainer = { "CollisionResponseContainer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhotoModeCharacterCollisionInfo, CollisionResponseContainer), Z_Construct_UScriptStruct_FCollisionResponseContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Statics::NewProp_CollisionResponseContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Statics::NewProp_CollisionResponseContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Statics::NewProp_CollisionProfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Statics::NewProp_CollisionObjectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Statics::NewProp_CollisionEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Statics::NewProp_CollisionResponseContainer,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIPhotoMode,
		nullptr,
		&NewStructOps,
		"PhotoModeCharacterCollisionInfo",
		sizeof(FPhotoModeCharacterCollisionInfo),
		alignof(FPhotoModeCharacterCollisionInfo),
		Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIPhotoMode();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PhotoModeCharacterCollisionInfo"), sizeof(FPhotoModeCharacterCollisionInfo), Get_Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo_Hash() { return 1643506300U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
