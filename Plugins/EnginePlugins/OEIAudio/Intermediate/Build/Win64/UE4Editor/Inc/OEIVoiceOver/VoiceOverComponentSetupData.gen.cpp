// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIVoiceOver/Public/VoiceOverComponentSetupData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoiceOverComponentSetupData() {}
// Cross Module References
	OEIVOICEOVER_API UScriptStruct* Z_Construct_UScriptStruct_FVoiceOverComponentSetupData();
	UPackage* Z_Construct_UPackage__Script_OEIVoiceOver();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FVoiceOverComponentSetupData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIVOICEOVER_API uint32 Get_Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoiceOverComponentSetupData, Z_Construct_UPackage__Script_OEIVoiceOver(), TEXT("VoiceOverComponentSetupData"), sizeof(FVoiceOverComponentSetupData), Get_Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Hash());
	}
	return Singleton;
}
template<> OEIVOICEOVER_API UScriptStruct* StaticStruct<FVoiceOverComponentSetupData>()
{
	return FVoiceOverComponentSetupData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoiceOverComponentSetupData(FVoiceOverComponentSetupData::StaticStruct, TEXT("/Script/OEIVoiceOver"), TEXT("VoiceOverComponentSetupData"), false, nullptr, nullptr);
static struct FScriptStruct_OEIVoiceOver_StaticRegisterNativesFVoiceOverComponentSetupData
{
	FScriptStruct_OEIVoiceOver_StaticRegisterNativesFVoiceOverComponentSetupData()
	{
		UScriptStruct::DeferCppStructOps<FVoiceOverComponentSetupData>(FName(TEXT("VoiceOverComponentSetupData")));
	}
} ScriptStruct_OEIVoiceOver_StaticRegisterNativesFVoiceOverComponentSetupData;
	struct Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioAttachmentSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AudioAttachmentSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FaceFXActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FaceFXActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCompensateForForceFrontXAxis_MetaData[];
#endif
		static void NewProp_bCompensateForForceFrontXAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCompensateForForceFrontXAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoPlaySound_MetaData[];
#endif
		static void NewProp_bAutoPlaySound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoPlaySound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableMorphTargets_MetaData[];
#endif
		static void NewProp_bDisableMorphTargets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableMorphTargets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableMaterialParameters_MetaData[];
#endif
		static void NewProp_bDisableMaterialParameters_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableMaterialParameters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoiceOverComponentSetupData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoiceOverComponentSetupData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_AudioAttachmentSocketName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "VoiceOverComponentSetupData" },
		{ "ModuleRelativePath", "Public/VoiceOverComponentSetupData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_AudioAttachmentSocketName = { "AudioAttachmentSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoiceOverComponentSetupData, AudioAttachmentSocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_AudioAttachmentSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_AudioAttachmentSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_FaceFXActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "VoiceOverComponentSetupData" },
		{ "ModuleRelativePath", "Public/VoiceOverComponentSetupData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_FaceFXActor = { "FaceFXActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoiceOverComponentSetupData, FaceFXActor), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_FaceFXActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_FaceFXActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_bCompensateForForceFrontXAxis_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "VoiceOverComponentSetupData" },
		{ "ModuleRelativePath", "Public/VoiceOverComponentSetupData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_bCompensateForForceFrontXAxis_SetBit(void* Obj)
	{
		((FVoiceOverComponentSetupData*)Obj)->bCompensateForForceFrontXAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_bCompensateForForceFrontXAxis = { "bCompensateForForceFrontXAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoiceOverComponentSetupData), &Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_bCompensateForForceFrontXAxis_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_bCompensateForForceFrontXAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_bCompensateForForceFrontXAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_bAutoPlaySound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "VoiceOverComponentSetupData" },
		{ "ModuleRelativePath", "Public/VoiceOverComponentSetupData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_bAutoPlaySound_SetBit(void* Obj)
	{
		((FVoiceOverComponentSetupData*)Obj)->bAutoPlaySound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_bAutoPlaySound = { "bAutoPlaySound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoiceOverComponentSetupData), &Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_bAutoPlaySound_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_bAutoPlaySound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_bAutoPlaySound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_bDisableMorphTargets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "VoiceOverComponentSetupData" },
		{ "ModuleRelativePath", "Public/VoiceOverComponentSetupData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_bDisableMorphTargets_SetBit(void* Obj)
	{
		((FVoiceOverComponentSetupData*)Obj)->bDisableMorphTargets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_bDisableMorphTargets = { "bDisableMorphTargets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoiceOverComponentSetupData), &Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_bDisableMorphTargets_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_bDisableMorphTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_bDisableMorphTargets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_bDisableMaterialParameters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "VoiceOverComponentSetupData" },
		{ "ModuleRelativePath", "Public/VoiceOverComponentSetupData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_bDisableMaterialParameters_SetBit(void* Obj)
	{
		((FVoiceOverComponentSetupData*)Obj)->bDisableMaterialParameters = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_bDisableMaterialParameters = { "bDisableMaterialParameters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoiceOverComponentSetupData), &Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_bDisableMaterialParameters_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_bDisableMaterialParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_bDisableMaterialParameters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_AudioAttachmentSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_FaceFXActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_bCompensateForForceFrontXAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_bAutoPlaySound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_bDisableMorphTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::NewProp_bDisableMaterialParameters,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIVoiceOver,
		nullptr,
		&NewStructOps,
		"VoiceOverComponentSetupData",
		sizeof(FVoiceOverComponentSetupData),
		alignof(FVoiceOverComponentSetupData),
		Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoiceOverComponentSetupData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIVoiceOver();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoiceOverComponentSetupData"), sizeof(FVoiceOverComponentSetupData), Get_Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoiceOverComponentSetupData_Hash() { return 2281847779U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
