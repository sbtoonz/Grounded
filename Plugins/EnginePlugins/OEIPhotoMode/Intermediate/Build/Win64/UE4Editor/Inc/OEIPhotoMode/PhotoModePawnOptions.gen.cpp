// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/PhotoModePawnOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhotoModePawnOptions() {}
// Cross Module References
	OEIPHOTOMODE_API UScriptStruct* Z_Construct_UScriptStruct_FPhotoModePawnOptions();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
	OEIPHOTOMODE_API UEnum* Z_Construct_UEnum_OEIPhotoMode_EPhotoPawnType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_APhotoPawn_NoRegister();
// End Cross Module References
class UScriptStruct* FPhotoModePawnOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIPHOTOMODE_API uint32 Get_Z_Construct_UScriptStruct_FPhotoModePawnOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhotoModePawnOptions, Z_Construct_UPackage__Script_OEIPhotoMode(), TEXT("PhotoModePawnOptions"), sizeof(FPhotoModePawnOptions), Get_Z_Construct_UScriptStruct_FPhotoModePawnOptions_Hash());
	}
	return Singleton;
}
template<> OEIPHOTOMODE_API UScriptStruct* StaticStruct<FPhotoModePawnOptions>()
{
	return FPhotoModePawnOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPhotoModePawnOptions(FPhotoModePawnOptions::StaticStruct, TEXT("/Script/OEIPhotoMode"), TEXT("PhotoModePawnOptions"), false, nullptr, nullptr);
static struct FScriptStruct_OEIPhotoMode_StaticRegisterNativesFPhotoModePawnOptions
{
	FScriptStruct_OEIPhotoMode_StaticRegisterNativesFPhotoModePawnOptions()
	{
		UScriptStruct::DeferCppStructOps<FPhotoModePawnOptions>(FName(TEXT("PhotoModePawnOptions")));
	}
} ScriptStruct_OEIPhotoMode_StaticRegisterNativesFPhotoModePawnOptions;
	struct Z_Construct_UScriptStruct_FPhotoModePawnOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultPhotoPawnType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPhotoPawnType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultPhotoPawnType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FreeCamPhotoPawnClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FreeCamPhotoPawnClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmPhotoPawnClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpringArmPhotoPawnClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModePawnOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PhotoModePawnOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhotoModePawnOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhotoModePawnOptions>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPhotoModePawnOptions_Statics::NewProp_DefaultPhotoPawnType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModePawnOptions_Statics::NewProp_DefaultPhotoPawnType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModePawnOptions" },
		{ "ModuleRelativePath", "Public/PhotoModePawnOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPhotoModePawnOptions_Statics::NewProp_DefaultPhotoPawnType = { "DefaultPhotoPawnType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhotoModePawnOptions, DefaultPhotoPawnType), Z_Construct_UEnum_OEIPhotoMode_EPhotoPawnType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModePawnOptions_Statics::NewProp_DefaultPhotoPawnType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModePawnOptions_Statics::NewProp_DefaultPhotoPawnType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModePawnOptions_Statics::NewProp_FreeCamPhotoPawnClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModePawnOptions" },
		{ "ModuleRelativePath", "Public/PhotoModePawnOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPhotoModePawnOptions_Statics::NewProp_FreeCamPhotoPawnClass = { "FreeCamPhotoPawnClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhotoModePawnOptions, FreeCamPhotoPawnClass), Z_Construct_UClass_APhotoPawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModePawnOptions_Statics::NewProp_FreeCamPhotoPawnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModePawnOptions_Statics::NewProp_FreeCamPhotoPawnClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModePawnOptions_Statics::NewProp_SpringArmPhotoPawnClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModePawnOptions" },
		{ "ModuleRelativePath", "Public/PhotoModePawnOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPhotoModePawnOptions_Statics::NewProp_SpringArmPhotoPawnClass = { "SpringArmPhotoPawnClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhotoModePawnOptions, SpringArmPhotoPawnClass), Z_Construct_UClass_APhotoPawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModePawnOptions_Statics::NewProp_SpringArmPhotoPawnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModePawnOptions_Statics::NewProp_SpringArmPhotoPawnClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhotoModePawnOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModePawnOptions_Statics::NewProp_DefaultPhotoPawnType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModePawnOptions_Statics::NewProp_DefaultPhotoPawnType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModePawnOptions_Statics::NewProp_FreeCamPhotoPawnClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModePawnOptions_Statics::NewProp_SpringArmPhotoPawnClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhotoModePawnOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIPhotoMode,
		nullptr,
		&NewStructOps,
		"PhotoModePawnOptions",
		sizeof(FPhotoModePawnOptions),
		alignof(FPhotoModePawnOptions),
		Z_Construct_UScriptStruct_FPhotoModePawnOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModePawnOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModePawnOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModePawnOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhotoModePawnOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPhotoModePawnOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIPhotoMode();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PhotoModePawnOptions"), sizeof(FPhotoModePawnOptions), Get_Z_Construct_UScriptStruct_FPhotoModePawnOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPhotoModePawnOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPhotoModePawnOptions_Hash() { return 3581122757U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
